var song;
var button;
var button2;
var amp;
var fft;

var volhistory=[];


var notes=[60,62,64,65,67,69,71];
var index=0;
var osc;


var k=0;

function toggleSong(){
    if(song.isPlaying()){
        song.pause();
    }
    else{
        song.play();
    }
}

function toggleSound(){
    if(k==1){
        osc=new p5.TriOsc();
        osc.start();
        osc.amp(0);
        k--;
    }
    else{
        osc=new p5.SawOsc();
        osc.start();
        osc.amp(0);
        k++;
    }
}

function preload() 
{

  song = loadSound('Aspire.mp3');
}

function setup() 
{
 
    createCanvas(500,500);
    colorMode(HSB);
   
    osc=new p5.SqrOsc();
    osc.start();
    osc.amp(0);
    k++;
    
    button2=createButton("Change sound")
    button2.mousePressed(toggleSound);
    
    button=createButton("Play on/off music");
    button.mousePressed(toggleSong);
    
    
  
    amp=new p5.Amplitude();
    
    fft=new p5.FFT(0,256);
 
    
}

function playNote(note,duration){
    osc.freq(midiToFreq(note));
    osc.fade(0.5,0.2);
    
    if(duration){
        setTimeout(function(){osc.fade(0,0.2);},duration-50);
    }
}

function draw() 
{
  // put drawing code here
    background(0);
    var vol=amp.getLevel();
    volhistory.push(vol);
    noFill();
    beginShape();
      var c=0;
    for(var i=0; i<volhistory.length; i++){
        var y= map(volhistory[i], 0, 1,height/2,0);
        stroke(c,255,255);
        if(c<255){
            c++;
        }
        else{
            c=0;
        }
        vertex(i,y);
    }
    endShape();
    
    //frequency
    stroke(255);
    var spectrum= fft.analyze();
    for(var i=0;i<spectrum.length;i++){
        var amp2=spectrum[i];
        var y=map(amp2,0,512,height,0);
        line(i,height,i,y);
    }
   // console.log(spectrum.length);
    
    
    
    
    if(volhistory.length>width){
        volhistory.splice(0,1);
    }
   
    stroke(0);
    var w=width/7;
    var h=height/4;
    for(var i=0;i<notes.length;i++){
        var x=i*w;
        if(mouseX>x&&mouseX<x+w&&mouseY<height/2){
            if(mouseIsPressed){
                fill(100,255,230);
            }
            else{
                fill(127);
            }
        }
        else{
            fill(200);
        }
        
        rect(x,0,w-1,h-1);
    }
}

function mousePressed(){
    var key=floor(map(mouseX,0,width,0,notes.length));
    playNote(notes[key]);
}
function mouseReleased(){
    osc.fade(0,0.5);
}
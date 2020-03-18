var cVerb1, cVerb2, sound;

function preload() 
{
    
  soundFormats('ogg', 'mp3', 'wav');
  // load the sound
  sound = loadSound('Conic Long Echo Hall.wav');
}

function setup() 
{
    // load the impulse response    
    cVerb1 = createConvolver('Mix.wav');

    // disconnect from master output so that we don't hear the original sound
    sound.disconnect();
    
    //connect to our convolution reverb
    cVerb1.process(sound); 
    
     // load the impulse response    
    cVerb2 = createConvolver('Clap sound.wav');

    // disconnect from master output so that we don't hear the original sound
   // sound.disconnect();
    
    //connect to our convolution reverb
    cVerb2.process(sound); 
    
 
}


function draw() 
{
  // put drawing code here
}

function keyPressed()
{
    
    console.log("Play the sound");
    sound.play();
    
}
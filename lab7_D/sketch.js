var cameraMove = false;
var temp,locY,locX;

function setup(){
    
  createCanvas(800, 800, WEBGL); //set render mode in WEBGL
  background(0);
  temp = createVector(mouseX,mouseY); //set an initial position of a camera view
    
  //set an initial position of a light
  locY = (mouseY / height - 0.5) * 4; 
  locX = (mouseX / width - 0.5) * 4;
}
function draw(){
    background(0);
    

    //control camera move with mouse position
    if (cameraMove == true){
     temp = createVector(mouseX,mouseY);
    }
    //control light move with mouse position
    else 
    {
        locY = (mouseY / height - 0.5) * 4;
        locX = (mouseX / width - 0.5) * 4;
    }
    
    camera(temp.x,temp.y, (height/2) / tan(PI/6), width/2, height/2, 0, 0, 1, 0); //set camera view in WEBGL
    
    translate(width/2 , height/2, 0); //moves our origin to the center of the canvas
    
    ambientLight(255, 255, 255); //even white light across our objects
    
    directionalLightOn(); 
   pointLightOn();
    
    noStroke();

    push();
    translate(-300, 0, 0);
    ambientMaterial(100,100,100); //set an ambient material of an object, color is affected by light function
    specularMaterial(100,100,100); //set a specular material of an object, which is a technical way of describing a material that reflects light in a single direction
    sphere(60); //a 3D primitive
    pop;

    push();
    translate(400, 0, 0);
    ambientMaterial(100,100,100); 
    specularMaterial(100,100,100);
    sphere(120); //a 3D primitive
    pop();
}

function keyPressed(){
    //space bar toggle from moving camera to moving the lights
    if (key == " ")
     cameraMove = !cameraMove;
}


function pointLightOn(){
    //rays shine in a given direction and they have a specific point of origin
    pointLight(255, 0, 0, 100*locX, 100*locY,0); //set a color and a location
    
    //draw the specific point of the origin
    push();
    translate(100*locX, 100*locY,0  );
    fill(255, 0, 0);
    stroke(255, 0, 0);
    sphere(20);
    pop();
}

function directionalLightOn(){
    //rays shine in a given direction but they don't have specific point of origin
    directionalLight(0, 0, 255, locX, locY, 1); //set a color and a direction
    
    //draw the given direction of the light
    strokeWeight(5); 
    stroke(0, 0, 255);
    var v = createVector(locX, locY, 1);
    v.normalize();
    fill(0, 0, 255);
    line(v.x*100, v.y*100, v.z*100, 0, 0, 0);
    
}
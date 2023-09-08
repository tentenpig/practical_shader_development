#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	triangle.addVertex(glm::vec3(-1.0f, 1.0f, 0.0f));
	triangle.addVertex(glm::vec3(-1.0f, -1.0f, 0.0f));
	triangle.addVertex(glm::vec3(1.0f, -1.0f, 0.0f));
	
	triangle.addColor(ofFloatColor(1.0f, 0.0f, 0.0f, 1.0f));
	triangle.addColor(ofFloatColor(0.0f, 1.0f, 0.0f, 1.0f));
	triangle.addColor(ofFloatColor(0.0f, 0.0f, 1.0f, 1.0f));

	shader.load("first_vertex.vert", "first_fragment.frag");

	r = 0;
	g = 0;
	b = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
	float dt = (float)ofGetLastFrameTime();
	
	r = r + dt;
	if (r > 1) r -= 1;

	g = g + dt * 2;
	if (g > 1) g -= 1;

	b = b + dt * 3;
	if (b > 1) b -= 1;
}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.begin();
	shader.setUniform4f("fragCol", glm::vec4(r, g, b, 1));
	triangle.draw();
	shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

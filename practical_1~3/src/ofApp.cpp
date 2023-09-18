#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	quad.addVertex(glm::vec3(-1, -1, 0));
	quad.addVertex(glm::vec3(-1, 1, 0));
	quad.addVertex(glm::vec3(1, 1, 0));
	quad.addVertex(glm::vec3(1, -1, 0));

	ofIndexType indices[6] = { 0, 1, 2, 2, 3, 0 };
	quad.addIndices(indices, 6);

	quad.addTexCoord(glm::vec2(0, 0));
	quad.addTexCoord(glm::vec2(0, 1));
	quad.addTexCoord(glm::vec2(1, 1));
	quad.addTexCoord(glm::vec2(1, 0));

	shader.load("shader/vert/uv_passthrough.vert", "shader/frag/mix.frag");

	ofDisableArbTex();
	imgParrot.load("textures/parrot.png");
	imgChecker.load("textures/checker.jpg");
}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.begin();
	shader.setUniformTexture("checkerTex", imgChecker, 0);
	shader.setUniformTexture("parrotTex", imgParrot, 1);
	quad.draw();
	shader.end();
}

//--------------------------------------------------------------
void ofApp::update() {
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

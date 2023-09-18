#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	charMesh.addVertex(glm::vec3(-1, -1, 0));
	charMesh.addVertex(glm::vec3(-1, 1, 0));
	charMesh.addVertex(glm::vec3(1, 1, 0));
	charMesh.addVertex(glm::vec3(1, -1, 0));

	ofIndexType indices[6] = { 0, 1, 2, 2, 3, 0 };
	charMesh.addIndices(indices, 6);

	charMesh.addTexCoord(glm::vec2(0, 0));
	charMesh.addTexCoord(glm::vec2(0, 1));
	charMesh.addTexCoord(glm::vec2(1, 1));
	charMesh.addTexCoord(glm::vec2(1, 0));

	charShader.load("shader/vert/uv_passthrough.vert", "shader/frag/mix.frag");

	ofDisableArbTex();
	alienImg.load("textures/alien.png");
}

//--------------------------------------------------------------
void ofApp::draw() {
	charShader.begin();
	charShader.setUniformTexture("alienTex", alienImg, 0);
	charMesh.draw();
	charShader.end();
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

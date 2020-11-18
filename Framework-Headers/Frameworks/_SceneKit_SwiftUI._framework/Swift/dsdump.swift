 enum __C.SCNAntialiasingMode { }

 struct _SceneKit_SwiftUI.SceneView {

	// Properties
	let scene : SCNScene? // +0x0
	let pointOfView : SCNNode? // +0x8
	let preferredFramesPerSecond : Int // +0x10
	let antialiasingMode : SCNAntialiasingMode // +0x18
	let delegate : SCNSceneRendererDelegate? // +0x20
	let options : Options // +0x28
	let technique : SCNTechnique? // +0x30
 }

 struct _SceneKit_SwiftUI.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 struct _SceneKit_SwiftUI.UIKitSceneView {

	// Properties
	let state : SceneViewState // +0x0
 }

 struct _SceneKit_SwiftUI.SceneViewState {

	// Properties
	let scene : SCNScene? // +0x0
	let pointOfView : SCNNode? // +0x8
	let preferredFramesPerSecond : Int // +0x10
	let antialiasingMode : SCNAntialiasingMode // +0x18
	let delegate : SCNSceneRendererDelegate? // +0x20
	let options : Options // +0x28
	let technique : SCNTechnique? // +0x30
 }

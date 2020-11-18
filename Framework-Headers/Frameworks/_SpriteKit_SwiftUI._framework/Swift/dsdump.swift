 struct _SpriteKit_SwiftUI.SpriteView {

	// Properties
	let scene : SKScene // +0x0
	let transition : SKTransition? // +0x8
	let isPaused : Bool // +0x10
	let preferredFramesPerSecond : Int // +0x18
	let options : Options // +0x20
	let shouldRender : (_:) // +0x28
 }

 struct _SpriteKit_SwiftUI.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class _SpriteKit_SwiftUI.SpriteKitViewDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var callback : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x502 in binary!
WARNING: couldn't find offset 0x502 in binary!
WARNING: couldn't find address 0x68800001ec8 (0x68800001ec8) in binary!
	0x0  @objc SpriteKitViewDelegate.(null) <stripped>
WARNING: couldn't find address 0x68600001eb8 (0x68600001eb8) in binary!
	0x25029232840  @objc SpriteKitViewDelegate.(null) <stripped>
WARNING: couldn't find address 0x7270535f3a4d4152 (0x35f3a4d4152) in binary!
	0x15574666977  @objc SpriteKitViewDelegate.(null) <stripped>

	// Swift methods
 }

 struct _SpriteKit_SwiftUI.UIKitSpriteKitView {

	// Properties
	let state : SpriteKitViewState // +0x0
 }

 struct _SpriteKit_SwiftUI.SpriteKitViewState {

	// Properties
	let scene : SKScene // +0x0
	let transition : SKTransition? // +0x8
	let isPaused : Bool // +0x10
	let preferredFramesPerSecond : Int // +0x18
	let options : Options // +0x20
	let delegate : SKViewDelegate? // +0x28
 }

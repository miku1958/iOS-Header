 protocol RealityKit.__RKSimulationSceneCoordinatorDelegate // 1 requirements
 {
	// method
 }
 protocol RealityKit.RERetainReleaseable // 0 requirements
 {
 }
 protocol RealityKit.__ARReferenceProviding // 2 requirements
 {
	// method
	// method
 }
 protocol RealityKit.__RKSpecificationHasTarget // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol RealityKit.HasModel // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.SynchronizationPeerID // 0 requirements
 {
 }
 protocol RealityKit.SynchronizationService // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol RealityKit.__RKRuntimeSceneCoordinatorObserver // 2 requirements
 {
	// method
	// method
 }
 protocol RealityKit.RKChangeSceneActionTechnique // 1 requirements
 {
	// method
 }
 protocol RealityKit.__REAssetService // 5 requirements
 {
	// getter
	// method
	// method
	// getter
	// method
 }
 protocol RealityKit.HasSynchronization // 0 requirements
 {
 }
 protocol RealityKit.__SceneService // 5 requirements
 {
	// getter
	// method
	// method
	// getter
	// method
 }
 protocol RealityKit.Material // 4 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
 }
 protocol RealityKit.__RKEntityActionStateObserver // 1 requirements
 {
	// method
 }
 protocol RealityKit.Resource // 0 requirements
 {
 }
 protocol RealityKit.__CoreConvertible // 3 requirements
 {
	// class associated type access function
	// getter
	// class init
 }
 protocol RealityKit.__RenderService // 2 requirements
 {
	// getter
	// getter
 }
 protocol RealityKit.RenderManagerProtocol // 1 requirements
 {
	// class init
 }
 protocol RealityKit.HasTransform // 0 requirements
 {
 }
 protocol RealityKit.__DownsamplingStrategy // 1 requirements
 {
	// method
 }
 protocol RealityKit.__ARViewDelegatePrivate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol RealityKit.Component // 9 requirements
 {
	// class getter
	// class method
	// class method
	// class method
	// class method
	// class method
	// method
	// class getter
	// class method
 }
 protocol RealityKit.DefaultInitializable // 2 requirements
 {
	// class base protocol
	// class init
 }
 protocol RealityKit.__RKActiveSceneObserver // 1 requirements
 {
	// method
 }
 protocol RealityKit.__RKDictionaryInitializingActionSpecification // 2 requirements
 {
	// class getter
	// class method
 }
 protocol RealityKit.Event // 0 requirements
 {
 }
 protocol RealityKit.EventSource // 0 requirements
 {
 }
 protocol RealityKit.RECoreBridging // 1 requirements
 {
	// getter
 }
 protocol RealityKit.HasDirectionalLight // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.__RKDictionaryInitializingTriggerSpecification // 2 requirements
 {
	// class getter
	// class method
 }
 protocol RealityKit.HasAmbientLight // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.HasCollision // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.InternalComponentRegistryEntry // 1 requirements
 {
	// class init
 }
 protocol RealityKit.RegisterableComponent // 2 requirements
 {
	// class method
	// class method
 }
 protocol RealityKit.InternalComponent // 6 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class getter
	// class setter
	// class modify coroutine
 }
 protocol RealityKit.HasAnchoring // 0 requirements
 {
 }
 protocol RealityKit.HasPerspectiveCamera // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.HasSpotLight // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.EventService // 2 requirements
 {
	// method
	// method
 }
 protocol RealityKit.__ARReferenceProvidingPlugin // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol RealityKit.__RKEntityInteractionService // 12 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// method
	// method
	// method
	// method
	// getter
	// setter
	// modify coroutine
 }
 protocol RealityKit.RENetEncoder // 1 requirements
 {
	// method
 }
 protocol RealityKit.RENetDecoder // 1 requirements
 {
	// method
 }
 protocol RealityKit.HasPointLight // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.__REAssetBundleTextureMetadata // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol RealityKit.__REAssetBundleLoader // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol RealityKit.USDDecodable // 1 requirements
 {
	// class init
 }
 protocol RealityKit.__USDEncodablePublic // 2 requirements
 {
	// method
	// method
 }
 protocol RealityKit.__USDEncodable // 2 requirements
 {
	// method
	// method
 }
 protocol RealityKit.HasPhysicsBody // 1 requirements
 {
	// class base protocol
 }
 protocol RealityKit.HasPhysicsMotion // 0 requirements
 {
 }
 protocol RealityKit.HasPhysics // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol RealityKit.AssetServiceScoped // 1 requirements
 {
	// class init
 }
 protocol RealityKit.HasHierarchy // 0 requirements
 {
 }

 enum __C.CTLineBreakMode { }

 enum __C.CTTextAlignment { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.REGeomBuildBoxOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthSegmentCount : m5
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightSegmentCount : m5
WARNING: couldn't find address 0x0 (0x0) in binary!
	var depthSegmentCount : m5
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cornerSegmentCount : m5
	var radius : Float
	var width : Float
	var height : Float
	var depth : Float
	var addUVs : Bool
	var addNormals : Bool
	var mergeVertices : Bool
 }

 struct __C.REGeomBuildSphereOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var segmentCount : m5
	var radius : Float
	var addUVs : Bool
	var addNormals : Bool
	var mergeVertices : Bool
 }

 struct __C.REGeomBuildPlaneOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthSegmentCount : m5
WARNING: couldn't find address 0x0 (0x0) in binary!
	var depthSegmentCount : m5
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cornerSegmentCount : m5
	var width : Float
	var depth : Float
	var cornerRadius : Float
	var addUVs : Bool
	var addNormals : Bool
	var orientation : REGeomBuildPlaneOrientation
 }

 struct __C.simd_float4x4 {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var columns : ;5
 }

 struct __C.simd_float3x3 {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var columns : 15
 }

 struct __C.simd_float2x2 {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var columns : =5
 }

 enum __C.REAnimationLoopBehavior { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : m,
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : m,
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : m,
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : m,
 }

 struct __C.RESubscriptionHandle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : á6
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : á6
 }

 struct __C.simd_quatf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var vector : “5
 }

 struct __C.REPoseF {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : 56
	var orientation : simd_quatf
 }

 class __C.CFError {
 struct __C.CGBitmapInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Õ6
 }

 class __C.CGColorSpace {
 struct __C.RESRT {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : 56
	var rotation : simd_quatf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var translation : 56
 }

 struct __C.REAABB {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var min : 56
WARNING: couldn't find address 0x0 (0x0) in binary!
	var max : 56
 }

 enum __C.REComponentType { }

 struct __C.REEngineConfigurationEx {

	// Properties
	var sizeBytes : Int
	var version : REEngineConfigurationExVersion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var instanceID :  empty-list 
	var userData : UnsafeMutableRawPointer?
	var clockMode : REEngineClockMode
	var createServices : REEngineServiceMask
	var updateServices : REEngineServiceMask
	var startupOptions : REStartupOptions
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dispatchQueue : Ë6
WARNING: couldn't find address 0x0 (0x0) in binary!
	var device : «6
	var renderFlags : RERenderFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var idsServiceId :  empty-list 
 }

 struct __C.RERenderFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Õ6
 }

 struct __C.REStartupOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : «5
 }

 struct __C.REEngineServiceMask {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Õ6
 }

 enum __C.REEngineClockMode { }

 class __C.CFString {
 struct __C.REEasingFunction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var internal : ‘5
 }

 struct __C.REEngineDoUpdateEvent {

	// Properties
	var deltaTime : Float
 }

 struct __C.REAnimationHasCompletedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : á6
	var elapsedTime : Float
 }

 struct __C.REAnimationHasLoopedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : á6
	var elapsedTime : Float
	var cycle : Float
 }

 struct __C.REAnimationHasTerminatedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : á6
	var elapsedTime : Float
 }

 struct __C.RECollisionDidStartEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : 56
	var impulse : Float
 }

 struct __C.RECollisionDidUpdateEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : 56
	var impulse : Float
 }

 struct __C.RECollisionDidStopEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : 54
 }

 struct __C.REMotionStateDidChangeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rigidBody : 54
	var isSleeping : Bool
 }

 struct __C.REOwnershipResponseEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var previousOwnerPeerId : á6
	var result : REOwnershipResponseResult
 }

 struct __C.REOwnershipChangedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newOwnerPeerId : á6
 }

 struct __C.REAudioPlayerDidCompleteEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackToken : á6
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : Õ6
 }

 struct __C.REOwnershipRequestEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : 54
WARNING: couldn't find address 0x0 (0x0) in binary!
	var requestPeerId : á6
	var result : UnsafeMutablePointer<Bool>?
 }

 enum __C.REMotionType { }

 struct __C.MTLTextureLevelInfo {

	// Properties
	var pixelsWide : Int
	var pixelsHigh : Int
	var pixelsDeep : Int
	var blocksWide : Int
	var blocksHigh : Int
	var blocksDeep : Int
	var paddedPixelsWide : Int
	var paddedPixelsHigh : Int
	var paddedPixelsDeep : Int
	var blockBytes : Int
	var rowBlockBytes : Int
	var imageBlockBytes : Int
	var totalBlockBytes : Int
 }

 struct __C.WritingOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.REEntityCopyOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var size : m5
	var version : REEntityCopyOptionsVersion
	var recursive : Bool
	var ignoreCustomComponents : Bool
	var excludeComponentType : @convention(c) (_:_:)?
	var context : UnsafeMutableRawPointer?
 }

 struct __C.simd_quatd {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var vector : Ù3
 }

 struct __C.RECustomComponentSyncInfo {

	// Properties
	var size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var version : «5
	var context : UnsafeMutableRawPointer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var writeNetworkSnapshot :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readNetworkSnapshot :  first-element-marker 
	var supportsNetworkSync : Bool
 }

 enum __C.REOwnershipResponseResult { }

 enum __C.REGeomBuildPlaneOrientation { }

 enum __C.REEngineConfigurationExVersion { }

 enum __C.REEntityCopyOptionsVersion { }

 struct __C.USKRoleType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.USKDataType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.USKNodeType {

	// Properties
	var _rawValue : NSString
 }

 struct RealityKit.__RKEntityInteractionsComponent {

	// Properties
	var jsonRawPointer : UnsafeMutableRawPointer? // +0x0
	var cleanupHelper : IntrospectionDataCleanupHelper // +0x8
	var internalSpecifications : __RKEntityInteractionSpecification // +0x10
	var internalInteractions : __RKEntityInteraction // +0x18
	var entity : Entity // +0x20
	var didFireStartTrigger : Bool? // +0x28
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 struct RealityKit.DirectionalLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var isRealWorldProxy : Bool // +0xc
 }

 struct RealityKit.Shadow {

	// Properties
	var depthBias : Float // +0x0
	var maximumDistance : Float // +0x4
 }

 struct RealityKit.__REOSLog { }

 struct RealityKit.__RESignpostID { }

 class RealityKit.__REOSSignpostScope : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var name : +0 // +0x10 (0x11)
	var osLog : OS_os_log // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var signpostID : ) // +0x0 (0x0)

	// Swift methods
	0xac30  class func __REOSSignpostScope.__allocating_init(osLog:signpostID:name:) // init 
 }

 enum RealityKit.__RKSimulationSceneCoordinatorState {

	// Properties
	case stopped  
	case running  
 }

 class RealityKit.__RKSimulationSceneCoordinator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : __RKSimulationSceneCoordinatorDelegate
	var simulationState : __RKSimulationSceneCoordinatorState

	// Swift methods
	0xb260  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xb4f0  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xb520  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xb570  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xb6c0  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xb6f0  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xb720  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xb760  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
 }

 enum RealityKit.TriggerUSDLoadingError {

	// Properties
	case unableToCreateAnyValidTriggerSpecifications  
 }

 class RealityKit.IntrospectionDataCleanupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var rawData : UnsafeMutableRawPointer

	// Swift methods
 }

 struct RealityKit.__AmbientLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
 }

 class RealityKit.__RKEmphasisPopAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.RKChangeSceneActionSimulationTechnique : RKChangeSceneActionBasicTechnique {
	// Swift methods
 }

 class RealityKit.__RKEntityLookAtCameraAction : __RKEntityAction {

	// Properties
	let duration : Float
	let animationDuration : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	let face : 56
	let rotation : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	let axis : 56
	let loops : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double
	var animationDeadline : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1
	var didInit : Bool
	var faceRotation : simd_quatf

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bd3c00062678 (0x53c00062678) in binary!
	0x18000000c  @objc __RKEntityLookAtCameraAction.(null) <stripped>

	// Swift methods
	0xe150  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:animationDuration:direction:rotation:upVector:loops:) // init 
	0xe5e0  func __RKEntityLookAtCameraAction.getPose(cameraPosition:currentPose:) // method 
	0xe9d0  func __RKEntityLookAtCameraAction.update() // method 
	0xea90  func __RKEntityLookAtCameraAction.createLookAtAnimation() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetService : __REAssetService
	var resolvedURLByAssetPathPrefixQueue : OS_dispatch_queue
	var resolvedURLByAssetPathPrefix : [String : String]

	// Swift methods
	0x10920  class func __RealityFileURLResolver.__allocating_init() // init 
	0x113f0  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x114f0  func __RealityFileURLResolver.registerRealityFileResolver() // method 
	0x11600  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x11a40  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x11f50  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x12290  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x12480  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x12590  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x12670  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
 }

 struct RealityKit.Weak {

	// Properties
	var pointee : weak A?
 }

 enum RealityKit.AudioActionTypeLoadingError {

	// Properties
	case unknownAudioActionType  
 }

 enum RealityKit.AudioSpatialModeLoadingError {

	// Properties
	case unknownAudioSpatialMode  
 }

 enum RealityKit.EmphasisAnimationTypeLoadingError {

	// Properties
	case unknownEmphasisAnimationType  
 }

 enum RealityKit.EmphasisAnimationTypeLoadingError {

	// Properties
	case unknownEmphasisAnimationType  
 }

 enum RealityKit.MoveSelectionLoadingError {

	// Properties
	case unknownMoveSelection  
 }

 enum RealityKit.MultiplePerformBehaviorLoadingError {

	// Properties
	case unknownPerformBehavior  
 }

 enum RealityKit.AnimationStyleLoadingError {

	// Properties
	case unknownAnimationStyle  
 }

 enum RealityKit.MoveEaseLoadingError {

	// Properties
	case unknownMoveEase  
 }

 enum RealityKit.MoveEaseTypeLoadingError {

	// Properties
	case unknownMoveEaseType  
 }

 enum RealityKit.BuildOutAnimationTypeLoadingError {

	// Properties
	case unknownBuildOutAnimationType  
 }

 enum RealityKit.BuildInAnimationTypeLoadingError {

	// Properties
	case unknownBuildInAnimationType  
 }

 enum RealityKit.ActionUSDLoadingError {

	// Properties
	case unableToCreateAnyValidActionSpecifications  
 }

 class RealityKit.__RKEmphasisFlipAnimation : __RKEmphasisBaseAnimation { }

 enum RealityKit.__RKEntityTriggerSpecification {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case proximity : Á
WARNING: couldn't find address 0x0 (0x0) in binary!
	case tapTarget : Y
WARNING: couldn't find address 0x0 (0x0) in binary!
	case collision : s
	case custom : (tag: String)
	case customWithArguments : (identifier: String, customArguments: [String : String]?)
	case group : __RKEntityTriggerSpecification
	case drag  
	case light  
	case lookAt  
	case placement  
	case removal  
	case sound  
	case start  
	case timer  
 }

 enum RealityKit.Name {

	// Properties
	case drag  
	case light  
	case lookAt  
	case placement  
	case proximity  
	case removal  
	case sound  
	case start  
	case tapTarget  
	case timer  
	case collision  
	case custom  
	case customWithArguments  
	case group  
 }

 enum RealityKit.__RKEntityActionSpecification {

	// Properties
	case audio : __RKEntityAudioActionArguments
	case changeScene : __RKChangeSceneActionArguments
	case custom : __RKEntityCustomActionArguments
	case emphasis : __RKEntityEmphasisActionArguments
	case fadeEntity : __RKEntityFadeActionArguments
	case fadeScene : __RKFadeSceneActionArguments
	case group : __RKEntityActionGroupArguments
	case hide : __RKEntityHideActionArguments
	case force : __RKEntityForceActionArguments
	case show : __RKEntityShowActionArguments
	case startAnimate : __RKEntityStartAnimateActionArguments
	case stopAnimate : __RKEntityStopAnimateActionArguments
	case toggleAnimate : __RKEntityToggleAnimateActionArguments
	case toggleVisibility : __RKEntityToggleVisibilityActionArguments
	case transform : __RKEntityTransformActionArguments
	case wait : __RKWaitActionArguments
	case orbitEntity : __RKEntityOrbitEntityActionArguments
	case lookAtCamera : __RKEntityLookAtCameraActionArguments
	case swapEntity : __RKEntitySwapEntityActionArguments
	case spin : __RKEntitySpinActionArguments
	case setOpacity : __RKEntitySetOpacityActionArguments
 }

 enum RealityKit.Name {

	// Properties
	case audio  
	case changeScene  
	case custom  
	case emphasis  
	case fadeEntity  
	case fadeScene  
	case force  
	case group  
	case hide  
	case lookAtCamera  
	case orbitEntity  
	case setOpacity  
	case show  
	case spin  
	case startAnimate  
	case stopAnimate  
	case swapEntity  
	case toggleAnimate  
	case toggleVisibility  
	case transform  
	case wait  
 }

 enum RealityKit.__RKEntityGroupActionOrder {

	// Properties
	case concurrent  
	case sequenced  
 }

 struct RealityKit.__RKEntityActionGroupArguments {

	// Properties
	var order : __RKEntityGroupActionOrder // +0x0
	var actions : __RKEntityActionSpecification // +0x8
	var exclusive : Bool? // +0x10
	var loopCount : Int? // +0x18
	var exclusiveBlocks : Bool? // +0x21
 }

 struct RealityKit.__RKWaitActionArguments {

	// Properties
	var duration : Float // +0x0
 }

 struct RealityKit.__RKEntityCustomActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var actionIdentifier : String
	var customArguments : [String : String]
 }

 struct RealityKit.__RKChangeSceneActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sceneRoot : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var targetSceneIdentifier : a
 }

 struct RealityKit.__RKFadeSceneActionArguments {

	// Properties
	var targetOpacity : Float // +0x0
	var duration : Float? // +0x4
 }

 struct RealityKit.__RKEntityFadeActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var targetOpacity : Float
	var duration : Float?
 }

 struct RealityKit.__RKEntityToggleAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
 }

 struct RealityKit.__RKEntityStartAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	let loopCount : Int
	let multiplePerformBehavior : __RKEntityActionMultiplePerformBehavior
	let clipStart : Double
	let clipDuration : Double
	let clipReverses : Bool
	let clipReversed : Bool
	let animationSpeed : Float
	let muteAudio : Bool?
	let audioGain : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var targetAnimation : …
 }

 struct RealityKit.__RKEntityStopAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
 }

 struct RealityKit.__RKEntityToggleVisibilityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
 }

 struct RealityKit.__RKEntityShowActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float?
	var distance : Float?
	var ease : __RKEntityMoveEase
	var easeType : __RKEntityMoveEaseType
	var fadeIn : Bool?
	var finalOpacity : Float?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
	var animationStyle : __RKEntityActionAnimationStyle
	var buildInAnimationType : __RKEntityShowActionBuildInAnimationType
 }

 struct RealityKit.__RKEntityHideActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float?
	var distance : Float?
	var ease : __RKEntityMoveEase
	var easeType : __RKEntityMoveEaseType
	var fadeOut : Bool?
	var finalOpacity : Float?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
	var animationStyle : __RKEntityActionAnimationStyle
	var buildOutAnimationType : __RKEntityHideActionBuildOutAnimationType
 }

 struct RealityKit.__RKEntityEmphasisActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float?
	var iterations : Float?
	var animationStyle : __RKEntityActionAnimationStyle
	var emphasisAnimationType : __RKEntityEmphasisAnimationType
 }

 struct RealityKit.__RKEntityAudioActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var path : String
	var type : __RKEntityAudioActionType
	var volume : Double?
	var loops : Bool?
	var spatialMode : __RKAudioSpatialModeSelection
	let multiplePerformBehavior : __RKEntityActionMultiplePerformBehavior
 }

 struct RealityKit.__RKEntityTransformActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var location : ‘$
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _orientation : ¥$
	var scale : Float?
	var duration : Float?
	var moveType : __RKEntityMoveSelection
	var ease : __RKEntityMoveEase
	var easeType : __RKEntityMoveEaseType
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
 }

 struct RealityKit.__RKEntityForceActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var force : ‘$
WARNING: couldn't find address 0x0 (0x0) in binary!
	var velocity : ‘$
 }

 struct RealityKit.__RKEntitySwapEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newTarget : a
	var buildOutAction : __RKEntityHideActionArguments
	var buildInAction : __RKEntityShowActionArguments
 }

 struct RealityKit.__RKEntitySpinActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float?
	var iterations : Float?
	var direction : __RKEntitySpinDirectionType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var axis : ‘$
 }

 struct RealityKit.__RKEntityOrbitEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pivotTarget : a
	var duration : Float?
	var rotations : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var orbitalAxis : ‘$
	var orientToPath : Bool?
	var spinDirection : __RKEntitySpinDirectionType
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
 }

 struct RealityKit.__RKEntityLookAtCameraActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float?
	var animationDuration : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var direction : ‘$
	var rotation : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upVector : ‘$
	var loops : Bool?
 }

 struct RealityKit.__RKEntitySetOpacityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : a
	var duration : Float
	var opacity : Float
 }

 struct RealityKit.__RKEntityInteractionSpecification {

	// Properties
	var trigger : __RKEntityTriggerSpecification
	var action : __RKEntityActionSpecification
	var accessibilityDescription : String?
 }

 enum RealityKit.CodingKeys {

	// Properties
	case trigger  
	case action  
	case accessibilityDescription  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case opacity  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case animationDuration  
	case direction  
	case rotation  
	case upVector  
	case loops  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case pivotTarget  
	case duration  
	case rotations  
	case orbitalAxis  
	case orientToPath  
	case spinDirection  
	case respectPhysics  
	case physicsLinearCoefficient  
	case physicsAngularCoefficient  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case iterations  
	case direction  
	case axis  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case newTarget  
	case buildOutAction  
	case buildInAction  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case force  
	case velocity  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case location  
	case _orientation  
	case scale  
	case duration  
	case moveType  
	case ease  
	case easeType  
	case respectPhysics  
	case physicsLinearCoefficient  
	case physicsAngularCoefficient  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case path  
	case type  
	case volume  
	case loops  
	case spatialMode  
	case multiplePerformBehavior  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case iterations  
	case animationStyle  
	case emphasisAnimationType  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case distance  
	case ease  
	case easeType  
	case fadeOut  
	case finalOpacity  
	case respectPhysics  
	case physicsLinearCoefficient  
	case physicsAngularCoefficient  
	case animationStyle  
	case buildOutAnimationType  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case duration  
	case distance  
	case ease  
	case easeType  
	case fadeIn  
	case finalOpacity  
	case respectPhysics  
	case physicsLinearCoefficient  
	case physicsAngularCoefficient  
	case animationStyle  
	case buildInAnimationType  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case loopCount  
	case multiplePerformBehavior  
	case clipStart  
	case clipDuration  
	case clipReverses  
	case clipReversed  
	case animationSpeed  
	case muteAudio  
	case audioGain  
	case targetAnimation  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case targetOpacity  
	case duration  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case targetOpacity  
	case duration  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case sceneRoot  
	case targetSceneIdentifier  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case target  
	case actionIdentifier  
	case customArguments  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case duration  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case order  
	case actions  
	case exclusive  
	case loopCount  
	case exclusiveBlocks  
 }

 enum RealityKit.ActionError {

	// Properties
	case unknownKind : String
 }

 enum RealityKit.CodingKeys {

	// Properties
	case name  
	case arguments  
 }

 enum RealityKit.TriggerError {

	// Properties
	case unknownKind : String
 }

 enum RealityKit.CodingKeys {

	// Properties
	case name  
	case arguments  
 }

 enum RealityKit.ProximityCodingKeys {

	// Properties
	case target  
	case distance  
	case type  
 }

 enum RealityKit.CollisionCodingKeys {

	// Properties
	case target  
	case tags  
	case collidingEntities  
 }

 enum RealityKit.CustomCodingKeys {

	// Properties
	case identifier  
 }

 enum RealityKit.CustomWithArgumentsCodingKeys {

	// Properties
	case identifier  
	case customArguments  
 }

 enum RealityKit.TapTargetCodingKeys {

	// Properties
	case target  
 }

 enum RealityKit.GroupCodingKeys {

	// Properties
	case triggers  
 }

 struct RealityKit.ImageBasedLightComponent {

	// Properties
	var environment : EnvironmentResource // +0x0
	var intensityExponent : Float // +0x8
 }

 enum RealityKit.__RKEntityFlipDirectionType {

	// Properties
	case forward  
	case backward  
 }

 enum RealityKit.__RKEntityEmphasisAnimationType {

	// Properties
	case pop  
	case blink  
	case bounce  
	case flip  
	case float  
	case jiggle  
	case pulse  
	case spin  
 }

 class RealityKit.__RKEntityEmphasisAction : __RKEntityAction {

	// Properties
	let duration : Float
	let iterations : Float
	let animationStyle : __RKEntityActionAnimationStyle
	let emphasisAnimationType : __RKEntityEmphasisAnimationType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bd2400062660 (0x52400062660) in binary!
	0x18000000c  @objc __RKEntityEmphasisAction.(null) <stripped>

	// Swift methods
	0x52a60  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
 }

 struct RealityKit.__RKSceneUUIDComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawUUID : ¿ // +0x0
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4 // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.MultipeerConnectivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SynchronizationService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreInvalidPeerID : á6
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreMultipeerConnectivityService : Y4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreServiceLocator : Y4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreNetworkSystem : Y4
	let session : MCSession

	// Swift methods
	0x557f0  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x55890  func MultipeerConnectivityService.entity(for:) // method 
	0x558c0  func MultipeerConnectivityService.owner(of:) // method 
	0x559b0  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x55a70  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x55b40  func MultipeerConnectivityService.__toCore(peerID:) // method 
 }

 class RealityKit.NetworkCompatibilityToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreToken : Y4

	// Swift methods
	0x55fa0  class func NetworkCompatibilityToken.__allocating_init(from:) // init 
 }

 enum RealityKit.Compatibility {

	// Properties
	case compatible  
	case sessionProtocolVersionMismatch  
 }

 enum RealityKit.SerializationError {

	// Properties
	case failure  
 }

 enum RealityKit.DeserializationError {

	// Properties
	case failure  
 }

 enum RealityKit.SynchronizationError {

	// Properties
	case encryptionRequired  
 }

 class RealityKit.TextureResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : Y4

	// Swift methods
	0x56c20  func TextureResource.__coreAsset.getter // getter 
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case importFailureWithURL : Y
	case allocationFailed : String
 }

 class RealityKit.__RKEntityActionGroup : __RKEntityAction {

	// Properties
	var actions : __RKEntityAction // +0x68 (0x8)
	var ordering : Ordering // +0x70 (0x1)
	var loopCount : Int // +0x78 (0x8)
	var completedActions : Int // +0x80 (0x8)
	var completedLoops : Int // +0x88 (0x8)
	var stopped : Bool // +0x90 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bd0c00062648 (0x50c00062648) in binary!
	0x18000000c  @objc __RKEntityActionGroup.(null) <stripped>

	// Swift methods
	0x5a010  func __RKEntityActionGroup.actions.getter // getter 
	0x5a0c0  func __RKEntityActionGroup.ordering.getter // getter 
	0x5a170  func __RKEntityActionGroup.loopCount.getter // getter 
	0x5a1a0  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x5a230  func __RKEntityActionGroup.collapseRedundantGroups() // method 
	0x5ab90  func __RKEntityActionGroup.reorderConcurrentActions() // method 
	0x5b230  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x5b780  func __RKEntityActionGroup.performSequentialAction(at:context:) // method 
	0x5c0e0  func __RKEntityActionGroup.allActions() // method 
 }

 enum RealityKit.Ordering {

	// Properties
	case concurrent  
	case sequenced  
 }

 struct RealityKit.PhysicsBodyComponent {

	// Properties
	var mode : PhysicsBodyMode // +0x0
	var massProperties : PhysicsMassProperties // +0x10
	var material : PhysicsMaterialResource // +0x50
	var isTranslationLocked : (x: Bool, y: Bool, z: Bool) // +0x58
	var isRotationLocked : (x: Bool, y: Bool, z: Bool) // +0x5b
	var isContinuousCollisionDetectionEnabled : Bool // +0x5e
	var teleport : Bool // +0x5f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userForce : 56 // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userTorque : 56 // +0x70
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userLinearImpulse : 56 // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userAngularImpulse : 56 // +0x90
 }

 class RealityKit.__RKRuntimeSceneCoordinator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observers : WeakObserver

	// Swift methods
	0x62190  class func __RKRuntimeSceneCoordinator.__allocating_init() // init 
	0x62220  func __RKRuntimeSceneCoordinator.willSwap(fromEntity:toEntity:anchoringTarget:) // method 
	0x62440  func __RKRuntimeSceneCoordinator.didSwap(fromEntity:toEntity:anchoringTarget:) // method 
	0x62620  func __RKRuntimeSceneCoordinator.addObserver(observer:) // method 
	0x627f0  func __RKRuntimeSceneCoordinator.removeObserver(observer:) // method 
 }

 struct RealityKit.WeakObserver {

	// Properties
	var value : __RKRuntimeSceneCoordinatorObserver // +0x0
 }

 struct RealityKit.__REAnchoring {

	// Properties
	var jsonRawPointer : UnsafeMutableRawPointer?
	var internalAnchorSpecification : __REAnchoringType
	var cleanupHelper : IntrospectionDataCleanupHelper
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4 // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RKEntityDragTrigger : __RKEntityTrigger { }

 class RealityKit.__RKVisibilityShowScaleAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKVisibilityShowScaleDownAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisSpinAnimation : __RKEmphasisBaseAnimation { }

 struct RealityKit.__RKEntityTagsComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var arrayPointer :  empty-list  // +0x0
	var arrayCount : Int // +0x8
	var tagsCache : [String]? // +0x10
	var cleanupHelper : ArrayPointerCleanupHelper // +0x18
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4

	// Swift methods
 }

 class RealityKit.ArrayPointerCleanupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let arrayPointer :  empty-list  // +0x10 (0x8)
	let arrayCount : Int // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RKVisibilityShowDropAnimation : __RKVisibilityBaseAnimation { }

 enum RealityKit.InteractionUSDLoadingError {

	// Properties
	case noTriggersOrActions  
 }

 class RealityKit.AudioPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var entity : Entity
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playerComponent : Y4
	let resource : AudioResource
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackToken : á6
	var stateChangeSubscriptionHandle : RESubscriptionHandle
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackCompletedSink : )
	var completionHandler : ()?

	// Swift methods
	0x68fc0  func AudioPlaybackController.entity.getter // getter 
	0x693e0  func AudioPlaybackController.completionHandler.getter // getter 
	0x69420  func AudioPlaybackController.completionHandler.setter // setter 
	0x69470  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
 }

 struct RealityKit.__REAssetIdentifier {

	// Properties
	var value : String // +0x0
 }

 class RealityKit.REAssetPathMapping : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : UnsafeMutableRawPointer

	// Swift methods
 }

 class RealityKit.REAssetDeduplicationOperation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : UnsafeMutableRawPointer

	// Swift methods
 }

 class RealityKit.__REAsset : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : Y4

	// Swift methods
	0x6a750  func __REAsset.debugDescription.getter // getter 
	0x6a850  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x6a990  func __REAsset.__handle.getter // getter 
 }

 class RealityKit.__REAssetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __REAssetService {

	// Properties
	var _mainBundle : __REAssetBundle // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : Y4 // +0x40 (0x8)

	// Swift methods
	0x6a080  class func __REAssetManager.__allocating_init(handle:) // init 
	0x6abb0  func __REAssetManager.engineQueue.getter // getter 
	0x6abd0  func __REAssetManager.mainBundle.getter // getter 
	0x6b1c0  func __REAssetManager.loadBundle(at:) // method 
	0x6b260  func __REAssetManager.makeBundle() // method 
	0x6b2b0  func __REAssetManager.__getDependencies(asset:) // method 
	0x6b470  func __REAssetManager.__handle.getter // getter 
 }

 class RealityKit.__AssetLoadRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAssetRequest : Y4

	// Swift methods
 }

 enum RealityKit.CodingKeys {

	// Properties
	case value  
 }

 enum RealityKit.LoadError {

	// Properties
	case loading : (assetPath: String)
 }

 enum RealityKit.SerializationError {

	// Properties
	case writing  
	case reading  
 }

 struct RealityKit.SynchronizationComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : á6 // +0x0
	var isOwner : Bool // +0x8
	var ownershipTransferMode : OwnershipTransferMode // +0x9
	var ownerhshipCompletion : OwnershipTransferCompletionResult // +0x10
 }

 enum RealityKit.OwnershipTransferMode {

	// Properties
	case autoAccept  
	case manual  
 }

 enum RealityKit.OwnershipTransferCompletionResult {

	// Properties
	case granted  
	case timedOut  
 }

 class RealityKit.InputManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKSceneAssetLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToRESceneAsset : __REAsset

	// Swift methods
	0x70560  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x705d0  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x70640  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
 }

 class RealityKit.__RKVisibilityShowRiseAnimation : __RKVisibilityBaseAnimation { }

 enum RealityKit.__REAnchoringType {

	// Properties
	case surface : Alignment
WARNING: couldn't find address 0x0 (0x0) in binary!
	case image : o
	case face : (meshVertex: Int)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case object : Ã
 }

 enum RealityKit.Name {

	// Properties
	case surface  
	case image  
	case face  
	case object  
 }

 struct RealityKit.Alignment {

	// Properties
	let rawValue : Int // +0x0
 }

 struct RealityKit.Classification {

	// Properties
	let rawValue : Int // +0x0
 }

 enum RealityKit.AnchoringError {

	// Properties
	case unknownKind : String
 }

 enum RealityKit.CodingKeys {

	// Properties
	case name  
	case alignment  
	case classification  
	case url  
	case physicalWidth  
	case meshVertex  
 }

 class RealityKit.__RKEmphasisPulseAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.SceneManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __SceneService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customComponentTypesToHandles : ObjectIdentifier
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handlesToCustomComponentTypes :  empty-list 
	let coreECSManager : __REECSManagerRef
	var scenes : Scene

	// Swift methods
 }

 enum RealityKit.__RKEntityMoveSelection {

	// Properties
	case local  
	case absolute  
 }

 enum RealityKit.__RKEntityMoveEase {

	// Properties
	case none  
	case back  
	case bounce  
	case circle  
	case elastic  
	case exponential  
	case hermite  
	case log  
	case power  
	case sine  
 }

 enum RealityKit.__RKEntityMoveEaseType {

	// Properties
	case easeIn  
	case easeOut  
	case easeInEaseOut  
 }

 class RealityKit.__RKEntityTransformAction : __RKEntityAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let location : ‘$
	let orientation : simd_quatf
	let scale : Float?
	let duration : Float
	let moveType : __RKEntityMoveSelection
	let ease : __RKEntityMoveEase
	let easeType : __RKEntityMoveEaseType
	let respectPhysics : Bool
	let physicsAngularCoefficient : Float
	let physicsLinearCoefficient : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalTranslation : 56
	var originalOrientation : simd_quatf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalScale : 56
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bcf400062630 (0x4f400062630) in binary!
	0x18000000c  @objc __RKEntityTransformAction.(null) <stripped>

	// Swift methods
	0x759a0  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
 }

 class RealityKit.MotionStateEventContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var action : __RKEntityTransformAction // +0x10 (0x8)
	let goal : REPoseF // +0x20 (0x20)

	// Swift methods
 }

 class RealityKit.RERenderFrameSettings : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameSettings : UnsafeMutableRawPointer

	// Swift methods
 }

 class RealityKit.__RKVisibilityHideMoveOutAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RERenderGraphEmitter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let asset : __REAsset

	// Swift methods
	0x7c700  func __RERenderGraphEmitter.__handle.getter // getter 
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
 }

 struct RealityKit.EmitterAssetKey {

	// Properties
	let renderManagerHash : Int // +0x0
	let emitterAssetPath : String // +0x8
 }

 class RealityKit.__MaterialResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreAsset : Y4 // +0x10 (0x8)

	// Swift methods
	0x7ccd0  func __MaterialResource.__coreAsset.getter // getter 
 }

 struct RealityKit.SimpleMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	var tintColor : UIColor // +0x28
	var baseColor : MaterialColorParameter // +0x30
	var roughness : MaterialScalarParameter // +0x40
	var metallic : MaterialScalarParameter // +0x48
	var __emissive : MaterialColorParameter // +0x50
	var __usesTransparency : Bool // +0x59
 }

 struct RealityKit.OcclusionMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	let receivesDynamicLighting : Bool // +0x24
 }

 struct RealityKit.UnlitMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	var tintColor : UIColor // +0x28
	var baseColor : MaterialColorParameter // +0x30
	var __usesTransparency : Bool // +0x39
 }

 struct RealityKit.VideoMaterial: Material {

	// Properties
	var __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	var __videoResource : __VideoResource // +0x28
 }

 enum RealityKit.MaterialScalarParameter {

	// Properties
	case float : Float
	case texture : TextureResource
 }

 enum RealityKit.MaterialColorParameter {

	// Properties
	case color : UIColor
	case texture : TextureResource
 }

 struct RealityKit.AnyMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
	case resourceLoadFailed : String
 }

 struct RealityKit.__RKEntityUUIDComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawUUID : ¿ // +0x0
	var entity : Entity // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4 // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit._OrderedCoatCheckBagRef {
 struct RealityKit.Ticket {

	// Properties
	var _key : Int
	var _ptr : UnsafeRawPointer
 }

 struct RealityKit.OrderedCoatCheckBag {

	// Properties
	var _ref : _OrderedCoatCheckBagRef
 }

 enum RealityKit.__RKEntityActionMultiplePerformBehavior {

	// Properties
	case allow  
	case ignore  
	case stopsAction  
 }

 struct RealityKit.__RKEntityActionContext {

	// Properties
	var trigger : __RKEntityTrigger // +0x0
	var scene : Scene // +0x8
 }

 class RealityKit.__RKEntityAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var targetEntity : Entity // +0x10 (0x8)
	var finishedHandler : ()? // +0x18 (0x10)
	var groupHandler : ()? // +0x28 (0x10)
	var stateObservers : ActionStateObservation // +0x38 (0x8)
	var completionHandler : (_:)? // +0x40 (0x10)
	var isAlternate : Bool // +0x50 (0x1)
	var isExclusive : Bool // +0x51 (0x1)
	var exclusiveBlocksForCompletion : Bool // +0x52 (0x1)
	var state : State // +0x58 (0x9)
	var multiplePerformBehaviour : __RKEntityActionMultiplePerformBehavior // +0x61 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bcdc00062618 (0x4dc00062618) in binary!
	0x18000000c  @objc __RKEntityAction.(null) <stripped>

	// Swift methods
	0x8e670  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0x8d2a0  func __RKEntityAction.targetEntity.getter // getter 
	0x8d2d0  func __RKEntityAction.targetEntity.setter // setter 
	0x8d310  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0x8d340  func __RKEntityAction.completionHandler.getter // getter 
	0x8d380  func __RKEntityAction.completionHandler.setter // setter 
	0x8d3d0  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0x8d400  func __RKEntityAction.isAlternate.getter // getter 
	0x8d430  func __RKEntityAction.isAlternate.setter // setter 
	0x8d460  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0x8d4a0  func __RKEntityAction.isExclusive.getter // getter 
	0x8d4d0  func __RKEntityAction.isExclusive.setter // setter 
	0x8d500  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0x8d530  func __RKEntityAction.exclusiveBlocksForCompletion.getter // getter 
	0x8d560  func __RKEntityAction.exclusiveBlocksForCompletion.setter // setter 
	0x8d590  func __RKEntityAction.exclusiveBlocksForCompletion.modify // modifyCoroutine 
	0x8d5c0  func __RKEntityAction.runningExclusiveAndBlocksForCompletion() // method 
	0x8d630  func __RKEntityAction.state.getter // getter 
	0x8d670  func __RKEntityAction.state.setter // setter 
	0x8d6c0  func __RKEntityAction.state.modify // modifyCoroutine 
	0x8d780  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0x8d7b0  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0x8d7e0  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0x8d810  func __RKEntityAction.performAction(with:) // method 
	0x8d940  func __RKEntityAction.shouldContinueOnPerform() // method 
	0x8d990  func __RKEntityAction.preloadAssets() // method 
	0x8f1e0  func __RKEntityAction.perform(with:) // method 
	0x8d9a0  func __RKEntityAction.addStateObserver(_:) // method 
	0x8da20  func __RKEntityAction.removeStateObserver(_:) // method 
	0x8f230  func __RKEntityAction.reversed() // method 
	0x8da80  func __RKEntityAction.description.getter // getter 
	0x8dc00  func __RKEntityAction.stop() // method 
	0x8dc60  func __RKEntityAction.isExclusiveWith(action:) // method 
	0x8f240  func __RKEntityAction.copy(with:) // method 
	0x8dcc0  func __RKEntityAction.cleanup(animation:on:) // method 
	0x8dfa0  func __RKEntityAction.animationPostCleanup() // method 
	0x8dfb0  func __RKEntityAction.prefersInitialOrdering() // method 
 }

 enum RealityKit.State {

	// Properties
	case progress : Double
	case notStarted  
	case running  
	case finished  
	case stopped  
	case failed  
 }

 struct RealityKit.ActionStateObservation {

	// Properties
	var observer : __RKEntityActionStateObserver // +0x0
 }

 struct RealityKit.entityAction {

	// Properties
	let entity : Entity // +0x0
	let action : __RKEntityAction // +0x8
 }

 struct RealityKit.RETransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : 56 // +0x0
	var orientation : simd_quatf // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : 56 // +0x20
 }

 struct RealityKit.SpotLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var innerAngleInDegrees : Float // +0xc
	var outerAngleInDegrees : Float // +0x10
	var attenuationRadius : Float // +0x14
 }

 struct RealityKit.Shadow { }

 class RealityKit.__RKEntityTrigger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var reversible : Bool
	var shouldReverse : Bool
	var shouldFireAlternate : Bool

	// Swift methods
	0x93310  class func __RKEntityTrigger.__allocating_init() // init 
	0x92e90  func __RKEntityTrigger.reversible.getter // getter 
	0x92ec0  func __RKEntityTrigger.reversible.setter // setter 
	0x92ef0  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0x92f30  func __RKEntityTrigger.shouldReverse.getter // getter 
	0x92f60  func __RKEntityTrigger.shouldReverse.setter // setter 
	0x92f90  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0x92fc0  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0x92ff0  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0x93020  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0x93050  func __RKEntityTrigger.matches(with:) // method 
	0x93270  func __RKEntityTrigger.description.getter // getter 
 }

 class RealityKit.REEventDispatcher {
 class RealityKit.EventSubscription {
 struct RealityKit.__REEventSubscriber {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceObject : 54
	let dispatcher : REEventDispatcher
 }

 struct RealityKit.__RKCustomTriggerNotification { }

 class RealityKit.__RKCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String // +0x994f0
	var customArguments : [String : String] // +0x0

	// Swift methods
	0x95800  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String // +0x994f0
	var customArguments : [String : String] // +0x0
	var targetEntity : Entity // +0x0

	// Swift methods
	0x95d50  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0x95d80  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0x95dc0  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0x95e00  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
 }

 class RealityKit.RERenderFrameWorkload : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameWorkload : UnsafeMutableRawPointer

	// Swift methods
 }

 class RealityKit.__RKVisibilityHideLaunchAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.RKEngineAdapter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var engine : __Engine

	// Swift methods
 }

 class RealityKit.__Engine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let configuration : Configuration
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreEngine : Y4
	let queue : OS_dispatch_queue
	var services : __ServiceLocator
	var startCount : Int
	var isExternallyManaged : Bool
	var hasRenderedThisFrame : Bool
	let namedFileAssetResolver : NamedFileAssetResolver

	// Swift methods
	0x97bd0  func __Engine.__coreEngine.getter // getter 
	0x97c80  func __Engine.services.getter // getter 
	0x97600  class func __Engine.__allocating_init(configuration:) // init 
	0x989b0  class func __Engine.__allocating_init(coreEngine:) // init 
	0x98fa0  func __Engine.__start() // method 
	0x98fd0  func __Engine.__stop() // method 
 }

 struct RealityKit.Configuration {

	// Properties
	var clockMode : __EngineClockModeRef // +0x0
	var device : MTLDevice? // +0x8
	var queue : OS_dispatch_queue? // +0x10
	var __createServices : __EngineServiceMaskRef // +0x18
	var __updateServices : __EngineServiceMaskRef // +0x1c
	var __startupOptions : __StartupOptionsRef // +0x20
	var __renderFlags : __RenderFlagsRef // +0x24
 }

 struct RealityKit.EngineUpdateEvent {

	// Properties
	let deltaTime : Float // +0x0
 }

 struct RealityKit.EngineRenderEvent { }

 struct RealityKit.AnimationTimingFunction {

	// Properties
	let easingFunction : EasingFunction // +0x0
 }

 enum RealityKit.__Mode {

	// Properties
	case easeIn  
	case easeOut  
	case easeInOut  
 }

 enum RealityKit.EasingFunction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case cubicBezier : ±
	case __back : __Mode
	case __bounce : __Mode
	case __circle : __Mode
	case __elastic : __Mode
	case __exponential : __Mode
	case __logarithmic : __Mode
	case __power : __Mode
	case __sine : __Mode
	case __smooth : __Mode
	case linear  
 }

 class RealityKit.__RKEntityTriggerGroup : __RKEntityTrigger {

	// Properties
	var triggers : __RKEntityTrigger

	// Swift methods
	0x9ae00  func __RKEntityTriggerGroup.triggers.getter // getter 
	0x9ae30  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity
	let buildOutAction : __RKEntityHideAction
	let buildInAction : __RKEntityShowAction
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bcc400062600 (0x4c400062600) in binary!
	0x18000000c  @objc __RKEntitySwapEntityAction.(null) <stripped>

	// Swift methods
	0x9bab0  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0x9d230  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0x9d8f0  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0x9d980  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0x9da40  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0x9db90  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
 }

 struct RealityKit.PointLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var attenuationRadius : Float // +0xc
 }

 class RealityKit.NamedFileAssetResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var assets : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var callback :  empty-list 

	// Swift methods
 }

 class RealityKit.__RKChangeSceneAction : __RKEntityAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let targetSceneIdentifier : a // +0x45545f5f (0x0)
	var rootEntity : Entity // +0x65706c65 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bcac000625e8 (0x4ac000625e8) in binary!
	0x18000000c  @objc __RKChangeSceneAction.(null) <stripped>

	// Swift methods
	0x9f760  func __RKChangeSceneAction.rootEntity.getter // getter 
	0x9f7a0  func __RKChangeSceneAction.rootEntity.setter // setter 
	0x9f7f0  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0x9f840  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
 }

 struct RealityKit.__REECSManagerRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__EntityRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__SceneRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__SceneImportOperationRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__ComponentRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__ComponentTypeRef: __CoreConvertible {

	// Properties
	var core : REComponentType // +0x0
 }

 struct RealityKit.__AssetRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__EngineRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : Y4 // +0x0
 }

 struct RealityKit.__EngineClockModeRef: __CoreConvertible {

	// Properties
	var core : REEngineClockMode // +0x0
 }

 struct RealityKit.__EngineServiceMaskRef: __CoreConvertible {

	// Properties
	var core : REEngineServiceMask // +0x0
 }

 struct RealityKit.__RenderFlagsRef: __CoreConvertible {

	// Properties
	var core : RERenderFlags // +0x0
 }

 struct RealityKit.__StartupOptionsRef: __CoreConvertible {

	// Properties
	var core : REStartupOptions // +0x0
 }

 struct RealityKit.__PeerIDRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : á6 // +0x0
 }

 struct RealityKit.__AABBRef: __CoreConvertible {

	// Properties
	var core : REAABB // +0x0
 }

 struct RealityKit.__SRTRef: __CoreConvertible {

	// Properties
	var core : RESRT // +0x0
 }

 struct RealityKit.__AnimationPlaybackTokenRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : á6 // +0x0
 }

 class RealityKit.__RKEmphasisLeanAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.RERenderManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __RenderService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _renderManager : Y4

	// Swift methods
 }

 class RealityKit.__RealityFileARReferenceProvidingPlugin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetService : __REAssetService
	let schemePrefix : String

	// Swift methods
	0xa45e0  func __RealityFileARReferenceProvidingPlugin.fetchReferenceObject(group:name:) // method 
	0xa4950  func __RealityFileARReferenceProvidingPlugin.fetchReferenceImage(group:name:physicalWidth:) // method 
 }

 class RealityKit.__RKVisibilityHidePopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEntityGlobalTapTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityTapPointTrigger : __RKEntityTrigger {

	// Properties
	var point : CGPoint
	var offset : CGSize

	// Swift methods
 }

 class RealityKit.__RKEntityTapTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity

	// Swift methods
	0xa5a70  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xa5aa0  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xa5ae0  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xa5b20  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
 }

 class RealityKit.__RKEntityOrbitEntityAction : __RKEntityAction {

	// Properties
	let pivotEntity : Entity
	let duration : Float
	let rotations : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orbitalAxis : 56
	let orientToPath : Bool
	let spinDirection : __RKEntitySpinDirectionType
	let respectPhysics : Bool
	let physicsAngularCoefficient : Float
	let physicsLinearCoefficient : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1
	var targetEntityParent : Entity
	var ghostPivotEntity : Entity
	var originalPose : REPoseF

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bc94000625d0 (0x494000625d0) in binary!
	0x158000000c  @objc __RKEntityOrbitEntityAction.(null) <stripped>

	// Swift methods
	0xa6190  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xa6270  func __RKEntityOrbitEntityAction.update() // method 
 }

 class RealityKit.LoadManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let sceneResourceCache : __SceneResourceCache

	// Swift methods
 }

 struct RealityKit.__SceneResourceLoadResultLoadContext {

	// Properties
	var fileName : String // +0x0
 }

 struct RealityKit.__SceneResourceLoadResult {

	// Properties
	let sceneResource : __SceneResource // +0x0
	let context : __SceneResourceLoadResultLoadContext // +0x8
	let cacheEntry : Entry // +0x18
 }

 class RealityKit.__SceneResourceCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var entriesByURL : Entry
	let lockQueue : OS_dispatch_queue

	// Swift methods
 }

 class RealityKit.Entry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let entryHolder : EntryHolder

	// Swift methods
 }

 enum RealityKit.InternalError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unableToFindScene :  first-element-marker 
	case unknown  
	case multipleActiveScenes  
 }

 enum RealityKit.EntryHolder {

	// Properties
	case assetBundle : __REAssetBundle
	case usdz : ImportedScene
 }

 struct RealityKit.SceneResourceLoadResult {

	// Properties
	let sceneResource : __SceneResource // +0x0
	let context : __SceneResourceLoadResultLoadContext // +0x8
	let cacheEntry : Entry // +0x18
 }

 struct RealityKit.__Downsampling { }

 struct RealityKit.Factor {

	// Properties
	let value : Int // +0x0
 }

 enum RealityKit.Resolution {

	// Properties
	case downsampling : Factor
	case noDownsampling  
 }

 struct RealityKit.__DownsamplingStrategyClosure: __DownsamplingStrategy {

	// Properties
	let closure : Resolution // +0x0
 }

 struct RealityKit.Minimal: __DownsamplingStrategy { }

 enum RealityKit.Error {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case noSufficientDownsamplingStrategy : •

 }

 struct RealityKit.Budgeted: __DownsamplingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let availableBytes : á6 // +0x0
	let device : MTLDevice // +0x8
 }

 class RealityKit.VideoPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var videoResource : __VideoResource
	var audioInputMode : InputMode

	// Swift methods
	0xafb70  func VideoPlaybackController.audioInputMode.getter // getter 
	0xafba0  func VideoPlaybackController.audioInputMode.setter // setter 
	0xafbf0  func VideoPlaybackController.audioInputMode.modify // modifyCoroutine 
 }

 class RealityKit.__RKEntityProximityTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity // +0x18 (0x8)
	var distance : Float // +0x20 (0x4)
	var type : ExitType // +0x24 (0x1)
	var enterFired : Bool // +0x25 (0x1)
	var exitFired : Bool // +0x26 (0x1)

	// Swift methods
	0xafeb0  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0xaff40  func __RKEntityProximityTrigger.distance.getter // getter 
	0xafff0  func __RKEntityProximityTrigger.type.getter // getter 
	0xb00a0  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0xb0150  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0xb0180  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
 }

 enum RealityKit.ExitType {

	// Properties
	case none  
	case sequence  
	case reverse  
 }

 class RealityKit.ARView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _scene : Scene
	var __delegatePrivate : __ARViewDelegatePrivate
	var debugOptions : DebugOptions
	var initialized : Bool
	var engineStartedByThisView : Bool
	var currentIBL : IBLType
	var environment : Environment
	var __environmentEntity : Entity
	var __enableAutomaticFrameRate : Bool
	var __preferredFrameRate : Float
	var singleTapGesture : UITapGestureRecognizer?
	var engineWasRunningWhenLastInTheForeground : Bool
	var backingLayer : CAMetalLayer?
	var useCAMetalLayer : Bool
	var pauseEngineOnLeaveForeground : Bool
	var __renderGraphEmitter : __RERenderGraphEmitter
	var __forceLocalizedProbes : Bool
	var __parallaxBackgroundProbe : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var layerHandle : Õ6
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var renderSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityAssetCollisionSubscription : )
	var __disableComposition : Bool
	var __nonARKitDevices : Bool
	var enablePresentsWithTransaction : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var presentsWithTransactionFrames : Õ6
	var __statisticsOptions : __StatisticsOptions
	var __disableStatisticsRendering : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1dec600062808 (0x6c600062808) in binary!
	0x21b9b  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x21b9700062830 (0x39700062830) in binary!
	0x21412  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x2140600062808 (0x40600062808) in binary!
	0x1de82  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1de7600062a28 (0x67600062a28) in binary!
	0x21b69  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x21b5d00062a28 (0x35d00062a28) in binary!
	0x21b51  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x21b4500062a20 (0x34500062a20) in binary!
	0x213b2  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x21b3b00062520 (0x33b00062520) in binary!
	0x21b2f  @objc ARView.(null) <stripped>
	0x1dde0  specialized static __RKEntityActionSpecification.generateEmphasizeActionSpecifications(decodeContext:)
WARNING: couldn't find address 0x1ddfe000626e0 (0x5fe000626e0) in binary!
	0x1ddfa  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1ddf6000624c0 (0x5f6000624c0) in binary!
	0x1ae54  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1ddce00062498 (0x5ce00062498) in binary!
	0x18000000c  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1bb74000624b0 (0x374000624b0) in binary!
	0x18000000c  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1bb5c00062498 (0x35c00062498) in binary!
	0x18000000c  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1bb4400062480 (0x34400062480) in binary!
	0x18000000c  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1bb2c00062468 (0x32c00062468) in binary!
	0x28000000c  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x1f49c00062410 (0x49c00062410) in binary!
	0x19d50  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff3cd08  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff3e3d0  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff3e1a8  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff43800  @objc ARView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff4a6b8  @objc ARView.(null) <stripped>

	// Swift methods
	0xb0db0  func ARView.__services.getter // getter 
	0xb0dd0  func ARView.scene.getter // getter 
	0xb0eb0  func ARView.__delegatePrivate.getter // getter 
	0xb0ef0  func ARView.__delegatePrivate.setter // setter 
	0xb0f50  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0xb1120  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0xb1190  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0xb1200  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0xb1440  func ARView.debugOptions.getter // getter 
	0xb1480  func ARView.debugOptions.setter // setter 
	0xb14d0  func ARView.debugOptions.modify // modifyCoroutine 
	0xb1580  func ARView.startEngine() // method 
	0xb1600  func ARView.stopEngine() // method 
	0xb1870  func ARView.environment.getter // getter 
	0xb18e0  func ARView.environment.setter // setter 
	0xb19b0  func ARView.environment.modify // modifyCoroutine 
	0xb1a20  func ARView.cameraTransform.getter // getter 
	0xb1bd0  func ARView.audioListener.getter // getter 
	0xb1c20  func ARView.audioListener.setter // setter 
	0xb1c40  func ARView.audioListener.modify // modifyCoroutine 
	0xb1d50  func ARView.__environmentEntity.getter // getter 
	0xb1d70  func ARView.__environmentEntity.setter // setter 
	0xb1dc0  func ARView.__environmentEntity.modify // modifyCoroutine 
	0xb1e40  func ARView.__enableAutomaticFrameRate.getter // getter 
	0xb1e60  func ARView.__enableAutomaticFrameRate.setter // setter 
	0xb1e80  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0xb1f40  func ARView.__preferredFrameRate.getter // getter 
	0xb1f70  func ARView.__preferredFrameRate.setter // setter 
	0xb1fb0  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0xb25e0  func ARView.__customizeMetalLayer() // method 
	0xb2910  func ARView.__renderGraphEmitter.getter // getter 
	0xb2970  func ARView.__renderGraphEmitter.setter // setter 
	0xb29e0  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0xb2a90  func ARView.__setWireframeMode(displayWireframe:) // method 
	0xb2b20  func ARView.__forceLocalizedProbes.getter // getter 
	0xb2b40  func ARView.__forceLocalizedProbes.setter // setter 
	0xb2b60  func ARView.__forceLocalizedProbes.modify // modifyCoroutine 
	0xb2be0  func ARView.__parallaxBackgroundProbe.getter // getter 
	0xb2c00  func ARView.__parallaxBackgroundProbe.setter // setter 
	0xb2c20  func ARView.__parallaxBackgroundProbe.modify // modifyCoroutine 
	0xb2c60  func ARView.__targetIdentifier.getter // getter 
	0xb2c80  func ARView.__didInitializeEngine() // method 
	0xb2cd0  func ARView.__disableComposition.getter // getter 
	0xb2cf0  func ARView.__disableComposition.setter // setter 
	0xb2d10  func ARView.__disableComposition.modify // modifyCoroutine 
	0xb2dd0  func ARView.__nonARKitDevices.getter // getter 
	0xb2df0  func ARView.__nonARKitDevices.setter // setter 
	0xb2e50  func ARView.__nonARKitDevices.modify // modifyCoroutine 
	0xb4a10  func ARView.__handleTapAtPoint(point:) // method 
	0xb4fb0  func ARView.handleTapForEntity(_:shouldNotifyDelegateAlways:) // method 
	0xb5b20  func ARView.__statisticsOptions.getter // getter 
	0xb5b60  func ARView.__statisticsOptions.setter // setter 
	0xb5bb0  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0xb5cc0  func ARView.__disableStatisticsRendering.getter // getter 
	0xb5d10  func ARView.__disableStatisticsRendering.setter // setter 
	0xb5d80  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0xb5e20  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0xb6100  func ARView.__setProfilerUpdateInterval(newInterval:) // method 
	0xb6140  func ARView.__frameTime() // method 
	0xb6170  func ARView.snapshot(saveToHDR:completion:) // method 
	0xb6fe0  func ARView.__startAudioEngine() // method 
	0xb7000  func ARView.__stopAudioEngine() // method 
	0xb70f0  func ARView.entityAccessibilityWrappers.getter // getter 
	0xb7890  func ARView.__distanceInMetersFromEntity(_:) // method 
 }

 struct RealityKit.DebugOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 struct RealityKit.__StatisticsOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Õ6 // +0x0
 }

 enum RealityKit.IBLType {

	// Properties
	case none  
	case custom  
	case defaultObject  
	case defaultAR  
 }

 struct RealityKit.SetupPair {

	// Properties
	let block : Entity // +0x0
 }

 class RealityKit.__RKVisibilityBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKActiveSceneManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeScene : Scene
	var observers : __RKActiveSceneObserver

	// Swift methods
	0xbdae0  class func __RKActiveSceneManager.__allocating_init() // init 
	0xbdd50  func __RKActiveSceneManager.activeScene.getter // getter 
	0xbdd80  func __RKActiveSceneManager.activeScene.setter // setter 
	0xbdda0  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0xbdee0  func __RKActiveSceneManager.addObserver(observer:) // method 
	0xbdfe0  func __RKActiveSceneManager.removeObserver(observer:) // method 
 }

 struct RealityKit.Environment {

	// Properties
	var background : Background // +0x0
	var lighting : ImageBasedLight // +0x10
	var reverb : Reverb // +0x1c
 }

 struct RealityKit.Background {

	// Properties
	let value : Value // +0x0
 }

 struct RealityKit.ImageBasedLight {

	// Properties
	var resource : EnvironmentResource // +0x0
	var intensityExponent : Float // +0x8
 }

 enum RealityKit.Reverb {

	// Properties
	case preset : Preset
	case noReverb  
 }

 enum RealityKit.Preset {

	// Properties
	case smallRoom  
	case mediumRoom  
	case largeRoom  
	case mediumHall  
	case largeHall  
	case cathedral  
 }

 enum RealityKit.Value {

	// Properties
	case skybox : EnvironmentResource
	case color : UIColor
 }

 struct RealityKit.SkyboxComponent {

	// Properties
	var environment : EnvironmentResource // +0x0
 }

 class RealityKit.__RKEmphasisBlinkAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.__RKLightTrigger : __RKEntityTrigger { }

 enum RealityKit.SceneEvents { }

 struct RealityKit.Update: Event {

	// Properties
	let scene : Scene // +0x0
	let deltaTime : Double // +0x8
 }

 struct RealityKit.AnchoredStateChanged: Event {

	// Properties
	let isAnchored : Bool // +0x0
	let anchor : HasAnchoring // +0x8
 }

 enum RealityKit.AnimationEvents { }

 struct RealityKit.PlaybackCompleted: Event {

	// Properties
	let playbackController : AnimationPlaybackController // +0x0
 }

 struct RealityKit.PlaybackLooped: Event {

	// Properties
	let playbackController : AnimationPlaybackController // +0x0
 }

 struct RealityKit.PlaybackTerminated: Event {

	// Properties
	let playbackController : AnimationPlaybackController // +0x0
 }

 enum RealityKit.AudioEvents { }

 struct RealityKit.PlaybackCompleted: Event {

	// Properties
	var playbackController : AudioPlaybackController // +0x0
 }

 enum RealityKit.CollisionEvents { }

 struct RealityKit.Began: Event {

	// Properties
	let entityA : Entity // +0x0
	let entityB : Entity // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 56 // +0x10
	let impulse : Float // +0x20
 }

 struct RealityKit.Updated: Event {

	// Properties
	let entityA : Entity // +0x0
	let entityB : Entity // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 56 // +0x10
	let impulse : Float // +0x20
 }

 struct RealityKit.Ended: Event {

	// Properties
	let entityA : Entity // +0x0
	let entityB : Entity // +0x8
 }

 enum RealityKit.SynchronizationEvents { }

 struct RealityKit.OwnershipRequest: Event {

	// Properties
	let entity : Entity // +0x0
	let requester : SynchronizationPeerID // +0x8
	let accept : () // +0x30
 }

 struct RealityKit.OwnershipChanged: Event {

	// Properties
	let entity : Entity // +0x0
	let newOwner : SynchronizationPeerID // +0x8
 }

 struct RealityKit.Publisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inner : çù
 }

 enum RealityKit.MotionStateEvents { }

 struct RealityKit.DidChange: Event {

	// Properties
	let entity : Entity // +0x0
	let isSleeping : Bool // +0x8
 }

 struct RealityKit.OwnershipResponse: Event {

	// Properties
	let entity : Entity // +0x0
	let previousOwner : SynchronizationPeerID // +0x8
	let response : Response // +0x30
 }

 struct RealityKit.CorePublisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceObject : 54
	let dispatcher : REEventDispatcher
 }

 struct RealityKit.Inner {

	// Properties
	let downstream : A1
 }

 enum RealityKit.Response {

	// Properties
	case granted  
	case timedOut  
 }

 struct RealityKit.__REAssetBundle {

	// Properties
	var header : Header
	let __sceneAssets : __REAsset
	let assetService : __REAssetService
	var deduplicationInformation : DeduplicationInformation
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __temporaryUnarchivingURL : §
	var assetMapSceneDescriptorsByAsset : __REAsset
 }

 struct RealityKit.Header {

	// Properties
	var versionInfo : VersionInfo
	var minVersion : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : …
 }

 struct RealityKit.VersionInfo {

	// Properties
	var id : String // +0x0
	var frameworkVersion : String // +0x10
 }

 enum RealityKit.QueueOptions {

	// Properties
	case notFromEngineQueue : (canUseEngineQueue: Bool)
	case fromEngineQueue  
 }

 struct RealityKit.ExportOptions {

	// Properties
	var queueOptions : QueueOptions // +0x0
	var compressionLevel : Int? // +0x8
	var progress : NSProgress? // +0x18
	var generateIdentifier : Bool // +0x20
	var deduplicateAssets : Bool // +0x21
	var __envelopeVersion : __AssetBundleEnvelopeVersion // +0x22
 }

 struct RealityKit.LoadOptions {

	// Properties
	var queueOptions : QueueOptions // +0x0
	var materialDefinition : __MaterialDefinitionOverride // +0x8
	var downsamplingStrategy : __DownsamplingStrategy // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var performanceReport : 54 // +0x48
 }

 struct RealityKit.__MaterialDefinitionOverride {

	// Properties
	let materialDefinition : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let serviceLocator : Y4 // +0x10
 }

 struct RealityKit.AssetMap {

	// Properties
	var scenes : SceneDescriptor // +0x0
 }

 struct RealityKit.SceneDescriptor {

	// Properties
	var fileName : String
	var sceneName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sceneIdentifier : …
	var sceneCompatibilityVariants : SceneCompatibilityVariant
 }

 enum RealityKit.__RealityFileError {

	// Properties
	case unsupportedVersion : Int
 }

 enum RealityKit.__AssetBundleEnvelopeVersion {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case specificVersion : +ÿ
	case defaultVersion  
 }

 struct RealityKit.__Archiving { }

 class RealityKit.Operation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : Y4 // +0x10 (0x8)

	// Swift methods
	0xd2c70  func __Archiving.Operation.archive(to:) // method 
	0xd2d40  func __Archiving.Operation.unarchive(to:withReport:) // method 
 }

 enum RealityKit.ArchivingError {

	// Properties
	case couldNotUnarchive  
	case couldNotArchive  
 }

 struct RealityKit.DeduplicationInformation {

	// Properties
	var originalAssetToDuplicates : [String : [String]] // +0x0
 }

 enum RealityKit.CodingKeys {

	// Properties
	case scenes  
 }

 struct RealityKit.SceneCompatibilityVariant {

	// Properties
	var version : Int // +0x0
	var fileName : String // +0x8
 }

 enum RealityKit.CodingKeys {

	// Properties
	case fileName  
	case sceneName  
	case sceneIdentifier  
	case sceneCompatibilityVariants  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case versionInfo  
	case minVersion  
	case identifier  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case frameworkVersion  
 }

 enum RealityKit.SerializationError {

	// Properties
	case componentNotRegistered : (componentName: String)
	case notOnTheEngineQueue : String
	case couldNotParseCustomComponent  
	case canceled  
 }

 struct RealityKit.__InternalURLs {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headerFile : Y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetMapFile : Y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deduplicationInformationFile : Y
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetFolder : Y
 }

 enum RealityKit.CodingKeys {

	// Properties
	case originalAssetToDuplicates  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case version  
	case fileName  
 }

 struct RealityKit.ModelComponent {

	// Properties
	var mesh : MeshResource // +0x0
	var materials : Material // +0x8
 }

 struct RealityKit.ChildCollection {

	// Properties
	var entity : Entity // +0x0
 }

 struct RealityKit.IndexingIterator {

	// Properties
	let _elements : A
	var _position : A.Collection.Index
 }

 class RealityKit.__RKEntityLookAtTrigger : __RKEntityTrigger { }

 struct RealityKit.AnchorCollection {

	// Properties
	var scene : Scene // +0x0
 }

 class RealityKit.EnvironmentResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreIBLAsset : 54 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreSkyboxAsset : 54 // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
	case invalidExtension : String
	case incompleteAssets : Int
 }

 class RealityKit.Scene : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreScene : Y4 // +0x10 (0x8)
	var __audioListener : Entity // +0x18 (0x8)
	var internalAudioListener : Entity // +0x20 (0x8)
	var defaultCamera : Entity // +0x28 (0x8)
	var activeCamera : Entity // +0x30 (0x8)
	var entities : Entity // +0x38 (0x8)
	var $__lazy_storage_$_eventService : EventService // +0x40 (0x28)
	var $__lazy_storage_$___interactionService : __RKEntityInteractionService // +0x68 (0x10)
	var synchronizationService : SynchronizationService // +0x78 (0x10)

	// Swift methods
	0xeb930  func Scene.__coreScene.getter // getter 
	0xeb940  func Scene.name.getter // getter 
	0xeb9d0  func Scene.__audioListener.getter // getter 
	0xeba00  func Scene.__audioListener.setter // setter 
	0xeba20  func Scene.__audioListener.modify // modifyCoroutine 
	0xebbf0  func Scene.__initAudioChannelCaptureUnit() // method 
	0xebce0  func Scene.__startAudioChannelCapture(auAudioUnit:maxRecordingDurationInSeconds:) // method 
	0xebd10  func Scene.__stopAudioChannelCapture(auAudioUnit:) // method 
	0xebd30  func Scene.__addPostProcessingAudioEffect(_:) // method 
	0xebe30  func Scene.__defaultCamera.getter // getter 
	0xebe40  func Scene.internalActiveCamera.getter // getter 
	0xebf80  func Scene.__entities.getter // getter 
	0xebff0  func Scene.anchors.getter // getter 
	0xec010  func Scene.anchors.setter // setter 
	0xec060  func Scene.anchors.modify // modifyCoroutine 
	0xec0a0  func Scene.addAnchor(_:) // method 
	0xec0c0  func Scene.removeAnchor(_:) // method 
	0xec130  func Scene.eventService.getter // getter 
	0xec290  func Scene.engineEventService.getter // getter 
	0xec3e0  func Scene.addDefaultCamera() // method 
	0xec910  func Scene.findEntity(named:) // method 
	0xecf00  func Scene.__interactionService.getter // getter 
	0xed020  func Scene.synchronizationService.getter // getter 
	0xed060  func Scene.synchronizationService.setter // setter 
	0xed080  func Scene.synchronizationService.modify // modifyCoroutine 
 }

 class RealityKit.__RKEntityAnimateAction : __RKEntityAction {

	// Properties
	var duration : Double // +0x68 (0x8)
	var loopCount : Int // +0x70 (0x8)
	var clipStart : Double // +0x78 (0x8)
	var clipDuration : Double // +0x80 (0x8)
	var loopBehavior : REAnimationLoopBehavior // +0x88 (0x1)
	var clipReversed : Bool // +0x89 (0x1)
	var animationSpeed : Float // +0x8c (0x4)
	var muteAudio : Bool // +0x90 (0x1)
	var audioGain : Double // +0x98 (0x8)
	var targetAnimationEntity : Entity // +0xa0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var animationComponents :  empty-list  // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bb74000624b0 (0x374000624b0) in binary!
	0x18000000c  @objc __RKEntityAnimateAction.(null) <stripped>

	// Swift methods
	0xf1130  func __RKEntityAnimateAction.stopAllAnimations(on:) // method 
	0xf1240  func __RKEntityAnimateAction.setAudioAnimationParameters(on:mute:gain:) // method 
	0xf1340  func __RKEntityAnimateAction._setupAnimations(entity:assetManager:andPlay:addToComponentArray:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bb4400062480 (0x34400062480) in binary!
	0x18000000c  @objc __RKEntityStartAnimateAction.(null) <stripped>

	// Swift methods
	0xf1cd0  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:muteAudio:audioGain:targetAnimationEntity:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bb5c00062498 (0x35c00062498) in binary!
	0x18000000c  @objc __RKEntityStopAnimateAction.(null) <stripped>
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bb2c00062468 (0x32c00062468) in binary!
	0x28000000c  @objc __RKEntityToggleAnimateAction.(null) <stripped>
 }

 struct RealityKit.__RKScenePhysics {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gravity : 56 // +0x0
	var adaptiveTimeStep : Bool // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : Y4 // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : Y4 // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RCInteractionsController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1dd3e00062718 (0x53e00062718) in binary!
	0x18000000c  @objc __RCInteractionsController.(null) <stripped>

	// Swift methods
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0xf59a0  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0xf5a60  func __RCEntity.registerCustomAction(named:action:) // method 
 }

 struct RealityKit.PhysicsMotionComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var linearVelocity : 56 // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var angularVelocity : 56 // +0x10
 }

 struct RealityKit.VideoComponent {

	// Properties
	var video : __VideoResource // +0x0
	var material : Material // +0x8
 }

 class RealityKit.__RKTimerTrigger : __RKEntityTrigger { }

 class RealityKit.RKChangeSceneActionBasicTechnique : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let rootEntity : Entity // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let targetSceneIdentifier : a // +0x2c98 (0x0)

	// Swift methods
	0xf6c10  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bac400062400 (0x2c400062400) in binary!
	0x18000000c  @objc __RKEntityFadeAction.(null) <stripped>

	// Swift methods
	0xf6d10  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1badc00062418 (0x2dc00062418) in binary!
	0x18000000c  @objc __RKFadeSceneAction.(null) <stripped>

	// Swift methods
	0xf6ee0  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subcomponent : 54 // +0x0 (0x8)

	// Swift methods
	0xf83a0  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0xf85d0  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0xf8740  func RKChangeSceneActionRuntimeTechnique.loadNextScene() // method 
	0xf8b40  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0xf9d30  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
 }

 enum RealityKit.__RKEntityAudioActionType {

	// Properties
	case play  
	case pause  
	case stop  
 }

 enum RealityKit.__RKAudioSpatialModeSelection {

	// Properties
	case pointSource  
	case ambientBed  
	case stereoBypass  
 }

 class RealityKit.__RKEntityAudioAction : __RKEntityAction {

	// Properties
	let durationForStreaming : Double // +0x68 (0x8)
	let type : __RKEntityAudioActionType // +0x70 (0x1)
	let path : String // +0x78 (0x10)
	let volume : Double // +0x88 (0x8)
	let loops : Bool // +0x90 (0x1)
	let spatialMode : __RKAudioSpatialModeSelection // +0x91 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackToken : ‡1 // +0x98 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var audioAssetRef : 54 // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1baac000623e8 (0x2ac000623e8) in binary!
	0x18000000c  @objc __RKEntityAudioAction.(null) <stripped>

	// Swift methods
	0xfb990  func __RKEntityAudioAction.__audioAssetRef.getter // getter 
	0xfb9a0  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : á6
	var entity : Entity

	// Swift methods
	0xfd350  func AnimationPlaybackController.__identifier.getter // getter 
	0xfd3e0  func AnimationPlaybackController.entity.getter // getter 
	0xfd410  func AnimationPlaybackController.isPaused.getter // getter 
	0xfd430  func AnimationPlaybackController.isComplete.getter // getter 
	0xfd4e0  func AnimationPlaybackController.hash(into:) // method 
	0xfd540  func AnimationPlaybackController.pause() // method 
	0xfd560  func AnimationPlaybackController.resume() // method 
	0xfd580  func AnimationPlaybackController.stop() // method 
	0xfd650  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var uuidToEntity :  empty-list 

	// Swift methods
	0xfe5a0  class func __RKEntityLookupTable.__allocating_init() // init 
	0xfe640  func __RKEntityLookupTable.entity(for:) // method 
	0xfe700  func __RKEntityLookupTable.uuid(for:) // method 
	0xfec30  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0xfecc0  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreEntity : Y4 // +0x10 (0x8)
	var swiftChildren : Entity // +0x18 (0x8)

	// Swift methods
	0xff540  func Entity.__coreEntity.getter // getter 
	0xff550  func Entity.components.getter // getter 
	0xff570  func Entity.components.setter // setter 
	0xff5a0  func Entity.components.modify // modifyCoroutine 
	0xff610  func Entity.scene.getter // getter 
	0xff670  func Entity.name.getter // getter 
	0xff690  func Entity.name.setter // setter 
	0xff6e0  func Entity.name.modify // modifyCoroutine 
	0xff780  func Entity.__boundingBox.getter // getter 
	0xff800  func Entity.isActive.getter // getter 
	0xff810  func Entity.isAnchored.getter // getter 
	0xff820  func Entity.isEnabled.getter // getter 
	0xff830  func Entity.isEnabled.setter // setter 
	0xff850  func Entity.isEnabled.modify // modifyCoroutine 
	0xff8b0  func Entity.isEnabledInHierarchy.getter // getter 
	0xffa20  class func Entity.__allocating_init() // init 
	0xffd80  class func Entity.__allocating_init(_coreEntity:) // init 
	0xff8c0  func Entity.didClone(from:) // method 
	0xff8d0  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity
	var collidingEntities : Entity
	var tags : [String]

	// Swift methods
	0x101060  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float
	let block : ()
	let durationWiggleRoom : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1ba94000623d0 (0x294000623d0) in binary!
	0x18000000c  @objc __RKWaitAction.(null) <stripped>

	// Swift methods
	0x102c20  class func __RKWaitAction.__allocating_init(duration:block:) // init 
 }

 class RealityKit.__ARReferenceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let plugins : __ARReferenceProvidingPlugin

	// Swift methods
	0x103e20  func __ARReferenceProvider.fetchPlugin(forGroup:) // method 
	0x103fc0  func __ARReferenceProvider.supportsGroup(named:) // method 
	0x104010  func __ARReferenceProvider.fetchReferenceObject(group:name:) // method 
	0x1040b0  func __ARReferenceProvider.fetchReferenceImage(group:name:physicalWidth:) // method 
 }

 class RealityKit.__RKVisibilityShowPopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKEntityCustomAction : __RKEntityAction {

	// Properties
	var handler : Entity
	let identifier : String
	let customArguments : [String : String]
	var customArgumentsBlock : Entity

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1ba7c000623b8 (0x27c000623b8) in binary!
	0xa8000000c  @objc __RKEntityCustomAction.(null) <stripped>

	// Swift methods
	0x105040  func __RKEntityCustomAction.handler.getter // getter 
	0x1050a0  func __RKEntityCustomAction.handler.setter // setter 
	0x105110  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x1052e0  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x105330  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x105390  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x1053e0  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
 }

 class RealityKit.__RKEmphasisFloatAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.Box {
 class RealityKit.MutableBox {
 struct RealityKit.Indirect {

	// Properties
	var box : MutableBox
 }

 class RealityKit.PhysicsMaterialResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var __staticFriction : Float
	var __dynamicFriction : Float
	var __restitution : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __coreAsset : 54

	// Swift methods
	0x1080d0  func PhysicsMaterialResource.__staticFriction.getter // getter 
	0x108180  func PhysicsMaterialResource.__dynamicFriction.getter // getter 
	0x108230  func PhysicsMaterialResource.__restitution.getter // getter 
	0x1083a0  func PhysicsMaterialResource.makeCoreAsset() // method 
 }

 class RealityKit.__RKEmphasisBounceAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.__RKEmphasisJiggleAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.__EntityAccessibilityWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var entity : Entity
	let rootEntityWrapper : __EntityAccessibilityWrapper

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1dcae00062350 (0x4ae00062350) in binary!
	0x21b38  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1fdb400062328 (0x5b400062328) in binary!
	0x1fdd2  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1fdc600062300 (0x5c600062300) in binary!
	0x1dc72  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1dc66000622d8 (0x466000622d8) in binary!
	0x1fda2  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1dc4e00062628 (0x44e00062628) in binary!
	0x1dc3a  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8c158  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc8790  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffdf538  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff62f0  @objc __EntityAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff3148  @objc __EntityAccessibilityWrapper.(null) <stripped>

	// Swift methods
	0x10e850  func __EntityAccessibilityWrapper.isEntityRoot.getter // getter 
	0x10e9b0  func __EntityAccessibilityWrapper.isEntityAccessible.getter // getter 
	0x10eaf0  func __EntityAccessibilityWrapper.entityLabel.getter // getter 
	0x10ec70  func __EntityAccessibilityWrapper.entityDescription.getter // getter 
 }

 struct RealityKit.__AccessibilityComponent {

	// Properties
	var isRoot : Bool // +0x0
	var isEnabled : Bool // +0x1
	var label : String? // +0x8
	var description : String? // +0x18
 }

 struct RealityKit.__LoadOptions {

	// Properties
	var downsamplingStrategy : __DownsamplingStrategy // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityPerformanceReport : 54 // +0x28
 }

 class RealityKit.RealityFileLoadInformationResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct RealityKit.RealityFileLoadInformation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : Y
	var sceneName : String?
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case importFailureWithURL : Y
	case useSceneNameNotFileName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidPathToRealityFile : Y
	case wrongEntityType  
	case invalidJoints  
 }

 struct RealityKit.BoundingBox {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var min : 56 // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var max : 56 // +0x10
 }

 class RealityKit.__SceneResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : Y4

	// Swift methods
 }

 class RealityKit.BoxedSubscription : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : )

	// Swift methods
 }

 class RealityKit.REEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreHandle : Y4
	var dispatchersByHandle : DispatcherHandle

	// Swift methods
 }

 struct RealityKit.DispatcherHandle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventID : á6 // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceObject : 54 // +0x8
 }

 class RealityKit.ShapeResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreAsset : Y4 // +0x10 (0x8)
	let pose : REPoseF // +0x20 (0x20)

	// Swift methods
	0x1248d0  func ShapeResource.hash(into:) // method 
	0x124910  func ShapeResource.hashValue.getter // getter 
 }

 class RealityKit.__RKEntityInteractionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __RKEntityInteractionService {

	// Properties
	var customTriggerFiredActions : __RKEntityAction
	var areInteractionsEnabled : Bool
	var automaticallyInvokesStartTrigger : Bool
	var _proximityEnabled : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sceneRef : Y4
	var __entityLookupTable : __RKEntityLookupTable
	var __simulationSceneCoordinator : __RKSimulationSceneCoordinator
	var __runtimeSceneCoordinator : __RKRuntimeSceneCoordinator
	var __interactions : __RKEntityInteraction

	// Swift methods
	0x126640  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x126670  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x1266a0  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x1266d0  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x126910  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x126b20  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x127940  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x127b20  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x127d30  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x127e20  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x128090  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x1280c0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x1280f0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x128140  func __RKEntityInteractionManager.proximityEnabled.getter // getter 
	0x128150  func __RKEntityInteractionManager.proximityEnabled.setter // setter 
	0x128160  func __RKEntityInteractionManager.proximityEnabled.modify // modifyCoroutine 
	0x128410  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x128440  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x128480  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x128550  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x128580  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x1285c0  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x128680  func __RKEntityInteractionManager.__runtimeSceneCoordinator.getter // getter 
	0x1286b0  func __RKEntityInteractionManager.__runtimeSceneCoordinator.setter // setter 
	0x1286f0  func __RKEntityInteractionManager.__runtimeSceneCoordinator.modify // modifyCoroutine 
	0x1287b0  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x1287e0  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x128af0  func __RKEntityInteractionManager.__actions.getter // getter 
	0x128b40  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x128c00  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x128dd0  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x128e10  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x129d60  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x129f70  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x12b770  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x12b940  func __RKEntityInteractionManager.action(for:) // method 
 }

 class RealityKit.__USDARReferenceProvidingPlugin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var arReferenceByFullSchemePath : [String : Swift.AnyObject]

	// Swift methods
 }

 enum RealityKit.NewPropertyError {

	// Properties
	case couldNotCreateProperty : USKDataType
	case nilValue  
 }

 enum RealityKit.NewNodeError {

	// Properties
	case couldNotCreateNode : USKNodeType
 }

 enum RealityKit.PropertyValueRequestError {

	// Properties
	case propertyDoesNotExist  
 }

 enum RealityKit.CollisionCastQueryType {

	// Properties
	case nearest  
	case all  
	case any  
 }

 struct RealityKit.CollisionGroup {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Õ6 // +0x0
 }

 struct RealityKit.CollisionFilter {

	// Properties
	var group : CollisionGroup // +0x0
	var mask : CollisionGroup // +0x4
 }

 struct RealityKit.CollisionCastHit {

	// Properties
	var entity : Entity // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : 56 // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var normal : 56 // +0x20
	var distance : Float // +0x30
 }

 enum RealityKit.Error {

	// Properties
	case InvalidTypePassed  
 }

 enum RealityKit.Error {

	// Properties
	case InvalidTypePassed  
 }

 enum RealityKit.Error {

	// Properties
	case InvalidTypePassed  
 }

 enum RealityKit.InteractionSpecificationsUSDEncodingErrors {

	// Properties
	case MissingTarget  
	case NotImplemented  
	case USDKitError  
 }

 enum RealityKit.__RKEntitySpinDirectionType {

	// Properties
	case clockwise  
	case counterclockwise  
 }

 class RealityKit.__RKEntitySpinAction : __RKEntityAction {

	// Properties
	let duration : Float
	let iterations : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	let axis : 56
	let direction : __RKEntitySpinDirectionType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b9e400062320 (0x1e400062320) in binary!
	0x18000000c  @objc __RKEntitySpinAction.(null) <stripped>

	// Swift methods
	0x143b40  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
 }

 struct RealityKit.PerspectiveCameraComponent {

	// Properties
	var near : Float // +0x0
	var far : Float // +0x4
	var fieldOfViewInDegrees : Float // +0x8
 }

 struct RealityKit.__EntityInfoComponent {

	// Properties
	var rawData : UnsafeMutableRawPointer // +0x0
	var cleanupHelper : IntrospectionDataCleanupHelper // +0x8
 }

 enum RealityKit.CodingKeys {

	// Properties
	case isNinja  
	case entityTypeName  
 }

 class RealityKit.NetPassthroughEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_encoder : Ñà
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_payload : [á

	// Swift methods
	0x146be0  func NetPassthroughEncoder.encode<A>(_:) // method 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_decoder : ·à
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_payload : [á

	// Swift methods
	0x146c80  func NetPassthroughDecoder.decode<A>(_:) // method 
 }

 struct RealityKit.PrereleaseHeader {

	// Properties
	var schemaVersion : SchemaVersion
	var versionInfo : VersionInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : …
 }

 struct RealityKit.VersionInfo {

	// Properties
	var id : String // +0x0
	var frameworkVersion : String // +0x10
 }

 enum RealityKit.WritingPhases {

	// Properties
	case gatheringAssets  
	case writingAssets  
	case zipping  
 }

 enum RealityKit.LoadNamedFileError {

	// Properties
	case unknownReadError  
	case invalidURL  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case frameworkVersion  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case schemaVersion  
	case versionInfo  
	case identifier  
 }

 struct RealityKit.SchemaVersion {

	// Properties
	var id : String // +0x0
	var sdk : Int // +0x10
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case sdk  
 }

 struct RealityKit.RealityProcessorLoader: __REAssetBundleLoader {

	// Properties
	var assetService : __REAssetService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : Y
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityArchive : Y4
	var realityFileIdentifier : String
	var urls : __InternalURLs
 }

 struct RealityKit.BOMLoader: __REAssetBundleLoader {

	// Properties
	var assetService : __REAssetService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var temporaryUnarchivingURL : Y
	var urls : __InternalURLs
	var realityFileSchemaPrefix : String
	var realityFileIdentifier : String
 }

 struct RealityKit.RealityProcessorTextureMetadata: __REAssetBundleTextureMetadata {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityFileUrl : Y
	var entryName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityArchive : Y4
 }

 struct RealityKit.LoadError {

	// Properties
	let message : String // +0x0
 }

 struct RealityKit.BOMTextureMetadata: __REAssetBundleTextureMetadata {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : Y
	var assetService : __REAssetService
	var realityFileIdentifier : String
 }

 class RealityKit.LoadRequest {
 class RealityKit.LoadTaskSubscription {
 struct RealityKit.__RKMaterialParameterBlock {

	// Properties
	let transparentPassTechniqueMapping : TransparentPass // +0x0
	var transparentPassTechniqueMappingEnabled : Bool // +0x8
	var parameters : Parameter // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var generation : Õ6 // +0x18
 }

 enum RealityKit.Parameter {

	// Properties
	case texture : TextureResource
	case float : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float2 : ÷ì
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float3 : 56
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float4 : “5
	case float2x2 : simd_float2x2
	case float3x3 : simd_float3x3
	case float4x4 : simd_float4x4
	case default  
 }

 enum RealityKit.TransparentPass {

	// Properties
	case Transparent  
	case TransparentAR  
	case TransparentDynamicLighting  
	case TransparentARDynamicLighting  
 }

 enum RealityKit.OpaquePass {

	// Properties
	case Opaque  
	case OpaqueAR  
	case OpaqueDynamicLighting  
	case OpaqueARDynamicLighting  
	case Shadow  
 }

 enum RealityKit.__PackageTranslationError {

	// Properties
	case noScenes : (message: String)
	case noScenesMetadata : (message: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failedToImportUSD :  first-element-marker 
	case invalidDictionary : (message: String, invalidDictionary: [String : Any]?)
 }

 class RealityKit.__SceneImportOperation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreOperation : Y4

	// Swift methods
 }

 struct RealityKit.__ImportedScene {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sceneIdentifier : a
	let sceneName : String
	let sceneAsset : __REAsset
	let sceneActive : Bool
 }

 enum RealityKit.InternalError {

	// Properties
	case unknown  
 }

 struct RealityKit.ImportedScene {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sceneIdentifier : a
	let sceneName : String
	let sceneAsset : __REAsset
	let sceneActive : Bool
 }

 enum RealityKit.PhysicsBodyMode {

	// Properties
	case static  
	case kinematic  
	case dynamic  
 }

 struct RealityKit.PhysicsMassProperties {

	// Properties
	var mass : Float // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var inertia : 56 // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var centerOfMass : ë // +0x20
 }

 class RealityKit.__RKEntityForceAction : __RKEntityAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var force : ‘$
WARNING: couldn't find address 0x0 (0x0) in binary!
	var velocity : ‘$
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b9cc00062308 (0x1cc00062308) in binary!
	0x18000000c  @objc __RKEntityForceAction.(null) <stripped>

	// Swift methods
	0x180bf0  func __RKEntityForceAction.force.getter // getter 
	0x180cc0  func __RKEntityForceAction.velocity.getter // getter 
	0x180a30  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
 }

 struct RealityKit.REAngleF {

	// Properties
	var radians : Float // +0x0
 }

 enum RealityKit.RotationOrder {

	// Properties
	case xyz  
	case yzx  
	case zxy  
	case xzy  
	case yxz  
	case zyx  
 }

 class RealityKit.__RKVisibilityHideScaleAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKVisibilityHideScaleUpAnimation : __RKVisibilityBaseAnimation { }

 struct RealityKit.__USDExportContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __resolver : Û // +0x0
	var __scene : USKScene // +0x10
	var instanceMapper : InstanceMapper // +0x18
 }

 class RealityKit.InstanceMapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __uuidToUSDInstance :  empty-list 

	// Swift methods
	0x1845a0  func __USDExportContext.InstanceMapper.addMapping(from:to:) // method 
	0x184700  func __USDExportContext.InstanceMapper.getMapping(_:) // method 
 }

 struct RealityKit.__USKSceneWrapper {

	// Properties
	let erasedValue : Any // +0x0
 }

 struct RealityKit.__USKNodeWrapper {

	// Properties
	let erasedValue : Any // +0x0
 }

 struct RealityKit.__USKObjectPathWrapper {

	// Properties
	let erasedValue : Any // +0x0
 }

 struct RealityKit.__USKNodeSpecifierTypeWrapper {

	// Properties
	let erasedValue : Any // +0x0
 }

 struct RealityKit.__USDEncoder {

	// Properties
	var exportContext : __USDExportContext // +0x0
 }

 struct RealityKit.USDDecodableContext {

	// Properties
	let uskNode : USKNode // +0x0
	let uskScene : USKScene // +0x8
	let scene : Scene // +0x10
	let usdNodeToEntityMapping : [String : String] // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scenePathToUUIDMapping : String // +0x20
	let actionAssets : [String : String] // +0x28
 }

 class RealityKit.AnimationResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : Y4
	let name : String?

	// Swift methods
	0x1915c0  func AnimationResource.__coreAsset.getter // getter 
 }

 struct RealityKit.ARAnchor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : a
	let transform : simd_float4x4
 }

 struct RealityKit.ARFrame {

	// Properties
	var camera : ARAnchor
 }

 class RealityKit.__RKStartTrigger : __RKEntityTrigger {

	// Properties
	var triggered : Bool

	// Swift methods
 }

 class RealityKit.MeshResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : 54

	// Swift methods
	0x195390  func MeshResource.expectedMaterialCount.getter // getter 
	0x1953b0  func MeshResource.bounds.getter // getter 
 }

 class RealityKit.PlaneMeshResource : MeshResource {

	// Properties
	var planeOptions : REGeomBuildPlaneOptions
 }

 class RealityKit.SphereMeshResource : MeshResource {

	// Properties
	var sphereOptions : REGeomBuildSphereOptions
 }

 class RealityKit.BoxMeshResource : MeshResource {

	// Properties
	var boxOptions : REGeomBuildBoxOptions
	var splitFaces : Bool
 }

 class RealityKit.TextMeshResource : MeshResource {

	// Properties
	var string : String
	var extrusionDepth : Float
	var font : UIFont
	var pointSize : Float
	var containerFrame : CGRect
	var alignment : CTTextAlignment
	var lineBreakMode : CTLineBreakMode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var segmentDensity : —ë
 }

 class RealityKit.__MeshCompileOptions : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let core : Y4

	// Swift methods
	0x195c20  class func __MeshCompileOptions.__allocating_init() // init 
 }

 struct RealityKit.CollisionComponent {

	// Properties
	var shapes : ShapeResource // +0x0
	var mode : Mode // +0x8
	var filter : CollisionFilter // +0xc
 }

 enum RealityKit.Mode {

	// Properties
	case default  
	case trigger  
 }

 class RealityKit.InteractionNotificationsManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2116e00062758 (0x16e00062758) in binary!
	0x18000000c  @objc InteractionNotificationsManager.(null) <stripped>

	// Swift methods
 }

 struct RealityKit.AnchoringComponent {

	// Properties
	let target : Target // +0x0
	var previousWorldTransform : simd_float4x4 // +0x50
 }

 enum RealityKit.Target {

	// Properties
	case world : simd_float4x4
	case camera  
 }

 class RealityKit.__RKVisibilityHideDropAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__ServiceLocator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreServiceLocator : Y4
	var engine : __Engine
	var eventService : EventService
	var renderService : __RenderService
	var sceneService : __SceneService
	var assetService : __REAssetService
	var loadService : LoadManager

	// Swift methods
	0x19b9a0  func __ServiceLocator.__engineRef.getter // getter 
	0x19baa0  func __ServiceLocator.engine.getter // getter 
	0x19bad0  func __ServiceLocator.engine.setter // setter 
	0x19bb30  func __ServiceLocator.engine.modify // modifyCoroutine 
	0x19bc00  func __ServiceLocator.__renderService.getter // getter 
	0x19bc20  func __ServiceLocator.__sceneService.getter // getter 
	0x19bc40  func __ServiceLocator.__assetService.getter // getter 
 }

 struct RealityKit.Transform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : 56 // +0x0
	var rotation : simd_quatf // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var translation : 56 // +0x20
 }

 class RealityKit.AssetServiceScopedRegistry {
 class RealityKit.__VideoResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : Y4
	var avPlayer : AVPlayer?

	// Swift methods
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
 }

 class RealityKit.AudioResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetRef : Y4

	// Swift methods
	0x19f7a0  func AudioResource.inputMode.getter // getter 
	0x19f820  func AudioResource.inputMode.setter // setter 
	0x19f850  func AudioResource.inputMode.modify // modifyCoroutine 
 }

 enum RealityKit.InputMode {

	// Properties
	case nonSpatial  
	case spatial  
	case ambient  
 }

 class RealityKit.AudioError : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let message : String

	// Swift methods
	0x19f910  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x19faf0  func AudioFileResource.loadingStrategy.getter // getter 
	0x19fb10  func AudioFileResource.loadingStrategy.setter // setter 
	0x19fb30  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x19fbd0  func AudioFileResource.shouldLoop.getter // getter 
	0x19fbf0  func AudioFileResource.shouldLoop.setter // setter 
	0x19fc10  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
	0x19fc60  func AudioFileResource.__duration.getter // getter 
 }

 enum RealityKit.LoadingStrategy {

	// Properties
	case stream  
	case preload  
 }

 struct RealityKit.ModelDebugOptionsComponent {

	// Properties
	var visualizationMode : VisualizationMode // +0x0
 }

 enum RealityKit.VisualizationMode {

	// Properties
	case none  
	case normal  
	case tangent  
	case bitangent  
	case baseColor  
	case textureCoordinates  
	case finalColor  
	case finalAlpha  
	case roughness  
	case metallic  
	case ambientOcclusion  
	case specular  
	case emissive  
	case clearcoat  
	case clearcoatRoughness  
	case lightingDiffuse  
	case lightingSpecular  
 }

 enum RealityKit.__RKEntityActionAnimationStyle {

	// Properties
	case basic  
	case playful  
	case wild  
 }

 enum RealityKit.__RKEntityShowActionBuildInAnimationType {

	// Properties
	case none  
	case moveFromLeft  
	case moveFromRight  
	case moveFromFront  
	case moveFromRear  
	case moveFromAbove  
	case moveFromBelow  
	case pop  
	case scale  
	case scaleBig  
 }

 enum RealityKit.__RKEntityHideActionBuildOutAnimationType {

	// Properties
	case none  
	case moveToLeft  
	case moveToRight  
	case moveToFront  
	case moveToRear  
	case moveToAbove  
	case moveToBelow  
	case pop  
	case scale  
	case scaleUp  
 }

 class RealityKit.__RKEntityVisibilityAction : __RKEntityAction {

	// Properties
	var startTime : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : ‡1
	var originalShadowIntensity : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b95400062290 (0x15400062290) in binary!
	0x18000000c  @objc __RKEntityVisibilityAction.(null) <stripped>

	// Swift methods
	0x1a7970  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b93c00062278 (0x13c00062278) in binary!
	0x18000000c  @objc __RKEntityToggleVisibilityAction.(null) <stripped>
 }

 class RealityKit.__RKEntitySetOpacityAction : __RKEntityVisibilityAction {

	// Properties
	let duration : Float
	let opacity : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fadeSubscription : )
	var initialOpacity : Float?
	var stepSize : Float?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b96c000622a8 (0x16c000622a8) in binary!
	0x18000000c  @objc __RKEntitySetOpacityAction.(null) <stripped>

	// Swift methods
	0x1a5f30  class func __RKEntitySetOpacityAction.__allocating_init(targetEntity:duration:opacity:) // init 
 }

 class RealityKit.__RKEntityShowAction : __RKEntityVisibilityAction {

	// Properties
	let duration : Float
	let distance : Float
	let ease : __RKEntityMoveEase
	let easeType : __RKEntityMoveEaseType
	let fadeIn : Bool
	let finalOpacity : Float
	let respectPhysics : Bool
	let physicsAngularCoefficient : Float
	let physicsLinearCoefficient : Float
	let animationStyle : __RKEntityActionAnimationStyle
	let buildInAnimationType : __RKEntityShowActionBuildInAnimationType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishedSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fadeSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b984000622c0 (0x184000622c0) in binary!
	0x18000000c  @objc __RKEntityShowAction.(null) <stripped>

	// Swift methods
	0x1a5df0  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x1a8dc0  func __RKEntityShowAction.updateFadeIn(_:) // method 
 }

 class RealityKit.__RKEntityHideAction : __RKEntityVisibilityAction {

	// Properties
	let duration : Float
	let distance : Float
	let ease : __RKEntityMoveEase
	let easeType : __RKEntityMoveEaseType
	let fadeOut : Bool
	let finalOpacity : Float
	let respectPhysics : Bool
	let physicsAngularCoefficient : Float
	let physicsLinearCoefficient : Float
	let animationStyle : __RKEntityActionAnimationStyle
	let buildOutAnimationType : __RKEntityHideActionBuildOutAnimationType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishedSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fadeSubscription : )
	var deadline : Double

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b99c000622d8 (0x19c000622d8) in binary!
	0x18000000c  @objc __RKEntityHideAction.(null) <stripped>

	// Swift methods
	0x1a5e90  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x1ac170  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x1af0d0  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
 }

 class RealityKit.__RKSoundTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityPlacementTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityRemovalTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityInteraction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var trigger : __RKEntityTrigger
	var action : __RKEntityAction
	var alternateAction : __RKEntityAction
	var enabled : Bool
	var accessibilityDescription : String?

	// Swift methods
	0x1b3030  func __RKEntityInteraction.trigger.getter // getter 
	0x1b30f0  func __RKEntityInteraction.action.getter // getter 
	0x1b31a0  func __RKEntityInteraction.enabled.getter // getter 
	0x1b31d0  func __RKEntityInteraction.enabled.setter // setter 
	0x1b3200  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x1b32e0  func __RKEntityInteraction.accessibilityDescription.getter // getter 
	0x1b3320  func __RKEntityInteraction.accessibilityDescription.setter // setter 
	0x1b3360  func __RKEntityInteraction.accessibilityDescription.modify // modifyCoroutine 
	0x1b33a0  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x1b3450  func __RKEntityInteraction.fire(context:) // method 
	0x1b3860  func __RKEntityInteraction.description.getter // getter 
 }

 class RealityKit.RKEntityInteractionAccessibilityWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let interaction : __RKEntityInteraction

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1db56000621b8 (0x356000621b8) in binary!
	0x1db42  @objc RKEntityInteractionAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1db3e00062518 (0x33e00062518) in binary!
	0x1db2a  @objc RKEntityInteractionAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x36e6f697463  @objc RKEntityInteractionAccessibilityWrapper.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x1999999999a  @objc RKEntityInteractionAccessibilityWrapper.(null) <stripped>

	// Swift methods
 }

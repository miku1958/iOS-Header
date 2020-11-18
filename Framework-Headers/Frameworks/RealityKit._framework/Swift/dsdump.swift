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
 protocol RealityKit.RERenderService // 2 requirements
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
 protocol RealityKit.__ARViewDelegatePrivate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol RealityKit.Component // 8 requirements
 {
	// class getter
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
 protocol RealityKit.HasHierarchy // 0 requirements
 {
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
	let introspectionStruct : A // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A // +0x18 (0x8)

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

 enum RealityKit.__RKSimulationSceneCoordinatorState {

	// Properties
	case stopped  
	case running  
 }

 class RealityKit.__RKSimulationSceneCoordinator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : __RKSimulationSceneCoordinatorDelegate // +0x10 (0x10)
	var simulationState : __RKSimulationSceneCoordinatorState // +0x20 (0x1)

	// Swift methods
	0xdc10  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xdea0  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xded0  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xdf20  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xe080  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xe0b0  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xe0e0  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xe120  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
 }

 enum RealityKit.TriggerUSDLoadingError {

	// Properties
	case unableToCreateAnyValidTriggerSpecifications  
 }

 class RealityKit.IntrospectionDataCleanupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var rawData : UnsafeMutableRawPointer // +0x10 (0x8)

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
	let duration : Float // +0x64 (0x4)
	let animationDuration : Float // +0x68 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let face : µ" // +0x70 (0x10)
	let rotation : Float // +0x80 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let axis : µ" // +0x90 (0x10)
	let loops : Bool // +0xa0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0xa8 (0x28)
	var deadline : Double // +0xd0 (0x8)
	var animationDeadline : Double // +0xd8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : È // +0xe0 (0x9)
	var didInit : Bool // +0xe9 (0x1)
	var faceRotation : simd_quatf // +0xf0 (0x10)

	// ObjC -> Swift bridged methods
	0x19480  @objc __RKEntityLookAtCameraAction.copy(with:)

	// Swift methods
	0x17f10  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:animationDuration:direction:rotation:upVector:loops:) // init 
	0x18510  func __RKEntityLookAtCameraAction.getPose(cameraPosition:currentPose:) // method 
	0x18930  func __RKEntityLookAtCameraAction.createLookAtAnimation() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var resolvedURLByAssetPathPrefixQueue : OS_dispatch_queue // +0x10 (0x8)
	var resolvedURLByAssetPathPrefix : [String : String] // +0x18 (0x8)

	// Swift methods
	0x19a60  class func __RealityFileURLResolver.__allocating_init() // init 
	0x1a440  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x1a520  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x1a970  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x1ae50  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x1b190  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x1b390  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x1b4a0  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x1b580  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
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

 enum RealityKit.__RKEmphasisFlipVariant {

	// Properties
	case one  
	case two  
	case three  
	case four  
	case five  
 }

 class RealityKit.__RKEmphasisFlipAnimation : __RKEmphasisBaseAnimation { }

 enum RealityKit.__RKEntityTriggerSpecification {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case proximity : õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case tapTarget : w
WARNING: couldn't find address 0x0 (0x0) in binary!
	case collision : g
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
 }

 struct RealityKit.__RKWaitActionArguments {

	// Properties
	var duration : Float // +0x0
 }

 struct RealityKit.__RKEntityCustomActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
	var actionIdentifier : String
	var customArguments : [String : String]
 }

 struct RealityKit.__RKChangeSceneActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sceneRoot : Q
WARNING: couldn't find address 0x0 (0x0) in binary!
	var targetSceneIdentifier : Q
 }

 struct RealityKit.__RKFadeSceneActionArguments {

	// Properties
	var targetOpacity : Float // +0x0
	var duration : Float? // +0x4
 }

 struct RealityKit.__RKEntityFadeActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
	var targetOpacity : Float
	var duration : Float?
 }

 struct RealityKit.__RKEntityToggleAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
 }

 struct RealityKit.__RKEntityStartAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
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
	var targetAnimation : 9
 }

 struct RealityKit.__RKEntityStopAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
 }

 struct RealityKit.__RKEntityToggleVisibilityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
 }

 struct RealityKit.__RKEntityShowActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
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
	var target : Q
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
	var target : Q
	var duration : Float?
	var iterations : Float?
	var animationStyle : __RKEntityActionAnimationStyle
	var emphasisAnimationType : __RKEntityEmphasisAnimationType
 }

 struct RealityKit.__RKEntityAudioActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
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
	var target : Q
WARNING: couldn't find address 0x0 (0x0) in binary!
	var location : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _orientation : -
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
	var target : Q
WARNING: couldn't find address 0x0 (0x0) in binary!
	var force : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var velocity : 
 }

 struct RealityKit.__RKEntitySwapEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newTarget : Q
	var buildOutAction : __RKEntityHideActionArguments
	var buildInAction : __RKEntityShowActionArguments
 }

 struct RealityKit.__RKEntitySpinActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
	var duration : Float?
	var iterations : Float?
	var direction : __RKEntitySpinDirectionType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var axis : 
 }

 struct RealityKit.__RKEntityOrbitEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pivotTarget : Q
	var duration : Float?
	var rotations : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var orbitalAxis : 
	var orientToPath : Bool?
	var spinDirection : __RKEntitySpinDirectionType
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
 }

 struct RealityKit.__RKEntityLookAtCameraActionArguments: __RKSpecificationHasTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var target : Q
	var duration : Float?
	var animationDuration : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var direction : 
	var rotation : Float?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upVector : 
	var loops : Bool?
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
	let duration : Float // +0x64 (0x4)
	let iterations : Float // +0x68 (0x4)
	let animationStyle : __RKEntityActionAnimationStyle // +0x6c (0x1)
	let emphasisAnimationType : __RKEntityEmphasisAnimationType // +0x6d (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x70 (0x28)
	var deadline : Double // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : È // +0xa0 (0x9)

	// ObjC -> Swift bridged methods
	0x69360  @objc __RKEntityEmphasisAction.copy(with:)

	// Swift methods
	0x68230  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
 }

 struct RealityKit.__RKSceneUUIDComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawUUID : y // +0x0
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : A // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.MultipeerConnectivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SynchronizationService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreInvalidPeerID : I#
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreMultipeerConnectivityService : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreServiceLocator : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreNetworkSystem : A
	let session : MCSession

	// Swift methods
	0x6af10  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x6afb0  func MultipeerConnectivityService.entity(for:) // method 
	0x6afe0  func MultipeerConnectivityService.owner(of:) // method 
	0x6b0f0  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x6b1b0  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x6b2a0  func MultipeerConnectivityService.__toCore(peerID:) // method 
 }

 class RealityKit.NetworkCompatibilityToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreToken : A

	// Swift methods
	0x6b750  class func NetworkCompatibilityToken.__allocating_init(from:) // init 
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
	let coreAsset : A // +0x10 (0x8)

	// Swift methods
	0x6c3f0  func TextureResource.__coreAsset.getter // getter 
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case importFailureWithURL : ü˝
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
	0x73090  @objc __RKEntityActionGroup.copy(with:)

	// Swift methods
	0x6f930  func __RKEntityActionGroup.actions.getter // getter 
	0x6f9e0  func __RKEntityActionGroup.ordering.getter // getter 
	0x6fa90  func __RKEntityActionGroup.loopCount.getter // getter 
	0x6fac0  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x6fb50  func __RKEntityActionGroup.collapseRedundantGroups() // method 
	0x70440  func __RKEntityActionGroup.reorderConcurrentActions() // method 
	0x70a10  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x70f60  func __RKEntityActionGroup.performSequentialAction(at:context:) // method 
	0x718b0  func __RKEntityActionGroup.allActions() // method 
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
	var userForce : µ" // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userTorque : µ" // +0x70
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userLinearImpulse : µ" // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userAngularImpulse : µ" // +0x90
 }

 class RealityKit.__RKRuntimeSceneCoordinator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observers : WeakObserver // +0x10 (0x8)

	// Swift methods
	0x75cf0  class func __RKRuntimeSceneCoordinator.__allocating_init() // init 
	0x75d80  func __RKRuntimeSceneCoordinator.willSwap(fromEntity:toEntity:anchoringTarget:) // method 
	0x75f60  func __RKRuntimeSceneCoordinator.didSwap(fromEntity:toEntity:anchoringTarget:) // method 
	0x76140  func __RKRuntimeSceneCoordinator.addObserver(observer:) // method 
	0x76300  func __RKRuntimeSceneCoordinator.removeObserver(observer:) // method 
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
	let introspectionStruct : A // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RKEntityDragTrigger : __RKEntityTrigger { }

 class RealityKit.__RKVisibilityShowScaleAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKVisibilityShowScaleDownAnimation : __RKVisibilityBaseAnimation { }

 enum RealityKit.__RKEmphasisSpinVariant {

	// Properties
	case one  
	case two  
	case three  
	case four  
	case five  
 }

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
	let introspectionStruct : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A

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
	var entity : Entity // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playerComponent : A // +0x18 (0x8)
	let resource : AudioResource // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackToken : I# // +0x28 (0x8)
	var stateChangeSubscriptionHandle : RESubscriptionHandle // +0x30 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackCompletedSink : ? // +0x48 (0x28)
	var completionHandler : ()? // +0x70 (0x10)

	// Swift methods
	0x917f0  func AudioPlaybackController.entity.getter // getter 
	0x91c50  func AudioPlaybackController.completionHandler.getter // getter 
	0x91c90  func AudioPlaybackController.completionHandler.setter // setter 
	0x91ce0  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
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
	let handle : A // +0x10 (0x8)

	// Swift methods
	0x93dc0  func __REAsset.debugDescription.getter // getter 
	0x93ed0  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x94090  func __REAsset.__handle.getter // getter 
 }

 class RealityKit.__REAssetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __REAssetService {

	// Properties
	var _mainBundle : __REAssetBundle // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : A // +0x3 (0x8)

	// Swift methods
	0x94210  class func __REAssetManager.__allocating_init(handle:) // init 
	0x94370  func __REAssetManager.engineQueue.getter // getter 
	0x94390  func __REAssetManager.mainBundle.getter // getter 
	0x94960  func __REAssetManager.loadBundle(at:) // method 
	0x94a60  func __REAssetManager.makeBundle() // method 
	0x94bd0  func __REAssetManager.__getDependencies(asset:) // method 
	0x94d60  func __REAssetManager.__handle.getter // getter 
 }

 class RealityKit.__AssetLoadRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAssetRequest : A

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
	var identifier : I# // +0x0
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
	var uuidToRESceneAsset : __REAsset // +0x10 (0x8)

	// Swift methods
	0x9aa40  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x9aab0  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x9ab20  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
 }

 class RealityKit.__RKVisibilityShowRiseAnimation : __RKVisibilityBaseAnimation { }

 enum RealityKit.__REAnchoringType {

	// Properties
	case surface : Alignment
WARNING: couldn't find address 0x0 (0x0) in binary!
	case image : ˜
	case face : (meshVertex: Int)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case object : —ˆ
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

 enum RealityKit.__RKEmphasisPulseVariant {

	// Properties
	case one  
	case two  
 }

 class RealityKit.__RKEmphasisPulseAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.SceneManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __SceneService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customComponentTypesToHandles : ObjectIdentifier // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handlesToCustomComponentTypes :  empty-list  // +0x18 (0x8)
	let coreECSManager : __REECSManagerRef // +0x20 (0x8)
	var scenes : Scene // +0x28 (0x8)

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
	let location :  // +0x70 (0x11)
	let orientation : simd_quatf // +0x90 (0x11)
	let scale : Float? // +0xa4 (0x5)
	let duration : Float // +0xac (0x4)
	let moveType : __RKEntityMoveSelection // +0xb0 (0x1)
	let ease : __RKEntityMoveEase // +0xb1 (0x1)
	let easeType : __RKEntityMoveEaseType // +0xb2 (0x1)
	let respectPhysics : Bool // +0xb3 (0x1)
	let physicsAngularCoefficient : Float // +0xb4 (0x4)
	let physicsLinearCoefficient : Float // +0xb8 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalTranslation : µ" // +0xc0 (0x10)
	var originalOrientation : simd_quatf // +0xd0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalScale : µ" // +0xe0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : È // +0xf0 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x100 (0x28)
	var deadline : Double // +0x128 (0x8)

	// ObjC -> Swift bridged methods
	0xaed40  @objc __RKEntityTransformAction.copy(with:)

	// Swift methods
	0xad4c0  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
 }

 class RealityKit.MotionStateEventContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var action : __RKEntityTransformAction // +0x10 (0x8)
	let goal : REPoseF // +0x20 (0x20)

	// Swift methods
 }

 class RealityKit.RERenderFrameSettings : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameSettings : UnsafeMutableRawPointer // +0x10 (0x8)

	// Swift methods
 }

 class RealityKit.__RKVisibilityHideMoveOutAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RERenderGraphEmitter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let asset : __REAsset // +0x10 (0x8)

	// Swift methods
	0xb8d20  func __RERenderGraphEmitter.__handle.getter // getter 
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
	var coreAsset : A // +0x10 (0x8)

	// Swift methods
	0xba200  func __MaterialResource.__coreAsset.getter // getter 
 }

 struct RealityKit.SimpleMaterial: Material {

	// Properties
	var __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	var tintColor : UIColor // +0x18
	var baseColor : MaterialColorParameter // +0x20
	var roughness : MaterialScalarParameter // +0x30
	var metallic : MaterialScalarParameter // +0x38
	var __emissive : MaterialColorParameter // +0x40
	var __usesTransparency : Bool // +0x49
 }

 struct RealityKit.OcclusionMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	let receivesDynamicLighting : Bool // +0x14
 }

 struct RealityKit.UnlitMaterial: Material {

	// Properties
	var __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
	var tintColor : UIColor // +0x18
	var baseColor : MaterialColorParameter // +0x20
	var __usesTransparency : Bool // +0x29
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

 struct RealityKit.__RKEntityUUIDComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawUUID : y // +0x0
	var entity : Entity // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : A // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
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
	var state : State // +0x58 (0x9)
	var multiplePerformBehaviour : __RKEntityActionMultiplePerformBehavior // +0x61 (0x1)

	// ObjC -> Swift bridged methods
	0xcba70  @objc __RKEntityAction.copy(with:)

	// Swift methods
	0xcafb0  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0xc9ee0  func __RKEntityAction.targetEntity.getter // getter 
	0xc9f10  func __RKEntityAction.targetEntity.setter // setter 
	0xc9f50  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0xc9f80  func __RKEntityAction.completionHandler.getter // getter 
	0xc9fe0  func __RKEntityAction.completionHandler.setter // setter 
	0xca030  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0xca060  func __RKEntityAction.isAlternate.getter // getter 
	0xca090  func __RKEntityAction.isAlternate.setter // setter 
	0xca0c0  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0xca100  func __RKEntityAction.isExclusive.getter // getter 
	0xca130  func __RKEntityAction.isExclusive.setter // setter 
	0xca160  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0xca190  func __RKEntityAction.state.getter // getter 
	0xca1d0  func __RKEntityAction.state.setter // setter 
	0xca220  func __RKEntityAction.state.modify // modifyCoroutine 
	0xca2e0  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0xca310  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0xca340  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0xca370  func __RKEntityAction.performAction(with:) // method 
	0xca4a0  func __RKEntityAction.shouldContinueOnPerform() // method 
	0xca4f0  func __RKEntityAction.preloadAssets() // method 
	0xcb9a0  func __RKEntityAction.perform(with:) // method 
	0xca500  func __RKEntityAction.addStateObserver(_:) // method 
	0xca5a0  func __RKEntityAction.removeStateObserver(_:) // method 
	0xcb9f0  func __RKEntityAction.reversed() // method 
	0xca600  func __RKEntityAction.description.getter // getter 
	0xca770  func __RKEntityAction.stop() // method 
	0xca7d0  func __RKEntityAction.isExclusiveWith(action:) // method 
	0xcba00  func __RKEntityAction.copy(with:) // method 
	0xca830  func __RKEntityAction.cleanup(animation:on:) // method 
	0xca990  func __RKEntityAction.animationPostCleanup() // method 
	0xca9a0  func __RKEntityAction.prefersInitialOrdering() // method 
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
	var position : µ" // +0x0
	var orientation : simd_quatf // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : µ" // +0x20
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
	var reversible : Bool // +0x10 (0x1)
	var shouldReverse : Bool // +0x11 (0x1)
	var shouldFireAlternate : Bool // +0x12 (0x1)

	// Swift methods
	0xcf290  class func __RKEntityTrigger.__allocating_init() // init 
	0xcedf0  func __RKEntityTrigger.reversible.getter // getter 
	0xcee20  func __RKEntityTrigger.reversible.setter // setter 
	0xcee50  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0xcee90  func __RKEntityTrigger.shouldReverse.getter // getter 
	0xceec0  func __RKEntityTrigger.shouldReverse.setter // setter 
	0xceef0  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0xcef20  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0xcef50  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0xcef80  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0xcefb0  func __RKEntityTrigger.matches(with:) // method 
	0xcf1f0  func __RKEntityTrigger.description.getter // getter 
 }

 class RealityKit.REEventDispatcher {
 class RealityKit.EventSubscription {
 struct RealityKit.__REEventSubscriber {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceObject : ù 
	let dispatcher : REEventDispatcher
 }

 struct RealityKit.__RKCustomTriggerNotification { }

 class RealityKit.__RKCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]

	// Swift methods
	0xd20b0  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String // +0xda740
	var customArguments : [String : String] // +0x0
	var targetEntity : Entity // +0x0

	// Swift methods
	0xd2650  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0xd2680  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0xd26c0  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0xd2700  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
 }

 class RealityKit.RERenderFrameWorkload : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameWorkload : UnsafeMutableRawPointer // +0x10 (0x8)

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
	let coreEngine : A
	let queue : OS_dispatch_queue
	var services : __ServiceLocator
	var startCount : Int
	var isExternallyManaged : Bool
	var hasRenderedThisFrame : Bool

	// Swift methods
	0xd9690  func __Engine.__coreEngine.getter // getter 
	0xd9740  func __Engine.services.getter // getter 
	0xd90f0  class func __Engine.__allocating_init(configuration:) // init 
	0xd9d30  class func __Engine.__allocating_init(coreEngine:) // init 
	0xda1e0  func __Engine.__start() // method 
	0xda210  func __Engine.__stop() // method 
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
	case cubicBezier : ªˇ
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
	var triggers : __RKEntityTrigger // +0x18 (0x8)

	// Swift methods
	0xdbfd0  func __RKEntityTriggerGroup.triggers.getter // getter 
	0xdc000  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity // +0x68 (0x8)
	let buildOutAction : __RKEntityHideAction // +0x70 (0x8)
	let buildInAction : __RKEntityShowAction // +0x78 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0xddda0  @objc __RKEntitySwapEntityAction.copy(with:)

	// Swift methods
	0xdd6a0  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0xdf5b0  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0xdfc90  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0xdfd20  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0xdfde0  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0xdff30  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
 }

 struct RealityKit.PointLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var attenuationRadius : Float // +0xc
 }

 class RealityKit.__RKChangeSceneAction : __RKEntityAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let targetSceneIdentifier : Q // +0x65706c65 (0x0)
	var rootEntity : Entity // +0x74735f5f (0x8)

	// ObjC -> Swift bridged methods
	0xe20b0  @objc __RKChangeSceneAction.copy(with:)

	// Swift methods
	0xe1740  func __RKChangeSceneAction.rootEntity.getter // getter 
	0xe1780  func __RKChangeSceneAction.rootEntity.setter // setter 
	0xe17d0  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0xe1820  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
 }

 struct RealityKit.__REECSManagerRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__EntityRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__SceneRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__SceneImportOperationRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__ComponentRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__ComponentTypeRef: __CoreConvertible {

	// Properties
	var core : REComponentType // +0x0
 }

 struct RealityKit.__AssetRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
 }

 struct RealityKit.__EngineRef: __CoreConvertible {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var core : A // +0x0
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
	var core : I# // +0x0
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
	var core : I# // +0x0
 }

 enum RealityKit.__RKEmphasisLeanVariant {

	// Properties
	case one  
 }

 class RealityKit.__RKEmphasisLeanAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.RERenderManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RERenderService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _renderManager : A // +0x10 (0x8)

	// Swift methods
 }

 class RealityKit.__RealityFileARReferenceProvidingPlugin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let schemePrefix : String // +0x10 (0x10)

	// Swift methods
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
	0xee6c0  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xee6f0  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xee730  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xee770  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
 }

 class RealityKit.__RKEntityOrbitEntityAction : __RKEntityAction {

	// Properties
	let pivotEntity : Entity // +0x68 (0x8)
	let duration : Float // +0x70 (0x4)
	let rotations : Float // +0x74 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orbitalAxis : µ" // +0x80 (0x10)
	let orientToPath : Bool // +0x90 (0x1)
	let spinDirection : __RKEntitySpinDirectionType // +0x91 (0x1)
	let respectPhysics : Bool // +0x92 (0x1)
	let physicsAngularCoefficient : Float // +0x94 (0x4)
	let physicsLinearCoefficient : Float // +0x98 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0xa0 (0x28)
	var deadline : Double // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : È // +0xd0 (0x9)
	var targetEntityParent : Entity // +0xe0 (0x8)
	var ghostPivotEntity : Entity // +0xe8 (0x8)
	var originalPose : REPoseF // +0xf0 (0x21)

	// ObjC -> Swift bridged methods
	0xf05b0  @objc __RKEntityOrbitEntityAction.copy(with:)

	// Swift methods
	0xeee70  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xeef50  func __RKEntityOrbitEntityAction.update() // method 
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
	case noSufficientDownsamplingStrategy : o¸
 }

 struct RealityKit.Budgeted: __DownsamplingStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let availableBytes : I# // +0x0
	let device : MTLDevice // +0x8
 }

 class RealityKit.__RKEntityProximityTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity // +0x18 (0x8)
	var distance : Float // +0x20 (0x4)
	var type : ExitType // +0x24 (0x1)
	var enterFired : Bool // +0x25 (0x1)
	var exitFired : Bool // +0x26 (0x1)

	// Swift methods
	0xfaa80  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0xfab10  func __RKEntityProximityTrigger.distance.getter // getter 
	0xfabc0  func __RKEntityProximityTrigger.type.getter // getter 
	0xfac70  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0xfad20  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0xfad50  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
 }

 enum RealityKit.ExitType {

	// Properties
	case none  
	case sequence  
	case reverse  
 }

 class RealityKit.ARView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _scene : Scene // +0x8 (0x8)
	var __delegatePrivate : __ARViewDelegatePrivate // +0x10 (0x10)
	var debugOptions : DebugOptions // +0x20 (0x8)
	var initialized : Bool // +0x28 (0x1)
	var engineStartedByThisView : Bool // +0x29 (0x1)
	var environment : Environment // +0x30 (0x1d)
	var __environmentEntity : Entity // +0x50 (0x8)
	var __enableAutomaticFrameRate : Bool // +0x58 (0x1)
	var __preferredFrameRate : Float // +0x5c (0x4)
	var singleTapGesture : UITapGestureRecognizer? // +0x60 (0x8)
	var engineWasRunningWhenLastInTheForeground : Bool // +0x68 (0x1)
	var backingLayer : CAMetalLayer? // +0x70 (0x8)
	var useCAMetalLayer : Bool // +0x78 (0x1)
	var pauseEngineOnLeaveForeground : Bool // +0x79 (0x1)
	var __renderGraphEmitter : __RERenderGraphEmitter // +0x80 (0x8)
	var __forceLocalizedProbes : Bool // +0x88 (0x1)
	var __parallaxBackgroundProbe : Bool // +0x89 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var layerHandle : M# // +0x8c (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x90 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var renderSubscription : ? // +0xb8 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var realityAssetCollisionSubscription : ? // +0xe0 (0x28)
	var __disableComposition : Bool // +0x108 (0x1)
	var __nonARKitDevices : Bool // +0x109 (0x1)
	var enablePresentsWithTransaction : Bool // +0x10a (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var presentsWithTransactionFrames : M# // +0x10c (0x4)
	var __statisticsOptions : __StatisticsOptions // +0x110 (0x4)
	var __disableStatisticsRendering : Bool // +0x114 (0x1)

	// ObjC -> Swift bridged methods
	0xfcf80  @objc ARView.init(coder:)
	0xfd4e0  @objc ARView.init(frame:)
	0xfe110  @objc ARView.__deallocating_deinit
	0x101a80  @objc ARView.entityAccessibilityWrappers.getter
	0x102160  @objc ARView.distanceInMetersFromEntityAccessibilityWrapper(_:)
	0xfe130  @objc ARView.__ivar_destroyer

	// Swift methods
	0xfbca0  func ARView.__services.getter // getter 
	0xfbcc0  func ARView.scene.getter // getter 
	0xfbda0  func ARView.__delegatePrivate.getter // getter 
	0xfbde0  func ARView.__delegatePrivate.setter // setter 
	0xfbe40  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0xfbf90  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0xfc070  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0xfc150  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0xfc220  func ARView.debugOptions.getter // getter 
	0xfc260  func ARView.debugOptions.setter // setter 
	0xfc2d0  func ARView.debugOptions.modify // modifyCoroutine 
	0xfc380  func ARView.startEngine() // method 
	0xfc3e0  func ARView.stopEngine() // method 
	0xfc5c0  func ARView.environment.getter // getter 
	0xfc630  func ARView.environment.setter // setter 
	0xfc730  func ARView.environment.modify // modifyCoroutine 
	0xfc8c0  func ARView.cameraTransform.getter // getter 
	0xfca90  func ARView.audioListener.getter // getter 
	0xfcae0  func ARView.audioListener.setter // setter 
	0xfcb30  func ARView.audioListener.modify // modifyCoroutine 
	0xfcc70  func ARView.__environmentEntity.getter // getter 
	0xfcc90  func ARView.__environmentEntity.setter // setter 
	0xfcce0  func ARView.__environmentEntity.modify // modifyCoroutine 
	0xfcd60  func ARView.__enableAutomaticFrameRate.getter // getter 
	0xfcd80  func ARView.__enableAutomaticFrameRate.setter // setter 
	0xfcda0  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0xfce60  func ARView.__preferredFrameRate.getter // getter 
	0xfce90  func ARView.__preferredFrameRate.setter // setter 
	0xfced0  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0xfd510  func ARView.__customizeMetalLayer() // method 
	0xfd670  func ARView.__renderGraphEmitter.getter // getter 
	0xfd6d0  func ARView.__renderGraphEmitter.setter // setter 
	0xfd750  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0xfd820  func ARView.__setWireframeMode(displayWireframe:) // method 
	0xfd8b0  func ARView.__forceLocalizedProbes.getter // getter 
	0xfd8d0  func ARView.__forceLocalizedProbes.setter // setter 
	0xfd8f0  func ARView.__forceLocalizedProbes.modify // modifyCoroutine 
	0xfd970  func ARView.__parallaxBackgroundProbe.getter // getter 
	0xfd990  func ARView.__parallaxBackgroundProbe.setter // setter 
	0xfd9b0  func ARView.__parallaxBackgroundProbe.modify // modifyCoroutine 
	0xfd9f0  func ARView.__targetIdentifier.getter // getter 
	0xfda10  func ARView.__didInitializeEngine() // method 
	0xfda60  func ARView.__disableComposition.getter // getter 
	0xfda80  func ARView.__disableComposition.setter // setter 
	0xfdaa0  func ARView.__disableComposition.modify // modifyCoroutine 
	0xfdb60  func ARView.__nonARKitDevices.getter // getter 
	0xfdb80  func ARView.__nonARKitDevices.setter // setter 
	0xfdbe0  func ARView.__nonARKitDevices.modify // modifyCoroutine 
	0xff320  func ARView.__handleTapAtPoint(point:) // method 
	0x100460  func ARView.__statisticsOptions.getter // getter 
	0x1004a0  func ARView.__statisticsOptions.setter // setter 
	0x1004f0  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0x100610  func ARView.__disableStatisticsRendering.getter // getter 
	0x100660  func ARView.__disableStatisticsRendering.setter // setter 
	0x1006d0  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0x100770  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0x1007b0  func ARView.__frameTime() // method 
	0x100a80  func ARView.snapshot(saveToHDR:completion:) // method 
	0x1019d0  func ARView.__startAudioEngine() // method 
	0x1019f0  func ARView.__stopAudioEngine() // method 
	0x101ae0  func ARView.entityAccessibilityWrappers.getter // getter 
	0x102060  func ARView.__distanceInMetersFromEntity(_:) // method 
 }

 struct RealityKit.DebugOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 struct RealityKit.__StatisticsOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : M# // +0x0
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
	var activeScene : Scene // +0x10 (0x8)
	var observers : __RKActiveSceneObserver // +0x18 (0x8)

	// Swift methods
	0x107390  class func __RKActiveSceneManager.__allocating_init() // init 
	0x107610  func __RKActiveSceneManager.activeScene.getter // getter 
	0x107640  func __RKActiveSceneManager.activeScene.setter // setter 
	0x107660  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0x107890  func __RKActiveSceneManager.addObserver(observer:) // method 
	0x107980  func __RKActiveSceneManager.removeObserver(observer:) // method 
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

 enum RealityKit.__RKEmphasisBlinkVariant {

	// Properties
	case one  
	case two  
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
	let position : µ" // +0x10
	let impulse : Float // +0x20
 }

 struct RealityKit.Updated: Event {

	// Properties
	let entityA : Entity // +0x0
	let entityB : Entity // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : µ" // +0x10
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
	let inner : áË
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
	let sourceObject : ù 
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
	var __temporaryUnarchivingURL : ﬁ
	var assetMapSceneDescriptorsByAsset : __REAsset
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
 }

 struct RealityKit.__MaterialDefinitionOverride {

	// Properties
	let materialDefinition : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let serviceLocator : A // +0x10
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
	var sceneIdentifier : 9
	var sceneCompatibilityVariants : SceneCompatibilityVariant
 }

 enum RealityKit.__RealityFileError {

	// Properties
	case unsupportedVersion : Int
 }

 struct RealityKit.__Archiving { }

 class RealityKit.Operation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : A // +0x10 (0x8)

	// Swift methods
	0x123560  func __Archiving.Operation.archive(to:) // method 
	0x123580  func __Archiving.Operation.unarchive(to:) // method 
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

 struct RealityKit.Header {

	// Properties
	var versionInfo : VersionInfo
	var minVersion : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : 9
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
	let headerFile : ü˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetMapFile : ü˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deduplicationInformationFile : ü˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetFolder : ü˝
 }

 enum RealityKit.CodingKeys {

	// Properties
	case versionInfo  
	case minVersion  
	case identifier  
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

 struct RealityKit.VersionInfo {

	// Properties
	var id : String // +0x0
	var frameworkVersion : String // +0x10
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case frameworkVersion  
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
	var coreIBLAsset : ù  // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreSkyboxAsset : ù  // +0x18 (0x8)

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
	let coreScene : A // +0x10 (0x8)
	var __audioListener : Entity // +0x18 (0x8)
	var internalAudioListener : Entity // +0x20 (0x8)
	var defaultCamera : Entity // +0x28 (0x8)
	var activeCamera : Entity // +0x30 (0x8)
	var entities : Entity // +0x38 (0x8)
	var $__lazy_storage_$_eventService : EventService // +0x40 (0x28)
	var $__lazy_storage_$___interactionService : __RKEntityInteractionService // +0x68 (0x10)
	var synchronizationService : SynchronizationService // +0x78 (0x10)

	// Swift methods
	0x13e4f0  func Scene.__coreScene.getter // getter 
	0x13e500  func Scene.name.getter // getter 
	0x13e5a0  func Scene.__audioListener.getter // getter 
	0x13e5d0  func Scene.__audioListener.setter // setter 
	0x13e5f0  func Scene.__audioListener.modify // modifyCoroutine 
	0x13e780  func Scene.__addPostProcessingAudioEffect(_:) // method 
	0x13e870  func Scene.__defaultCamera.getter // getter 
	0x13e880  func Scene.internalActiveCamera.getter // getter 
	0x13ea10  func Scene.__entities.getter // getter 
	0x13ea80  func Scene.anchors.getter // getter 
	0x13eaa0  func Scene.anchors.setter // setter 
	0x13eaf0  func Scene.anchors.modify // modifyCoroutine 
	0x13eb30  func Scene.addAnchor(_:) // method 
	0x13eb50  func Scene.removeAnchor(_:) // method 
	0x13ebc0  func Scene.eventService.getter // getter 
	0x13ed00  func Scene.engineEventService.getter // getter 
	0x13eff0  func Scene.findEntity(named:) // method 
	0x13f5e0  func Scene.__interactionService.getter // getter 
	0x13f850  func Scene.synchronizationService.getter // getter 
	0x13f8a0  func Scene.synchronizationService.setter // setter 
	0x13f930  func Scene.synchronizationService.modify // modifyCoroutine 
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
	0x144d80  @objc __RKEntityAnimateAction.copy(with:)

	// Swift methods
	0x1443c0  func __RKEntityAnimateAction.stopAllAnimations(on:) // method 
	0x1444d0  func __RKEntityAnimateAction.setAudioAnimationParameters(on:mute:gain:) // method 
	0x1445d0  func __RKEntityAnimateAction.setupAnimations(on:andPlay:) // method 
	0x144690  func __RKEntityAnimateAction._setupAnimations(entity:assetManager:andPlay:addToComponentArray:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x1456d0  @objc __RKEntityStartAnimateAction.copy(with:)

	// Swift methods
	0x144f90  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:muteAudio:audioGain:targetAnimationEntity:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x145ad0  @objc __RKEntityStopAnimateAction.copy(with:)
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x1462d0  @objc __RKEntityToggleAnimateAction.copy(with:)
 }

 struct RealityKit.__RKScenePhysics {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gravity : µ" // +0x0
	var adaptiveTimeStep : Bool // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let introspectionStruct : A // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let componentType : A // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RCInteractionsController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x149560  @objc __RCInteractionsController.init()

	// Swift methods
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0x149590  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0x1496c0  func __RCEntity.registerCustomAction(named:action:) // method 
 }

 struct RealityKit.PhysicsMotionComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var linearVelocity : µ" // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var angularVelocity : µ" // +0x10
 }

 class RealityKit.__RKTimerTrigger : __RKEntityTrigger { }

 class RealityKit.RKChangeSceneActionBasicTechnique : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let rootEntity : Entity // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let targetSceneIdentifier : Q // +0x24026c (0x0)

	// Swift methods
	0x14a720  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x14a950  @objc __RKEntityFadeAction.copy(with:)

	// Swift methods
	0x14a820  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x14ab80  @objc __RKFadeSceneAction.copy(with:)

	// Swift methods
	0x14a9f0  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subcomponent : ù  // +0x0 (0x8)

	// Swift methods
	0x14c070  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0x14c2b0  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0x14c420  func RKChangeSceneActionRuntimeTechnique.loadNextScene() // method 
	0x14c8d0  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0x14de10  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
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
	var playbackToken : È // +0x98 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var audioAssetRef : ù  // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x150940  @objc __RKEntityAudioAction.copy(with:)

	// Swift methods
	0x14fdd0  func __RKEntityAudioAction.__audioAssetRef.getter // getter 
	0x14fde0  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : I# // +0x10 (0x8)
	var entity : Entity // +0x18 (0x8)

	// Swift methods
	0x1562b0  func AnimationPlaybackController.__identifier.getter // getter 
	0x156340  func AnimationPlaybackController.entity.getter // getter 
	0x156370  func AnimationPlaybackController.isPaused.getter // getter 
	0x156390  func AnimationPlaybackController.isComplete.getter // getter 
	0x156440  func AnimationPlaybackController.hash(into:) // method 
	0x1564a0  func AnimationPlaybackController.pause() // method 
	0x1564c0  func AnimationPlaybackController.resume() // method 
	0x1564e0  func AnimationPlaybackController.stop() // method 
	0x1565b0  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var uuidToEntity :  empty-list  // +0x10 (0x8)

	// Swift methods
	0x1582c0  class func __RKEntityLookupTable.__allocating_init() // init 
	0x158360  func __RKEntityLookupTable.entity(for:) // method 
	0x158400  func __RKEntityLookupTable.uuid(for:) // method 
	0x158550  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0x1585e0  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreEntity : A // +0x10 (0x8)
	var swiftChildren : Entity // +0x18 (0x8)

	// Swift methods
	0x159750  func Entity.__coreEntity.getter // getter 
	0x159760  func Entity.components.getter // getter 
	0x159780  func Entity.components.setter // setter 
	0x1597b0  func Entity.components.modify // modifyCoroutine 
	0x159820  func Entity.scene.getter // getter 
	0x159880  func Entity.name.getter // getter 
	0x1598a0  func Entity.name.setter // setter 
	0x159920  func Entity.name.modify // modifyCoroutine 
	0x159a20  func Entity.__boundingBox.getter // getter 
	0x159aa0  func Entity.isActive.getter // getter 
	0x159ab0  func Entity.isAnchored.getter // getter 
	0x159ac0  func Entity.isEnabled.getter // getter 
	0x159ad0  func Entity.isEnabled.setter // setter 
	0x159af0  func Entity.isEnabled.modify // modifyCoroutine 
	0x159b50  func Entity.isEnabledInHierarchy.getter // getter 
	0x159cc0  class func Entity.__allocating_init() // init 
	0x159ec0  class func Entity.__allocating_init(_coreEntity:) // init 
	0x159b60  func Entity.didClone(from:) // method 
	0x159b70  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity // +0x18 (0x8)
	var collidingEntities : Entity // +0x20 (0x8)
	var tags : [String] // +0x28 (0x8)

	// Swift methods
	0x15b1c0  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float // +0x64 (0x4)
	let block : () // +0x68 (0x10)
	let durationWiggleRoom : Double // +0x78 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x15ed70  @objc __RKWaitAction.copy(with:)

	// Swift methods
	0x15e620  class func __RKWaitAction.__allocating_init(duration:block:) // init 
 }

 class RealityKit.__ARReferenceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let plugins : __ARReferenceProvidingPlugin // +0x10 (0x8)

	// Swift methods
	0x15f0b0  func __ARReferenceProvider.fetchPlugin(forGroup:) // method 
	0x15f240  func __ARReferenceProvider.supportsGroup(named:) // method 
	0x15f310  func __ARReferenceProvider.fetchReferenceObject(group:name:) // method 
	0x15f3e0  func __ARReferenceProvider.fetchReferenceImage(group:name:physicalWidth:) // method 
 }

 class RealityKit.__RKVisibilityShowPopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKEntityCustomAction : __RKEntityAction {

	// Properties
	var handler : Entity // +0x68 (0x10)
	let identifier : String // +0x78 (0x10)
	let customArguments : [String : String] // +0x88 (0x8)
	var customArgumentsBlock : Entity // +0x90 (0x10)

	// ObjC -> Swift bridged methods
	0x165dc0  @objc __RKEntityCustomAction.copy(with:)

	// Swift methods
	0x164b70  func __RKEntityCustomAction.handler.getter // getter 
	0x164bd0  func __RKEntityCustomAction.handler.setter // setter 
	0x164c40  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x164e10  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x164e60  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x164ec0  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x164f10  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
 }

 enum RealityKit.__RKEmphasisFloatVariant {

	// Properties
	case one  
	case two  
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreAsset : A // +0x10 (0x8)

	// Swift methods
	0x172590  func PhysicsMaterialResource.__staticFriction.getter // getter 
	0x1725a0  func PhysicsMaterialResource.__dynamicFriction.getter // getter 
	0x1725b0  func PhysicsMaterialResource.__restitution.getter // getter 
 }

 enum RealityKit.__RKEmphasisBounceVariant {

	// Properties
	case one  
	case two  
	case three  
 }

 class RealityKit.__RKEmphasisBounceAnimation : __RKEmphasisBaseAnimation { }

 enum RealityKit.__RKEmphasisJiggleVariant {

	// Properties
	case one  
	case two  
	case three  
	case four  
 }

 class RealityKit.__RKEmphasisJiggleAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.__EntityAccessibilityWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var entity : Entity // +0x8 (0x8)
	let rootEntityWrapper : __EntityAccessibilityWrapper // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x183c70  @objc __EntityAccessibilityWrapper.rootEntityWrapper.getter
	0x183ca0  @objc __EntityAccessibilityWrapper.identifier.getter
	0x183ce0  @objc __EntityAccessibilityWrapper.calculateScreenBoundingRect(in:)
	0x183da0  @objc __EntityAccessibilityWrapper.isEntityRoot.getter
	0x183ee0  @objc __EntityAccessibilityWrapper.isEntityAccessible.getter
	0x184020  @objc __EntityAccessibilityWrapper.entityLabel.getter
	0x184130  @objc __EntityAccessibilityWrapper.entityDescription.getter
	0x1842a0  @objc __EntityAccessibilityWrapper.isEntityActive.getter
	0x1843c0  @objc __EntityAccessibilityWrapper.init()
	0x184340  @objc __EntityAccessibilityWrapper.__ivar_destroyer

	// Swift methods
	0x183de0  func __EntityAccessibilityWrapper.isEntityRoot.getter // getter 
	0x183f20  func __EntityAccessibilityWrapper.isEntityAccessible.getter // getter 
	0x184040  func __EntityAccessibilityWrapper.entityLabel.getter // getter 
	0x1841b0  func __EntityAccessibilityWrapper.entityDescription.getter // getter 
 }

 struct RealityKit.__AccessibilityComponent {

	// Properties
	var isRoot : Bool // +0x0
	var isEnabled : Bool // +0x1
	var label : String? // +0x8
	var description : String? // +0x18
 }

 class RealityKit.RealityFileLoadInformationResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct RealityKit.RealityFileLoadInformation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : ü˝
	var sceneName : String?
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case importFailureWithURL : ü˝
	case useSceneNameNotFileName : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidPathToRealityFile : ü˝
	case wrongEntityType  
	case invalidJoints  
 }

 struct RealityKit.BoundingBox {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var min : µ" // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var max : µ" // +0x10
 }

 class RealityKit.__SceneResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : A // +0x10 (0x8)

	// Swift methods
 }

 class RealityKit.BoxedSubscription : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : ?

	// Swift methods
 }

 class RealityKit.REEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventService {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreHandle : A
	var dispatchersByHandle : DispatcherHandle

	// Swift methods
 }

 struct RealityKit.DispatcherHandle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventID : I# // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceObject : ù  // +0x8
 }

 class RealityKit.ShapeResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var coreAsset : A // +0x10 (0x8)
	let pose : REPoseF // +0x20 (0x20)

	// Swift methods
	0x1a5290  func ShapeResource.hash(into:) // method 
	0x1a5380  func ShapeResource.hashValue.getter // getter 
 }

 class RealityKit.__RKEntityInteractionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __RKEntityInteractionService {

	// Properties
	var customTriggerFiredActions : __RKEntityAction // +0x10 (0x8)
	var areInteractionsEnabled : Bool // +0x18 (0x1)
	var automaticallyInvokesStartTrigger : Bool // +0x19 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sceneRef : A // +0x20 (0x8)
	var key : String // +0x28 (0x10)
	var __entityLookupTable : __RKEntityLookupTable // +0x38 (0x8)
	var __simulationSceneCoordinator : __RKSimulationSceneCoordinator // +0x40 (0x8)
	var __runtimeSceneCoordinator : __RKRuntimeSceneCoordinator // +0x48 (0x8)
	var __interactions : __RKEntityInteraction // +0x50 (0x8)

	// Swift methods
	0x1a7770  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x1a77a0  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x1a77d0  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x1a7800  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x1a7a40  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x1a7c60  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x1a8930  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x1a8b10  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x1a8d50  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x1a8e40  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x1a90b0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x1a90e0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x1a9110  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x1a91d0  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x1a9200  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x1a9240  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x1a9310  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x1a9340  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x1a9380  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x1a9440  func __RKEntityInteractionManager.__runtimeSceneCoordinator.getter // getter 
	0x1a9470  func __RKEntityInteractionManager.__runtimeSceneCoordinator.setter // setter 
	0x1a94b0  func __RKEntityInteractionManager.__runtimeSceneCoordinator.modify // modifyCoroutine 
	0x1a9570  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x1a95a0  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x1a98b0  func __RKEntityInteractionManager.__actions.getter // getter 
	0x1a9900  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x1a99c0  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x1a9ba0  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x1a9be0  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x1aaa00  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x1aac70  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x1ac590  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x1ac790  func __RKEntityInteractionManager.action(for:) // method 
 }

 class RealityKit.__USDARReferenceProvidingPlugin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let schemePrefix : String // +0x10 (0x10)
	var arReferenceByFullSchemePath : [String : Swift.AnyObject] // +0x20 (0x8)

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
	let rawValue : M# // +0x0
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
	var position : µ" // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var normal : µ" // +0x20
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

 enum RealityKit.__InteractionSpecificationsUSDEncodingErrors {

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
	let duration : Float // +0x64 (0x4)
	let iterations : Float // +0x68 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let axis : µ" // +0x70 (0x10)
	let direction : __RKEntitySpinDirectionType // +0x80 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentAnimation : È // +0x88 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0x98 (0x28)
	var deadline : Double // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0x1caeb0  @objc __RKEntitySpinAction.copy(with:)

	// Swift methods
	0x1c9bb0  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
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
	var m_encoder : œÃ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_payload : YÕ

	// Swift methods
	0x1cd890  func NetPassthroughEncoder.encode<A>(_:) // method 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_decoder : µÃ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m_payload : YÕ

	// Swift methods
	0x1cd930  func NetPassthroughDecoder.decode<A>(_:) // method 
 }

 struct RealityKit.PrereleaseHeader {

	// Properties
	var schemaVersion : SchemaVersion
	var versionInfo : VersionInfo
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : 9
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
	case schemaVersion  
	case versionInfo  
	case identifier  
 }

 struct RealityKit.VersionInfo {

	// Properties
	var id : String // +0x0
	var frameworkVersion : String // +0x10
 }

 struct RealityKit.SchemaVersion {

	// Properties
	var id : String // +0x0
	var sdk : Int // +0x10
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case frameworkVersion  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case id  
	case sdk  
 }

 class RealityKit.LoadRequest {
 class RealityKit.LoadTaskSubscription {
 struct RealityKit.__RKMaterialParameterBlock {

	// Properties
	var parameters : Parameter // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var generation : M# // +0x8
 }

 enum RealityKit.Parameter {

	// Properties
	case texture : TextureResource
	case float : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float2 : Û⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float3 : µ"
WARNING: couldn't find address 0x0 (0x0) in binary!
	case float4 : "
	case float2x2 : simd_float2x2
	case float3x3 : simd_float3x3
	case float4x4 : simd_float4x4
	case default  
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
	let coreOperation : A // +0x10 (0x8)

	// Swift methods
 }

 struct RealityKit.__ImportedScene {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sceneIdentifier : Q
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
	let sceneIdentifier : Q
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
	var inertia : µ" // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var centerOfMass : ÛŸ // +0x20
 }

 class RealityKit.__RKEntityForceAction : __RKEntityAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var force :  // +0x70 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var velocity :  // +0x90 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ? // +0xa8 (0x28)

	// ObjC -> Swift bridged methods
	0x1fdfc0  @objc __RKEntityForceAction.copy(with:)

	// Swift methods
	0x1fd6b0  func __RKEntityForceAction.force.getter // getter 
	0x1fd780  func __RKEntityForceAction.velocity.getter // getter 
	0x1fd4f0  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
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
	var __resolver : ·« // +0x0
	var __scene : USKScene // +0x10
	var instanceMapper : InstanceMapper // +0x18
 }

 class RealityKit.InstanceMapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __uuidToUSDInstance :  empty-list  // +0x10 (0x8)

	// Swift methods
	0x20aa10  func __USDExportContext.InstanceMapper.addMapping(from:to:) // method 
	0x20ab70  func __USDExportContext.InstanceMapper.getMapping(_:) // method 
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
	let coreAsset : A // +0x10 (0x8)
	let name : String? // +0x18 (0x10)

	// Swift methods
	0x21b0e0  func AnimationResource.__coreAsset.getter // getter 
 }

 struct RealityKit.ARFrame {

	// Properties
	var camera : ARAnchor
 }

 struct RealityKit.ARAnchor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : Q
	let transform : simd_float4x4
 }

 class RealityKit.__RKStartTrigger : __RKEntityTrigger {

	// Properties
	var triggered : Bool // +0x13 (0x1)

	// Swift methods
 }

 class RealityKit.MeshResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreAsset : ù 

	// Swift methods
	0x21e170  func MeshResource.expectedMaterialCount.getter // getter 
	0x21e190  func MeshResource.bounds.getter // getter 
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
	var segmentDensity : ˚Ÿ
 }

 class RealityKit.__MeshCompileOptions : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let core : A

	// Swift methods
	0x21ea40  class func __MeshCompileOptions.__allocating_init() // init 
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
	0x222260  @objc InteractionNotificationsManager.notificationTriggerDidPost(notification:)

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
	var coreServiceLocator : A // +0x10 (0x8)
	var engine : __Engine // +0x18 (0x8)
	var eventService : EventService // +0x20 (0x28)
	var renderService : RERenderService // +0x48 (0x28)
	var sceneService : __SceneService // +0x70 (0x28)
	var assetService : __REAssetService // +0x98 (0x28)
	var loadService : LoadManager // +0xc0 (0x8)

	// Swift methods
	0x22be90  func __ServiceLocator.__engineRef.getter // getter 
	0x22bed0  func __ServiceLocator.__sceneService.getter // getter 
	0x22bef0  func __ServiceLocator.__assetService.getter // getter 
 }

 struct RealityKit.Transform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : µ" // +0x0
	var rotation : simd_quatf // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var translation : µ" // +0x20
 }

 class RealityKit.AudioResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetRef : A

	// Swift methods
	0x22d5c0  func AudioResource.inputMode.getter // getter 
	0x22d640  func AudioResource.inputMode.setter // setter 
	0x22d670  func AudioResource.inputMode.modify // modifyCoroutine 
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
	0x22d730  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x22d930  func AudioFileResource.loadingStrategy.getter // getter 
	0x22d950  func AudioFileResource.loadingStrategy.setter // setter 
	0x22d970  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x22da20  func AudioFileResource.shouldLoop.getter // getter 
	0x22da40  func AudioFileResource.shouldLoop.setter // setter 
	0x22da60  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
	0x22dab0  func AudioFileResource.__duration.getter // getter 
 }

 enum RealityKit.LoadingStrategy {

	// Properties
	case stream  
	case preload  
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
	var currentAnimation : È

	// ObjC -> Swift bridged methods
	0x233340  @objc __RKEntityVisibilityAction.copy(with:)

	// Swift methods
	0x232e50  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
	0x233650  @objc __RKEntityToggleVisibilityAction.copy(with:)
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
	var finishedSubscription : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fadeSubscription : ?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x236700  @objc __RKEntityShowAction.copy(with:)

	// Swift methods
	0x2313b0  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x233880  func __RKEntityShowAction.updateFadeIn(_:) // method 
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
	var finishedSubscription : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateSubscription : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fadeSubscription : ?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x2399a0  @objc __RKEntityHideAction.copy(with:)

	// Swift methods
	0x231450  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x236930  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x239a20  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
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
	0x23d650  func __RKEntityInteraction.trigger.getter // getter 
	0x23d710  func __RKEntityInteraction.action.getter // getter 
	0x23d7c0  func __RKEntityInteraction.enabled.getter // getter 
	0x23d7f0  func __RKEntityInteraction.enabled.setter // setter 
	0x23d820  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x23d900  func __RKEntityInteraction.accessibilityDescription.getter // getter 
	0x23d940  func __RKEntityInteraction.accessibilityDescription.setter // setter 
	0x23d990  func __RKEntityInteraction.accessibilityDescription.modify // modifyCoroutine 
	0x23d550  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x23da10  func __RKEntityInteraction.fire(context:) // method 
	0x23de20  func __RKEntityInteraction.description.getter // getter 
 }

 class RealityKit.RKEntityInteractionAccessibilityWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let interaction : __RKEntityInteraction

	// ObjC -> Swift bridged methods
	0x23e0f0  @objc RKEntityInteractionAccessibilityWrapper.accessibilityDescription.getter
	0x23e160  @objc RKEntityInteractionAccessibilityWrapper.didFire()
	0x23e1c0  @objc RKEntityInteractionAccessibilityWrapper.init()
	0x23e1a0  @objc RKEntityInteractionAccessibilityWrapper.__ivar_destroyer

	// Swift methods
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
	var widthSegmentCount : Ò!
WARNING: couldn't find address 0x0 (0x0) in binary!
	var heightSegmentCount : Ò!
WARNING: couldn't find address 0x0 (0x0) in binary!
	var depthSegmentCount : Ò!
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cornerSegmentCount : Ò!
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
	var segmentCount : Ò!
	var radius : Float
	var addUVs : Bool
	var addNormals : Bool
	var mergeVertices : Bool
 }

 struct __C.REGeomBuildPlaneOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthSegmentCount : Ò!
WARNING: couldn't find address 0x0 (0x0) in binary!
	var depthSegmentCount : Ò!
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cornerSegmentCount : Ò!
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
	var columns : «!
 }

 struct __C.simd_float3x3 {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var columns : Ω!
 }

 struct __C.simd_float2x2 {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var columns : …!
 }

 enum __C.REAnimationLoopBehavior { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ·
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ·
 }

 struct __C.RESubscriptionHandle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : I#
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : I#
 }

 struct __C.simd_quatf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var vector : "
 }

 struct __C.REPoseF {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : µ"
	var orientation : simd_quatf
 }

 class __C.CFError {
 struct __C.CGBitmapInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : M#
 }

 class __C.CGColorSpace {
 struct __C.RESRT {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : µ"
	var rotation : simd_quatf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var translation : µ"
 }

 struct __C.REAABB {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var min : µ"
WARNING: couldn't find address 0x0 (0x0) in binary!
	var max : µ"
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
	var dispatchQueue : ?#
WARNING: couldn't find address 0x0 (0x0) in binary!
	var device : #
	var renderFlags : RERenderFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var idsServiceId :  empty-list 
 }

 struct __C.RERenderFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : M#
 }

 struct __C.REStartupOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ="
 }

 struct __C.REEngineServiceMask {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : M#
 }

 enum __C.REEngineClockMode { }

 class __C.CFString {
 struct __C.REEngineDoUpdateEvent {

	// Properties
	var deltaTime : Float
 }

 struct __C.REAnimationHasCompletedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : I#
	var elapsedTime : Float
 }

 struct __C.REAnimationHasLoopedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : I#
	var elapsedTime : Float
	var cycle : Float
 }

 struct __C.REAnimationHasTerminatedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : I#
	var elapsedTime : Float
 }

 struct __C.RECollisionDidStartEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : µ"
	var impulse : Float
 }

 struct __C.RECollisionDidUpdateEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : µ"
	var impulse : Float
 }

 struct __C.RECollisionDidStopEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectA : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectB : ù 
 }

 struct __C.REMotionStateDidChangeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rigidBody : ù 
	var isSleeping : Bool
 }

 struct __C.REOwnershipResponseEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var previousOwnerPeerId : I#
	var result : REOwnershipResponseResult
 }

 struct __C.REOwnershipChangedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newOwnerPeerId : I#
 }

 struct __C.REAudioPlayerDidCompleteEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playbackToken : I#
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : M#
 }

 struct __C.REOwnershipRequestEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entity : ù 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var requestPeerId : I#
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

 struct __C.REEntityCopyOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var size : Ò!
	var version : REEntityCopyOptionsVersion
	var recursive : Bool
	var ignoreCustomComponents : Bool
	var excludeComponentType : @convention(c) (_:_:)?
	var context : UnsafeMutableRawPointer?
 }

 struct __C.USKRoleType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.USKDataType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.RECustomComponentSyncInfo {

	// Properties
	var size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var version : ="
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

 struct __C.USKNodeType {

	// Properties
	var _rawValue : NSString
 }

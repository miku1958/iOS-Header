 protocol RealityKit.__RKSimulationSceneCoordinatorDelegate // 1 requirements
 {
	// method
 }
 protocol RealityKit.RERetainReleaseable // 0 requirements
 {
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
	var cleanupHelper : IntrospectionDataCleanupHelper? // +0x8
	var internalSpecifications : [__RKEntityInteractionSpecification]? // +0x10
	var internalInteractions : [__RKEntityInteraction]? // +0x18
	var entity : Entity? // +0x20
	var didFireStartTrigger : Bool? // +0x28
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

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
	0xd9c0  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xdc60  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xdc90  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xdce0  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xde60  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xde90  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xded0  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xdf10  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
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
	let face : SIMD3<Float> // +0x70 (0x10)
	let rotation : Float // +0x80 (0x4)
	let axis : SIMD3<Float> // +0x90 (0x10)
	let loops : Bool // +0xa0 (0x1)
	var updateSubscription : Cancellable? // +0xa8 (0x28)
	var deadline : Double // +0xd0 (0x8)
	var animationDeadline : Double // +0xd8 (0x8)
	var currentAnimation : UInt64? // +0xe0 (0x9)
	var didInit : Bool // +0xe9 (0x1)
	var faceRotation : simd_quatf // +0xf0 (0x10)

	// ObjC -> Swift bridged methods
	0x17af0  @objc __RKEntityLookAtCameraAction.copy(with:)

	// Swift methods
	0x16a20  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:animationDuration:direction:rotation:upVector:loops:) // init 
	0x16dc0  func __RKEntityLookAtCameraAction.createLookAtAnimation() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let assetPathPrefix : String // +0x10 (0x10)
	var $__lazy_storage_$_schemePrefix : String? // +0x20 (0x10)
	var resolvedURLByAssetPathPrefix : [String : String] // +0x30 (0x8)

	// Swift methods
	0x18320  class func __RealityFileURLResolver.__allocating_init() // init 
	0x18800  func __RealityFileURLResolver.schemePrefix.getter // getter 
	0x188f0  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x18a10  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x18ce0  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x19200  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x19730  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x197b0  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x19950  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x19a30  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
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
	case proximity : (target: UUID, distance: Float, type: __RKEntityProximityTrigger.ExitType)
	case tapTarget : (target: UUID)
	case collision : (target: UUID, collidingEntities: [UUID], tags: [String])
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
	var target : UUID
	var actionIdentifier : String
	var customArguments : [String : String]
 }

 struct RealityKit.__RKChangeSceneActionArguments: __RKSpecificationHasTarget {

	// Properties
	var sceneRoot : UUID
	var targetSceneIdentifier : UUID
 }

 struct RealityKit.__RKFadeSceneActionArguments {

	// Properties
	var targetOpacity : Float // +0x0
	var duration : Float? // +0x4
 }

 struct RealityKit.__RKEntityFadeActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var targetOpacity : Float
	var duration : Float?
 }

 struct RealityKit.__RKEntityToggleAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
 }

 struct RealityKit.__RKEntityStartAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	let loopCount : Int
	let multiplePerformBehavior : __RKEntityActionMultiplePerformBehavior
	let clipStart : Double
	let clipDuration : Double
	let clipReverses : Bool
	let clipReversed : Bool
	let animationSpeed : Float
 }

 struct RealityKit.__RKEntityStopAnimateActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
 }

 struct RealityKit.__RKEntityToggleVisibilityActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
 }

 struct RealityKit.__RKEntityShowActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var duration : Float?
	var distance : Float?
	var ease : __RKEntityMoveEase?
	var easeType : __RKEntityMoveEaseType?
	var fadeIn : Bool?
	var finalOpacity : Float?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
	var animationStyle : __RKEntityActionAnimationStyle?
	var buildInAnimationType : __RKEntityShowActionBuildInAnimationType?
 }

 struct RealityKit.__RKEntityHideActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var duration : Float?
	var distance : Float?
	var ease : __RKEntityMoveEase?
	var easeType : __RKEntityMoveEaseType?
	var fadeOut : Bool?
	var finalOpacity : Float?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
	var animationStyle : __RKEntityActionAnimationStyle?
	var buildOutAnimationType : __RKEntityHideActionBuildOutAnimationType?
 }

 struct RealityKit.__RKEntityEmphasisActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var duration : Float?
	var iterations : Float?
	var animationStyle : __RKEntityActionAnimationStyle?
	var emphasisAnimationType : __RKEntityEmphasisAnimationType?
 }

 struct RealityKit.__RKEntityAudioActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var path : String
	var type : __RKEntityAudioActionType?
	var volume : Double?
	var loops : Bool?
	var spatialMode : __RKAudioSpatialModeSelection?
	let multiplePerformBehavior : __RKEntityActionMultiplePerformBehavior?
 }

 struct RealityKit.__RKEntityTransformActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var location : SIMD3<Float>?
	var _orientation : SIMD4<Float>?
	var scale : Float?
	var duration : Float?
	var moveType : __RKEntityMoveSelection?
	var ease : __RKEntityMoveEase?
	var easeType : __RKEntityMoveEaseType?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
 }

 struct RealityKit.__RKEntityForceActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var force : SIMD3<Float>?
	var velocity : SIMD3<Float>?
 }

 struct RealityKit.__RKEntitySwapEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var newTarget : UUID
	var buildOutAction : __RKEntityHideActionArguments
	var buildInAction : __RKEntityShowActionArguments
 }

 struct RealityKit.__RKEntitySpinActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var duration : Float?
	var iterations : Float?
	var direction : __RKEntitySpinDirectionType?
	var axis : SIMD3<Float>?
 }

 struct RealityKit.__RKEntityOrbitEntityActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var pivotTarget : UUID
	var duration : Float?
	var rotations : Float?
	var orbitalAxis : SIMD3<Float>?
	var orientToPath : Bool?
	var spinDirection : __RKEntitySpinDirectionType?
	var respectPhysics : Bool?
	var physicsLinearCoefficient : Float?
	var physicsAngularCoefficient : Float?
 }

 struct RealityKit.__RKEntityLookAtCameraActionArguments: __RKSpecificationHasTarget {

	// Properties
	var target : UUID
	var duration : Float?
	var animationDuration : Float?
	var direction : SIMD3<Float>?
	var rotation : Float?
	var upVector : SIMD3<Float>?
	var loops : Bool?
 }

 struct RealityKit.__RKEntityInteractionSpecification {

	// Properties
	var trigger : __RKEntityTriggerSpecification
	var action : __RKEntityActionSpecification
 }

 enum RealityKit.CodingKeys {

	// Properties
	case trigger  
	case action  
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
	var environment : EnvironmentResource? // +0x0
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
	var updateSubscription : Cancellable? // +0x70 (0x28)
	var deadline : Double // +0x98 (0x8)
	var currentAnimation : UInt64? // +0xa0 (0x9)

	// ObjC -> Swift bridged methods
	0x5c740  @objc __RKEntityEmphasisAction.copy(with:)

	// Swift methods
	0x5b620  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
 }

 struct RealityKit.__RKSceneUUIDComponent {

	// Properties
	var rawUUID : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8) // +0x0
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.MultipeerConnectivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SynchronizationService {

	// Properties
	let coreInvalidPeerID : UInt64 // +0x10 (0x8)
	let coreMultipeerConnectivityService : OpaquePointer // +0x18 (0x8)
	let coreServiceLocator : OpaquePointer // +0x20 (0x8)
	let coreNetworkSystem : OpaquePointer // +0x28 (0x8)
	let session : MCSession // +0x30 (0x8)

	// Swift methods
	0x5e3b0  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x5e4a0  func MultipeerConnectivityService.entity(for:) // method 
	0x5e4d0  func MultipeerConnectivityService.owner(of:) // method 
	0x5e600  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x5e710  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x5e820  func MultipeerConnectivityService.__toCore(peerID:) // method 
 }

 enum RealityKit.SynchronizationError {

	// Properties
	case encryptionRequired  
 }

 class RealityKit.TextureResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x5ed50  func TextureResource.__coreAsset.getter // getter 
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
	case importFailureWithURL : URL
 }

 class RealityKit.__RKEntityActionGroup : __RKEntityAction {

	// Properties
	var actions : [__RKEntityAction] // +0x68 (0x8)
	var ordering : Ordering // +0x70 (0x1)
	var loopCount : Int // +0x78 (0x8)
	var completedActions : Int // +0x80 (0x8)
	var completedLoops : Int // +0x88 (0x8)
	var stopped : Bool // +0x90 (0x1)

	// ObjC -> Swift bridged methods
	0x66ec0  @objc __RKEntityActionGroup.copy(with:)

	// Swift methods
	0x629b0  func __RKEntityActionGroup.actions.getter // getter 
	0x62a80  func __RKEntityActionGroup.ordering.getter // getter 
	0x62b30  func __RKEntityActionGroup.loopCount.getter // getter 
	0x62b60  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x62e60  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x631f0  func __RKEntityActionGroup.performConcurrentActions(with:) // method 
	0x636c0  func __RKEntityActionGroup.performSequentialAction(at:context:) // method 
	0x63c90  func __RKEntityActionGroup.allActions() // method 
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
	var userForce : SIMD3<Float> // +0x60
	var userTorque : SIMD3<Float> // +0x70
	var userLinearImpulse : SIMD3<Float> // +0x80
	var userAngularImpulse : SIMD3<Float> // +0x90
 }

 struct RealityKit.__REAnchoring {

	// Properties
	var jsonRawPointer : UnsafeMutableRawPointer?
	var internalAnchorSpecification : __REAnchoringType?
	var cleanupHelper : IntrospectionDataCleanupHelper?
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

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
	var arrayPointer : UnsafePointer<UnsafePointer<UInt8>>? // +0x0
	var arrayCount : Int // +0x8
	var tagsCache : [String]? // +0x10
	var cleanupHelper : ArrayPointerCleanupHelper // +0x18
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer
	let componentType : OpaquePointer

	// Swift methods
 }

 class RealityKit.ArrayPointerCleanupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let arrayPointer : UnsafePointer<UnsafePointer<UInt8>>
	let arrayCount : Int

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RKVisibilityShowDropAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AudioPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var entity : weak Entity? // +0x10 (0x8)
	let playerComponent : OpaquePointer // +0x18 (0x8)
	let resource : AudioResource // +0x20 (0x8)
	var playbackToken : UInt64 // +0x28 (0x8)
	var stateChangeSubscriptionHandle : RESubscriptionHandle? // +0x30 (0x11)
	var playbackCompletedSink : Cancellable? // +0x48 (0x28)
	var completionHandler : ()? // +0x70 (0x10)

	// Swift methods
	0x861e0  func AudioPlaybackController.entity.getter // getter 
	0x86640  func AudioPlaybackController.completionHandler.getter // getter 
	0x86680  func AudioPlaybackController.completionHandler.setter // setter 
	0x866d0  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
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

 class RealityKit.__REAsset : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : OpaquePointer

	// Swift methods
	0x88860  func __REAsset.debugDescription.getter // getter 
	0x889a0  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x88b60  func __REAsset.__handle.getter // getter 
 }

 class RealityKit.__REAssetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __REAssetService {

	// Properties
	var _mainBundle : __REAssetBundle? // +0x0 (0x0)
	let handle : OpaquePointer // +0x3 (0x8)

	// Swift methods
	0x88ce0  class func __REAssetManager.__allocating_init(handle:) // init 
	0x88e50  func __REAssetManager.engineQueue.getter // getter 
	0x88e70  func __REAssetManager.mainBundle.getter // getter 
	0x89510  func __REAssetManager.loadBundle(at:) // method 
	0x89630  func __REAssetManager.makeBundle() // method 
	0x896b0  func __REAssetManager.__getDependencies(asset:) // method 
	0x89850  func __REAssetManager.__handle.getter // getter 
 }

 class RealityKit.__AssetLoadRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAssetRequest : OpaquePointer

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
	var identifier : UInt64 // +0x0
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
	var uuidToRESceneAsset : NSMapTable<NSUUID, __REAsset> // +0x10 (0x8)

	// Swift methods
	0x8e950  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x8e9c0  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x8ea40  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
 }

 class RealityKit.__RKVisibilityShowRiseAnimation : __RKVisibilityBaseAnimation { }

 enum RealityKit.__REAnchoringType {

	// Properties
	case surface : Alignment
	case image : (url: URL, physicalWidth: Measurement<NSUnitLength>)
	case face : (meshVertex: Int)
	case object : (url: URL)
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
	var customComponentTypesToHandles : [ObjectIdentifier : OpaquePointer] // +0x10 (0x8)
	var handlesToCustomComponentTypes : [OpaquePointer : Component.Type] // +0x18 (0x8)
	let coreECSManager : __REECSManagerRef // +0x20 (0x8)
	var scenes : [Scene] // +0x28 (0x8)

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
	let location : SIMD3<Float>?
	let orientation : simd_quatf?
	let scale : Float?
	let duration : Float
	let moveType : __RKEntityMoveSelection
	let ease : __RKEntityMoveEase
	let easeType : __RKEntityMoveEaseType
	let respectPhysics : Bool
	let physicsAngularCoefficient : Float
	let physicsLinearCoefficient : Float
	var originalTranslation : SIMD3<Float>
	var originalOrientation : simd_quatf
	var originalScale : SIMD3<Float>
	var currentAnimation : UInt64?
	var updateSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0xa5220  @objc __RKEntityTransformAction.copy(with:)

	// Swift methods
	0xa3880  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
 }

 class RealityKit.MotionStateEventContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var action : __RKEntityTransformAction
	let goal : REPoseF

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
	0xb0100  func __RERenderGraphEmitter.unsetup(mgr:) // method 
	0xb0600  func __RERenderGraphEmitter.setup(mgr:) // method 
	0xb0ab0  func __RERenderGraphEmitter.__handle.getter // getter 
 }

 struct RealityKit.EmitterAssetKey {

	// Properties
	let renderManagerHash : Int // +0x0
	let emitterAssetPath : String // +0x8
 }

 class RealityKit.__MaterialResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0xb2080  func __MaterialResource.__coreAsset.getter // getter 
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
	var rawUUID : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8) // +0x0
	var entity : Entity? // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

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
	var targetEntity : Entity? // +0x10 (0x8)
	var finishedHandler : ()? // +0x18 (0x10)
	var groupHandler : ()? // +0x28 (0x10)
	var stateObservers : ActionStateObservation // +0x38 (0x8)
	var completionHandler : (_:)? // +0x40 (0x10)
	var isAlternate : Bool // +0x50 (0x1)
	var isExclusive : Bool // +0x51 (0x1)
	var state : State // +0x58 (0x9)
	var multiplePerformBehaviour : __RKEntityActionMultiplePerformBehavior // +0x61 (0x1)

	// ObjC -> Swift bridged methods
	0xbe1b0  @objc __RKEntityAction.copy(with:)

	// Swift methods
	0xbd5a0  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0xbbe80  func __RKEntityAction.targetEntity.getter // getter 
	0xbbeb0  func __RKEntityAction.targetEntity.setter // setter 
	0xbbef0  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0xbbf20  func __RKEntityAction.completionHandler.getter // getter 
	0xbbf80  func __RKEntityAction.completionHandler.setter // setter 
	0xbbfd0  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0xbc000  func __RKEntityAction.isAlternate.getter // getter 
	0xbc030  func __RKEntityAction.isAlternate.setter // setter 
	0xbc060  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0xbc0a0  func __RKEntityAction.isExclusive.getter // getter 
	0xbc0d0  func __RKEntityAction.isExclusive.setter // setter 
	0xbc100  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0xbc130  func __RKEntityAction.state.getter // getter 
	0xbc170  func __RKEntityAction.state.setter // setter 
	0xbc1f0  func __RKEntityAction.state.modify // modifyCoroutine 
	0xbc330  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0xbc360  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0xbc3a0  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0xbc3d0  func __RKEntityAction.performAction(with:) // method 
	0xbcac0  func __RKEntityAction.shouldContinueOnPerform() // method 
	0xbcb40  func __RKEntityAction.preloadAssets() // method 
	0xbe090  func __RKEntityAction.perform(with:) // method 
	0xbcb50  func __RKEntityAction.addStateObserver(_:) // method 
	0xbcbf0  func __RKEntityAction.removeStateObserver(_:) // method 
	0xbe110  func __RKEntityAction.reversed() // method 
	0xbcc50  func __RKEntityAction.description.getter // getter 
	0xbce00  func __RKEntityAction.stop() // method 
	0xbceb0  func __RKEntityAction.isExclusiveWith(action:) // method 
	0xbe120  func __RKEntityAction.copy(with:) // method 
 }

 enum RealityKit.State {

	// Properties
	case progress : Double
	case notStarted  
	case running  
	case finished  
	case failed  
 }

 struct RealityKit.ActionStateObservation {

	// Properties
	var observer : __RKEntityActionStateObserver // +0x0
 }

 struct RealityKit.RETransform {

	// Properties
	var position : SIMD3<Float> // +0x0
	var orientation : simd_quatf // +0x10
	var scale : SIMD3<Float> // +0x20
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
	0xc12d0  class func __RKEntityTrigger.__allocating_init() // init 
	0xc0c60  func __RKEntityTrigger.reversible.getter // getter 
	0xc0c90  func __RKEntityTrigger.reversible.setter // setter 
	0xc0cc0  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0xc0d00  func __RKEntityTrigger.shouldReverse.getter // getter 
	0xc0d30  func __RKEntityTrigger.shouldReverse.setter // setter 
	0xc0d60  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0xc0d90  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0xc0dc0  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0xc0df0  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0xc0e20  func __RKEntityTrigger.matches(with:) // method 
	0xc11f0  func __RKEntityTrigger.description.getter // getter 
 }

 class RealityKit.REEventDispatcher {
 class RealityKit.EventSubscription {
 struct RealityKit.__REEventSubscriber {

	// Properties
	let sourceObject : OpaquePointer?
	let dispatcher : REEventDispatcher
 }

 struct RealityKit.__RKCustomTriggerNotification { }

 class RealityKit.__RKCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]

	// Swift methods
	0xc4cc0  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]
	var targetEntity : Entity?

	// Swift methods
	0xc5330  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0xc5360  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0xc53a0  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0xc53e0  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
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
	let coreEngine : OpaquePointer
	let queue : OS_dispatch_queue
	var services : __ServiceLocator?
	var startCount : Int
	var isExternallyManaged : Bool
	var hasRenderedThisFrame : Bool

	// Swift methods
	0xcc9d0  func __Engine.__coreEngine.getter // getter 
	0xcca80  func __Engine.services.getter // getter 
	0xcc240  class func __Engine.__allocating_init(configuration:) // init 
	0xcd080  class func __Engine.__allocating_init(coreEngine:) // init 
	0xcd4d0  func __Engine.__start() // method 
	0xcd500  func __Engine.__stop() // method 
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
	case cubicBezier : (controlPoint1: SIMD2<Float>, controlPoint2: SIMD2<Float>)
	case __back : (AnimationTimingFunction.__Mode, amplitude: Float)
	case __bounce : (AnimationTimingFunction.__Mode, bounces: Int, bounciness: Float)
	case __circle : AnimationTimingFunction.__Mode
	case __elastic : (AnimationTimingFunction.__Mode, oscillations: Int, springiness: Float)
	case __exponential : (AnimationTimingFunction.__Mode, exponent: Float)
	case __logarithmic : (AnimationTimingFunction.__Mode, base: Float)
	case __power : (AnimationTimingFunction.__Mode, power: Float)
	case __sine : AnimationTimingFunction.__Mode
	case __smooth : AnimationTimingFunction.__Mode
	case linear  
 }

 class RealityKit.__RKEntityTriggerGroup : __RKEntityTrigger {

	// Properties
	var triggers : [__RKEntityTrigger] // +0x18 (0x8)

	// Swift methods
	0xcf3e0  func __RKEntityTriggerGroup.triggers.getter // getter 
	0xcf410  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity? // +0x68 (0x8)
	let buildOutAction : __RKEntityHideAction // +0x70 (0x8)
	let buildInAction : __RKEntityShowAction // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0xd17e0  @objc __RKEntitySwapEntityAction.copy(with:)

	// Swift methods
	0xd0f50  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0xd3150  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0xd35f0  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0xd3700  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0xd39b0  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0xd3e40  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
 }

 struct RealityKit.PointLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var attenuationRadius : Float // +0xc
 }

 class RealityKit.__RKChangeSceneAction : __RKEntityAction {

	// Properties
	let targetSceneIdentifier : UUID // +0x0 (0x0)
	var rootEntity : Entity? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0xd59d0  @objc __RKChangeSceneAction.copy(with:)

	// Swift methods
	0xd4e30  func __RKChangeSceneAction.rootEntity.getter // getter 
	0xd4e70  func __RKChangeSceneAction.rootEntity.setter // setter 
	0xd4ec0  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0xd4f10  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
 }

 struct RealityKit.__REECSManagerRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
 }

 struct RealityKit.__EntityRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
 }

 struct RealityKit.__SceneRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
 }

 struct RealityKit.__ComponentRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
 }

 struct RealityKit.__ComponentTypeRef: __CoreConvertible {

	// Properties
	var core : REComponentType // +0x0
 }

 struct RealityKit.__AssetRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
 }

 struct RealityKit.__EngineRef: __CoreConvertible {

	// Properties
	var core : OpaquePointer // +0x0
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
	var core : UInt64 // +0x0
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
	var core : UInt64 // +0x0
 }

 enum RealityKit.__RKEmphasisLeanVariant {

	// Properties
	case one  
 }

 class RealityKit.__RKEmphasisLeanAnimation : __RKEmphasisBaseAnimation { }

 class RealityKit.RERenderManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RERenderService {

	// Properties
	var _renderManager : OpaquePointer // +0x10 (0x8)

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
	var targetEntity : Entity?

	// Swift methods
	0xe2000  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xe2030  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xe2070  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xe20b0  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
 }

 class RealityKit.__RKEntityOrbitEntityAction : __RKEntityAction {

	// Properties
	let pivotEntity : Entity? // +0x68 (0x8)
	let duration : Float // +0x70 (0x4)
	let rotations : Float // +0x74 (0x4)
	let orbitalAxis : SIMD3<Float> // +0x80 (0x10)
	let orientToPath : Bool // +0x90 (0x1)
	let spinDirection : __RKEntitySpinDirectionType // +0x91 (0x1)
	let respectPhysics : Bool // +0x92 (0x1)
	let physicsAngularCoefficient : Float // +0x94 (0x4)
	let physicsLinearCoefficient : Float // +0x98 (0x4)
	var updateSubscription : Cancellable? // +0xa0 (0x28)
	var deadline : Double // +0xc8 (0x8)
	var currentAnimation : UInt64? // +0xd0 (0x9)
	var targetEntityParent : Entity? // +0xe0 (0x8)
	var ghostPivotEntity : Entity? // +0xe8 (0x8)
	var originalPose : REPoseF? // +0xf0 (0x21)

	// ObjC -> Swift bridged methods
	0xe4360  @objc __RKEntityOrbitEntityAction.copy(with:)

	// Swift methods
	0xe28f0  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xe2b40  func __RKEntityOrbitEntityAction.update() // method 
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

 class RealityKit.__SceneResourceCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var entriesByURL : Entry
	let lockQueue : OS_dispatch_queue

	// Swift methods
 }

 class RealityKit.Entry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetBundle : __REAssetBundle

	// Swift methods
 }

 enum RealityKit.InternalError {

	// Properties
	case unableToFindScene : (String, URL)
	case unknown  
 }

 struct RealityKit.SceneResourceLoadResult {

	// Properties
	let sceneResource : __SceneResource // +0x0
	let context : __SceneResourceLoadResultLoadContext // +0x8
	let cacheEntry : __SceneResourceCache.Entry // +0x18
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
	case noSufficientDownsamplingStrategy : (budget: UInt64, minimalSize: UInt64)
 }

 struct RealityKit.Budgeted: __DownsamplingStrategy {

	// Properties
	let availableBytes : UInt64 // +0x0
	let device : MTLDevice // +0x8
 }

 class RealityKit.__RKEntityProximityTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity? // +0x18 (0x8)
	var distance : Float // +0x20 (0x4)
	var type : ExitType // +0x24 (0x1)
	var enterFired : Bool // +0x25 (0x1)
	var exitFired : Bool // +0x26 (0x1)

	// Swift methods
	0xeb9f0  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0xeba80  func __RKEntityProximityTrigger.distance.getter // getter 
	0xebb50  func __RKEntityProximityTrigger.type.getter // getter 
	0xebc00  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0xebcb0  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0xebce0  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
 }

 enum RealityKit.ExitType {

	// Properties
	case none  
	case sequence  
	case reverse  
 }

 class RealityKit.ARView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _scene : Scene? // +0x8 (0x8)
	var __delegatePrivate : __ARViewDelegatePrivate // +0x10 (0x10)
	var debugOptions : DebugOptions // +0x20 (0x8)
	var initialized : Bool // +0x28 (0x1)
	var engineStartedByThisView : Bool // +0x29 (0x1)
	var environment : ARView // +0x30 (0x1d)
	var __environmentEntity : Entity? // +0x50 (0x8)
	var __enableAutomaticFrameRate : Bool // +0x58 (0x1)
	var __preferredFrameRate : Float // +0x5c (0x4)
	var singleTapGesture : UITapGestureRecognizer? // +0x60 (0x8)
	var engineWasRunningWhenLastInTheForeground : Bool // +0x68 (0x1)
	var backingLayer : CAMetalLayer? // +0x70 (0x8)
	var useCAMetalLayer : Bool // +0x78 (0x1)
	var pauseEngineOnLeaveForeground : Bool // +0x79 (0x1)
	var __renderGraphEmitter : __RERenderGraphEmitter? // +0x80 (0x8)
	var layerHandle : UInt32 // +0x88 (0x4)
	var updateSubscription : Cancellable? // +0x90 (0x28)
	var renderSubscription : Cancellable? // +0xb8 (0x28)
	var realityAssetCollisionSubscription : Cancellable? // +0xe0 (0x28)
	var __disableComposition : Bool // +0x108 (0x1)
	var __nonARKitDevices : Bool // +0x109 (0x1)
	var enablePresentsWithTransaction : Bool // +0x10a (0x1)
	var presentsWithTransactionFrames : UInt32 // +0x10c (0x4)
	var __statisticsOptions : __StatisticsOptions // +0x110 (0x4)
	var __disableStatisticsRendering : Bool // +0x114 (0x1)

	// ObjC -> Swift bridged methods
	0xee6c0  @objc ARView.init(coder:)
	0xeec10  @objc ARView.init(frame:)
	0xef630  @objc ARView.__deallocating_deinit
	0xef650  @objc ARView.__ivar_destroyer

	// Swift methods
	0xed4a0  func ARView.__services.getter // getter 
	0xed4c0  func ARView.scene.getter // getter 
	0xed5a0  func ARView.__delegatePrivate.getter // getter 
	0xed5e0  func ARView.__delegatePrivate.setter // setter 
	0xed640  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0xed790  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0xed870  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0xed950  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0xedb40  func ARView.debugOptions.getter // getter 
	0xedb80  func ARView.debugOptions.setter // setter 
	0xedc00  func ARView.debugOptions.modify // modifyCoroutine 
	0xedd50  func ARView.startEngine() // method 
	0xeddb0  func ARView.stopEngine() // method 
	0xeded0  func ARView.environment.getter // getter 
	0xedf10  func ARView.environment.setter // setter 
	0xedf70  func ARView.environment.modify // modifyCoroutine 
	0xee090  func ARView.cameraTransform.getter // getter 
	0xee240  func ARView.audioListener.getter // getter 
	0xee290  func ARView.audioListener.setter // setter 
	0xee2b0  func ARView.audioListener.modify // modifyCoroutine 
	0xee3b0  func ARView.__environmentEntity.getter // getter 
	0xee3d0  func ARView.__environmentEntity.setter // setter 
	0xee420  func ARView.__environmentEntity.modify // modifyCoroutine 
	0xee4a0  func ARView.__enableAutomaticFrameRate.getter // getter 
	0xee4c0  func ARView.__enableAutomaticFrameRate.setter // setter 
	0xee4e0  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0xee5a0  func ARView.__preferredFrameRate.getter // getter 
	0xee5d0  func ARView.__preferredFrameRate.setter // setter 
	0xee610  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0xeec40  func ARView.__customizeMetalLayer() // method 
	0xeed60  func ARView.__renderGraphEmitter.getter // getter 
	0xeedc0  func ARView.__renderGraphEmitter.setter // setter 
	0xeede0  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0xeeec0  func ARView.__setWireframeMode(displayWireframe:) // method 
	0xeef10  func ARView.__targetIdentifier.getter // getter 
	0xeef30  func ARView.__didInitializeEngine() // method 
	0xeef80  func ARView.__disableComposition.getter // getter 
	0xeefa0  func ARView.__disableComposition.setter // setter 
	0xeefc0  func ARView.__disableComposition.modify // modifyCoroutine 
	0xef080  func ARView.__nonARKitDevices.getter // getter 
	0xef0a0  func ARView.__nonARKitDevices.setter // setter 
	0xef100  func ARView.__nonARKitDevices.modify // modifyCoroutine 
	0xf0820  func ARView.__handleTapAtPoint(point:) // method 
	0xf13c0  func ARView.__statisticsOptions.getter // getter 
	0xf1400  func ARView.__statisticsOptions.setter // setter 
	0xf1480  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0xf1660  func ARView.__disableStatisticsRendering.getter // getter 
	0xf16b0  func ARView.__disableStatisticsRendering.setter // setter 
	0xf1720  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0xf17c0  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0xf1800  func ARView.__frameTime() // method 
	0xf1bb0  func ARView.snapshot(saveToHDR:completion:) // method 
	0xf2ac0  func ARView.__startAudioEngine() // method 
	0xf2ae0  func ARView.__stopAudioEngine() // method 
 }

 struct RealityKit.DebugOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 struct RealityKit.__StatisticsOptions {

	// Properties
	let rawValue : UInt32 // +0x0
 }

 struct RealityKit.SetupPair {

	// Properties
	let block : (_:) // +0x0
 }

 class RealityKit.__RKVisibilityBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKActiveSceneManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeScene : Scene? // +0x10 (0x8)
	var observers : __RKActiveSceneObserver // +0x18 (0x8)

	// Swift methods
	0xf8910  class func __RKActiveSceneManager.__allocating_init() // init 
	0xf8bd0  func __RKActiveSceneManager.activeScene.getter // getter 
	0xf8c00  func __RKActiveSceneManager.activeScene.setter // setter 
	0xf8c20  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0xf8ec0  func __RKActiveSceneManager.addObserver(observer:) // method 
	0xf8fb0  func __RKActiveSceneManager.removeObserver(observer:) // method 
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
	var resource : EnvironmentResource? // +0x0
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
	var environment : EnvironmentResource? // +0x0
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
	let position : SIMD3<Float> // +0x10
	let impulse : Float // +0x20
 }

 struct RealityKit.Updated: Event {

	// Properties
	let entityA : Entity // +0x0
	let entityB : Entity // +0x8
	let position : SIMD3<Float> // +0x10
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
	let newOwner : SynchronizationPeerID? // +0x8
 }

 struct RealityKit.Publisher {

	// Properties
	let inner : AnyPublisher<A, Never>
 }

 struct RealityKit.DidChange: Event {

	// Properties
	let entity : Entity // +0x0
	let isSleeping : Bool // +0x8
 }

 struct RealityKit.OwnershipResponse: Event {

	// Properties
	let entity : Entity // +0x0
	let previousOwner : SynchronizationPeerID? // +0x8
	let response : SynchronizationEvents.OwnershipResponse.Response // +0x30
 }

 struct RealityKit.CorePublisher {

	// Properties
	let sourceObject : OpaquePointer?
	let dispatcher : REEventDispatcher<A>
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
	let header : Header
	let __sceneAssets : [__REAsset]
	let assetService : __REAssetService
	var assetMapSceneDescriptorsByAsset : SceneDescriptor
 }

 enum RealityKit.QueueOptions {

	// Properties
	case notFromEngineQueue : (canUseEngineQueue: Bool)
	case fromEngineQueue  
 }

 struct RealityKit.__MaterialDefinitionOverride {

	// Properties
	let materialDefinition : String // +0x0
	let serviceLocator : OpaquePointer // +0x10
 }

 struct RealityKit.AssetMap {

	// Properties
	var scenes : SceneDescriptor // +0x0
 }

 struct RealityKit.SceneDescriptor {

	// Properties
	var fileName : String
	var sceneName : String
	var sceneIdentifier : UUID?
 }

 enum RealityKit.__RealityFileError {

	// Properties
	case unsupportedVersion : Int
 }

 struct RealityKit.__Archiving { }

 class RealityKit.Operation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x11a530  func __Archiving.Operation.archive(to:) // method 
	0x11a550  func __Archiving.Operation.unarchive(to:) // method 
 }

 enum RealityKit.ArchivingError {

	// Properties
	case couldNotUnarchive  
	case couldNotArchive  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case scenes  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case fileName  
	case sceneName  
	case sceneIdentifier  
 }

 struct RealityKit.Header {

	// Properties
	var versionInfo : __REAssetBundle.Header.VersionInfo
	var minVersion : Int
	var identifier : UUID?
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
	let headerFile : URL
	let assetMapFile : URL
	let assetFolder : URL
 }

 enum RealityKit.CodingKeys {

	// Properties
	case versionInfo  
	case minVersion  
	case identifier  
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
	var materials : [Material] // +0x8
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
	var coreIBLAsset : OpaquePointer? // +0x10 (0x8)
	var coreSkyboxAsset : OpaquePointer? // +0x18 (0x8)

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
	let coreScene : OpaquePointer // +0x10 (0x8)
	var __audioListener : Entity? // +0x18 (0x8)
	var internalAudioListener : Entity? // +0x20 (0x8)
	var defaultCamera : Entity? // +0x28 (0x8)
	var activeCamera : weak Entity? // +0x30 (0x8)
	var entities : [Entity] // +0x38 (0x8)
	var $__lazy_storage_$_eventService : EventService? // +0x40 (0x28)
	var $__lazy_storage_$___interactionService : __RKEntityInteractionService? // +0x68 (0x10)
	var synchronizationService : SynchronizationService? // +0x78 (0x10)

	// Swift methods
	0x134670  func Scene.__coreScene.getter // getter 
	0x134680  func Scene.name.getter // getter 
	0x134720  func Scene.__audioListener.getter // getter 
	0x134750  func Scene.__audioListener.setter // setter 
	0x134770  func Scene.__audioListener.modify // modifyCoroutine 
	0x1349b0  func Scene.__defaultCamera.getter // getter 
	0x1349c0  func Scene.internalActiveCamera.getter // getter 
	0x134b30  func Scene.__entities.getter // getter 
	0x134bc0  func Scene.anchors.getter // getter 
	0x134be0  func Scene.anchors.setter // setter 
	0x134c20  func Scene.anchors.modify // modifyCoroutine 
	0x134c60  func Scene.addAnchor(_:) // method 
	0x134cb0  func Scene.removeAnchor(_:) // method 
	0x134d50  func Scene.eventService.getter // getter 
	0x134ea0  func Scene.engineEventService.getter // getter 
	0x135180  func Scene.findEntity(named:) // method 
	0x135310  func Scene.__interactionService.getter // getter 
	0x135580  func Scene.synchronizationService.getter // getter 
	0x1355d0  func Scene.synchronizationService.setter // setter 
	0x135660  func Scene.synchronizationService.modify // modifyCoroutine 
 }

 class RealityKit.__RKEntityAnimateAction : __RKEntityAction {

	// Properties
	var duration : Double
	var loopCount : Int
	var clipStart : Double
	var clipDuration : Double
	var loopBehavior : REAnimationLoopBehavior
	var clipReversed : Bool
	var animationSpeed : Float
	var animationComponents : [OpaquePointer]

	// ObjC -> Swift bridged methods
	0x13ab00  @objc __RKEntityAnimateAction.copy(with:)

	// Swift methods
	0x139c70  func __RKEntityAnimateAction.setupAnimations(on:andPlay:) // method 
	0x139d60  func __RKEntityAnimateAction.setupAnimations(entity:assetManager:addToComponentArray:andPlay:) // method 
	0x139f50  func __RKEntityAnimateAction.setupSkeletalAnimation(on:queryResultsArray:animationLibraryComponent:assetManager:addToComponentArray:andPlay:) // method 
	0x13a340  func __RKEntityAnimateAction.setupTransformAnimation(on:transformAnimationAsset:assetManager:addToComponentArray:andPlay:) // method 
	0x13a600  func __RKEntityAnimateAction.findDuration(entity:assetManager:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
	var updateSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x13b5f0  @objc __RKEntityStartAnimateAction.copy(with:)

	// Swift methods
	0x13ac70  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x13b980  @objc __RKEntityStopAnimateAction.copy(with:)
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x13c280  @objc __RKEntityToggleAnimateAction.copy(with:)
 }

 struct RealityKit.__RKScenePhysics {

	// Properties
	var gravity : SIMD3<Float> // +0x0
	var adaptiveTimeStep : Bool // +0x10
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RCInteractionsController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x13ed40  @objc __RCInteractionsController.init()

	// Swift methods
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0x13ede0  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0x13ef20  func __RCEntity.registerCustomAction(named:action:) // method 
 }

 struct RealityKit.PhysicsMotionComponent {

	// Properties
	var linearVelocity : SIMD3<Float> // +0x0
	var angularVelocity : SIMD3<Float> // +0x10
 }

 class RealityKit.__RKTimerTrigger : __RKEntityTrigger { }

 class RealityKit.RKChangeSceneActionBasicTechnique : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let rootEntity : Entity? // +0x10 (0x8)
	let targetSceneIdentifier : UUID // +0x27f000 (0x0)

	// Swift methods
	0x13ff50  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x140200  @objc __RKEntityFadeAction.copy(with:)

	// Swift methods
	0x140090  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x1404c0  @objc __RKFadeSceneAction.copy(with:)

	// Swift methods
	0x1402c0  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity? // +0x0 (0x8)
	var subcomponent : OpaquePointer? // +0x0 (0x8)

	// Swift methods
	0x141590  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0x141830  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0x141a30  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0x1427a0  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
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
	var playbackToken : UInt64? // +0x98 (0x9)
	var audioAssetRef : OpaquePointer? // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x1454d0  @objc __RKEntityAudioAction.copy(with:)

	// Swift methods
	0x1444d0  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
	0x1447f0  func __RKEntityAudioAction.createFileAssetRef() // method 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UInt64 // +0x10 (0x8)
	var entity : weak Entity? // +0x18 (0x8)

	// Swift methods
	0x14b030  func AnimationPlaybackController.__identifier.getter // getter 
	0x14b0c0  func AnimationPlaybackController.entity.getter // getter 
	0x14b0f0  func AnimationPlaybackController.isPaused.getter // getter 
	0x14b110  func AnimationPlaybackController.isComplete.getter // getter 
	0x14b1c0  func AnimationPlaybackController.hash(into:) // method 
	0x14b220  func AnimationPlaybackController.pause() // method 
	0x14b240  func AnimationPlaybackController.resume() // method 
	0x14b260  func AnimationPlaybackController.stop() // method 
	0x14b320  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToEntity : [UUID : Entity] // +0x10 (0x8)

	// Swift methods
	0x14cc60  class func __RKEntityLookupTable.__allocating_init() // init 
	0x14cd50  func __RKEntityLookupTable.entity(for:) // method 
	0x14cdf0  func __RKEntityLookupTable.uuid(for:) // method 
	0x14d430  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0x14d4c0  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreEntity : OpaquePointer // +0x10 (0x8)
	var swiftChildren : Entity // +0x18 (0x8)

	// Swift methods
	0x14f440  func Entity.__coreEntity.getter // getter 
	0x14f450  func Entity.components.getter // getter 
	0x14f470  func Entity.components.setter // setter 
	0x14f490  func Entity.components.modify // modifyCoroutine 
	0x14f530  func Entity.scene.getter // getter 
	0x14f5a0  func Entity.name.getter // getter 
	0x14f5c0  func Entity.name.setter // setter 
	0x14f6a0  func Entity.name.modify // modifyCoroutine 
	0x14f8d0  func Entity.__boundingBox.getter // getter 
	0x14f950  func Entity.isActive.getter // getter 
	0x14f960  func Entity.isAnchored.getter // getter 
	0x14f970  func Entity.isEnabled.getter // getter 
	0x14f980  func Entity.isEnabled.setter // setter 
	0x14f9a0  func Entity.isEnabled.modify // modifyCoroutine 
	0x14fa00  func Entity.isEnabledInHierarchy.getter // getter 
	0x14fa30  class func Entity.__allocating_init() // init 
	0x14fa10  func Entity.didClone(from:) // method 
	0x14fa20  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity? // +0x18 (0x8)
	var collidingEntities : [Entity] // +0x20 (0x8)
	var tags : [String] // +0x28 (0x8)

	// Swift methods
	0x1513a0  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float // +0x64 (0x4)
	let block : () // +0x68 (0x10)
	let durationWiggleRoom : Double // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x156200  @objc __RKWaitAction.copy(with:)

	// Swift methods
	0x155a60  class func __RKWaitAction.__allocating_init(duration:block:) // init 
 }

 class RealityKit.__RKVisibilityShowPopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class RealityKit.__RKEntityCustomAction : __RKEntityAction {

	// Properties
	var handler : (_:)? // +0x68 (0x10)
	let identifier : String // +0x78 (0x10)
	let customArguments : [String : String] // +0x88 (0x8)
	var customArgumentsBlock : (_:_:)? // +0x90 (0x10)

	// ObjC -> Swift bridged methods
	0x15d030  @objc __RKEntityCustomAction.copy(with:)

	// Swift methods
	0x15bb00  func __RKEntityCustomAction.handler.getter // getter 
	0x15bb60  func __RKEntityCustomAction.handler.setter // setter 
	0x15bbd0  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x15bda0  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x15bdf0  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x15be50  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x15bea0  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
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
	var box : MutableBox<A>
 }

 class RealityKit.PhysicsMaterialResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
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

 class RealityKit.RealityFileLoadInformationResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct RealityKit.RealityFileLoadInformation {

	// Properties
	var url : URL
	var sceneName : String?
 }

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
	case importFailureWithURL : URL
	case useSceneNameNotFileName : String
	case invalidPathToRealityFile : URL
	case wrongEntityType  
	case invalidJoints  
 }

 struct RealityKit.BoundingBox {

	// Properties
	var min : SIMD3<Float> // +0x0
	var max : SIMD3<Float> // +0x10
 }

 class RealityKit.__SceneResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
 }

 class RealityKit.BoxedSubscription : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Cancellable?

	// Swift methods
 }

 class RealityKit.REEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventService {

	// Properties
	let coreHandle : OpaquePointer
	var dispatchersByHandle : DispatcherHandle

	// Swift methods
 }

 struct RealityKit.DispatcherHandle {

	// Properties
	let eventID : UInt64 // +0x0
	let sourceObject : OpaquePointer? // +0x8
 }

 class RealityKit.ShapeResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreAsset : OpaquePointer // +0x10 (0x8)
	let pose : REPoseF // +0x20 (0x20)

	// Swift methods
	0x1993c0  func ShapeResource.hash(into:) // method 
	0x1994b0  func ShapeResource.hashValue.getter // getter 
 }

 class RealityKit.__RKEntityInteractionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __RKEntityInteractionService {

	// Properties
	var customTriggerFiredActions : [__RKEntityAction] // +0x10 (0x8)
	var areInteractionsEnabled : Bool // +0x18 (0x1)
	var automaticallyInvokesStartTrigger : Bool // +0x19 (0x1)
	var sceneRef : OpaquePointer // +0x20 (0x8)
	var key : String // +0x28 (0x10)
	var __entityLookupTable : __RKEntityLookupTable // +0x38 (0x8)
	var __simulationSceneCoordinator : __RKSimulationSceneCoordinator // +0x40 (0x8)
	var __interactions : [__RKEntityInteraction] // +0x48 (0x8)

	// Swift methods
	0x19b9c0  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x19b9f0  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x19ba20  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x19ba50  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x19bc40  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x19be30  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x19c160  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x19c170  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x19c3f0  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x19c4e0  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x19c570  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x19c5a0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x19c5d0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x19c690  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x19c6c0  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x19c700  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x19c7d0  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x19c800  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x19c840  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x19c900  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x19c930  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x19cca0  func __RKEntityInteractionManager.__actions.getter // getter 
	0x19ccf0  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x19cde0  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x19d000  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x19d040  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x19e070  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x19e330  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x1a0110  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x1a0340  func __RKEntityInteractionManager.action(for:) // method 
 }

 enum RealityKit.CollisionCastQueryType {

	// Properties
	case nearest  
	case all  
	case any  
 }

 struct RealityKit.CollisionGroup {

	// Properties
	let rawValue : UInt32 // +0x0
 }

 struct RealityKit.CollisionFilter {

	// Properties
	var group : CollisionGroup // +0x0
	var mask : CollisionGroup // +0x4
 }

 struct RealityKit.CollisionCastHit {

	// Properties
	var entity : Entity // +0x0
	var position : SIMD3<Float> // +0x10
	var normal : SIMD3<Float> // +0x20
	var distance : Float // +0x30
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
	let axis : SIMD3<Float> // +0x70 (0x10)
	let direction : __RKEntitySpinDirectionType // +0x80 (0x1)
	var currentAnimation : UInt64? // +0x88 (0x9)
	var updateSubscription : Cancellable? // +0x98 (0x28)
	var deadline : Double // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0x1af8e0  @objc __RKEntitySpinAction.copy(with:)

	// Swift methods
	0x1ae490  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
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
	var m_encoder : JSONEncoder
	var m_payload : Data

	// Swift methods
	0x1b2600  func NetPassthroughEncoder.encode<A>(_:) // method 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
	var m_decoder : JSONDecoder
	var m_payload : Data

	// Swift methods
	0x1b26a0  func NetPassthroughDecoder.decode<A>(_:) // method 
 }

 enum RealityKit.LoadSceneDescriptorsError {

	// Properties
	case unknownReadError  
	case invalidURL  
 }

 struct RealityKit.PrereleaseHeader {

	// Properties
	var schemaVersion : SchemaVersion
	var versionInfo : VersionInfo
	var identifier : UUID?
 }

 enum RealityKit.WritingPhases {

	// Properties
	case gatheringAssets  
	case writingAssets  
	case zipping  
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
	var generation : UInt32 // +0x8
 }

 enum RealityKit.Parameter {

	// Properties
	case texture : TextureResource
	case float : Float
	case float2 : SIMD2<Float>
	case float3 : SIMD3<Float>
	case float4 : SIMD4<Float>
	case float2x2 : simd_float2x2
	case float3x3 : simd_float3x3
	case float4x4 : simd_float4x4
	case default  
 }

 enum RealityKit.__PackageTranslationError {

	// Properties
	case noScenes : (message: String)
	case noScenesMetadata : (message: String)
	case failedToImportUSD : (message: String, url: URL)
	case invalidDictionary : (message: String, invalidDictionary: [String : Any]?)
 }

 class RealityKit.__SceneImportOperation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreOperation : OpaquePointer // +0x10 (0x8)

	// Swift methods
 }

 enum RealityKit.InternalError {

	// Properties
	case unknown  
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
	var inertia : SIMD3<Float> // +0x10
	var centerOfMass : (position: SIMD3<Float>, orientation: simd_quatf) // +0x20
 }

 class RealityKit.__RKEntityForceAction : __RKEntityAction {

	// Properties
	var force : SIMD3<Float>? // +0x70 (0x11)
	var velocity : SIMD3<Float>? // +0x90 (0x11)
	var updateSubscription : Cancellable? // +0xa8 (0x28)

	// ObjC -> Swift bridged methods
	0x1df510  @objc __RKEntityForceAction.copy(with:)

	// Swift methods
	0x1deb30  func __RKEntityForceAction.force.getter // getter 
	0x1dec00  func __RKEntityForceAction.velocity.getter // getter 
	0x1de930  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
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

 class RealityKit.AnimationResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)
	let name : String? // +0x18 (0x10)

	// Swift methods
	0x1ecb10  func AnimationResource.__coreAsset.getter // getter 
 }

 struct RealityKit.ARFrame {

	// Properties
	var camera : ARAnchor
 }

 struct RealityKit.ARAnchor {

	// Properties
	let identifier : UUID
	let transform : simd_float4x4
 }

 class RealityKit.__RKStartTrigger : __RKEntityTrigger {

	// Properties
	var triggered : Bool // +0x13 (0x1)

	// Swift methods
 }

 class RealityKit.MeshResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer?

	// Swift methods
	0x1efdc0  func MeshResource.expectedMaterialCount.getter // getter 
	0x1efde0  func MeshResource.bounds.getter // getter 
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
	var segmentDensity : UInt8
 }

 class RealityKit.__MeshCompileOptions : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let core : OpaquePointer

	// Swift methods
	0x1f06f0  class func __MeshCompileOptions.__allocating_init() // init 
 }

 struct RealityKit.CollisionComponent {

	// Properties
	var shapes : [ShapeResource] // +0x0
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
	0x1f4260  @objc InteractionNotificationsManager.notificationTriggerDidPost(notification:)

	// Swift methods
 }

 struct RealityKit.AnchoringComponent {

	// Properties
	let target : Target // +0x0
	var previousWorldTransform : simd_float4x4? // +0x50
 }

 enum RealityKit.Target {

	// Properties
	case world : (transform: simd_float4x4)
	case camera  
 }

 class RealityKit.__RKVisibilityHideDropAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__ServiceLocator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreServiceLocator : OpaquePointer // +0x10 (0x8)
	var engine : unowned __Engine // +0x18 (0x8)
	var eventService : EventService // +0x20 (0x28)
	var renderService : RERenderService // +0x48 (0x28)
	var sceneService : __SceneService // +0x70 (0x28)
	var assetService : __REAssetService // +0x98 (0x28)
	var loadService : LoadManager // +0xc0 (0x8)

	// Swift methods
	0x1fee70  func __ServiceLocator.__engineRef.getter // getter 
	0x1feea0  func __ServiceLocator.__sceneService.getter // getter 
	0x1feec0  func __ServiceLocator.__assetService.getter // getter 
 }

 struct RealityKit.Transform {

	// Properties
	var scale : SIMD3<Float> // +0x0
	var rotation : simd_quatf // +0x10
	var translation : SIMD3<Float> // +0x20
 }

 class RealityKit.AudioResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let assetRef : OpaquePointer

	// Swift methods
	0x2005c0  func AudioResource.inputMode.getter // getter 
	0x200640  func AudioResource.inputMode.setter // setter 
	0x200660  func AudioResource.inputMode.modify // modifyCoroutine 
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
	0x200740  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x200960  func AudioFileResource.loadingStrategy.getter // getter 
	0x200980  func AudioFileResource.loadingStrategy.setter // setter 
	0x2009a0  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x200a70  func AudioFileResource.shouldLoop.getter // getter 
	0x200a90  func AudioFileResource.shouldLoop.setter // setter 
	0x200ab0  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
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
	var currentAnimation : UInt64?

	// ObjC -> Swift bridged methods
	0x206780  @objc __RKEntityVisibilityAction.copy(with:)

	// Swift methods
	0x206220  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
	0x206ba0  @objc __RKEntityToggleVisibilityAction.copy(with:)
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
	var updateSubscription : Cancellable?
	var fadeSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x20a390  @objc __RKEntityShowAction.copy(with:)

	// Swift methods
	0x204330  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x206dc0  func __RKEntityShowAction.updateFadeIn(_:) // method 
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
	var updateSubscription : Cancellable?
	var fadeSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x20d5a0  @objc __RKEntityHideAction.copy(with:)

	// Swift methods
	0x204510  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x20a570  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x20d620  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
 }

 class RealityKit.__RKSoundTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityPlacementTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityRemovalTrigger : __RKEntityTrigger { }

 class RealityKit.__RKEntityInteraction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var trigger : __RKEntityTrigger // +0x10 (0x8)
	var action : __RKEntityAction // +0x18 (0x8)
	var alternateAction : __RKEntityAction? // +0x20 (0x8)
	var enabled : Bool // +0x28 (0x1)

	// Swift methods
	0x210ea0  func __RKEntityInteraction.trigger.getter // getter 
	0x210f60  func __RKEntityInteraction.action.getter // getter 
	0x211010  func __RKEntityInteraction.enabled.getter // getter 
	0x211040  func __RKEntityInteraction.enabled.setter // setter 
	0x211070  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x210d70  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x2110f0  func __RKEntityInteraction.fire(context:) // method 
	0x2113c0  func __RKEntityInteraction.description.getter // getter 
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
	var widthSegmentCount : UInt16
	var heightSegmentCount : UInt16
	var depthSegmentCount : UInt16
	var cornerSegmentCount : UInt16
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
	var segmentCount : UInt16
	var radius : Float
	var addUVs : Bool
	var addNormals : Bool
	var mergeVertices : Bool
 }

 struct __C.REGeomBuildPlaneOptions {

	// Properties
	var widthSegmentCount : UInt16
	var depthSegmentCount : UInt16
	var cornerSegmentCount : UInt16
	var width : Float
	var depth : Float
	var cornerRadius : Float
	var addUVs : Bool
	var addNormals : Bool
	var orientation : REGeomBuildPlaneOrientation
 }

 struct __C.simd_float4x4 {

	// Properties
	var columns : (SIMD4<Float>, SIMD4<Float>, SIMD4<Float>, SIMD4<Float>)
 }

 struct __C.simd_float3x3 {

	// Properties
	var columns : (SIMD3<Float>, SIMD3<Float>, SIMD3<Float>)
 }

 struct __C.simd_float2x2 {

	// Properties
	var columns : (SIMD2<Float>, SIMD2<Float>)
 }

 enum __C.REAnimationLoopBehavior { }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 struct __C.REPoseF {

	// Properties
	var position : SIMD3<Float>
	var orientation : simd_quatf
 }

 struct __C.RESubscriptionHandle {

	// Properties
	var a : UInt64
	var b : UInt64
 }

 struct __C.simd_quatf {

	// Properties
	var vector : SIMD4<Float>
 }

 class __C.CFError {
 class __C.CFString {
 struct __C.MTLTextureUsage {

	// Properties
	let rawValue : UInt
 }

 struct __C.RESRT {

	// Properties
	var scale : SIMD3<Float>
	var rotation : simd_quatf
	var translation : SIMD3<Float>
 }

 struct __C.REAABB {

	// Properties
	var min : SIMD3<Float>
	var max : SIMD3<Float>
 }

 enum __C.REComponentType { }

 struct __C.REEngineConfigurationEx {

	// Properties
	var sizeBytes : Int
	var version : REEngineConfigurationExVersion
	var instanceID : UnsafePointer<Int8>?
	var userData : UnsafeMutableRawPointer?
	var clockMode : REEngineClockMode
	var createServices : REEngineServiceMask
	var updateServices : REEngineServiceMask
	var startupOptions : REStartupOptions
	var dispatchQueue : Unmanaged<OS_dispatch_queue>?
	var device : Unmanaged<MTLDevice>?
	var renderFlags : RERenderFlags
	var idsServiceId : UnsafePointer<Int8>?
 }

 struct __C.RERenderFlags {

	// Properties
	let rawValue : UInt32
 }

 struct __C.REStartupOptions {

	// Properties
	let rawValue : Int32
 }

 struct __C.REEngineServiceMask {

	// Properties
	let rawValue : UInt32
 }

 enum __C.REEngineClockMode { }

 struct __C.REEngineDoUpdateEvent {

	// Properties
	var deltaTime : Float
 }

 struct __C.REAnimationHasCompletedEvent {

	// Properties
	var entity : OpaquePointer?
	var token : UInt64
	var elapsedTime : Float
 }

 struct __C.REAnimationHasLoopedEvent {

	// Properties
	var entity : OpaquePointer?
	var token : UInt64
	var elapsedTime : Float
	var cycle : Float
 }

 struct __C.REAnimationHasTerminatedEvent {

	// Properties
	var entity : OpaquePointer?
	var token : UInt64
	var elapsedTime : Float
 }

 struct __C.RECollisionDidStartEvent {

	// Properties
	var objectA : OpaquePointer?
	var objectB : OpaquePointer?
	var position : SIMD3<Float>
	var impulse : Float
 }

 struct __C.RECollisionDidUpdateEvent {

	// Properties
	var objectA : OpaquePointer?
	var objectB : OpaquePointer?
	var position : SIMD3<Float>
	var impulse : Float
 }

 struct __C.RECollisionDidStopEvent {

	// Properties
	var objectA : OpaquePointer?
	var objectB : OpaquePointer?
 }

 struct __C.REMotionStateDidChangeEvent {

	// Properties
	var rigidBody : OpaquePointer?
	var isSleeping : Bool
 }

 struct __C.REOwnershipResponseEvent {

	// Properties
	var entity : OpaquePointer?
	var previousOwnerPeerId : UInt64
	var result : REOwnershipResponseResult
 }

 struct __C.REOwnershipChangedEvent {

	// Properties
	var entity : OpaquePointer?
	var newOwnerPeerId : UInt64
 }

 struct __C.REAudioPlayerDidCompleteEvent {

	// Properties
	var playbackToken : UInt64
 }

 struct __C.os_unfair_lock_s {

	// Properties
	var _os_unfair_lock_opaque : UInt32
 }

 struct __C.REOwnershipRequestEvent {

	// Properties
	var entity : OpaquePointer?
	var requestPeerId : UInt64
	var result : UnsafeMutablePointer<Bool>?
 }

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

 struct __C.RECustomComponentSyncInfo {

	// Properties
	var size : Int
	var version : Int32
	var context : UnsafeMutableRawPointer?
	var writeNetworkSnapshot : @convention(c) (_:_:_:_:_:)?
	var readNetworkSnapshot : @convention(c) (_:_:_:_:_:_:)?
 }

 enum __C.REOwnershipResponseResult { }

 enum __C.REGeomBuildPlaneOrientation { }

 enum __C.REEngineConfigurationExVersion { }
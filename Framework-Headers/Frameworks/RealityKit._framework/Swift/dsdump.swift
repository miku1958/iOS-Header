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
	var internalSpecifications : [__RKEntityInteractionSpecification]? // +0x8
	var internalInteractions : [__RKEntityInteraction]? // +0x10
	var entity : Entity? // +0x18
	var didFireStartTrigger : Bool? // +0x20
 }

 enum RealityKit.InteractionError {

	// Properties
	case jsonEncodingTooLarge  
	case allocationFailure  
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
	0x60c0  class func __RKEntityInteractionsComponent.Registration.__allocating_init() // init 
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
	0xcb20  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xcdb0  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xcde0  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xce30  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xcf90  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xcfc0  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xd000  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xd040  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
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
	let direction : SIMD3<Float> // +0x70 (0x10)
	let upVector : SIMD3<Float> // +0x80 (0x10)
	var updateSubscription : Cancellable? // +0x90 (0x28)
	var deadline : Double // +0xb8 (0x8)

	// ObjC -> Swift bridged methods
	0x16950  @objc __RKEntityLookAtCameraAction.copy(with:)

	// Swift methods
	0x15d00  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:direction:upVector:) // init 
	0x15ed0  func __RKEntityLookAtCameraAction.update() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let assetPathPrefix : String // +0x10 (0x10)
	var $__lazy_storage_$_schemePrefix : String? // +0x20 (0x10)
	var resolvedURLByAssetPathPrefix : [String : String] // +0x30 (0x8)

	// Swift methods
	0x16d50  class func __RealityFileURLResolver.__allocating_init() // init 
	0x17280  func __RealityFileURLResolver.schemePrefix.getter // getter 
	0x17370  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x17490  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x17780  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x17cf0  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x182b0  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x18330  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x184f0  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x185d0  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
	0x18670  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.getter // getter 
	0x186a0  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.setter // setter 
	0x186e0  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.modify // modifyCoroutine 
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
	var direction : SIMD3<Float>?
	var upVector : SIMD3<Float>?
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
	case direction  
	case upVector  
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
 struct RealityKit.OrderedCoatCheckBag {

	// Properties
	var _ref : _OrderedCoatCheckBagRef
 }

 struct RealityKit.Ticket {

	// Properties
	var _key : Int
	var _ptr : UnsafeRawPointer
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
	0x5c2c0  @objc __RKEntityEmphasisAction.copy(with:)

	// Swift methods
	0x5aeb0  func __RKEntityEmphasisAction.currentAnimation.getter // getter 
	0x5aee0  func __RKEntityEmphasisAction.currentAnimation.setter // setter 
	0x5af30  func __RKEntityEmphasisAction.currentAnimation.modify // modifyCoroutine 
	0x5af80  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
 }

 struct RealityKit.RECameraViewSettings {

	// Properties
	var __struct : UnsafeMutableRawPointer // +0x0
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
	0x610d0  class func __RKSceneUUIDComponent.Registration.__allocating_init() // init 
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
	0x622a0  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x62360  func MultipeerConnectivityService.entity(for:) // method 
	0x62390  func MultipeerConnectivityService.owner(of:) // method 
	0x624d0  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x62600  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x62710  func MultipeerConnectivityService.__toCore(peerID:) // method 
	0x627e0  func MultipeerConnectivityService.startSync() // method 
	0x62820  func MultipeerConnectivityService.stopSync() // method 
 }

 enum RealityKit.SynchronizationError {

	// Properties
	case encryptionRequired  
 }

 class RealityKit.TextureResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x62e20  func TextureResource.__coreAsset.getter // getter 
	0x63420  class func TextureResource.__allocating_init(_:) // init 
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
	0x6c820  @objc __RKEntityActionGroup.copy(with:)

	// Swift methods
	0x67920  func __RKEntityActionGroup.actions.getter // getter 
	0x679f0  func __RKEntityActionGroup.ordering.getter // getter 
	0x67aa0  func __RKEntityActionGroup.loopCount.getter // getter 
	0x67ad0  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x67de0  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x697e0  func __RKEntityActionGroup.allActions() // method 
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
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
	0x6fc00  class func __REAnchoring.Registration.__allocating_init() // init 
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
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
	0x841b0  class func __RKEntityTagsComponent.Registration.__allocating_init() // init 
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
	0x8c770  func AudioPlaybackController.entity.getter // getter 
	0x8c840  func AudioPlaybackController.playbackToken.getter // getter 
	0x8c870  func AudioPlaybackController.playbackToken.setter // setter 
	0x8c8a0  func AudioPlaybackController.playbackToken.modify // modifyCoroutine 
	0x8c4b0  class func AudioPlaybackController.__allocating_init(resource:entity:) // init 
	0x8cd70  func AudioPlaybackController.completionHandler.getter // getter 
	0x8cdb0  func AudioPlaybackController.completionHandler.setter // setter 
	0x8ce00  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
 }

 enum RealityKit.REError {

	// Properties
	case invalidIdentifier : __REAssetIdentifier
	case invalidURL : URL
	case internalError : String
 }

 struct RealityKit.__REAssetIdentifier {

	// Properties
	var value : String // +0x0
 }

 class RealityKit.REAssetPathMapping : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : UnsafeMutableRawPointer

	// Swift methods
	0x8f350  class func REAssetPathMapping.__allocating_init(_:) // init 
 }

 class RealityKit.__REAsset : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : OpaquePointer

	// Swift methods
	0x8f490  class func __REAsset.__allocating_init(_:) // init 
	0x8f5a0  class func __REAsset.__allocating_init(sceneRef:assetService:assetPath:) // init 
	0x8f750  class func __REAsset.__allocating_init(_:assetService:) // init 
	0x8f9b0  class func __REAsset.__allocating_init(url:assetService:) // init 
	0x8fc90  class func __REAsset.__allocating_init(url:assetService:assetPath:) // init 
	0x8ff70  func __REAsset.debugDescription.getter // getter 
	0x900d0  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x900e0  func __REAsset.load() // method 
	0x900f0  func __REAsset.loadWithError() // method 
	0x90200  func __REAsset.isLoaded.getter // getter 
	0x90210  func __REAsset.path.getter // getter 
	0x90240  func __REAsset.compiledExtension.getter // getter 
	0x90260  func __REAsset.write(to:assetPathMapping:) // method 
	0x906a0  func __REAsset.__handle.getter // getter 
 }

 enum RealityKit.LoadError {

	// Properties
	case loading : (assetPath: String)
 }

 class RealityKit.__REAssetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __REAssetService {

	// Properties
	var _mainBundle : __REAssetBundle?
	let handle : OpaquePointer

	// Swift methods
	0x90820  class func __REAssetManager.__allocating_init(handle:) // init 
	0x90990  func __REAssetManager.engineQueue.getter // getter 
	0x909b0  func __REAssetManager.mainBundle.getter // getter 
	0x910a0  func __REAssetManager.loadBundle(at:) // method 
	0x911c0  func __REAssetManager.makeBundle() // method 
	0x91240  func __REAssetManager.__getDependencies(asset:) // method 
	0x95d70  func __REAssetManager.__handle.getter // getter 
 }

 class RealityKit.__AssetLoadRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAssetRequest : OpaquePointer

	// Swift methods
	0x91db0  class func __AssetLoadRequest.__allocating_init(core:) // init 
 }

 enum RealityKit.SerializationError {

	// Properties
	case writing  
	case reading  
 }

 enum RealityKit.CodingKeys {

	// Properties
	case value  
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
	0x98610  class func InputManager.__allocating_init() // init 
 }

 class RealityKit.__RKSceneAssetLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToRESceneAsset : NSMapTable<NSUUID, __REAsset> // +0x10 (0x8)

	// Swift methods
	0x988f0  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x98960  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x989e0  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
	0x98730  class func __RKSceneAssetLookupTable.__allocating_init() // init 
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
	0xa9c90  class func SceneManager.__allocating_init(coreECSManager:) // init 
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
	0xaf990  @objc __RKEntityTransformAction.copy(with:)

	// Swift methods
	0xaddb0  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
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
	0xb0580  class func RERenderFrameSettings.__allocating_init(_:) // init 
	0xb0650  func RERenderFrameSettings.setTotalTime(_:) // method 
	0xb0660  func RERenderFrameSettings.renderFrameSettings.getter // getter 
	0xb0670  func RERenderFrameSettings.setWaitEvent(_:value:) // method 
	0xb0690  func RERenderFrameSettings.setSignalEvent(_:value:) // method 
 }

 class RealityKit.__RKVisibilityHideMoveOutAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RERenderGraphEmitter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let asset : __REAsset // +0x10 (0x8)

	// Swift methods
	0xbb2f0  class func __RERenderGraphEmitter.__allocating_init(_:) // init 
	0xbb380  func __RERenderGraphEmitter.unsetup(mgr:) // method 
	0xbb970  func __RERenderGraphEmitter.setup(mgr:) // method 
	0xbbe80  func __RERenderGraphEmitter.execute(mgr:) // method 
	0xbbec0  func __RERenderGraphEmitter.__setWireframeMode(displayWireframe:) // method 
	0xbbee0  func __RERenderGraphEmitter.__handle.getter // getter 
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
	0xbd480  func __MaterialResource.coreAsset.getter // getter 
	0xbd4b0  func __MaterialResource.coreAsset.setter // setter 
	0xbd4e0  func __MaterialResource.coreAsset.modify // modifyCoroutine 
	0xbd520  func __MaterialResource.__coreAsset.getter // getter 
	0xbe310  class func __MaterialResource.__allocating_init(_:) // init 
 }

 struct RealityKit.AnyMaterial: Material {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
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
	0xc7090  class func __RKEntityUUIDComponent.Registration.__allocating_init() // init 
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
	0xcc6e0  @objc __RKEntityAction.copy(with:)

	// Swift methods
	0xcb5d0  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0xc9b20  func __RKEntityAction.targetEntity.getter // getter 
	0xc9b50  func __RKEntityAction.targetEntity.setter // setter 
	0xc9b90  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0xc9bc0  func __RKEntityAction.completionHandler.getter // getter 
	0xc9c00  func __RKEntityAction.completionHandler.setter // setter 
	0xc9c50  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0xc9c80  func __RKEntityAction.isAlternate.getter // getter 
	0xc9cb0  func __RKEntityAction.isAlternate.setter // setter 
	0xc9ce0  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0xc9d20  func __RKEntityAction.isExclusive.getter // getter 
	0xc9d50  func __RKEntityAction.isExclusive.setter // setter 
	0xc9d80  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0xc9db0  func __RKEntityAction.state.getter // getter 
	0xc9df0  func __RKEntityAction.state.setter // setter 
	0xc9e70  func __RKEntityAction.state.modify // modifyCoroutine 
	0xc9fb0  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0xc9fe0  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0xca020  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0xca050  func __RKEntityAction.performAction(with:) // method 
	0xca820  func __RKEntityAction.shouldContinueOnPerform() // method 
	0xca940  func __RKEntityAction.preloadAssets() // method 
	0xcc4f0  func __RKEntityAction.perform(with:) // method 
	0xca950  func __RKEntityAction.addStateObserver(_:) // method 
	0xca9f0  func __RKEntityAction.removeStateObserver(_:) // method 
	0xcc5f0  func __RKEntityAction.reversed() // method 
	0xcaa50  func __RKEntityAction.description.getter // getter 
	0xcac60  func __RKEntityAction.stop() // method 
	0xcadc0  func __RKEntityAction.isExclusiveWith(action:) // method 
	0xcc600  func __RKEntityAction.copy(with:) // method 
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

 struct RealityKit.RKARSegmentationComponent {

	// Properties
	var segmentationBuffer : MTLTexture? // +0x0
	var estimatedDepthData : MTLTexture? // +0x8
	var cameraTextureY : MTLTexture? // +0x10
	var cameraTextureCbCr : MTLTexture? // +0x18
 }

 class RealityKit.__RKEntityTrigger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var reversible : Bool // +0x10 (0x1)
	var shouldReverse : Bool // +0x11 (0x1)
	var shouldFireAlternate : Bool // +0x12 (0x1)

	// Swift methods
	0xd0190  class func __RKEntityTrigger.__allocating_init() // init 
	0xcfaf0  func __RKEntityTrigger.reversible.getter // getter 
	0xcfb20  func __RKEntityTrigger.reversible.setter // setter 
	0xcfb50  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0xcfb90  func __RKEntityTrigger.shouldReverse.getter // getter 
	0xcfbc0  func __RKEntityTrigger.shouldReverse.setter // setter 
	0xcfbf0  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0xcfc20  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0xcfc50  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0xcfc80  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0xcfcb0  func __RKEntityTrigger.matches(with:) // method 
	0xd00b0  func __RKEntityTrigger.description.getter // getter 
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
	0xd33a0  func __RKCustomTrigger.identifier.getter // getter 
	0xd33e0  func __RKCustomTrigger.identifier.setter // setter 
	0xd3420  func __RKCustomTrigger.identifier.modify // modifyCoroutine 
	0xd34f0  func __RKCustomTrigger.customArguments.getter // getter 
	0xd3520  func __RKCustomTrigger.customArguments.setter // setter 
	0xd3560  func __RKCustomTrigger.customArguments.modify // modifyCoroutine 
	0xd3590  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]
	var targetEntity : Entity?

	// Swift methods
	0xd51b0  func __RKEntityCustomTrigger.identifier.getter // getter 
	0xd5230  func __RKEntityCustomTrigger.identifier.setter // setter 
	0xd3d60  func __RKEntityCustomTrigger.identifier.modify // modifyCoroutine 
	0xd51a0  func __RKEntityCustomTrigger.customArguments.getter // getter 
	0xd51c0  func __RKEntityCustomTrigger.customArguments.setter // setter 
	0xd3e20  func __RKEntityCustomTrigger.customArguments.modify // modifyCoroutine 
	0xd3ee0  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0xd3f10  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0xd3f50  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0xd3f80  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
 }

 class RealityKit.RERenderFrameWorkload : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameWorkload : UnsafeMutableRawPointer // +0x10 (0x8)

	// Swift methods
	0xd58d0  class func RERenderFrameWorkload.__allocating_init(_:) // init 
	0xd59a0  func RERenderFrameWorkload.configure(_:) // method 
	0xd59e0  func RERenderFrameWorkload.commit() // method 
	0xd59f0  func RERenderFrameWorkload.addEncodedHandler(handler:) // method 
	0xd5ba0  func RERenderFrameWorkload.commitAndWait() // method 
	0xd5bb0  func RERenderFrameWorkload.commitWithImmediatePresent() // method 
	0xd5bc0  func RERenderFrameWorkload.renderFrameWorkload.getter // getter 
 }

 class RealityKit.__RKVisibilityHideLaunchAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.RKEngineAdapter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var engine : __Engine

	// Swift methods
	0xdbbd0  class func RKEngineAdapter.__allocating_init(_:) // init 
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
	0xdc630  func __Engine.__coreEngine.getter // getter 
	0xdc6e0  func __Engine.services.getter // getter 
	0xdc790  func __Engine.hasRenderedThisFrame.getter // getter 
	0xdc7c0  func __Engine.hasRenderedThisFrame.setter // setter 
	0xdc7f0  func __Engine.hasRenderedThisFrame.modify // modifyCoroutine 
	0xdc830  func __Engine.isRunning.getter // getter 
	0xdc8c0  func __Engine.acceptingInput.getter // getter 
	0xdc8d0  func __Engine.acceptingInput.setter // setter 
	0xdc8f0  func __Engine.acceptingInput.modify // modifyCoroutine 
	0xdb9b0  class func __Engine.__allocating_init(configuration:) // init 
	0xdd0f0  class func __Engine.__allocating_init(coreEngine:) // init 
	0xdd510  class func __Engine.__allocating_init(coreEngine:) // init 
	0xdda10  func __Engine.start() // method 
	0xdda40  func __Engine.__start() // method 
	0xdda80  func __Engine.stop() // method 
	0xddab0  func __Engine.__stop() // method 
	0xddaf0  func __Engine.tick() // method 
	0xddb00  func __Engine.tick(duration:) // method 
	0xddb20  func __Engine.parallelFor(count:stride:lambda:) // method 
	0xddc90  func __Engine.runJob(_:) // method 
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
	0xdff90  func __RKEntityTriggerGroup.triggers.getter // getter 
	0xdffc0  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity? // +0x68 (0x8)
	let buildOutAction : __RKEntityHideAction // +0x70 (0x8)
	let buildInAction : __RKEntityShowAction // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0xe2530  @objc __RKEntitySwapEntityAction.copy(with:)

	// Swift methods
	0xe1b40  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0xe3e40  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0xe4550  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0xe46f0  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0xe49b0  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0xe4e70  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
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
	0xe6d10  @objc __RKChangeSceneAction.copy(with:)

	// Swift methods
	0xe5ef0  func __RKChangeSceneAction.rootEntity.getter // getter 
	0xe5f30  func __RKChangeSceneAction.rootEntity.setter // setter 
	0xe5f80  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0xe5fd0  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
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
	0xed420  class func RERenderManager.__allocating_init(_:) // init 
	0xed4b0  func RERenderManager.device.getter // getter 
	0xed4d0  func RERenderManager.registerRenderLayer(_:) // method 
	0xed4f0  func RERenderManager.unregisterRenderLayer(_:) // method 
	0xed500  func RERenderManager.setLayerSize(_:_:_:) // method 
	0xed510  func RERenderManager.getLayerSize(_:) // method 
	0xed540  func RERenderManager.createRenderFrameSettings() // method 
	0xed560  func RERenderManager.createRenderFrameWorkload() // method 
	0xed5c0  func RERenderManager.needToWaitForFramePacingNow() // method 
	0xed5d0  func RERenderManager.waitForFramePacing() // method 
	0xed5e0  func RERenderManager.waitUntilScheduled() // method 
	0xed5f0  func RERenderManager.renderManager.getter // getter 
	0xed600  func RERenderManager.getManager<A>() // method 
	0xed770  func RERenderManager.__handle.getter // getter 
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
	0xf9420  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xf9450  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xf9490  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xf94d0  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
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
	0xfc2c0  @objc __RKEntityOrbitEntityAction.copy(with:)

	// Swift methods
	0xf9e70  func __RKEntityOrbitEntityAction.currentAnimation.getter // getter 
	0xf9ea0  func __RKEntityOrbitEntityAction.currentAnimation.setter // setter 
	0xf9ef0  func __RKEntityOrbitEntityAction.currentAnimation.modify // modifyCoroutine 
	0xf9fc0  func __RKEntityOrbitEntityAction.targetEntityParent.getter // getter 
	0xfa000  func __RKEntityOrbitEntityAction.targetEntityParent.setter // setter 
	0xfa040  func __RKEntityOrbitEntityAction.targetEntityParent.modify // modifyCoroutine 
	0xfa110  func __RKEntityOrbitEntityAction.ghostPivotEntity.getter // getter 
	0xfa150  func __RKEntityOrbitEntityAction.ghostPivotEntity.setter // setter 
	0xfa190  func __RKEntityOrbitEntityAction.ghostPivotEntity.modify // modifyCoroutine 
	0xfa1e0  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xfa4a0  func __RKEntityOrbitEntityAction.update() // method 
 }

 class RealityKit.LoadManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let sceneResourceCache : __SceneResourceCache

	// Swift methods
	0xfc790  class func LoadManager.__allocating_init() // init 
 }

 struct RealityKit.__SceneResourceLoadResultLoadContext {

	// Properties
	var fileName : String // +0x0
 }

 struct RealityKit.SceneResourceLoadResult {

	// Properties
	let sceneResource : __SceneResource // +0x0
	let context : __SceneResourceLoadResultLoadContext // +0x8
	let cacheEntry : Entry // +0x18
 }

 enum RealityKit.InternalError {

	// Properties
	case unableToFindScene : (String, URL)
	case unknown  
 }

 class RealityKit.__SceneResourceCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var entriesByURL : Entry
	let lockQueue : OS_dispatch_queue

	// Swift methods
	0xfc740  class func __SceneResourceCache.__allocating_init() // init 
 }

 class RealityKit.Entry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetBundle : __REAssetBundle

	// Swift methods
	0xfd300  class func __SceneResourceCache.Entry.__allocating_init(_:) // init 
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
	0x105350  func __RKEntityProximityTrigger.targetEntity.getter // getter 
	0x105380  func __RKEntityProximityTrigger.targetEntity.setter // setter 
	0x1053c0  func __RKEntityProximityTrigger.targetEntity.modify // modifyCoroutine 
	0x105400  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0x1054d0  func __RKEntityProximityTrigger.distance.getter // getter 
	0x1055a0  func __RKEntityProximityTrigger.type.getter // getter 
	0x105650  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0x105700  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0x105730  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
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
	0x248590  @objc ARView.renderLayer.getter
	0x2485e0  @objc ARView.contentScaleFactor.getter
	0x248650  @objc ARView.contentScaleFactor.setter
	0x2488c0  @objc ARView.willResignActive(notification:)
	0x248970  @objc ARView.restartEngine(notification:)
	0x248aa0  @objc ARView.didMoveToSuperview()
	0x248bd0  @objc ARView.layoutSubviews()
	0x248c90  @objc ARView.touchesBegan(_:with:)
	0x248cd0  @objc ARView.touchesMoved(_:with:)
	0x248e10  @objc ARView.touchesEnded(_:with:)
	0x249190  @objc ARView.touchesCancelled(_:with:)
	0x2491b0  @objc ARView.handleSingleTap(recognizer:)
	0x249280  @objc ARView.gestureRecognizer(_:shouldRecognizeSimultaneouslyWith:)
	0x109240  @objc ARView.init(coder:)
	0x109950  @objc ARView.init(frame:)
	0x10ac90  @objc ARView.__deallocating_deinit
	0x10acb0  @objc ARView.__ivar_destroyer

	// Swift methods
	0x1073f0  func ARView.__services.getter // getter 
	0x107600  func ARView.scene.getter // getter 
	0x1076e0  func ARView.__delegatePrivate.getter // getter 
	0x107720  func ARView.__delegatePrivate.setter // setter 
	0x107780  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0x107910  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0x107a20  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0x107b40  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x108070  func ARView.debugOptions.getter // getter 
	0x1080b0  func ARView.debugOptions.setter // setter 
	0x108130  func ARView.debugOptions.modify // modifyCoroutine 
	0x108310  func ARView.startEngine() // method 
	0x108490  func ARView.stopEngine() // method 
	0x1086c0  func ARView.environment.getter // getter 
	0x108700  func ARView.environment.setter // setter 
	0x108760  func ARView.environment.modify // modifyCoroutine 
	0x108880  func ARView.cameraTransform.getter // getter 
	0x108a90  func ARView.audioListener.getter // getter 
	0x108b30  func ARView.audioListener.setter // setter 
	0x108be0  func ARView.audioListener.modify // modifyCoroutine 
	0x108ea0  func ARView.__environmentEntity.getter // getter 
	0x108ec0  func ARView.__environmentEntity.setter // setter 
	0x108f10  func ARView.__environmentEntity.modify // modifyCoroutine 
	0x108ff0  func ARView.__enableAutomaticFrameRate.getter // getter 
	0x109010  func ARView.__enableAutomaticFrameRate.setter // setter 
	0x109030  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0x109110  func ARView.__preferredFrameRate.getter // getter 
	0x109140  func ARView.__preferredFrameRate.setter // setter 
	0x109180  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0x109980  func ARView.__customizeMetalLayer() // method 
	0x109ce0  func ARView.__renderGraphEmitter.getter // getter 
	0x109d40  func ARView.__renderGraphEmitter.setter // setter 
	0x109d60  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0x109e10  func ARView.__setWireframeMode(displayWireframe:) // method 
	0x109ec0  func ARView.__targetIdentifier.getter // getter 
	0x109ee0  func ARView.__didInitializeEngine() // method 
	0x109f90  func ARView.__disableComposition.getter // getter 
	0x109fb0  func ARView.__disableComposition.setter // setter 
	0x109fd0  func ARView.__disableComposition.modify // modifyCoroutine 
	0x10a0b0  func ARView.__nonARKitDevices.getter // getter 
	0x10a0d0  func ARView.__nonARKitDevices.setter // setter 
	0x10a0f0  func ARView.__nonARKitDevices.modify // modifyCoroutine 
	0x10ae20  func ARView.enablePresentsWithTransaction.getter // getter 
	0x10ae40  func ARView.enablePresentsWithTransaction.setter // setter 
	0x10aea0  func ARView.enablePresentsWithTransaction.modify // modifyCoroutine 
	0x10af80  func ARView.presentsWithTransactionFrames.getter // getter 
	0x10afb0  func ARView.presentsWithTransactionFrames.setter // setter 
	0x10aff0  func ARView.presentsWithTransactionFrames.modify // modifyCoroutine 
	0x10c9b0  func ARView.__handleTapAtPoint(point:) // method 
	0x10d6f0  func ARView.__statisticsOptions.getter // getter 
	0x10d730  func ARView.__statisticsOptions.setter // setter 
	0x10d7b0  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0x10d9a0  func ARView.__disableStatisticsRendering.getter // getter 
	0x10d9f0  func ARView.__disableStatisticsRendering.setter // setter 
	0x10db60  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0x10de20  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0x10df70  func ARView.__frameTime() // method 
	0x10e430  func ARView.snapshot(saveToHDR:completion:) // method 
	0x10f660  func ARView.__startAudioEngine() // method 
	0x10f680  func ARView.__stopAudioEngine() // method 
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
	0x116050  class func __RKVisibilityBaseAnimation.__allocating_init() // init 
 }

 struct RealityKit.AREnvironmentProbeComponent {

	// Properties
	var texture : TextureResource? // +0x0
	var extent : SIMD3<Float> // +0x10
	var priority : UInt32 // +0x20
	var weight : Float // +0x24
 }

 class RealityKit.__RKActiveSceneManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeScene : Scene? // +0x10 (0x8)
	var observers : __RKActiveSceneObserver // +0x18 (0x8)

	// Swift methods
	0x117300  class func __RKActiveSceneManager.__allocating_init() // init 
	0x1175c0  func __RKActiveSceneManager.activeScene.getter // getter 
	0x1175f0  func __RKActiveSceneManager.activeScene.setter // setter 
	0x117610  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0x1178b0  func __RKActiveSceneManager.addObserver(observer:) // method 
	0x1179a0  func __RKActiveSceneManager.removeObserver(observer:) // method 
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

 enum RealityKit.Value {

	// Properties
	case skybox : EnvironmentResource
	case color : UIColor
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

 enum RealityKit.MotionStateEvents { }

 struct RealityKit.DidChange: Event {

	// Properties
	let entity : Entity // +0x0
	let isSleeping : Bool // +0x8
 }

 enum RealityKit.SynchronizationEvents { }

 struct RealityKit.OwnershipRequest: Event {

	// Properties
	let entity : Entity // +0x0
	let requester : SynchronizationPeerID // +0x8
	let accept : () // +0x30
 }

 struct RealityKit.OwnershipResponse: Event {

	// Properties
	let entity : Entity // +0x0
	let previousOwner : SynchronizationPeerID? // +0x8
	let response : Response // +0x30
 }

 enum RealityKit.Response {

	// Properties
	case granted  
	case timedOut  
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

 struct RealityKit.CorePublisher {

	// Properties
	let sourceObject : OpaquePointer?
	let dispatcher : REEventDispatcher<A>
 }

 struct RealityKit.Inner {

	// Properties
	let downstream : A1
 }

 struct RealityKit.__REAssetBundle {

	// Properties
	let header : Header
	let __sceneAssets : [__REAsset]
	let assetService : __REAssetService
	var assetMapSceneDescriptorsByAsset : SceneDescriptor
 }

 struct RealityKit.Header {

	// Properties
	var versionInfo : VersionInfo
	var minVersion : Int
	var identifier : UUID?
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

 struct RealityKit.__MaterialDefinitionOverride {

	// Properties
	let materialDefinition : String // +0x0
	let serviceLocator : OpaquePointer // +0x10
 }

 struct RealityKit.__InternalURLs {

	// Properties
	let headerFile : URL
	let assetMapFile : URL
	let assetFolder : URL
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

 enum RealityKit.SerializationError {

	// Properties
	case componentNotRegistered : (componentName: String)
	case notOnTheEngineQueue : String
	case couldNotParseCustomComponent  
	case canceled  
 }

 struct RealityKit.__Archiving { }

 class RealityKit.Operation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x13cbe0  class func __Archiving.Operation.__allocating_init(from:) // init 
	0x13cd10  func __Archiving.Operation.set(compressionLevel:) // method 
	0x13cd30  func __Archiving.Operation.set(compressStreams:) // method 
	0x13cd50  func __Archiving.Operation.set(progress:) // method 
	0x13cd70  func __Archiving.Operation.archive(to:) // method 
	0x13cd90  func __Archiving.Operation.unarchive(to:) // method 
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
	0x1576f0  func EnvironmentResource.coreIBLAsset.getter // getter 
	0x157720  func EnvironmentResource.coreIBLAsset.setter // setter 
	0x157750  func EnvironmentResource.coreIBLAsset.modify // modifyCoroutine 
	0x157810  func EnvironmentResource.coreSkyboxAsset.getter // getter 
	0x157840  func EnvironmentResource.coreSkyboxAsset.setter // setter 
	0x157870  func EnvironmentResource.coreSkyboxAsset.modify // modifyCoroutine 
	0x157070  class func EnvironmentResource.__allocating_init(_:_:) // init 
 }

 struct RealityKit.SkyboxMaterial {

	// Properties
	let __resource : __MaterialResource // +0x0
	var __parameterBlock : __RKMaterialParameterBlock // +0x8
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
	0x15c690  func Scene.__coreScene.getter // getter 
	0x15c6a0  func Scene.name.getter // getter 
	0x15c750  func Scene.__audioListener.getter // getter 
	0x15c780  func Scene.__audioListener.setter // setter 
	0x15c7a0  func Scene.__audioListener.modify // modifyCoroutine 
	0x15cc20  func Scene.internalAudioListener.getter // getter 
	0x15cc50  func Scene.internalAudioListener.setter // setter 
	0x15ccb0  func Scene.internalAudioListener.modify // modifyCoroutine 
	0x15ce00  func Scene.defaultCamera.getter // getter 
	0x15ce30  func Scene.defaultCamera.setter // setter 
	0x15ce70  func Scene.defaultCamera.modify // modifyCoroutine 
	0x15ceb0  func Scene.__defaultCamera.getter // getter 
	0x15cf00  func Scene.internalActiveCamera.getter // getter 
	0x15d3a0  func Scene.activeCamera.getter // getter 
	0x15d3d0  func Scene.activeCamera.setter // setter 
	0x15db10  func Scene.activeCamera.modify // modifyCoroutine 
	0x15ebd0  func Scene.entities.getter // getter 
	0x15ec00  func Scene.entities.setter // setter 
	0x15ec40  func Scene.entities.modify // modifyCoroutine 
	0x15ec70  func Scene.__entities.getter // getter 
	0x15ed50  func Scene.anchors.getter // getter 
	0x15ed70  func Scene.anchors.setter // setter 
	0x15edb0  func Scene.anchors.modify // modifyCoroutine 
	0x15edf0  func Scene.addAnchor(_:) // method 
	0x15ee60  func Scene.removeAnchor(_:) // method 
	0x15ef30  func Scene.coreECSService.getter // getter 
	0x15efd0  func Scene.eventService.getter // getter 
	0x15f120  func Scene.eventService.setter // setter 
	0x15f180  func Scene.eventService.modify // modifyCoroutine 
	0x15f250  func Scene.__eventService.getter // getter 
	0x15f280  func Scene.engineEventService.getter // getter 
	0x15f410  class func Scene.__allocating_init(coreScene:) // init 
	0x15f640  func Scene.findEntity(named:) // method 
	0x15fb30  func Scene.__interactionService.getter // getter 
	0x15fc50  func Scene.synchronizationService.getter // getter 
	0x15fca0  func Scene.synchronizationService.setter // setter 
	0x15fcd0  func Scene.synchronizationService.modify // modifyCoroutine 
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
	0x165ce0  @objc __RKEntityAnimateAction.copy(with:)

	// Swift methods
	0x164c60  func __RKEntityAnimateAction.animationComponents.getter // getter 
	0x164ca0  func __RKEntityAnimateAction.animationComponents.setter // setter 
	0x164ce0  func __RKEntityAnimateAction.animationComponents.modify // modifyCoroutine 
	0x164d40  func __RKEntityAnimateAction.stopAllAnimations() // method 
	0x164df0  func __RKEntityAnimateAction.setupAnimations(on:andPlay:) // method 
	0x164f70  func __RKEntityAnimateAction.setupAnimations(entity:assetManager:addToComponentArray:andPlay:) // method 
	0x165290  func __RKEntityAnimateAction.setupSkeletalAnimation(on:queryResultsArray:animationLibraryComponent:assetManager:addToComponentArray:andPlay:) // method 
	0x165720  func __RKEntityAnimateAction.setupTransformAnimation(on:transformAnimationAsset:assetManager:addToComponentArray:andPlay:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
	var updateSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x166ac0  @objc __RKEntityStartAnimateAction.copy(with:)

	// Swift methods
	0x165e70  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x166e30  @objc __RKEntityStopAnimateAction.copy(with:)
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x167820  @objc __RKEntityToggleAnimateAction.copy(with:)
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
	0x169bb0  class func __RKScenePhysics.Registration.__allocating_init() // init 
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RCInteractionsController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x16ae90  @objc __RCInteractionsController.init()

	// Swift methods
	0x16ac70  class func static __RCInteractionsController.__invokeCustomTrigger(named:onEntityNamed:inSceneNamed:) // method 
	0x16ad30  class func static __RCInteractionsController.__registerCustomAction(named:inSceneNamed:action:) // method 
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0x16af30  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0x16b0f0  func __RCEntity.registerCustomAction(named:action:) // method 
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
	let targetSceneIdentifier : UUID // +0x2bc000 (0x0)

	// Swift methods
	0x16cb40  class func RKChangeSceneActionBasicTechnique.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
	0x16cbe0  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x16cf70  @objc __RKEntityFadeAction.copy(with:)

	// Swift methods
	0x16ccf0  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x16d2b0  @objc __RKFadeSceneAction.copy(with:)

	// Swift methods
	0x16d060  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity? // +0x0 (0x8)
	var subcomponent : OpaquePointer? // +0x0 (0x8)

	// Swift methods
	0x16e460  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0x16e730  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0x16e9b0  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0x16f950  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
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
	0x172fc0  @objc __RKEntityAudioAction.copy(with:)

	// Swift methods
	0x171a30  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UInt64 // +0x10 (0x8)
	var entity : weak Entity? // +0x18 (0x8)

	// Swift methods
	0x179110  func AnimationPlaybackController.identifier.getter // getter 
	0x179140  func AnimationPlaybackController.identifier.setter // setter 
	0x179170  func AnimationPlaybackController.identifier.modify // modifyCoroutine 
	0x1791b0  func AnimationPlaybackController.__identifier.getter // getter 
	0x179270  func AnimationPlaybackController.entity.getter // getter 
	0x1792a0  func AnimationPlaybackController.isPaused.getter // getter 
	0x1792c0  func AnimationPlaybackController.isComplete.getter // getter 
	0x178fb0  class func AnimationPlaybackController.__allocating_init(entity:identifier:) // init 
	0x179430  func AnimationPlaybackController.hash(into:) // method 
	0x1794f0  func AnimationPlaybackController.pause() // method 
	0x179510  func AnimationPlaybackController.resume() // method 
	0x179530  func AnimationPlaybackController.stop() // method 
	0x179650  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToEntity : [UUID : Entity] // +0x10 (0x8)

	// Swift methods
	0x17b8c0  class func __RKEntityLookupTable.__allocating_init() // init 
	0x17b9b0  func __RKEntityLookupTable.entity(for:) // method 
	0x17ba50  func __RKEntityLookupTable.uuid(for:) // method 
	0x17c0b0  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0x17c140  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreEntity : OpaquePointer
	var swiftChildren : Entity

	// Swift methods
	0x17cda0  func Entity.__coreEntity.getter // getter 
	0x17cdd0  func Entity.components.getter // getter 
	0x17cdf0  func Entity.components.setter // setter 
	0x17ce40  func Entity.components.modify // modifyCoroutine 
	0x17cf60  func Entity.scene.getter // getter 
	0x17cfe0  func Entity.name.getter // getter 
	0x17d010  func Entity.name.setter // setter 
	0x17d110  func Entity.name.modify // modifyCoroutine 
	0x17d350  func Entity.__boundingBox.getter // getter 
	0x17d420  func Entity.isActive.getter // getter 
	0x17d440  func Entity.isAnchored.getter // getter 
	0x17d460  func Entity.isEnabled.getter // getter 
	0x17d480  func Entity.isEnabled.setter // setter 
	0x17d4c0  func Entity.isEnabled.modify // modifyCoroutine 
	0x17d530  func Entity.isEnabledInHierarchy.getter // getter 
	0x17d5a0  class func Entity.__allocating_init() // init 
	0x17d8d0  class func Entity.__allocating_init(coreEntity:) // init 
	0x17d580  func Entity.didClone(from:) // method 
	0x17d590  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity? // +0x18 (0x8)
	var collidingEntities : [Entity] // +0x20 (0x8)
	var tags : [String] // +0x28 (0x8)

	// Swift methods
	0x17fb60  func __RKEntityCollisionTrigger.targetEntity.getter // getter 
	0x17fb90  func __RKEntityCollisionTrigger.targetEntity.setter // setter 
	0x17fbd0  func __RKEntityCollisionTrigger.targetEntity.modify // modifyCoroutine 
	0x17fca0  func __RKEntityCollisionTrigger.collidingEntities.getter // getter 
	0x17fcd0  func __RKEntityCollisionTrigger.collidingEntities.setter // setter 
	0x17fd10  func __RKEntityCollisionTrigger.collidingEntities.modify // modifyCoroutine 
	0x17fdd0  func __RKEntityCollisionTrigger.tags.getter // getter 
	0x17fe00  func __RKEntityCollisionTrigger.tags.setter // setter 
	0x17fe40  func __RKEntityCollisionTrigger.tags.modify // modifyCoroutine 
	0x17f990  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float // +0x64 (0x4)
	let block : () // +0x68 (0x10)
	let durationWiggleRoom : Double // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x184d30  @objc __RKWaitAction.copy(with:)

	// Swift methods
	0x184510  class func __RKWaitAction.__allocating_init(duration:block:) // init 
 }

 class RealityKit.__RKVisibilityShowPopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x18a1d0  class func __RKEmphasisBaseAnimation.__allocating_init() // init 
 }

 class RealityKit.__RKEntityCustomAction : __RKEntityAction {

	// Properties
	var handler : (_:)? // +0x68 (0x10)
	let identifier : String // +0x78 (0x10)
	let customArguments : [String : String] // +0x88 (0x8)
	var customArgumentsBlock : (_:_:)? // +0x90 (0x10)

	// ObjC -> Swift bridged methods
	0x18bdd0  @objc __RKEntityCustomAction.copy(with:)

	// Swift methods
	0x18a6e0  func __RKEntityCustomAction.handler.getter // getter 
	0x18a740  func __RKEntityCustomAction.handler.setter // setter 
	0x18a7b0  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x18a950  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x18a9a0  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x18aa00  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x18aa50  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
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
	var coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x19f070  func PhysicsMaterialResource.coreAsset.getter // getter 
	0x19f0a0  func PhysicsMaterialResource.coreAsset.setter // setter 
	0x19f0d0  func PhysicsMaterialResource.coreAsset.modify // modifyCoroutine 
	0x19f100  class func PhysicsMaterialResource.__allocating_init(_:) // init 
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

 enum RealityKit.LoadError {

	// Properties
	case resourceNotFound : String
	case importFailureWithURL : URL
	case useSceneNameNotFileName : String
	case invalidPathToRealityFile : URL
	case wrongEntityType  
	case invalidJoints  
 }

 struct RealityKit.RealityFileLoadInformation {

	// Properties
	var url : URL
	var sceneName : String?
 }

 class RealityKit.RealityFileLoadInformationResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1bc5a0  class func RealityFileLoadInformationResolver.__allocating_init() // init 
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
	0x1c6a30  class func __SceneResource.__allocating_init(core:) // init 
 }

 class RealityKit.BoxedSubscription : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Cancellable?

	// Swift methods
	0x1c6fc0  class func BoxedSubscription.__allocating_init() // init 
 }

 class RealityKit.REEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventService {

	// Properties
	let coreHandle : OpaquePointer
	var dispatchersByHandle : DispatcherHandle

	// Swift methods
	0x1c7410  class func REEventBus.__allocating_init(handle:) // init 
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
	0x1c97c0  func ShapeResource.coreAsset.getter // getter 
	0x1c97f0  func ShapeResource.coreAsset.setter // setter 
	0x1c9820  func ShapeResource.coreAsset.modify // modifyCoroutine 
	0x1c9860  class func ShapeResource.__allocating_init(_:pose:) // init 
	0x1c9550  class func ShapeResource.__allocating_init(_:) // init 
	0x1c9b90  func ShapeResource.hash(into:) // method 
	0x1c9cb0  func ShapeResource.hashValue.getter // getter 
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
	0x1cccb0  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x1ccce0  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x1ccd10  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x1ccd40  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x1ccfe0  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x1cd200  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x1cfc20  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x1cfe70  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x1d0280  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x1d0400  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x1d06e0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x1d0710  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x1d0740  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x1d0800  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x1d0830  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x1d0870  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x1d0940  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x1d0970  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x1d09b0  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x1d0a70  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x1d0aa0  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x1d0ec0  func __RKEntityInteractionManager.__actions.getter // getter 
	0x1d0f30  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x1d1020  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x1d1260  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x1d12a0  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x1d2440  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x1d26e0  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x1d3d60  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x1d3ff0  func __RKEntityInteractionManager.action(for:) // method 
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
	0x1e2380  @objc __RKEntitySpinAction.copy(with:)

	// Swift methods
	0x1e1210  func __RKEntitySpinAction.currentAnimation.getter // getter 
	0x1e1240  func __RKEntitySpinAction.currentAnimation.setter // setter 
	0x1e1290  func __RKEntitySpinAction.currentAnimation.modify // modifyCoroutine 
	0x1e0b90  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
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
	var cleanupHelper : CleanupHelper // +0x8
 }

 enum RealityKit.CodingKeys {

	// Properties
	case isNinja  
	case entityTypeName  
 }

 class RealityKit.CleanupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var rawData : UnsafeMutableRawPointer // +0x10 (0x8)

	// Swift methods
	0x1e3c50  class func __EntityInfoComponent.CleanupHelper.__allocating_init(rawData:) // init 
 }

 class RealityKit.NetPassthroughEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetEncoder {

	// Properties
	var m_encoder : JSONEncoder
	var m_payload : Data

	// Swift methods
	0x1e7880  func NetPassthroughEncoder.m_encoder.getter // getter 
	0x1e7800  func NetPassthroughEncoder.m_encoder.setter // setter 
	0x1e58b0  func NetPassthroughEncoder.m_encoder.modify // modifyCoroutine 
	0x1e77d0  func NetPassthroughEncoder.m_payload.getter // getter 
	0x1e7810  func NetPassthroughEncoder.m_payload.setter // setter 
	0x1e58e0  func NetPassthroughEncoder.m_payload.modify // modifyCoroutine 
	0x1e5910  func NetPassthroughEncoder.encode<A>(_:) // method 
	0x1e59f0  class func NetPassthroughEncoder.__allocating_init() // init 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
	var m_decoder : JSONDecoder
	var m_payload : Data

	// Swift methods
	0x1e5bf0  func NetPassthroughDecoder.m_decoder.getter // getter 
	0x1e5c20  func NetPassthroughDecoder.m_decoder.setter // setter 
	0x1e5c60  func NetPassthroughDecoder.m_decoder.modify // modifyCoroutine 
	0x1e5d30  func NetPassthroughDecoder.m_payload.getter // getter 
	0x1e5d70  func NetPassthroughDecoder.m_payload.setter // setter 
	0x1e5dc0  func NetPassthroughDecoder.m_payload.modify // modifyCoroutine 
	0x1e5df0  class func NetPassthroughDecoder.__allocating_init(with:) // init 
	0x1e5f40  func NetPassthroughDecoder.decode<A>(_:) // method 
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
	0x20fca0  class func __SceneImportOperation.__allocating_init(core:) // init 
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
	0x211b00  @objc __RKEntityForceAction.copy(with:)

	// Swift methods
	0x210e00  func __RKEntityForceAction.force.getter // getter 
	0x210ed0  func __RKEntityForceAction.velocity.getter // getter 
	0x210bf0  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
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
	0x21f5d0  func AnimationResource.__coreAsset.getter // getter 
	0x21f500  class func AnimationResource.__allocating_init(_:name:) // init 
 }

 struct RealityKit.ARAnchor {

	// Properties
	let identifier : UUID
	let transform : simd_float4x4
 }

 struct RealityKit.ARFrame {

	// Properties
	var camera : ARAnchor
 }

 class RealityKit.__RKStartTrigger : __RKEntityTrigger {

	// Properties
	var triggered : Bool // +0x13 (0x1)

	// Swift methods
	0x2223e0  func __RKStartTrigger.triggered.getter // getter 
	0x222410  func __RKStartTrigger.triggered.setter // setter 
	0x222440  func __RKStartTrigger.triggered.modify // modifyCoroutine 
 }

 class RealityKit.MeshResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer?

	// Swift methods
	0x222f30  func MeshResource.expectedMaterialCount.getter // getter 
	0x222f50  func MeshResource.bounds.getter // getter 
	0x2229d0  class func MeshResource.__allocating_init(_:) // init 
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
	0x224890  class func __MeshCompileOptions.__allocating_init(core:) // init 
	0x224910  class func __MeshCompileOptions.__allocating_init() // init 
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
	0x228d70  @objc InteractionNotificationsManager.notificationTriggerDidPost(notification:)

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
	0x234070  func __ServiceLocator.coreServiceLocator.getter // getter 
	0x2340a0  func __ServiceLocator.coreServiceLocator.setter // setter 
	0x2340d0  func __ServiceLocator.coreServiceLocator.modify // modifyCoroutine 
	0x234110  func __ServiceLocator.engineRef.getter // getter 
	0x234170  func __ServiceLocator.__engineRef.getter // getter 
	0x234260  func __ServiceLocator.engine.getter // getter 
	0x234290  func __ServiceLocator.engine.setter // setter 
	0x2342f0  func __ServiceLocator.engine.modify // modifyCoroutine 
	0x234460  func __ServiceLocator.eventService.getter // getter 
	0x2344a0  func __ServiceLocator.eventService.setter // setter 
	0x2344f0  func __ServiceLocator.eventService.modify // modifyCoroutine 
	0x234520  func __ServiceLocator.__eventService.getter // getter 
	0x234610  func __ServiceLocator.renderService.getter // getter 
	0x234650  func __ServiceLocator.renderService.setter // setter 
	0x2346a0  func __ServiceLocator.renderService.modify // modifyCoroutine 
	0x234760  func __ServiceLocator.sceneService.getter // getter 
	0x2347a0  func __ServiceLocator.sceneService.setter // setter 
	0x2347f0  func __ServiceLocator.sceneService.modify // modifyCoroutine 
	0x234820  func __ServiceLocator.__sceneService.getter // getter 
	0x234910  func __ServiceLocator.assetService.getter // getter 
	0x234950  func __ServiceLocator.assetService.setter // setter 
	0x2349b0  func __ServiceLocator.assetService.modify // modifyCoroutine 
	0x2349f0  func __ServiceLocator.__assetService.getter // getter 
	0x234ae0  func __ServiceLocator.loadService.getter // getter 
	0x234b20  func __ServiceLocator.loadService.setter // setter 
	0x234b60  func __ServiceLocator.loadService.modify // modifyCoroutine 
	0x2339b0  class func __ServiceLocator.__allocating_init(engine:) // init 
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
	0x236450  class func AudioResource.__allocating_init(assetRef:) // init 
	0x2365b0  func AudioResource.layoutTag.getter // getter 
	0x2365c0  func AudioResource.layoutTag.setter // setter 
	0x2365d0  func AudioResource.layoutTag.modify // modifyCoroutine 
	0x2367c0  func AudioResource.inputMode.getter // getter 
	0x2368b0  func AudioResource.inputMode.setter // setter 
	0x2368f0  func AudioResource.inputMode.modify // modifyCoroutine 
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
	0x2369e0  class func AudioResource.AudioError.__allocating_init(message:) // init 
	0x236a50  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
	0x236bc0  class func AudioResource.FileNotFound.__allocating_init(filepath:) // init 
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x236e80  func AudioFileResource.loadingStrategy.getter // getter 
	0x236ea0  func AudioFileResource.loadingStrategy.setter // setter 
	0x236ec0  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x236fb0  func AudioFileResource.shouldLoop.getter // getter 
	0x236fd0  func AudioFileResource.shouldLoop.setter // setter 
	0x236ff0  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
	0x237040  func AudioFileResource.duration.getter // getter 
	0x237050  class func AudioFileResource.__allocating_init(contentsOf:bundle:inputMode:loadingStrategy:shouldLoop:) // init 
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
	0x23e280  @objc __RKEntityVisibilityAction.copy(with:)

	// Swift methods
	0x23dc50  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
	0x23e960  @objc __RKEntityToggleVisibilityAction.copy(with:)
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
	0x2429b0  @objc __RKEntityShowAction.copy(with:)

	// Swift methods
	0x23b540  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x23ec00  func __RKEntityShowAction.updateFadeIn(_:) // method 
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
	0x245f80  @objc __RKEntityHideAction.copy(with:)

	// Swift methods
	0x23b720  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x242c40  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x246000  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
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
	0x24a330  func __RKEntityInteraction.trigger.getter // getter 
	0x24a3f0  func __RKEntityInteraction.action.getter // getter 
	0x24a4b0  func __RKEntityInteraction.alternateAction.getter // getter 
	0x24a560  func __RKEntityInteraction.enabled.getter // getter 
	0x24a590  func __RKEntityInteraction.enabled.setter // setter 
	0x24a5c0  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x24a1d0  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x24a640  func __RKEntityInteraction.fire(context:) // method 
	0x24ad20  func __RKEntityInteraction.description.getter // getter 
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

 struct __C.simd_quatf {

	// Properties
	var vector : SIMD4<Float>
 }

 struct __C.RESubscriptionHandle {

	// Properties
	var a : UInt64
	var b : UInt64
 }

 class __C.CFString {
 class __C.CFError {
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

 struct __C.RECustomComponentSyncInfo {

	// Properties
	var size : Int
	var version : Int32
	var context : UnsafeMutableRawPointer?
	var writeNetworkSnapshot : @convention(c) (_:_:_:_:_:)?
	var readNetworkSnapshot : @convention(c) (_:_:_:_:_:_:)?
 }

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

 enum __C.REOwnershipResponseResult { }

 enum __C.REGeomBuildPlaneOrientation { }

 enum __C.REEngineConfigurationExVersion { }

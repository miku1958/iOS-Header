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
	0xd8c0  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xdb60  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xdb90  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xdbe0  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xdd60  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xdd90  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xddd0  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xde10  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
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
	let direction : SIMD3<Float> // +0x70 (0x10)
	let upVector : SIMD3<Float> // +0x80 (0x10)
	var updateSubscription : Cancellable? // +0x90 (0x28)
	var deadline : Double // +0xb8 (0x8)

	// ObjC -> Swift bridged methods
	0x173e0  @objc __RKEntityLookAtCameraAction.copy(with:)

	// Swift methods
	0x168a0  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:direction:upVector:) // init 
	0x16a70  func __RKEntityLookAtCameraAction.update() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let assetPathPrefix : String // +0x10 (0x10)
	var $__lazy_storage_$_schemePrefix : String? // +0x20 (0x10)
	var resolvedURLByAssetPathPrefix : [String : String] // +0x30 (0x8)

	// Swift methods
	0x177e0  class func __RealityFileURLResolver.__allocating_init() // init 
	0x17cc0  func __RealityFileURLResolver.schemePrefix.getter // getter 
	0x17db0  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x17ed0  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x181a0  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x186c0  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x18bf0  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x18c70  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x18e10  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x18ef0  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
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
	0x5b1e0  @objc __RKEntityEmphasisAction.copy(with:)

	// Swift methods
	0x5a0c0  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
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
	0x5ce50  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x5cf40  func MultipeerConnectivityService.entity(for:) // method 
	0x5cf70  func MultipeerConnectivityService.owner(of:) // method 
	0x5d0a0  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x5d1b0  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x5d2c0  func MultipeerConnectivityService.__toCore(peerID:) // method 
 }

 enum RealityKit.SynchronizationError {

	// Properties
	case encryptionRequired  
 }

 class RealityKit.TextureResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x5d7f0  func TextureResource.__coreAsset.getter // getter 
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
	0x65a60  @objc __RKEntityActionGroup.copy(with:)

	// Swift methods
	0x61450  func __RKEntityActionGroup.actions.getter // getter 
	0x61520  func __RKEntityActionGroup.ordering.getter // getter 
	0x615d0  func __RKEntityActionGroup.loopCount.getter // getter 
	0x61600  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x61900  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x61c90  func __RKEntityActionGroup.performConcurrentActions(with:) // method 
	0x62160  func __RKEntityActionGroup.performSequentialAction(at:context:) // method 
	0x62730  func __RKEntityActionGroup.allActions() // method 
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
	0x84d80  func AudioPlaybackController.entity.getter // getter 
	0x851e0  func AudioPlaybackController.completionHandler.getter // getter 
	0x85220  func AudioPlaybackController.completionHandler.setter // setter 
	0x85270  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
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
	0x87400  func __REAsset.debugDescription.getter // getter 
	0x87540  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x87700  func __REAsset.__handle.getter // getter 
 }

 class RealityKit.__REAssetManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, __REAssetService {

	// Properties
	var _mainBundle : __REAssetBundle? // +0x0 (0x0)
	let handle : OpaquePointer // +0x3 (0x8)

	// Swift methods
	0x87880  class func __REAssetManager.__allocating_init(handle:) // init 
	0x879f0  func __REAssetManager.engineQueue.getter // getter 
	0x87a10  func __REAssetManager.mainBundle.getter // getter 
	0x880b0  func __REAssetManager.loadBundle(at:) // method 
	0x881d0  func __REAssetManager.makeBundle() // method 
	0x88250  func __REAssetManager.__getDependencies(asset:) // method 
	0x883f0  func __REAssetManager.__handle.getter // getter 
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
	0x8d4f0  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x8d560  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x8d5e0  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
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
	0xa3dc0  @objc __RKEntityTransformAction.copy(with:)

	// Swift methods
	0xa2420  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
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
	0xaeca0  func __RERenderGraphEmitter.unsetup(mgr:) // method 
	0xaf1a0  func __RERenderGraphEmitter.setup(mgr:) // method 
	0xaf650  func __RERenderGraphEmitter.__handle.getter // getter 
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
	0xb0c20  func __MaterialResource.__coreAsset.getter // getter 
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
	0xbcd50  @objc __RKEntityAction.copy(with:)

	// Swift methods
	0xbc140  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0xbaa20  func __RKEntityAction.targetEntity.getter // getter 
	0xbaa50  func __RKEntityAction.targetEntity.setter // setter 
	0xbaa90  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0xbaac0  func __RKEntityAction.completionHandler.getter // getter 
	0xbab20  func __RKEntityAction.completionHandler.setter // setter 
	0xbab70  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0xbaba0  func __RKEntityAction.isAlternate.getter // getter 
	0xbabd0  func __RKEntityAction.isAlternate.setter // setter 
	0xbac00  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0xbac40  func __RKEntityAction.isExclusive.getter // getter 
	0xbac70  func __RKEntityAction.isExclusive.setter // setter 
	0xbaca0  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0xbacd0  func __RKEntityAction.state.getter // getter 
	0xbad10  func __RKEntityAction.state.setter // setter 
	0xbad90  func __RKEntityAction.state.modify // modifyCoroutine 
	0xbaed0  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0xbaf00  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0xbaf40  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0xbaf70  func __RKEntityAction.performAction(with:) // method 
	0xbb660  func __RKEntityAction.shouldContinueOnPerform() // method 
	0xbb6e0  func __RKEntityAction.preloadAssets() // method 
	0xbcc30  func __RKEntityAction.perform(with:) // method 
	0xbb6f0  func __RKEntityAction.addStateObserver(_:) // method 
	0xbb790  func __RKEntityAction.removeStateObserver(_:) // method 
	0xbccb0  func __RKEntityAction.reversed() // method 
	0xbb7f0  func __RKEntityAction.description.getter // getter 
	0xbb9a0  func __RKEntityAction.stop() // method 
	0xbba50  func __RKEntityAction.isExclusiveWith(action:) // method 
	0xbccc0  func __RKEntityAction.copy(with:) // method 
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
	0xbfe70  class func __RKEntityTrigger.__allocating_init() // init 
	0xbf800  func __RKEntityTrigger.reversible.getter // getter 
	0xbf830  func __RKEntityTrigger.reversible.setter // setter 
	0xbf860  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0xbf8a0  func __RKEntityTrigger.shouldReverse.getter // getter 
	0xbf8d0  func __RKEntityTrigger.shouldReverse.setter // setter 
	0xbf900  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0xbf930  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0xbf960  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0xbf990  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0xbf9c0  func __RKEntityTrigger.matches(with:) // method 
	0xbfd90  func __RKEntityTrigger.description.getter // getter 
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
	0xc3860  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]
	var targetEntity : Entity?

	// Swift methods
	0xc3ed0  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0xc3f00  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0xc3f40  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0xc3f80  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
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
	0xcb810  func __Engine.__coreEngine.getter // getter 
	0xcb8c0  func __Engine.services.getter // getter 
	0xcaf20  class func __Engine.__allocating_init(configuration:) // init 
	0xcbec0  class func __Engine.__allocating_init(coreEngine:) // init 
	0xcc310  func __Engine.__start() // method 
	0xcc340  func __Engine.__stop() // method 
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
	0xce230  func __RKEntityTriggerGroup.triggers.getter // getter 
	0xce260  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity? // +0x68 (0x8)
	let buildOutAction : __RKEntityHideAction // +0x70 (0x8)
	let buildInAction : __RKEntityShowAction // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0xd0630  @objc __RKEntitySwapEntityAction.copy(with:)

	// Swift methods
	0xcfda0  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0xd1f00  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0xd23a0  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0xd24b0  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0xd2760  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0xd2bf0  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
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
	0xd4780  @objc __RKChangeSceneAction.copy(with:)

	// Swift methods
	0xd3be0  func __RKChangeSceneAction.rootEntity.getter // getter 
	0xd3c20  func __RKChangeSceneAction.rootEntity.setter // setter 
	0xd3c70  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0xd3cc0  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
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
	0xe0db0  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xe0de0  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xe0e20  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xe0e60  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
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
	0xe2f30  @objc __RKEntityOrbitEntityAction.copy(with:)

	// Swift methods
	0xe16a0  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xe18f0  func __RKEntityOrbitEntityAction.update() // method 
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
	0xea5c0  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0xea650  func __RKEntityProximityTrigger.distance.getter // getter 
	0xea720  func __RKEntityProximityTrigger.type.getter // getter 
	0xea7d0  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0xea880  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0xea8b0  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
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
	0xed290  @objc ARView.init(coder:)
	0xed7e0  @objc ARView.init(frame:)
	0xee200  @objc ARView.__deallocating_deinit
	0xee220  @objc ARView.__ivar_destroyer

	// Swift methods
	0xec070  func ARView.__services.getter // getter 
	0xec090  func ARView.scene.getter // getter 
	0xec170  func ARView.__delegatePrivate.getter // getter 
	0xec1b0  func ARView.__delegatePrivate.setter // setter 
	0xec210  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0xec360  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0xec440  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0xec520  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0xec710  func ARView.debugOptions.getter // getter 
	0xec750  func ARView.debugOptions.setter // setter 
	0xec7d0  func ARView.debugOptions.modify // modifyCoroutine 
	0xec920  func ARView.startEngine() // method 
	0xec980  func ARView.stopEngine() // method 
	0xecaa0  func ARView.environment.getter // getter 
	0xecae0  func ARView.environment.setter // setter 
	0xecb40  func ARView.environment.modify // modifyCoroutine 
	0xecc60  func ARView.cameraTransform.getter // getter 
	0xece10  func ARView.audioListener.getter // getter 
	0xece60  func ARView.audioListener.setter // setter 
	0xece80  func ARView.audioListener.modify // modifyCoroutine 
	0xecf80  func ARView.__environmentEntity.getter // getter 
	0xecfa0  func ARView.__environmentEntity.setter // setter 
	0xecff0  func ARView.__environmentEntity.modify // modifyCoroutine 
	0xed070  func ARView.__enableAutomaticFrameRate.getter // getter 
	0xed090  func ARView.__enableAutomaticFrameRate.setter // setter 
	0xed0b0  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0xed170  func ARView.__preferredFrameRate.getter // getter 
	0xed1a0  func ARView.__preferredFrameRate.setter // setter 
	0xed1e0  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0xed810  func ARView.__customizeMetalLayer() // method 
	0xed930  func ARView.__renderGraphEmitter.getter // getter 
	0xed990  func ARView.__renderGraphEmitter.setter // setter 
	0xed9b0  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0xeda90  func ARView.__setWireframeMode(displayWireframe:) // method 
	0xedae0  func ARView.__targetIdentifier.getter // getter 
	0xedb00  func ARView.__didInitializeEngine() // method 
	0xedb50  func ARView.__disableComposition.getter // getter 
	0xedb70  func ARView.__disableComposition.setter // setter 
	0xedb90  func ARView.__disableComposition.modify // modifyCoroutine 
	0xedc50  func ARView.__nonARKitDevices.getter // getter 
	0xedc70  func ARView.__nonARKitDevices.setter // setter 
	0xedcd0  func ARView.__nonARKitDevices.modify // modifyCoroutine 
	0xef3f0  func ARView.__handleTapAtPoint(point:) // method 
	0xeff90  func ARView.__statisticsOptions.getter // getter 
	0xeffd0  func ARView.__statisticsOptions.setter // setter 
	0xf0050  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0xf0230  func ARView.__disableStatisticsRendering.getter // getter 
	0xf0280  func ARView.__disableStatisticsRendering.setter // setter 
	0xf02f0  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0xf0390  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0xf03d0  func ARView.__frameTime() // method 
	0xf0780  func ARView.snapshot(saveToHDR:completion:) // method 
	0xf1690  func ARView.__startAudioEngine() // method 
	0xf16b0  func ARView.__stopAudioEngine() // method 
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
	0xf74e0  class func __RKActiveSceneManager.__allocating_init() // init 
	0xf77a0  func __RKActiveSceneManager.activeScene.getter // getter 
	0xf77d0  func __RKActiveSceneManager.activeScene.setter // setter 
	0xf77f0  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0xf7a90  func __RKActiveSceneManager.addObserver(observer:) // method 
	0xf7b80  func __RKActiveSceneManager.removeObserver(observer:) // method 
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
	0x118fc0  func __Archiving.Operation.archive(to:) // method 
	0x118fe0  func __Archiving.Operation.unarchive(to:) // method 
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
	0x133060  func Scene.__coreScene.getter // getter 
	0x133070  func Scene.name.getter // getter 
	0x133110  func Scene.__audioListener.getter // getter 
	0x133140  func Scene.__audioListener.setter // setter 
	0x133160  func Scene.__audioListener.modify // modifyCoroutine 
	0x1333a0  func Scene.__defaultCamera.getter // getter 
	0x1333b0  func Scene.internalActiveCamera.getter // getter 
	0x133520  func Scene.__entities.getter // getter 
	0x1335b0  func Scene.anchors.getter // getter 
	0x1335d0  func Scene.anchors.setter // setter 
	0x133610  func Scene.anchors.modify // modifyCoroutine 
	0x133650  func Scene.addAnchor(_:) // method 
	0x1336a0  func Scene.removeAnchor(_:) // method 
	0x133740  func Scene.eventService.getter // getter 
	0x133890  func Scene.engineEventService.getter // getter 
	0x133b70  func Scene.findEntity(named:) // method 
	0x133d00  func Scene.__interactionService.getter // getter 
	0x133f70  func Scene.synchronizationService.getter // getter 
	0x133fc0  func Scene.synchronizationService.setter // setter 
	0x134050  func Scene.synchronizationService.modify // modifyCoroutine 
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
	0x139330  @objc __RKEntityAnimateAction.copy(with:)

	// Swift methods
	0x138660  func __RKEntityAnimateAction.setupAnimations(on:andPlay:) // method 
	0x138760  func __RKEntityAnimateAction.setupAnimations(entity:assetManager:addToComponentArray:andPlay:) // method 
	0x138a00  func __RKEntityAnimateAction.setupSkeletalAnimation(on:queryResultsArray:animationLibraryComponent:assetManager:addToComponentArray:andPlay:) // method 
	0x138e70  func __RKEntityAnimateAction.setupTransformAnimation(on:transformAnimationAsset:assetManager:addToComponentArray:andPlay:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
	var updateSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x139de0  @objc __RKEntityStartAnimateAction.copy(with:)

	// Swift methods
	0x1394a0  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x13a170  @objc __RKEntityStopAnimateAction.copy(with:)
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x13aa10  @objc __RKEntityToggleAnimateAction.copy(with:)
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
	0x13d4d0  @objc __RCInteractionsController.init()

	// Swift methods
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0x13d570  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0x13d6b0  func __RCEntity.registerCustomAction(named:action:) // method 
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
	let targetSceneIdentifier : UUID // +0x27c000 (0x0)

	// Swift methods
	0x13e6e0  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x13e990  @objc __RKEntityFadeAction.copy(with:)

	// Swift methods
	0x13e820  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x13ec50  @objc __RKFadeSceneAction.copy(with:)

	// Swift methods
	0x13ea50  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity? // +0x0 (0x8)
	var subcomponent : OpaquePointer? // +0x0 (0x8)

	// Swift methods
	0x13fd20  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0x13ffc0  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0x1401c0  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0x140f30  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
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
	0x143c60  @objc __RKEntityAudioAction.copy(with:)

	// Swift methods
	0x142c60  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
	0x142f80  func __RKEntityAudioAction.createFileAssetRef() // method 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UInt64 // +0x10 (0x8)
	var entity : weak Entity? // +0x18 (0x8)

	// Swift methods
	0x1497c0  func AnimationPlaybackController.__identifier.getter // getter 
	0x149850  func AnimationPlaybackController.entity.getter // getter 
	0x149880  func AnimationPlaybackController.isPaused.getter // getter 
	0x1498a0  func AnimationPlaybackController.isComplete.getter // getter 
	0x149950  func AnimationPlaybackController.hash(into:) // method 
	0x1499b0  func AnimationPlaybackController.pause() // method 
	0x1499d0  func AnimationPlaybackController.resume() // method 
	0x1499f0  func AnimationPlaybackController.stop() // method 
	0x149ab0  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToEntity : [UUID : Entity] // +0x10 (0x8)

	// Swift methods
	0x14b3f0  class func __RKEntityLookupTable.__allocating_init() // init 
	0x14b4e0  func __RKEntityLookupTable.entity(for:) // method 
	0x14b580  func __RKEntityLookupTable.uuid(for:) // method 
	0x14bbc0  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0x14bc50  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreEntity : OpaquePointer // +0x10 (0x8)
	var swiftChildren : Entity // +0x18 (0x8)

	// Swift methods
	0x14dbd0  func Entity.__coreEntity.getter // getter 
	0x14dbe0  func Entity.components.getter // getter 
	0x14dc00  func Entity.components.setter // setter 
	0x14dc20  func Entity.components.modify // modifyCoroutine 
	0x14dcc0  func Entity.scene.getter // getter 
	0x14dd30  func Entity.name.getter // getter 
	0x14dd50  func Entity.name.setter // setter 
	0x14de30  func Entity.name.modify // modifyCoroutine 
	0x14e060  func Entity.__boundingBox.getter // getter 
	0x14e0e0  func Entity.isActive.getter // getter 
	0x14e0f0  func Entity.isAnchored.getter // getter 
	0x14e100  func Entity.isEnabled.getter // getter 
	0x14e110  func Entity.isEnabled.setter // setter 
	0x14e130  func Entity.isEnabled.modify // modifyCoroutine 
	0x14e190  func Entity.isEnabledInHierarchy.getter // getter 
	0x14e1c0  class func Entity.__allocating_init() // init 
	0x14e1a0  func Entity.didClone(from:) // method 
	0x14e1b0  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity? // +0x18 (0x8)
	var collidingEntities : [Entity] // +0x20 (0x8)
	var tags : [String] // +0x28 (0x8)

	// Swift methods
	0x14fb30  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float // +0x64 (0x4)
	let block : () // +0x68 (0x10)
	let durationWiggleRoom : Double // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x154990  @objc __RKWaitAction.copy(with:)

	// Swift methods
	0x1541f0  class func __RKWaitAction.__allocating_init(duration:block:) // init 
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
	0x15b7c0  @objc __RKEntityCustomAction.copy(with:)

	// Swift methods
	0x15a290  func __RKEntityCustomAction.handler.getter // getter 
	0x15a2f0  func __RKEntityCustomAction.handler.setter // setter 
	0x15a360  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x15a530  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x15a580  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x15a5e0  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x15a630  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
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
	0x196620  func ShapeResource.hash(into:) // method 
	0x196710  func ShapeResource.hashValue.getter // getter 
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
	0x198c20  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x198c50  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x198c80  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x198cb0  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x198ea0  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x199090  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x1993c0  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x1993d0  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x199650  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x199740  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x1997d0  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x199800  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x199830  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x1998f0  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x199920  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x199960  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x199a30  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x199a60  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x199aa0  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x199b60  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x199b90  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x199f00  func __RKEntityInteractionManager.__actions.getter // getter 
	0x199f50  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x19a040  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x19a260  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x19a2a0  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x19b2d0  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x19b590  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x19d370  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x19d5a0  func __RKEntityInteractionManager.action(for:) // method 
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
	0x1acc90  @objc __RKEntitySpinAction.copy(with:)

	// Swift methods
	0x1ab840  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
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
	0x1af9b0  func NetPassthroughEncoder.encode<A>(_:) // method 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
	var m_decoder : JSONDecoder
	var m_payload : Data

	// Swift methods
	0x1afa50  func NetPassthroughDecoder.decode<A>(_:) // method 
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
	0x1dc810  @objc __RKEntityForceAction.copy(with:)

	// Swift methods
	0x1dbe30  func __RKEntityForceAction.force.getter // getter 
	0x1dbf00  func __RKEntityForceAction.velocity.getter // getter 
	0x1dbc30  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
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
	0x1e9e10  func AnimationResource.__coreAsset.getter // getter 
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
	0x1ed0c0  func MeshResource.expectedMaterialCount.getter // getter 
	0x1ed0e0  func MeshResource.bounds.getter // getter 
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
	0x1ed9f0  class func __MeshCompileOptions.__allocating_init() // init 
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
	0x1f14c0  @objc InteractionNotificationsManager.notificationTriggerDidPost(notification:)

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
	0x1fc0d0  func __ServiceLocator.__engineRef.getter // getter 
	0x1fc100  func __ServiceLocator.__sceneService.getter // getter 
	0x1fc120  func __ServiceLocator.__assetService.getter // getter 
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
	0x1fd820  func AudioResource.inputMode.getter // getter 
	0x1fd8a0  func AudioResource.inputMode.setter // setter 
	0x1fd8c0  func AudioResource.inputMode.modify // modifyCoroutine 
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
	0x1fd9a0  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x1fdbc0  func AudioFileResource.loadingStrategy.getter // getter 
	0x1fdbe0  func AudioFileResource.loadingStrategy.setter // setter 
	0x1fdc00  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x1fdcd0  func AudioFileResource.shouldLoop.getter // getter 
	0x1fdcf0  func AudioFileResource.shouldLoop.setter // setter 
	0x1fdd10  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
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
	0x2039e0  @objc __RKEntityVisibilityAction.copy(with:)

	// Swift methods
	0x203480  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
	0x203e00  @objc __RKEntityToggleVisibilityAction.copy(with:)
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
	0x2075f0  @objc __RKEntityShowAction.copy(with:)

	// Swift methods
	0x201590  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x204020  func __RKEntityShowAction.updateFadeIn(_:) // method 
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
	0x20a800  @objc __RKEntityHideAction.copy(with:)

	// Swift methods
	0x201770  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x2077d0  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x20a880  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
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
	0x20e100  func __RKEntityInteraction.trigger.getter // getter 
	0x20e1c0  func __RKEntityInteraction.action.getter // getter 
	0x20e270  func __RKEntityInteraction.enabled.getter // getter 
	0x20e2a0  func __RKEntityInteraction.enabled.setter // setter 
	0x20e2d0  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x20dfd0  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x20e350  func __RKEntityInteraction.fire(context:) // method 
	0x20e620  func __RKEntityInteraction.description.getter // getter 
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

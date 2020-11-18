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
	0x6d40  class func __RKEntityInteractionsComponent.Registration.__allocating_init() // init 
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
	0xd7a0  class func __RKSimulationSceneCoordinator.__allocating_init() // init 
	0xda30  func __RKSimulationSceneCoordinator.delegate.getter // getter 
	0xda60  func __RKSimulationSceneCoordinator.delegate.setter // setter 
	0xdab0  func __RKSimulationSceneCoordinator.delegate.modify // modifyCoroutine 
	0xdc10  func __RKSimulationSceneCoordinator.simulationState.getter // getter 
	0xdc40  func __RKSimulationSceneCoordinator.simulationState.setter // setter 
	0xdc80  func __RKSimulationSceneCoordinator.simulationState.modify // modifyCoroutine 
	0xdcc0  func __RKSimulationSceneCoordinator.changeToScene(with:) // method 
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
	0x175d0  @objc __RKEntityLookAtCameraAction.copy(with:)

	// Swift methods
	0x16980  class func __RKEntityLookAtCameraAction.__allocating_init(targetEntity:duration:direction:upVector:) // init 
	0x16b50  func __RKEntityLookAtCameraAction.update() // method 
 }

 class RealityKit.__RealityFileURLResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let assetPathPrefix : String // +0x10 (0x10)
	var $__lazy_storage_$_schemePrefix : String? // +0x20 (0x10)
	var resolvedURLByAssetPathPrefix : [String : String] // +0x30 (0x8)

	// Swift methods
	0x179d0  class func __RealityFileURLResolver.__allocating_init() // init 
	0x17bf0  func __RealityFileURLResolver.schemePrefix.getter // getter 
	0x17ce0  func __RealityFileURLResolver.registerRealityFileResolver(assetService:) // method 
	0x17e00  func __RealityFileURLResolver.unregisterRealityFileResolver() // method 
	0x181c0  func __RealityFileURLResolver.resolvedURL(for:) // method 
	0x18730  func __RealityFileURLResolver.resolvedURL(group:name:) // method 
	0x18cf0  func __RealityFileURLResolver.setResolvedURLPath(_:for:) // method 
	0x18d70  func __RealityFileURLResolver.createSchemePrefix(with:) // method 
	0x18f30  func __RealityFileURLResolver.createSubAssetPath(with:) // method 
	0x19010  func __RealityFileURLResolver.createFullSchemePath(group:name:) // method 
	0x190b0  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.getter // getter 
	0x190e0  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.setter // setter 
	0x19120  func __RealityFileURLResolver.resolvedURLByAssetPathPrefix.modify // modifyCoroutine 
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
	0x5cd70  @objc __RKEntityEmphasisAction.copy(with:)

	// Swift methods
	0x5b960  func __RKEntityEmphasisAction.currentAnimation.getter // getter 
	0x5b990  func __RKEntityEmphasisAction.currentAnimation.setter // setter 
	0x5b9e0  func __RKEntityEmphasisAction.currentAnimation.modify // modifyCoroutine 
	0x5ba30  class func __RKEntityEmphasisAction.__allocating_init(targetEntity:duration:iterations:animationStyle:emphasisAnimationType:) // init 
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
	0x61b80  class func __RKSceneUUIDComponent.Registration.__allocating_init() // init 
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
	0x62d50  class func MultipeerConnectivityService.__allocating_init(session:) // init 
	0x62e10  func MultipeerConnectivityService.entity(for:) // method 
	0x62e40  func MultipeerConnectivityService.owner(of:) // method 
	0x62f80  func MultipeerConnectivityService.giveOwnership(of:toPeer:) // method 
	0x630b0  func MultipeerConnectivityService.__fromCore(peerID:) // method 
	0x631c0  func MultipeerConnectivityService.__toCore(peerID:) // method 
	0x63290  func MultipeerConnectivityService.startSync() // method 
	0x632d0  func MultipeerConnectivityService.stopSync() // method 
 }

 enum RealityKit.SynchronizationError {

	// Properties
	case encryptionRequired  
 }

 class RealityKit.TextureResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0x638d0  func TextureResource.__coreAsset.getter // getter 
	0x63ed0  class func TextureResource.__allocating_init(_:) // init 
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
	0x6d2e0  @objc __RKEntityActionGroup.copy(with:)

	// Swift methods
	0x683e0  func __RKEntityActionGroup.actions.getter // getter 
	0x684b0  func __RKEntityActionGroup.ordering.getter // getter 
	0x68560  func __RKEntityActionGroup.loopCount.getter // getter 
	0x68590  class func __RKEntityActionGroup.__allocating_init(actions:ordering:loopCount:) // init 
	0x688a0  func __RKEntityActionGroup.checkForCompletion(with:) // method 
	0x6a2a0  func __RKEntityActionGroup.allActions() // method 
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
	0x706c0  class func __REAnchoring.Registration.__allocating_init() // init 
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
	0x84c70  class func __RKEntityTagsComponent.Registration.__allocating_init() // init 
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
	0x8d230  func AudioPlaybackController.entity.getter // getter 
	0x8d300  func AudioPlaybackController.playbackToken.getter // getter 
	0x8d330  func AudioPlaybackController.playbackToken.setter // setter 
	0x8d360  func AudioPlaybackController.playbackToken.modify // modifyCoroutine 
	0x8cf70  class func AudioPlaybackController.__allocating_init(resource:entity:) // init 
	0x8d830  func AudioPlaybackController.completionHandler.getter // getter 
	0x8d870  func AudioPlaybackController.completionHandler.setter // setter 
	0x8d8c0  func AudioPlaybackController.completionHandler.modify // modifyCoroutine 
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
	0x8fe10  class func REAssetPathMapping.__allocating_init(_:) // init 
 }

 class RealityKit.__REAsset : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let handle : OpaquePointer

	// Swift methods
	0x8ff50  class func __REAsset.__allocating_init(_:) // init 
	0x90060  class func __REAsset.__allocating_init(sceneRef:assetService:assetPath:) // init 
	0x90210  class func __REAsset.__allocating_init(_:assetService:) // init 
	0x90470  class func __REAsset.__allocating_init(url:assetService:) // init 
	0x90750  class func __REAsset.__allocating_init(url:assetService:assetPath:) // init 
	0x90a30  func __REAsset.debugDescription.getter // getter 
	0x90b90  func __REAsset.__hasSubsceneComponents.getter // getter 
	0x90ba0  func __REAsset.load() // method 
	0x90bb0  func __REAsset.loadWithError() // method 
	0x90cc0  func __REAsset.isLoaded.getter // getter 
	0x90cd0  func __REAsset.path.getter // getter 
	0x90d00  func __REAsset.compiledExtension.getter // getter 
	0x90d20  func __REAsset.write(to:assetPathMapping:) // method 
	0x91160  func __REAsset.__handle.getter // getter 
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
	0x912e0  class func __REAssetManager.__allocating_init(handle:) // init 
	0x91450  func __REAssetManager.engineQueue.getter // getter 
	0x91470  func __REAssetManager.mainBundle.getter // getter 
	0x91b60  func __REAssetManager.loadBundle(at:) // method 
	0x91c80  func __REAssetManager.makeBundle() // method 
	0x91d00  func __REAssetManager.__getDependencies(asset:) // method 
	0x96830  func __REAssetManager.__handle.getter // getter 
 }

 class RealityKit.__AssetLoadRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAssetRequest : OpaquePointer

	// Swift methods
	0x92870  class func __AssetLoadRequest.__allocating_init(core:) // init 
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
	0x990d0  class func InputManager.__allocating_init() // init 
 }

 class RealityKit.__RKSceneAssetLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToRESceneAsset : NSMapTable<NSUUID, __REAsset> // +0x10 (0x8)

	// Swift methods
	0x993b0  func __RKSceneAssetLookupTable.reSceneAsset(for:) // method 
	0x99420  func __RKSceneAssetLookupTable.registerRESceneAsset(_:for:) // method 
	0x994a0  func __RKSceneAssetLookupTable.removeAllRESceneAssets() // method 
	0x991f0  class func __RKSceneAssetLookupTable.__allocating_init() // init 
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
	0xaa750  class func SceneManager.__allocating_init(coreECSManager:) // init 
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
	0xb0450  @objc __RKEntityTransformAction.copy(with:)

	// Swift methods
	0xae870  class func __RKEntityTransformAction.__allocating_init(targetEntity:location:orientation:scale:duration:moveType:ease:easeType:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
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
	0xb1040  class func RERenderFrameSettings.__allocating_init(_:) // init 
	0xb1110  func RERenderFrameSettings.setTotalTime(_:) // method 
	0xb1120  func RERenderFrameSettings.renderFrameSettings.getter // getter 
 }

 class RealityKit.__RKVisibilityHideMoveOutAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RERenderGraphEmitter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let asset : __REAsset // +0x10 (0x8)

	// Swift methods
	0xbbad0  class func __RERenderGraphEmitter.__allocating_init(_:) // init 
	0xbbb60  func __RERenderGraphEmitter.unsetup(mgr:) // method 
	0xbbb80  func __RERenderGraphEmitter.setup(mgr:) // method 
	0xbbba0  func __RERenderGraphEmitter.execute(mgr:) // method 
	0xbbc10  func __RERenderGraphEmitter.__setWireframeMode(displayWireframe:) // method 
	0xbbc30  func __RERenderGraphEmitter.__handle.getter // getter 
 }

 class RealityKit.__MaterialResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreAsset : OpaquePointer // +0x10 (0x8)

	// Swift methods
	0xbbd90  func __MaterialResource.coreAsset.getter // getter 
	0xbbdc0  func __MaterialResource.coreAsset.setter // setter 
	0xbbdf0  func __MaterialResource.coreAsset.modify // modifyCoroutine 
	0xbbe30  func __MaterialResource.__coreAsset.getter // getter 
	0xbcc20  class func __MaterialResource.__allocating_init(_:) // init 
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
	0xc59b0  class func __RKEntityUUIDComponent.Registration.__allocating_init() // init 
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
	0xcb000  @objc __RKEntityAction.copy(with:)

	// Swift methods
	0xc9ef0  class func __RKEntityAction.__allocating_init(targetEntity:) // init 
	0xc8440  func __RKEntityAction.targetEntity.getter // getter 
	0xc8470  func __RKEntityAction.targetEntity.setter // setter 
	0xc84b0  func __RKEntityAction.targetEntity.modify // modifyCoroutine 
	0xc84e0  func __RKEntityAction.completionHandler.getter // getter 
	0xc8520  func __RKEntityAction.completionHandler.setter // setter 
	0xc8570  func __RKEntityAction.completionHandler.modify // modifyCoroutine 
	0xc85a0  func __RKEntityAction.isAlternate.getter // getter 
	0xc85d0  func __RKEntityAction.isAlternate.setter // setter 
	0xc8600  func __RKEntityAction.isAlternate.modify // modifyCoroutine 
	0xc8640  func __RKEntityAction.isExclusive.getter // getter 
	0xc8670  func __RKEntityAction.isExclusive.setter // setter 
	0xc86a0  func __RKEntityAction.isExclusive.modify // modifyCoroutine 
	0xc86d0  func __RKEntityAction.state.getter // getter 
	0xc8710  func __RKEntityAction.state.setter // setter 
	0xc8790  func __RKEntityAction.state.modify // modifyCoroutine 
	0xc88d0  func __RKEntityAction.multiplePerformBehaviour.getter // getter 
	0xc8900  func __RKEntityAction.multiplePerformBehaviour.setter // setter 
	0xc8940  func __RKEntityAction.multiplePerformBehaviour.modify // modifyCoroutine 
	0xc8970  func __RKEntityAction.performAction(with:) // method 
	0xc9140  func __RKEntityAction.shouldContinueOnPerform() // method 
	0xc9260  func __RKEntityAction.preloadAssets() // method 
	0xcae10  func __RKEntityAction.perform(with:) // method 
	0xc9270  func __RKEntityAction.addStateObserver(_:) // method 
	0xc9310  func __RKEntityAction.removeStateObserver(_:) // method 
	0xcaf10  func __RKEntityAction.reversed() // method 
	0xc9370  func __RKEntityAction.description.getter // getter 
	0xc9580  func __RKEntityAction.stop() // method 
	0xc96e0  func __RKEntityAction.isExclusiveWith(action:) // method 
	0xcaf20  func __RKEntityAction.copy(with:) // method 
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
	0xceab0  class func __RKEntityTrigger.__allocating_init() // init 
	0xce410  func __RKEntityTrigger.reversible.getter // getter 
	0xce440  func __RKEntityTrigger.reversible.setter // setter 
	0xce470  func __RKEntityTrigger.reversible.modify // modifyCoroutine 
	0xce4b0  func __RKEntityTrigger.shouldReverse.getter // getter 
	0xce4e0  func __RKEntityTrigger.shouldReverse.setter // setter 
	0xce510  func __RKEntityTrigger.shouldReverse.modify // modifyCoroutine 
	0xce540  func __RKEntityTrigger.shouldFireAlternate.getter // getter 
	0xce570  func __RKEntityTrigger.shouldFireAlternate.setter // setter 
	0xce5a0  func __RKEntityTrigger.shouldFireAlternate.modify // modifyCoroutine 
	0xce5d0  func __RKEntityTrigger.matches(with:) // method 
	0xce9d0  func __RKEntityTrigger.description.getter // getter 
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
	0xd1cc0  func __RKCustomTrigger.identifier.getter // getter 
	0xd1d00  func __RKCustomTrigger.identifier.setter // setter 
	0xd1d40  func __RKCustomTrigger.identifier.modify // modifyCoroutine 
	0xd1e10  func __RKCustomTrigger.customArguments.getter // getter 
	0xd1e40  func __RKCustomTrigger.customArguments.setter // setter 
	0xd1e80  func __RKCustomTrigger.customArguments.modify // modifyCoroutine 
	0xd1eb0  class func __RKCustomTrigger.__allocating_init(identifier:customArguments:) // init 
 }

 class RealityKit.__RKEntityCustomTrigger : __RKEntityTrigger {

	// Properties
	var identifier : String
	var customArguments : [String : String]
	var targetEntity : Entity?

	// Swift methods
	0xd3ad0  func __RKEntityCustomTrigger.identifier.getter // getter 
	0xd3b50  func __RKEntityCustomTrigger.identifier.setter // setter 
	0xd2680  func __RKEntityCustomTrigger.identifier.modify // modifyCoroutine 
	0xd3ac0  func __RKEntityCustomTrigger.customArguments.getter // getter 
	0xd3ae0  func __RKEntityCustomTrigger.customArguments.setter // setter 
	0xd2740  func __RKEntityCustomTrigger.customArguments.modify // modifyCoroutine 
	0xd2800  func __RKEntityCustomTrigger.targetEntity.getter // getter 
	0xd2830  func __RKEntityCustomTrigger.targetEntity.setter // setter 
	0xd2870  func __RKEntityCustomTrigger.targetEntity.modify // modifyCoroutine 
	0xd28a0  class func __RKEntityCustomTrigger.__allocating_init(targetEntity:identifier:customArguments:) // init 
 }

 class RealityKit.RERenderFrameWorkload : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let _renderFrameWorkload : UnsafeMutableRawPointer // +0x10 (0x8)

	// Swift methods
	0xd41f0  class func RERenderFrameWorkload.__allocating_init(_:) // init 
	0xd42c0  func RERenderFrameWorkload.configure(_:) // method 
	0xd4300  func RERenderFrameWorkload.commit() // method 
	0xd4310  func RERenderFrameWorkload.addEncodedHandler(handler:) // method 
	0xd44c0  func RERenderFrameWorkload.commitAndWait() // method 
	0xd44d0  func RERenderFrameWorkload.commitWithImmediatePresent() // method 
	0xd44e0  func RERenderFrameWorkload.renderFrameWorkload.getter // getter 
 }

 class RealityKit.__RKVisibilityHideLaunchAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.RKEngineAdapter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var engine : __Engine

	// Swift methods
	0xda4f0  class func RKEngineAdapter.__allocating_init(_:) // init 
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
	0xdaf50  func __Engine.__coreEngine.getter // getter 
	0xdb000  func __Engine.services.getter // getter 
	0xdb0b0  func __Engine.hasRenderedThisFrame.getter // getter 
	0xdb0e0  func __Engine.hasRenderedThisFrame.setter // setter 
	0xdb110  func __Engine.hasRenderedThisFrame.modify // modifyCoroutine 
	0xdb150  func __Engine.isRunning.getter // getter 
	0xdb1e0  func __Engine.acceptingInput.getter // getter 
	0xdb1f0  func __Engine.acceptingInput.setter // setter 
	0xdb210  func __Engine.acceptingInput.modify // modifyCoroutine 
	0xda2d0  class func __Engine.__allocating_init(configuration:) // init 
	0xdba10  class func __Engine.__allocating_init(coreEngine:) // init 
	0xdbe30  class func __Engine.__allocating_init(coreEngine:) // init 
	0xdc330  func __Engine.start() // method 
	0xdc360  func __Engine.__start() // method 
	0xdc3a0  func __Engine.stop() // method 
	0xdc3d0  func __Engine.__stop() // method 
	0xdc410  func __Engine.tick() // method 
	0xdc420  func __Engine.tick(duration:) // method 
	0xdc440  func __Engine.parallelFor(count:stride:lambda:) // method 
	0xdc5b0  func __Engine.runJob(_:) // method 
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
	0xde8b0  func __RKEntityTriggerGroup.triggers.getter // getter 
	0xde8e0  class func __RKEntityTriggerGroup.__allocating_init(triggers:) // init 
 }

 class RealityKit.__RKEntitySwapEntityAction : __RKEntityAction {

	// Properties
	let newEntity : Entity? // +0x68 (0x8)
	let buildOutAction : __RKEntityHideAction // +0x70 (0x8)
	let buildInAction : __RKEntityShowAction // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0xe0e50  @objc __RKEntitySwapEntityAction.copy(with:)

	// Swift methods
	0xe0460  class func __RKEntitySwapEntityAction.__allocating_init(targetEntity:newEntity:buildOutAction:buildInAction:) // init 
 }

 class RealityKit.AnchorEntity : Entity {
	// Swift methods
	0xe2760  class func AnchorEntity.__allocating_init(_:) // init 
 }

 class RealityKit.PerspectiveCamera : Entity { }

 class RealityKit.AmbientLight : Entity { }

 class RealityKit.SpotLight : Entity { }

 class RealityKit.DirectionalLight : Entity { }

 class RealityKit.PointLight : Entity { }

 class RealityKit.ModelEntity : Entity {
	// Swift methods
	0xe2e70  class func ModelEntity.__allocating_init(mesh:materials:) // init 
	0xe3010  class func ModelEntity.__allocating_init(mesh:materials:collisionShape:mass:) // init 
	0xe32d0  class func ModelEntity.__allocating_init(mesh:materials:collisionShapes:mass:) // init 
 }

 class RealityKit.TriggerVolume : Entity {
	// Swift methods
	0xe3790  class func TriggerVolume.__allocating_init(shapes:filter:) // init 
 }

 struct RealityKit.PointLightComponent {

	// Properties
	var color : UIColor // +0x0
	var intensity : Float // +0x8
	var attenuationRadius : Float // +0xc
 }

 class RealityKit.__RKChangeSceneAction : __RKEntityAction {

	// Properties
	let targetSceneIdentifier : UUID // +0x45545f5f (0x0)
	var rootEntity : Entity? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0xe5630  @objc __RKChangeSceneAction.copy(with:)

	// Swift methods
	0xe4810  func __RKChangeSceneAction.rootEntity.getter // getter 
	0xe4850  func __RKChangeSceneAction.rootEntity.setter // setter 
	0xe48a0  func __RKChangeSceneAction.rootEntity.modify // modifyCoroutine 
	0xe48f0  class func __RKChangeSceneAction.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
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
	0xebd40  class func RERenderManager.__allocating_init(_:) // init 
	0xebdd0  func RERenderManager.device.getter // getter 
	0xebdf0  func RERenderManager.registerRenderLayer(_:) // method 
	0xebe10  func RERenderManager.unregisterRenderLayer(_:) // method 
	0xebe20  func RERenderManager.setLayerSize(_:_:_:) // method 
	0xebe30  func RERenderManager.getLayerSize(_:) // method 
	0xebe60  func RERenderManager.createRenderFrameSettings() // method 
	0xebe80  func RERenderManager.createRenderFrameWorkload() // method 
	0xebee0  func RERenderManager.needToWaitForFramePacingNow() // method 
	0xebef0  func RERenderManager.waitForFramePacing() // method 
	0xebf00  func RERenderManager.waitUntilScheduled() // method 
	0xebf10  func RERenderManager.renderManager.getter // getter 
	0xebf20  func RERenderManager.getManager<A>() // method 
	0xec090  func RERenderManager.__handle.getter // getter 
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
	0xf7d40  func __RKEntityTapTrigger.targetEntity.getter // getter 
	0xf7d70  func __RKEntityTapTrigger.targetEntity.setter // setter 
	0xf7db0  func __RKEntityTapTrigger.targetEntity.modify // modifyCoroutine 
	0xf7df0  class func __RKEntityTapTrigger.__allocating_init(targetEntity:reversible:) // init 
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
	0xfabe0  @objc __RKEntityOrbitEntityAction.copy(with:)

	// Swift methods
	0xf8790  func __RKEntityOrbitEntityAction.currentAnimation.getter // getter 
	0xf87c0  func __RKEntityOrbitEntityAction.currentAnimation.setter // setter 
	0xf8810  func __RKEntityOrbitEntityAction.currentAnimation.modify // modifyCoroutine 
	0xf88e0  func __RKEntityOrbitEntityAction.targetEntityParent.getter // getter 
	0xf8920  func __RKEntityOrbitEntityAction.targetEntityParent.setter // setter 
	0xf8960  func __RKEntityOrbitEntityAction.targetEntityParent.modify // modifyCoroutine 
	0xf8a30  func __RKEntityOrbitEntityAction.ghostPivotEntity.getter // getter 
	0xf8a70  func __RKEntityOrbitEntityAction.ghostPivotEntity.setter // setter 
	0xf8ab0  func __RKEntityOrbitEntityAction.ghostPivotEntity.modify // modifyCoroutine 
	0xf8b00  class func __RKEntityOrbitEntityAction.__allocating_init(targetEntity:pivotEntity:duration:rotations:orbitalAxis:orientToPath:spinDirection:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:) // init 
	0xf8dc0  func __RKEntityOrbitEntityAction.update() // method 
 }

 class RealityKit.LoadManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let sceneResourceCache : __SceneResourceCache

	// Swift methods
	0xfb0b0  class func LoadManager.__allocating_init() // init 
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
	0xfb060  class func __SceneResourceCache.__allocating_init() // init 
 }

 class RealityKit.Entry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetBundle : __REAssetBundle

	// Swift methods
	0xfbc20  class func __SceneResourceCache.Entry.__allocating_init(_:) // init 
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
	0x103c70  func __RKEntityProximityTrigger.targetEntity.getter // getter 
	0x103ca0  func __RKEntityProximityTrigger.targetEntity.setter // setter 
	0x103ce0  func __RKEntityProximityTrigger.targetEntity.modify // modifyCoroutine 
	0x103d20  func __RKEntityProximityTrigger.__targetEntity.getter // getter 
	0x103df0  func __RKEntityProximityTrigger.distance.getter // getter 
	0x103ec0  func __RKEntityProximityTrigger.type.getter // getter 
	0x103f70  func __RKEntityProximityTrigger.enterFired.getter // getter 
	0x104020  func __RKEntityProximityTrigger.exitFired.getter // getter 
	0x104050  class func __RKEntityProximityTrigger.__allocating_init(targetEntity:distance:type:) // init 
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
	var presentsWithTransactionFrames : UInt32 // +0x10c (0x4)
	var __statisticsOptions : __StatisticsOptions // +0x110 (0x4)
	var __disableStatisticsRendering : Bool // +0x114 (0x1)

	// ObjC -> Swift bridged methods
	0x243dd0  @objc ARView.renderLayer.getter
	0x243e20  @objc ARView.contentScaleFactor.getter
	0x243e90  @objc ARView.contentScaleFactor.setter
	0x244100  @objc ARView.willResignActive(notification:)
	0x2441b0  @objc ARView.restartEngine(notification:)
	0x2442e0  @objc ARView.didMoveToSuperview()
	0x244410  @objc ARView.layoutSubviews()
	0x2444d0  @objc ARView.touchesBegan(_:with:)
	0x244510  @objc ARView.touchesMoved(_:with:)
	0x244650  @objc ARView.touchesEnded(_:with:)
	0x2449d0  @objc ARView.touchesCancelled(_:with:)
	0x2449f0  @objc ARView.handleSingleTap(recognizer:)
	0x244ac0  @objc ARView.gestureRecognizer(_:shouldRecognizeSimultaneouslyWith:)
	0x107b60  @objc ARView.init(coder:)
	0x108230  @objc ARView.init(frame:)
	0x109490  @objc ARView.__deallocating_deinit
	0x1094b0  @objc ARView.__ivar_destroyer

	// Swift methods
	0x105d10  func ARView.__services.getter // getter 
	0x105f20  func ARView.scene.getter // getter 
	0x106000  func ARView.__delegatePrivate.getter // getter 
	0x106040  func ARView.__delegatePrivate.setter // setter 
	0x1060a0  func ARView.__delegatePrivate.modify // modifyCoroutine 
	0x106230  func ARView.__automaticallyInvokesStartTrigger.getter // getter 
	0x106340  func ARView.__automaticallyInvokesStartTrigger.setter // setter 
	0x106460  func ARView.__automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x106990  func ARView.debugOptions.getter // getter 
	0x1069d0  func ARView.debugOptions.setter // setter 
	0x106a50  func ARView.debugOptions.modify // modifyCoroutine 
	0x106c30  func ARView.startEngine() // method 
	0x106db0  func ARView.stopEngine() // method 
	0x106fe0  func ARView.environment.getter // getter 
	0x107020  func ARView.environment.setter // setter 
	0x107080  func ARView.environment.modify // modifyCoroutine 
	0x1071a0  func ARView.cameraTransform.getter // getter 
	0x1073b0  func ARView.audioListener.getter // getter 
	0x107450  func ARView.audioListener.setter // setter 
	0x107500  func ARView.audioListener.modify // modifyCoroutine 
	0x1077c0  func ARView.__environmentEntity.getter // getter 
	0x1077e0  func ARView.__environmentEntity.setter // setter 
	0x107830  func ARView.__environmentEntity.modify // modifyCoroutine 
	0x107910  func ARView.__enableAutomaticFrameRate.getter // getter 
	0x107930  func ARView.__enableAutomaticFrameRate.setter // setter 
	0x107950  func ARView.__enableAutomaticFrameRate.modify // modifyCoroutine 
	0x107a30  func ARView.__preferredFrameRate.getter // getter 
	0x107a60  func ARView.__preferredFrameRate.setter // setter 
	0x107aa0  func ARView.__preferredFrameRate.modify // modifyCoroutine 
	0x108260  func ARView.__customizeMetalLayer() // method 
	0x1085c0  func ARView.__renderGraphEmitter.getter // getter 
	0x108620  func ARView.__renderGraphEmitter.setter // setter 
	0x108640  func ARView.__renderGraphEmitter.modify // modifyCoroutine 
	0x1086f0  func ARView.__setWireframeMode(displayWireframe:) // method 
	0x1087a0  func ARView.__targetIdentifier.getter // getter 
	0x1087c0  func ARView.__didInitializeEngine() // method 
	0x108870  func ARView.__disableComposition.getter // getter 
	0x108890  func ARView.__disableComposition.setter // setter 
	0x1088f0  func ARView.__disableComposition.modify // modifyCoroutine 
	0x109620  func ARView.presentsWithTransactionFrames.getter // getter 
	0x109650  func ARView.presentsWithTransactionFrames.setter // setter 
	0x109690  func ARView.presentsWithTransactionFrames.modify // modifyCoroutine 
	0x10afe0  func ARView.__handleTapAtPoint(point:) // method 
	0x10bd20  func ARView.__statisticsOptions.getter // getter 
	0x10bd60  func ARView.__statisticsOptions.setter // setter 
	0x10bde0  func ARView.__statisticsOptions.modify // modifyCoroutine 
	0x10bfd0  func ARView.__disableStatisticsRendering.getter // getter 
	0x10c020  func ARView.__disableStatisticsRendering.setter // setter 
	0x10c190  func ARView.__disableStatisticsRendering.modify // modifyCoroutine 
	0x10c450  func ARView.__getStatisticsStringForSingleOption(statisticOption:) // method 
	0x10c5a0  func ARView.__frameTime() // method 
	0x10ca60  func ARView.snapshot(saveToHDR:completion:) // method 
	0x10dc90  func ARView.__startAudioEngine() // method 
	0x10dcb0  func ARView.__stopAudioEngine() // method 
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
	0x114280  class func __RKVisibilityBaseAnimation.__allocating_init() // init 
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
	0x115530  class func __RKActiveSceneManager.__allocating_init() // init 
	0x1157f0  func __RKActiveSceneManager.activeScene.getter // getter 
	0x115820  func __RKActiveSceneManager.activeScene.setter // setter 
	0x115840  func __RKActiveSceneManager.activeScene.modify // modifyCoroutine 
	0x115ae0  func __RKActiveSceneManager.addObserver(observer:) // method 
	0x115bd0  func __RKActiveSceneManager.removeObserver(observer:) // method 
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
	0x13a910  class func __Archiving.Operation.__allocating_init(from:) // init 
	0x13aa40  func __Archiving.Operation.set(compressionLevel:) // method 
	0x13aa60  func __Archiving.Operation.set(compressStreams:) // method 
	0x13aa80  func __Archiving.Operation.set(progress:) // method 
	0x13aaa0  func __Archiving.Operation.archive(to:) // method 
	0x13aac0  func __Archiving.Operation.unarchive(to:) // method 
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
	0x1554c0  func EnvironmentResource.coreIBLAsset.getter // getter 
	0x1554f0  func EnvironmentResource.coreIBLAsset.setter // setter 
	0x155520  func EnvironmentResource.coreIBLAsset.modify // modifyCoroutine 
	0x1555e0  func EnvironmentResource.coreSkyboxAsset.getter // getter 
	0x155610  func EnvironmentResource.coreSkyboxAsset.setter // setter 
	0x155640  func EnvironmentResource.coreSkyboxAsset.modify // modifyCoroutine 
	0x154e40  class func EnvironmentResource.__allocating_init(_:_:) // init 
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
	0x15a4e0  func Scene.__coreScene.getter // getter 
	0x15a4f0  func Scene.name.getter // getter 
	0x15a5a0  func Scene.__audioListener.getter // getter 
	0x15a5d0  func Scene.__audioListener.setter // setter 
	0x15a5f0  func Scene.__audioListener.modify // modifyCoroutine 
	0x15aa70  func Scene.internalAudioListener.getter // getter 
	0x15aaa0  func Scene.internalAudioListener.setter // setter 
	0x15ab00  func Scene.internalAudioListener.modify // modifyCoroutine 
	0x15ac50  func Scene.defaultCamera.getter // getter 
	0x15ac80  func Scene.defaultCamera.setter // setter 
	0x15acc0  func Scene.defaultCamera.modify // modifyCoroutine 
	0x15ad00  func Scene.__defaultCamera.getter // getter 
	0x15ad50  func Scene.internalActiveCamera.getter // getter 
	0x15b1f0  func Scene.activeCamera.getter // getter 
	0x15b220  func Scene.activeCamera.setter // setter 
	0x15b980  func Scene.activeCamera.modify // modifyCoroutine 
	0x15cac0  func Scene.entities.getter // getter 
	0x15caf0  func Scene.entities.setter // setter 
	0x15cb30  func Scene.entities.modify // modifyCoroutine 
	0x15cb60  func Scene.__entities.getter // getter 
	0x15cc40  func Scene.anchors.getter // getter 
	0x15cc60  func Scene.anchors.setter // setter 
	0x15cca0  func Scene.anchors.modify // modifyCoroutine 
	0x15cce0  func Scene.addAnchor(_:) // method 
	0x15cd50  func Scene.removeAnchor(_:) // method 
	0x15ce20  func Scene.coreECSService.getter // getter 
	0x15cec0  func Scene.eventService.getter // getter 
	0x15d010  func Scene.eventService.setter // setter 
	0x15d070  func Scene.eventService.modify // modifyCoroutine 
	0x15d140  func Scene.__eventService.getter // getter 
	0x15d170  func Scene.engineEventService.getter // getter 
	0x15d300  class func Scene.__allocating_init(coreScene:) // init 
	0x15d530  func Scene.findEntity(named:) // method 
	0x15da60  func Scene.__interactionService.getter // getter 
	0x15db80  func Scene.synchronizationService.getter // getter 
	0x15dbd0  func Scene.synchronizationService.setter // setter 
	0x15dc00  func Scene.synchronizationService.modify // modifyCoroutine 
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
	0x163c10  @objc __RKEntityAnimateAction.copy(with:)

	// Swift methods
	0x162b90  func __RKEntityAnimateAction.animationComponents.getter // getter 
	0x162bd0  func __RKEntityAnimateAction.animationComponents.setter // setter 
	0x162c10  func __RKEntityAnimateAction.animationComponents.modify // modifyCoroutine 
	0x162c70  func __RKEntityAnimateAction.stopAllAnimations() // method 
	0x162d20  func __RKEntityAnimateAction.setupAnimations(on:andPlay:) // method 
	0x162ea0  func __RKEntityAnimateAction.setupAnimations(entity:assetManager:addToComponentArray:andPlay:) // method 
	0x1631c0  func __RKEntityAnimateAction.setupSkeletalAnimation(on:queryResultsArray:animationLibraryComponent:assetManager:addToComponentArray:andPlay:) // method 
	0x163650  func __RKEntityAnimateAction.setupTransformAnimation(on:transformAnimationAsset:assetManager:addToComponentArray:andPlay:) // method 
 }

 class RealityKit.__RKEntityStartAnimateAction : __RKEntityAnimateAction {

	// Properties
	var updateSubscription : Cancellable?
	var deadline : Double

	// ObjC -> Swift bridged methods
	0x1649f0  @objc __RKEntityStartAnimateAction.copy(with:)

	// Swift methods
	0x163da0  class func __RKEntityStartAnimateAction.__allocating_init(targetEntity:loopCount:multiplePerformBehavior:clipStart:clipDuration:clipReversed:animationSpeed:clipReverses:) // init 
 }

 class RealityKit.__RKEntityStopAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x164d60  @objc __RKEntityStopAnimateAction.copy(with:)
 }

 class RealityKit.__RKEntityToggleAnimateAction : __RKEntityAnimateAction {
	// ObjC -> Swift bridged methods
	0x165750  @objc __RKEntityToggleAnimateAction.copy(with:)
 }

 struct RealityKit.__RKScenePhysics {

	// Properties
	var gravity : SIMD3<Float> // +0x0
 }

 class RealityKit.Registration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let introspectionStruct : OpaquePointer // +0x10 (0x8)
	let componentType : OpaquePointer // +0x18 (0x8)

	// Swift methods
	0x1676c0  class func __RKScenePhysics.Registration.__allocating_init() // init 
 }

 enum RealityKit.RegistrationError {

	// Properties
	case builderFailed  
 }

 class RealityKit.__RCInteractionsController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x1685a0  @objc __RCInteractionsController.init()

	// Swift methods
	0x168380  class func static __RCInteractionsController.__invokeCustomTrigger(named:onEntityNamed:inSceneNamed:) // method 
	0x168440  class func static __RCInteractionsController.__registerCustomAction(named:inSceneNamed:action:) // method 
 }

 class RealityKit.__RCEntity : Entity {
	// Swift methods
	0x168640  func __RCEntity.invokeCustomTrigger(named:overrides:) // method 
	0x168800  func __RCEntity.registerCustomAction(named:action:) // method 
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
	let targetSceneIdentifier : UUID // +0x0 (0x0)

	// Swift methods
	0x16a250  class func RKChangeSceneActionBasicTechnique.__allocating_init(rootEntity:targetSceneIdentifier:) // init 
	0x16a2f0  func RKChangeSceneActionBasicTechnique.switchScenes() // method 
 }

 class RealityKit.__RKEntityFadeAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x16a680  @objc __RKEntityFadeAction.copy(with:)

	// Swift methods
	0x16a400  class func __RKEntityFadeAction.__allocating_init(targetEntity:targetOpacity:duration:) // init 
 }

 class RealityKit.__RKFadeSceneAction : __RKEntityAction {

	// Properties
	let targetOpacity : Float
	let duration : Float

	// ObjC -> Swift bridged methods
	0x16a9c0  @objc __RKFadeSceneAction.copy(with:)

	// Swift methods
	0x16a770  class func __RKFadeSceneAction.__allocating_init(targetOpacity:duration:) // init 
 }

 class RealityKit.RKChangeSceneActionRuntimeTechnique : RKChangeSceneActionBasicTechnique {

	// Properties
	var sceneSwitchEntity : Entity? // +0x0 (0x8)
	var subcomponent : OpaquePointer? // +0x0 (0x8)

	// Swift methods
	0x16bb70  func RKChangeSceneActionRuntimeTechnique.findSceneRootWithRootEntitySubTechnique() // method 
	0x16be40  func RKChangeSceneActionRuntimeTechnique.unloadScene() // method 
	0x16c0c0  func RKChangeSceneActionRuntimeTechnique.loadScene(_:) // method 
	0x16d060  func RKChangeSceneActionRuntimeTechnique.stopAnimations(rootEntity:) // method 
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
	0x1706d0  @objc __RKEntityAudioAction.copy(with:)

	// Swift methods
	0x16f140  class func __RKEntityAudioAction.__allocating_init(targetEntity:type:path:volume:loops:spatialMode:multiplePerformBehavior:) // init 
 }

 class RealityKit.__RKVisibilityShowMoveInAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.AnimationPlaybackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UInt64 // +0x10 (0x8)
	var entity : weak Entity? // +0x18 (0x8)

	// Swift methods
	0x176820  func AnimationPlaybackController.identifier.getter // getter 
	0x176850  func AnimationPlaybackController.identifier.setter // setter 
	0x176880  func AnimationPlaybackController.identifier.modify // modifyCoroutine 
	0x1768c0  func AnimationPlaybackController.__identifier.getter // getter 
	0x176980  func AnimationPlaybackController.entity.getter // getter 
	0x1769b0  func AnimationPlaybackController.isPaused.getter // getter 
	0x1769d0  func AnimationPlaybackController.isComplete.getter // getter 
	0x1766c0  class func AnimationPlaybackController.__allocating_init(entity:identifier:) // init 
	0x176b40  func AnimationPlaybackController.hash(into:) // method 
	0x176c00  func AnimationPlaybackController.pause() // method 
	0x176c20  func AnimationPlaybackController.resume() // method 
	0x176c40  func AnimationPlaybackController.stop() // method 
	0x176d60  func AnimationPlaybackController.hashValue.getter // getter 
 }

 struct RealityKit.ComponentSet {

	// Properties
	var entity : Entity // +0x0
 }

 class RealityKit.__RKEntityLookupTable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var uuidToEntity : [UUID : Entity] // +0x10 (0x8)

	// Swift methods
	0x178fd0  class func __RKEntityLookupTable.__allocating_init() // init 
	0x1790c0  func __RKEntityLookupTable.entity(for:) // method 
	0x179160  func __RKEntityLookupTable.uuid(for:) // method 
	0x1797c0  func __RKEntityLookupTable.updateEntity(_:for:) // method 
	0x179850  func __RKEntityLookupTable.removeAllEntities() // method 
 }

 class RealityKit.Entity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var coreEntity : OpaquePointer
	var swiftChildren : Entity

	// Swift methods
	0x17a450  func Entity.__coreEntity.getter // getter 
	0x17a480  func Entity.components.getter // getter 
	0x17a4a0  func Entity.components.setter // setter 
	0x17a4f0  func Entity.components.modify // modifyCoroutine 
	0x17a610  func Entity.scene.getter // getter 
	0x17a690  func Entity.name.getter // getter 
	0x17a6c0  func Entity.name.setter // setter 
	0x17a7c0  func Entity.name.modify // modifyCoroutine 
	0x17aa00  func Entity.__boundingBox.getter // getter 
	0x17aad0  func Entity.isActive.getter // getter 
	0x17aaf0  func Entity.isAnchored.getter // getter 
	0x17ab10  func Entity.isEnabled.getter // getter 
	0x17ab30  func Entity.isEnabled.setter // setter 
	0x17ab70  func Entity.isEnabled.modify // modifyCoroutine 
	0x17abe0  func Entity.isEnabledInHierarchy.getter // getter 
	0x17ac50  class func Entity.__allocating_init() // init 
	0x17af80  class func Entity.__allocating_init(coreEntity:) // init 
	0x17ac30  func Entity.didClone(from:) // method 
	0x17ac40  func Entity.findEntity(named:) // method 
 }

 class RealityKit.__RKPhysics : Entity { }

 class RealityKit.__RKEntityCollisionTrigger : __RKEntityTrigger {

	// Properties
	var targetEntity : Entity? // +0x18 (0x8)
	var collidingEntities : [Entity] // +0x20 (0x8)
	var tags : [String] // +0x28 (0x8)

	// Swift methods
	0x17d1f0  func __RKEntityCollisionTrigger.targetEntity.getter // getter 
	0x17d220  func __RKEntityCollisionTrigger.targetEntity.setter // setter 
	0x17d260  func __RKEntityCollisionTrigger.targetEntity.modify // modifyCoroutine 
	0x17d330  func __RKEntityCollisionTrigger.collidingEntities.getter // getter 
	0x17d360  func __RKEntityCollisionTrigger.collidingEntities.setter // setter 
	0x17d3a0  func __RKEntityCollisionTrigger.collidingEntities.modify // modifyCoroutine 
	0x17d460  func __RKEntityCollisionTrigger.tags.getter // getter 
	0x17d490  func __RKEntityCollisionTrigger.tags.setter // setter 
	0x17d4d0  func __RKEntityCollisionTrigger.tags.modify // modifyCoroutine 
	0x17d020  class func __RKEntityCollisionTrigger.__allocating_init(targetEntity:collidingEntities:tags:) // init 
 }

 class RealityKit.__RKWaitAction : __RKEntityAction {

	// Properties
	let duration : Float // +0x64 (0x4)
	let block : () // +0x68 (0x10)
	let durationWiggleRoom : Double // +0x78 (0x8)
	var updateSubscription : Cancellable? // +0x80 (0x28)
	var deadline : Double // +0xa8 (0x8)

	// ObjC -> Swift bridged methods
	0x1823c0  @objc __RKWaitAction.copy(with:)

	// Swift methods
	0x181ba0  class func __RKWaitAction.__allocating_init(duration:block:) // init 
 }

 class RealityKit.__RKVisibilityShowPopAnimation : __RKVisibilityBaseAnimation { }

 class RealityKit.__RKEmphasisBaseAnimation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x187860  class func __RKEmphasisBaseAnimation.__allocating_init() // init 
 }

 class RealityKit.__RKEntityCustomAction : __RKEntityAction {

	// Properties
	var handler : (_:)? // +0x68 (0x10)
	let identifier : String // +0x78 (0x10)
	let customArguments : [String : String] // +0x88 (0x8)
	var customArgumentsBlock : (_:_:)? // +0x90 (0x10)

	// ObjC -> Swift bridged methods
	0x189460  @objc __RKEntityCustomAction.copy(with:)

	// Swift methods
	0x187d70  func __RKEntityCustomAction.handler.getter // getter 
	0x187dd0  func __RKEntityCustomAction.handler.setter // setter 
	0x187e40  func __RKEntityCustomAction.handler.modify // modifyCoroutine 
	0x187fe0  func __RKEntityCustomAction.customArgumentsBlock.getter // getter 
	0x188030  func __RKEntityCustomAction.customArgumentsBlock.setter // setter 
	0x188090  func __RKEntityCustomAction.customArgumentsBlock.modify // modifyCoroutine 
	0x1880e0  class func __RKEntityCustomAction.__allocating_init(targetEntity:actionIdentifier:handler:customArguments:customArgumentsBlock:) // init 
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
	0x19c700  func PhysicsMaterialResource.coreAsset.getter // getter 
	0x19c730  func PhysicsMaterialResource.coreAsset.setter // setter 
	0x19c760  func PhysicsMaterialResource.coreAsset.modify // modifyCoroutine 
	0x19c790  class func PhysicsMaterialResource.__allocating_init(_:) // init 
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
	0x1b9bd0  class func RealityFileLoadInformationResolver.__allocating_init() // init 
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
	0x1c4080  class func __SceneResource.__allocating_init(core:) // init 
 }

 class RealityKit.BoxedSubscription : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Cancellable?

	// Swift methods
	0x1c4610  class func BoxedSubscription.__allocating_init() // init 
 }

 class RealityKit.REEventBus : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventService {

	// Properties
	let coreHandle : OpaquePointer
	var dispatchersByHandle : DispatcherHandle

	// Swift methods
	0x1c4a60  class func REEventBus.__allocating_init(handle:) // init 
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
	0x1c6e10  func ShapeResource.coreAsset.getter // getter 
	0x1c6e40  func ShapeResource.coreAsset.setter // setter 
	0x1c6e70  func ShapeResource.coreAsset.modify // modifyCoroutine 
	0x1c6eb0  class func ShapeResource.__allocating_init(_:pose:) // init 
	0x1c6ba0  class func ShapeResource.__allocating_init(_:) // init 
	0x1c71e0  func ShapeResource.hash(into:) // method 
	0x1c7300  func ShapeResource.hashValue.getter // getter 
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
	0x1ca300  func __RKEntityInteractionManager.areInteractionsEnabled.getter // getter 
	0x1ca330  func __RKEntityInteractionManager.areInteractionsEnabled.setter // setter 
	0x1ca360  func __RKEntityInteractionManager.areInteractionsEnabled.modify // modifyCoroutine 
	0x1ca390  func __RKEntityInteractionManager.customTriggerIdentifiers.getter // getter 
	0x1ca630  func __RKEntityInteractionManager.customActionIdentifiers.getter // getter 
	0x1ca850  func __RKEntityInteractionManager.performInteractions(matchingCustomTriggerWithIdentifier:customArguments:overrides:) // method 
	0x1cd270  func __RKEntityInteractionManager.setCustomActionHandler(for:handler:) // method 
	0x1cd4c0  func __RKEntityInteractionManager.applyOverrides(_:on:) // method 
	0x1cd8d0  func __RKEntityInteractionManager.__performInteractions(matchingCustomTriggerWithIdentifier:with:on:) // method 
	0x1cda50  func __RKEntityInteractionManager.__setCustomPackageActionHandler(withIdentifier:actionHandler:) // method 
	0x1cdd30  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.getter // getter 
	0x1cdd60  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.setter // setter 
	0x1cdd90  func __RKEntityInteractionManager.automaticallyInvokesStartTrigger.modify // modifyCoroutine 
	0x1cde50  func __RKEntityInteractionManager.__entityLookupTable.getter // getter 
	0x1cde80  func __RKEntityInteractionManager.__entityLookupTable.setter // setter 
	0x1cdec0  func __RKEntityInteractionManager.__entityLookupTable.modify // modifyCoroutine 
	0x1cdf90  func __RKEntityInteractionManager.__simulationSceneCoordinator.getter // getter 
	0x1cdfc0  func __RKEntityInteractionManager.__simulationSceneCoordinator.setter // setter 
	0x1ce000  func __RKEntityInteractionManager.__simulationSceneCoordinator.modify // modifyCoroutine 
	0x1ce0c0  func __RKEntityInteractionManager.__interactions.getter // getter 
	0x1ce0f0  func __RKEntityInteractionManager.__hasInteractionsForTrigger<A>(of:) // method 
	0x1ce510  func __RKEntityInteractionManager.__actions.getter // getter 
	0x1ce580  func __RKEntityInteractionManager.__addInteraction(_:) // method 
	0x1ce670  func __RKEntityInteractionManager.__removeInteraction(_:) // method 
	0x1ce8b0  func __RKEntityInteractionManager.__removeAllInteractions() // method 
	0x1ce8f0  func __RKEntityInteractionManager.__performInteractions(matching:on:) // method 
	0x1cfa90  func __RKEntityInteractionManager.containsChangeSceneAction(action:) // method 
	0x1cfd30  func __RKEntityInteractionManager.interactions(matching:entities:) // method 
	0x1d13b0  func __RKEntityInteractionManager.targetEntity(for:) // method 
	0x1d1640  func __RKEntityInteractionManager.action(for:) // method 
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
	0x1df9d0  @objc __RKEntitySpinAction.copy(with:)

	// Swift methods
	0x1de860  func __RKEntitySpinAction.currentAnimation.getter // getter 
	0x1de890  func __RKEntitySpinAction.currentAnimation.setter // setter 
	0x1de8e0  func __RKEntitySpinAction.currentAnimation.modify // modifyCoroutine 
	0x1de1e0  class func __RKEntitySpinAction.__allocating_init(targetEntity:duration:iterations:direction:axis:) // init 
 }

 struct RealityKit.PerspectiveCameraComponent {

	// Properties
	var near : Float // +0x0
	var far : Float // +0x4
	var fieldOfViewInDegrees : Float // +0x8
 }

 struct RealityKit.__EntityInfoComponent {

	// Properties
	var rawData : UnsafeMutableRawPointer? // +0x0
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
	0x1e42e0  func NetPassthroughEncoder.m_encoder.getter // getter 
	0x1e4260  func NetPassthroughEncoder.m_encoder.setter // setter 
	0x1e2310  func NetPassthroughEncoder.m_encoder.modify // modifyCoroutine 
	0x1e4230  func NetPassthroughEncoder.m_payload.getter // getter 
	0x1e4270  func NetPassthroughEncoder.m_payload.setter // setter 
	0x1e2340  func NetPassthroughEncoder.m_payload.modify // modifyCoroutine 
	0x1e2370  func NetPassthroughEncoder.encode<A>(_:) // method 
	0x1e2450  class func NetPassthroughEncoder.__allocating_init() // init 
 }

 class RealityKit.NetPassthroughDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RENetDecoder {

	// Properties
	var m_decoder : JSONDecoder
	var m_payload : Data

	// Swift methods
	0x1e2650  func NetPassthroughDecoder.m_decoder.getter // getter 
	0x1e2680  func NetPassthroughDecoder.m_decoder.setter // setter 
	0x1e26c0  func NetPassthroughDecoder.m_decoder.modify // modifyCoroutine 
	0x1e2790  func NetPassthroughDecoder.m_payload.getter // getter 
	0x1e27d0  func NetPassthroughDecoder.m_payload.setter // setter 
	0x1e2820  func NetPassthroughDecoder.m_payload.modify // modifyCoroutine 
	0x1e2850  class func NetPassthroughDecoder.__allocating_init(with:) // init 
	0x1e29a0  func NetPassthroughDecoder.decode<A>(_:) // method 
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
	0x20b7d0  class func __SceneImportOperation.__allocating_init(core:) // init 
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
	0x20d670  @objc __RKEntityForceAction.copy(with:)

	// Swift methods
	0x20c970  func __RKEntityForceAction.force.getter // getter 
	0x20ca40  func __RKEntityForceAction.velocity.getter // getter 
	0x20c760  class func __RKEntityForceAction.__allocating_init(targetEntity:force:velocity:) // init 
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
	0x21b140  func AnimationResource.__coreAsset.getter // getter 
	0x21b070  class func AnimationResource.__allocating_init(_:name:) // init 
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
	0x21df50  func __RKStartTrigger.triggered.getter // getter 
	0x21df80  func __RKStartTrigger.triggered.setter // setter 
	0x21dfb0  func __RKStartTrigger.triggered.modify // modifyCoroutine 
 }

 class RealityKit.MeshResource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coreAsset : OpaquePointer?

	// Swift methods
	0x21eaa0  func MeshResource.expectedMaterialCount.getter // getter 
	0x21eac0  func MeshResource.bounds.getter // getter 
	0x21e540  class func MeshResource.__allocating_init(_:) // init 
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
	0x220400  class func __MeshCompileOptions.__allocating_init(core:) // init 
	0x220480  class func __MeshCompileOptions.__allocating_init() // init 
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
	0x2248c0  @objc InteractionNotificationsManager.notificationTriggerDidPost(notification:)

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
	0x22fbc0  func __ServiceLocator.coreServiceLocator.getter // getter 
	0x22fbf0  func __ServiceLocator.coreServiceLocator.setter // setter 
	0x22fc20  func __ServiceLocator.coreServiceLocator.modify // modifyCoroutine 
	0x22fc60  func __ServiceLocator.engineRef.getter // getter 
	0x22fcc0  func __ServiceLocator.__engineRef.getter // getter 
	0x22fdb0  func __ServiceLocator.engine.getter // getter 
	0x22fde0  func __ServiceLocator.engine.setter // setter 
	0x22fe40  func __ServiceLocator.engine.modify // modifyCoroutine 
	0x22ffb0  func __ServiceLocator.eventService.getter // getter 
	0x22fff0  func __ServiceLocator.eventService.setter // setter 
	0x230040  func __ServiceLocator.eventService.modify // modifyCoroutine 
	0x230070  func __ServiceLocator.__eventService.getter // getter 
	0x230160  func __ServiceLocator.renderService.getter // getter 
	0x2301a0  func __ServiceLocator.renderService.setter // setter 
	0x2301f0  func __ServiceLocator.renderService.modify // modifyCoroutine 
	0x2302b0  func __ServiceLocator.sceneService.getter // getter 
	0x2302f0  func __ServiceLocator.sceneService.setter // setter 
	0x230340  func __ServiceLocator.sceneService.modify // modifyCoroutine 
	0x230370  func __ServiceLocator.__sceneService.getter // getter 
	0x230460  func __ServiceLocator.assetService.getter // getter 
	0x2304a0  func __ServiceLocator.assetService.setter // setter 
	0x230500  func __ServiceLocator.assetService.modify // modifyCoroutine 
	0x230540  func __ServiceLocator.__assetService.getter // getter 
	0x230630  func __ServiceLocator.loadService.getter // getter 
	0x230670  func __ServiceLocator.loadService.setter // setter 
	0x2306b0  func __ServiceLocator.loadService.modify // modifyCoroutine 
	0x22f500  class func __ServiceLocator.__allocating_init(engine:) // init 
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
	0x231fa0  class func AudioResource.__allocating_init(assetRef:) // init 
	0x232100  func AudioResource.layoutTag.getter // getter 
	0x232110  func AudioResource.layoutTag.setter // setter 
	0x232120  func AudioResource.layoutTag.modify // modifyCoroutine 
	0x232310  func AudioResource.inputMode.getter // getter 
	0x232400  func AudioResource.inputMode.setter // setter 
	0x232440  func AudioResource.inputMode.modify // modifyCoroutine 
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
	0x232530  class func AudioResource.AudioError.__allocating_init(message:) // init 
	0x2325a0  func AudioResource.AudioError.debugDescription.getter // getter 
 }

 class RealityKit.FileNotFound : AudioResource.AudioError {
	// Swift methods
	0x232710  class func AudioResource.FileNotFound.__allocating_init(filepath:) // init 
 }

 class RealityKit.UnsupportedConfiguration : AudioResource.AudioError { }

 class RealityKit.AudioFileResource : AudioResource {
	// Swift methods
	0x2329d0  func AudioFileResource.loadingStrategy.getter // getter 
	0x2329f0  func AudioFileResource.loadingStrategy.setter // setter 
	0x232a10  func AudioFileResource.loadingStrategy.modify // modifyCoroutine 
	0x232b00  func AudioFileResource.shouldLoop.getter // getter 
	0x232b20  func AudioFileResource.shouldLoop.setter // setter 
	0x232b40  func AudioFileResource.shouldLoop.modify // modifyCoroutine 
	0x232b90  func AudioFileResource.duration.getter // getter 
	0x232ba0  class func AudioFileResource.__allocating_init(contentsOf:bundle:inputMode:loadingStrategy:shouldLoop:) // init 
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
	0x239ac0  @objc __RKEntityVisibilityAction.copy(with:)

	// Swift methods
	0x239490  func __RKEntityVisibilityAction.updateOpacity(to:enabled:) // method 
 }

 class RealityKit.__RKEntityToggleVisibilityAction : __RKEntityVisibilityAction {
	// ObjC -> Swift bridged methods
	0x23a1a0  @objc __RKEntityToggleVisibilityAction.copy(with:)
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
	0x23e1f0  @objc __RKEntityShowAction.copy(with:)

	// Swift methods
	0x237090  class func __RKEntityShowAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeIn:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildInAnimationType:) // init 
	0x23a440  func __RKEntityShowAction.updateFadeIn(_:) // method 
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
	0x2417c0  @objc __RKEntityHideAction.copy(with:)

	// Swift methods
	0x237270  class func __RKEntityHideAction.__allocating_init(targetEntity:duration:distance:ease:easeType:fadeOut:finalOpacity:respectPhysics:physicsAngularCoefficient:physicsLinearCoefficient:animationStyle:buildOutAnimationType:) // init 
	0x23e480  func __RKEntityHideAction.updateFadeOut(_:) // method 
	0x241840  func __RKEntityHideAction.createBasicHidePopAnimation(_:scale:currentTranslation:currentOrientation:additive:) // method 
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
	0x245b70  func __RKEntityInteraction.trigger.getter // getter 
	0x245c30  func __RKEntityInteraction.action.getter // getter 
	0x245cf0  func __RKEntityInteraction.alternateAction.getter // getter 
	0x245da0  func __RKEntityInteraction.enabled.getter // getter 
	0x245dd0  func __RKEntityInteraction.enabled.setter // setter 
	0x245e00  func __RKEntityInteraction.enabled.modify // modifyCoroutine 
	0x245a10  class func __RKEntityInteraction.__allocating_init(trigger:action:) // init 
	0x245e80  func __RKEntityInteraction.fire(context:) // method 
	0x246560  func __RKEntityInteraction.description.getter // getter 
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

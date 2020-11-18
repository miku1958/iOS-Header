 protocol TeaFoundation.ProcessInfoValueType // 1 requirements
 {
	// class method
 }
 protocol TeaFoundation.Disposable // 2 requirements
 {
	// method
	// method
 }
 protocol TeaFoundation.SceneStateMonitor // 9 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.ApplicationStateMonitor // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol TeaFoundation.ApplicationStateManagerType // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.RemoteNotificationHandler // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.URLSessionType // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.LocaleType // 2 requirements
 {
	// getter
	// getter
 }
 protocol TeaFoundation.Constructable // 1 requirements
 {
	// class init
 }
 protocol TeaFoundation.StateMachineState // 1 requirements
 {
	// class base protocol
 }
 protocol TeaFoundation.DeviceStoragePurgeable // 2 requirements
 {
	// method
	// method
 }
 protocol TeaFoundation.DeviceStorageManagerType // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol TeaFoundation.TestDataLocatorType // 1 requirements
 {
	// getter
 }
 protocol TeaFoundation.ShortDescribable // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol TeaFoundation.ShortDescriptionType // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.Cancellable // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.ReferenceTypeServiceType // 2 requirements
 {
	// getter
	// method
 }
 protocol TeaFoundation.OptionalProtocol // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol TeaFoundation.Diffable // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol TeaFoundation.SynchronizerType // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.BackgroundFetchWorker // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.URLRequestProcessor // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.CallbackInstanceDefinitionType // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.SceneStateManagerType // 12 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.StateMachineEvent // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
 }
 protocol TeaFoundation.ContextType // 9 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.ResolverType // 9 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.Identifiable // 1 requirements
 {
	// getter
 }
 protocol TeaFoundation.Versionable // 2 requirements
 {
	// getter
	// getter
 }
 protocol TeaFoundation.StartupTaskType // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol TeaFoundation.DefinitionConfigurationType // 1 requirements
 {
	// method
 }
 protocol TeaFoundation.CallbackRegistrationType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaFoundation.DeserializerType // 3 requirements
 {
	// class associated type access function
	// class init
	// method
 }
 protocol TeaFoundation.Lock // 2 requirements
 {
	// method
	// method
 }
 protocol TeaFoundation.PoolAccessible // 3 requirements
 {
	// method
	// method
	// method
 }

 struct __C._opaque_pthread_mutex_t {

	// Properties
	var __sig : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __opaque : •+
 }

 struct __C.os_unfair_lock_options_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ,
 }

 enum __C.objc_AssociationPolicy { }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ,
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 class TeaFoundation.DebugCacheRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheFileURLs :  empty-list 
	var cacheUserDefaultsEntries : UserDefaultsEntry

	// Swift methods
	0x1f10  class func DebugCacheRegistry.__allocating_init() // init 
 }

 struct TeaFoundation.UserDefaultsEntry {

	// Properties
	let key : String // +0x0
	let defaults : NSUserDefaults // +0x10
 }

 enum TeaFoundation.JSON {

	// Properties
	case object : JSON
	case array : JSON
	case string : String
	case number : String
	case true  
	case false  
	case null  
 }

 enum TeaFoundation.ReferenceContainer {

	// Properties
	case object : String
	case collection : [String]
 }

 enum TeaFoundation.CodingType {

	// Properties
	case object  
	case collection  
 }

 enum TeaFoundation.CodingKeys {

	// Properties
	case type  
	case data  
 }

 struct TeaFoundation.StartupTaskGroup {

	// Properties
	let identifier : String // +0x0
 }

 struct TeaFoundation.Signpost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : M
	let comment : String
	let timeInterval : Double
 }

 enum TeaFoundation.CachePolicy {

	// Properties
	case cachedOnlyMaxAge : Double
	case maxAge : Double
	case ignoreCache  
	case cachedOnly  
	case preferCache  
 }

 struct TeaFoundation.ManagerOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.LRUCacheNode {
 class TeaFoundation.LRUCache {
 class TeaFoundation.DisposableBag : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var object : weak Swift.AnyObject?
	var objects : [Swift.AnyObject]

	// Swift methods
	0xd670  class func DisposableBag.__allocating_init(disposeOn:) // init 
 }

 class TeaFoundation.SingletonPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var pool : Key

	// Swift methods
	0xdd20  class func SingletonPool.__allocating_init() // init 
 }

 class TeaFoundation.Localized : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaFoundation.ProxyRegistrationContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let registrationContainer : NFRegistrationContainer
	let publicContainer : Container
	let privateContainer : Container

	// Swift methods
 }

 enum TeaFoundation.PromiseError {

	// Properties
	case cancelled  
	case abandoned  
	case timedOut  
 }

 class TeaFoundation.Promise {
 class TeaFoundation.StartupTaskManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var tasksByGroup : StartupTaskGroup
	var promisesByGroup : StartupTaskGroup
	var state : State

	// Swift methods
	0x19a90  class func StartupTaskManager.__allocating_init() // init 
 }

 enum TeaFoundation.State {

	// Properties
	case notStarted  
	case started  
 }

 enum TeaFoundation.Ternary {

	// Properties
	case true  
	case false  
	case unknown  
 }

 class TeaFoundation.Gate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let queue : OS_dispatch_queue
	var state : Int
	var closures : [()]

	// Swift methods
	0x225b0  class func Gate.__allocating_init(name:queue:) // init 
 }

 enum TeaFoundation.ReferenceServiceError {

	// Properties
	case missingReferenceTypeServices : ReferenceType
	case cannotResolveReferences : ReferenceType
 }

 class TeaFoundation.ReferenceService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var typeServices : ReferenceType

	// Swift methods
	0x23ca0  class func ReferenceService.__allocating_init() // init 
 }

 enum TeaFoundation.ReferenceCodingKeys {

	// Properties
	case type  
	case container  
 }

 struct TeaFoundation.Safe {

	// Properties
	var value : A?
 }

 class TeaFoundation.ReferenceEncoder {
 struct TeaFoundation.Reference {

	// Properties
	let value : A
	let container : ReferenceContainer
	let type : ReferenceType
 }

 struct TeaFoundation.AnyReference {

	// Properties
	let type : ReferenceType // +0x0
	let container : ReferenceContainer // +0x10
	let value : Any // +0x28
 }

 struct TeaFoundation.ReferenceDecodingContainer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var container : ×
	let pool : ReferenceDecodingPool
 }

 class TeaFoundation.ReferenceDecodingPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var references : ReferenceType

	// Swift methods
	0x2bbd0  class func ReferenceDecodingPool.__allocating_init() // init 
	0x2b0f0  class func ReferenceDecodingPool.__allocating_init(references:) // init 
 }

 class TeaFoundation.SyncObservable {
 class TeaFoundation.Observer {
 enum TeaFoundation.ApplicationStateLaunchOptionKey {

	// Properties
	case unknown : String
	case annotation  
	case remoteNotification  
	case shortcutItem  
	case userActivityType  
	case userActivityDictionary  
	case url  
	case sourceApplication  
	case newsstandDownloads  
	case location  
	case cloudKitShareMetadata  
	case bluetoothPeripherals  
	case bluetoothCentrals  
 }

 class TeaFoundation.ApplicationStateManagerIOS : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ApplicationStateManagerType {

	// Properties
	var monitors : DisposableMonitor

	// Swift methods
	0x32770  class func ApplicationStateManagerIOS.__allocating_init() // init 
 }

 class TeaFoundation.ApplicationStateManagerMacOS : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ApplicationStateManagerType {

	// Properties
	var monitors : DisposableMonitor

	// Swift methods
	0x34200  class func ApplicationStateManagerMacOS.__allocating_init() // init 
 }

 class TeaFoundation.DisposableMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monitor : ApplicationStateMonitor // +0x10 (0x10)
	var keepAliveObject : weak Swift.AnyObject? // +0x20 (0x8)

	// Swift methods
 }

 enum TeaFoundation.RemoteNotificationPattern {

	// Properties
	case category : String
	case any  
 }

 enum TeaFoundation.RemoteNotificationFetchResult {

	// Properties
	case noData  
	case newData  
	case failed  
 }

 class TeaFoundation.RemoteNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var handlers : DisposableHandler
	var whenActiveBlocks : [()]

	// Swift methods
	0x34380  class func RemoteNotificationManager.__allocating_init() // init 
 }

 class TeaFoundation.DisposableHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var handler : RemoteNotificationHandler
	let pattern : RemoteNotificationPattern
	var keepAliveObject : weak Swift.AnyObject?

	// Swift methods
 }

 struct TeaFoundation.SafeCollection {

	// Properties
	var storage : A
 }

 class TeaFoundation.StateMachineTransition {
 class TeaFoundation.Atomic {
 class TeaFoundation.DynamicLocale : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LocaleType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentLocale : / // +0x0 (0x0)
	var changeObserver : NSObject? // +0x0 (0x8)

	// Swift methods
 }

 enum TeaFoundation.PromiseFetchError {

	// Properties
	case failed : (statusCode: Int, message: String?)
	case unknown  
 }

 struct TeaFoundation.Quantity {

	// Properties
	let quantifier : Quantifier
	let thing : A
	let inverted : Bool
	let description : String
 }

 class TeaFoundation.CallbackStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var store : Key

	// Swift methods
 }

 struct TeaFoundation.Random { }

 struct TeaFoundation.VersionQualifier {

	// Properties
	let name : String // +0x0
	let version : VersionNumber // +0x10
 }

 enum TeaFoundation.DeviceStorageDataClass {

	// Properties
	case speculative  
	case userInitiated  
	case essential  
 }

 enum TeaFoundation.DeviceStoragePurgeUrgency {

	// Properties
	case none  
	case low  
	case high  
 }

 class TeaFoundation.DeviceStorageManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DeviceStorageManagerType {

	// Properties
	var observablePurgeUrgency : AsyncObservable
	var purgeables : DisposablePurgeable
	let lock : UnfairLock

	// Swift methods
	0x3ff20  class func DeviceStorageManager.__allocating_init() // init 
 }

 class TeaFoundation.DisposablePurgeable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var purgeable : DeviceStoragePurgeable // +0x10 (0x10)
	var keepAliveObject : weak Swift.AnyObject? // +0x20 (0x8)

	// Swift methods
 }

 struct TeaFoundation.EventTriggerBehavior {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.EventManager {
 class TeaFoundation.EventTrigger {
 class TeaFoundation.BasePoolObject : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaFoundation.PoolObject {
 enum TeaFoundation.StateMachineError {

	// Properties
	case invalidStateForEvent : (event: B, state: A)
	case transitionBlockedEvent : (event: B, state: A)
 }

 class TeaFoundation.ReferenceDecoder : _TeaJSONDecoder {
	// Swift methods
	0x44a00  func <stripped> // method 
 }

 struct TeaFoundation.ReferenceEncodingContainer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var container : 
	let pool : ReferenceEncodingPool
 }

 struct TeaFoundation.ReferenceType {

	// Properties
	let type : String // +0x0
 }

 struct TeaFoundation.SignpostEntry {

	// Properties
	let object : A?
	let signposts : Signpost
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : M
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : M
	let comment : String
 }

 enum TeaFoundation.Quantifier {

	// Properties
	case atLeast : Int
	case atMost : Int
	case anywhere : (from: Int, to: Int)
	case exactly : Int
	case oneOf : Set<Int>
	case any  
	case some  
	case none  
	case odd  
	case even  
 }

 enum TeaFoundation.Result {

	// Properties
	case success : (value: A)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : »
 }

 enum TeaFoundation.Errors {

	// Properties
	case unknown  
 }

 class TeaFoundation.BaseCallbackDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x4a6c0  func <stripped> // getter 
 }

 class TeaFoundation.CallbackDefinition {
 class TeaFoundation.BaseDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaFoundation.Definition {
 class TeaFoundation.TestDataLoader {
 enum TeaFoundation.TestDataError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidTestData : »
	case missingTestData  
 }

 struct TeaFoundation.UniqueCollection {

	// Properties
	var elements : [A]
	var table : [String : A]
 }

 class TeaFoundation.ManagerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa15c0002e538 (0x15c0002e538) in binary!
	0x18000000c  @objc ManagerAssembly.(null) <stripped>
 }

 struct TeaFoundation.SignpostRecorder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : M
	var signposts : Signpost
 }

 struct TeaFoundation.VersionNumber {

	// Properties
	let numbers : [Int] // +0x0
 }

 class TeaFoundation.ProxyContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let public : RegistrationContainer
	let private : RegistrationContainer
	let objc : ProxyRegistrationContainer
	let callback : CallbackRegistrationType

	// Swift methods
	0x53150  class func ProxyContainer.__allocating_init(containerRegistry:) // init 
 }

 class TeaFoundation.AsyncBlockOperation {
 struct TeaFoundation.ShortDescription: ShortDescribable,  ShortDescriptionType {

	// Properties
	let name : String
	var values : [String : Any]
 }

 enum TeaFoundation.StoreState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error : ,
	case data : A
	case uninitialized  
 }

 class TeaFoundation.StoreValue {
 class TeaFoundation.StoreComputedValue {
 class TeaFoundation.Seal {
 enum TeaFoundation.State {

	// Properties
	case pending  
	case resolved  
 }

 enum TeaFoundation.Resolution {

	// Properties
	case resolved : A1
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rejected : ,
	case cancelled  
 }

 struct TeaFoundation.FirstBlockRunner {

	// Properties
	var firstBlockHasRun : Bool
	var serialQueue : OS_dispatch_queue
 }

 class TeaFoundation.Synchronizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SynchronizerType {

	// Properties
	let group : OS_dispatch_group

	// Swift methods
	0x5cd90  class func Synchronizer.__allocating_init() // init 
 }

 enum TeaFoundation.ReferenceCodingError {

	// Properties
	case missingReference : ReferenceType
	case missingReferences : ReferenceType
	case missingEncodingPool  
	case missingDecodingPool  
 }

 class TeaFoundation.RegistrationContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let publicContainer : Container
	let privateContainer : Container
	let callbackRegistration : NFCallbackRegistration

	// Swift methods
 }

 class TeaFoundation.Cache {
 struct TeaFoundation.CacheEntry {

	// Properties
	let value : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let enteredAt : M
 }

 class TeaFoundation.URLSessionPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessions : [NSURLSession]
	var nextSessionIndex : Int
	let lock : UnfairLock

	// Swift methods
	0x60ec0  class func URLSessionPool.__allocating_init(size:configuration:delegate:delegateQueue:) // init 
 }

 struct TeaFoundation.SignpostReporter {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : M
	var entries : SignpostEntry
 }

 class TeaFoundation.BridgedContainer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let container : Container

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa12c0002e508 (0x12c0002e508) in binary!
	0xb1e0  @objc BridgedContainer.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd7948  @objc BridgedContainer.(null) <stripped>

	// Swift methods
	0x61960  class func BridgedContainer.__allocating_init(_:) // init 
 }

 class TeaFoundation.AsyncObservable {
 class TeaFoundation.Observer {
 enum TeaFoundation.BackgroundFetchResult {

	// Properties
	case noData  
	case newData  
 }

 class TeaFoundation.BackgroundFetchManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var workers : DisposableWorker

	// Swift methods
	0x62d50  class func BackgroundFetchManager.__allocating_init() // init 
 }

 class TeaFoundation.DisposableWorker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var worker : BackgroundFetchWorker // +0x10 (0x10)
	var keepAliveObject : weak Swift.AnyObject? // +0x20 (0x8)

	// Swift methods
 }

 enum TeaFoundation.Errors {

	// Properties
	case timedOut  
 }

 class TeaFoundation.ProxyResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let objc : NFResolver
	let publicResolver : Container
	let privateResolver : Container
	var context : Context

	// Swift methods
	0x64a50  class func ProxyResolver.__allocating_init(objcResolver:publicResolver:privateResolver:) // init 
 }

 class TeaFoundation.Accessor {
 enum TeaFoundation.WhenError {

	// Properties
	case bugInWhenFunction : String
 }

 enum TeaFoundation.WhenEither3 {

	// Properties
	case first : A
	case second : B
	case third : C
 }

 enum TeaFoundation.WhenEither2 {

	// Properties
	case first : A
	case second : B
 }

 class TeaFoundation.CallbackInstanceDefinition {
 class TeaFoundation.Wrapper {
 class TeaFoundation.CallbackInstanceBridgedDefinition {
 class TeaFoundation.SceneStateManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SceneStateManagerType {

	// Properties
	var monitors : DisposableMonitor

	// Swift methods
 }

 class TeaFoundation.DisposableMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monitor : SceneStateMonitor
	var keepAliveObject : weak Swift.AnyObject?

	// Swift methods
 }

 struct TeaFoundation.SceneConnectionOptions {

	// Properties
	let sceneConnectionOptions : Any // +0x0
 }

 class TeaFoundation.NetworkOperation {
 enum TeaFoundation.OperationError {

	// Properties
	case http : Int
	case unknown  
	case malformedURL  
 }

 class TeaFoundation.TaskScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concurrentDispatchQueue : OS_dispatch_queue
	let concurrentOperationQueue : NSOperationQueue
	let serialOperationQueue : NSOperationQueue

	// Swift methods
 }

 struct TeaFoundation.Merging { }

 class TeaFoundation.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ContextType {

	// Properties
	let callbackStore : CallbackStore
	var objects : Key
	let publicContainer : Container
	let contextContainer : Container
	var bridgedContext : NFContext

	// Swift methods
 }

 struct TeaFoundation.PromiseDeduperFlags {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.PromiseDeduper {
 struct TeaFoundation.Version {

	// Properties
	let base : VersionNumber // +0x0
	let qualifier : VersionQualifier // +0x8
 }

 enum TeaFoundation.CollectionChange {

	// Properties
	case adding : A
	case removing : A
	case reordering : (A, toIndex: Int)
 }

 struct TeaFoundation.SafeishArray {

	// Properties
	let items : [A]
 }

 struct TeaFoundation.SafeishSet {

	// Properties
	let items : Set<A>
 }

 struct TeaFoundation.SafeishKeyedDecodingContainer {

	// Properties
	let safe : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let container : Ãÿ
 }

 struct TeaFoundation.SafeishSingleValueDecodingContainer {

	// Properties
	let safe : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let container : å // +0x8
 }

 struct TeaFoundation.SafeishUnkeyedDecodingContainer {

	// Properties
	let safe : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var container :  // +0x8
 }

 struct TeaFoundation.Anything { }

 enum TeaFoundation.CodingKeys { }

 class TeaFoundation.Lazy {
 struct TeaFoundation.LazyOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.EventLoadedLazy {
 enum TeaFoundation.Event {

	// Properties
	case any : Set<B>
	case all : Set<B>
 }

 class TeaFoundation.ProxyDefinition {
 class TeaFoundation.ObservableProperty {
 class TeaFoundation.ObjectReuseProtector {
 enum TeaFoundation.Errors {

	// Properties
	case cancelled  
 }

 struct TeaFoundation.Stack {

	// Properties
	var elements : [A]
 }

 enum TeaFoundation.NetworkProxy {

	// Properties
	case session : URLSessionType
	case none  
 }

 struct TeaFoundation.UniqueParentChildCollection {

	// Properties
	var childToParentTable : [String : A]
 }

 enum TeaFoundation.SemVer { }

 enum TeaFoundation.CallbackScope {

	// Properties
	case name : String
	case names : [String]
	case any  
 }

 class TeaFoundation.ProviderAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa10c0002e4e8 (0x10c0002e4e8) in binary!
	0x18000000c  @objc ProviderAssembly.(null) <stripped>
 }

 class TeaFoundation.Container : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var environment : Environment
	var definitions : Key
	var pool : Pool
	var lazyRegistrations : [()]
	let callbackStore : CallbackStore

	// Swift methods
	0x942b0  class func Container.__allocating_init(singletonPool:) // init 
 }

 enum TeaFoundation.TestSuite {

	// Properties
	case performance  
	case automation  
	case demo  
 }

 enum TeaFoundation.Environment {

	// Properties
	case testing : TestSuite
	case normal  
 }

 struct TeaFoundation.Key {

	// Properties
	let addr : UInt // +0x0
	let namespace : String? // +0x8
 }

 class TeaFoundation.ContainerWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let strongContainer : Container
	var weakContainer : Container

	// Swift methods
 }

 class TeaFoundation.SyncValue {
 enum TeaFoundation.Scope {

	// Properties
	case none  
	case graph  
	case singleton  
	case containerSingleton  
 }

 class TeaFoundation._TeaJSONDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userInfo :  empty-list 
	var dateDecodingStrategy : DateDecodingStrategy
	var keyDecodingStrategy : KeyDecodingStrategy

	// Swift methods
	0x97fb0  func <stripped> // getter 
	0x97fe0  func <stripped> // setter 
	0x98020  func <stripped> // modifyCoroutine 
	0x98050  func <stripped> // getter 
	0x98090  func <stripped> // setter 
	0x980e0  func <stripped> // modifyCoroutine 
	0x98110  func <stripped> // getter 
	0x98150  func <stripped> // setter 
	0x98190  func <stripped> // modifyCoroutine 
	0x98b80  class func _TeaJSONDecoder.__allocating_init() // init 
	0x981d0  func <stripped> // method 
 }

 enum TeaFoundation.DateDecodingStrategy {

	// Properties
	case formatted : NSDateFormatter
WARNING: couldn't find address 0x0 (0x0) in binary!
	case custom : ó
	case deferredToDate  
	case secondsSince1970  
	case millisecondsSince1970  
	case iso8601  
 }

 enum TeaFoundation.KeyDecodingStrategy {

	// Properties
	case custom : (_:)
	case useDefaultKeys  
 }

 struct TeaFoundation._JSONDecoder {

	// Properties
	let json : JSON // +0x0
	let dateDecodingStrategy : DateDecodingStrategy // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let codingPath :  empty-list  // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userInfo :  empty-list  // +0x28
 }

 struct TeaFoundation._JSONKey {

	// Properties
	var stringValue : String // +0x0
	var intValue : Int? // +0x10
 }

 struct TeaFoundation.JSONKeyedDecodingContainer {

	// Properties
	let object : JSON
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userInfo :  empty-list 
	let dateDecodingStrategy : DateDecodingStrategy
WARNING: couldn't find address 0x0 (0x0) in binary!
	let codingPath :  empty-list 
 }

 struct TeaFoundation.JSONUnkeyedDecodingContainer {

	// Properties
	let array : JSON // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userInfo :  empty-list  // +0x8
	let dateDecodingStrategy : DateDecodingStrategy // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let codingPath :  empty-list  // +0x28
	var currentIndex : Int // +0x30
 }

 struct TeaFoundation.JSONSingleValueDecodingContainer {

	// Properties
	let json : JSON // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userInfo :  empty-list  // +0x8
	let dateDecodingStrategy : DateDecodingStrategy // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var codingPath :  empty-list  // +0x28
 }

 class TeaFoundation.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa0dc0002e360 (0xdc0002e360) in binary!
	0xa0d0  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0xb1840002e350 (0x1840002e350) in binary!
	0x28000000c  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0xa0ac0002e488 (0xac0002e488) in binary!
	0xb160  @objc Assembly.(null) <stripped>
 }

 class TeaFoundation.Node {
 class TeaFoundation.DoublyLinkedList {
 enum TeaFoundation.JSONDecodingError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case emptyUnkeyedContainer :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case expectedObject :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case expectedArray :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case keyNotFound : ?
WARNING: couldn't find address 0x0 (0x0) in binary!
	case integerOutOfRange :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidDateFormat :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidData :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidInteger :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidISO8601Date :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidURL :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case wrongType :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case wrongTypeForKey :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case wrongTypeForIndex :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case cannotDecodeNumeric :  empty-list 
 }

 class TeaFoundation.JSONParser : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : Ñ
	let endIndex : Int
	var index : Int
	var line : Int
	var lineStartIndex : Int
	var keyTransformer : (_:)?

	// Swift methods
 }

 enum TeaFoundation.Errors {

	// Properties
	case expectedCharacterButGotEOF : (line: Int, column: Int, expected: String)
	case expectedEndOfDocument : (line: Int, column: Int, actual: String)
	case expectedObjectKey : (line: Int, column: Int, actual: String)
	case expectedString : (line: Int, column: Int, expected: String, actual: String)
	case expectedValue : (line: Int, column: Int, actual: String)
	case incompleteLiteralFalse : (line: Int, column: Int)
	case incompleteLiteralNull : (line: Int, column: Int)
	case incompleteLiteralTrue : (line: Int, column: Int)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidCharacterInNumber : column
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidEscapeSequence : column
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidNumberSequence : column
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidUTF8Bytes :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidUTF8Data : column
	case numberTooBig : (line: Int, column: Int)
	case unmatchedUnicodeSurrogatePair : (line: Int, column: Int)
	case unterminatedArray : (line: Int, column: Int)
	case unterminatedEscapeSequence : (line: Int, column: Int)
	case unterminatedUnicodeEscapeSequence : (line: Int, column: Int)
	case unterminatedObject : (line: Int, column: Int)
	case unterminatedString : (line: Int, column: Int)
 }

 class TeaFoundation.ObjectAssociation {
 struct TeaFoundation.ReferenceData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : Ñ // +0x0
	let pool : ReferenceEncodingPool // +0x10
 }

 enum TeaFoundation.CodingKeys {

	// Properties
	case data  
	case pool  
 }

 class TeaFoundation.Manager {
 class TeaFoundation.Reportable {
 class TeaFoundation.ProxyContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let context : Context

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa0ac0002e488 (0xac0002e488) in binary!
	0xb160  @objc ProxyContext.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff54f8  @objc ProxyContext.(null) <stripped>

	// Swift methods
 }

 class TeaFoundation.ServiceAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa08c0002e468 (0x8c0002e468) in binary!
	0x18000000c  @objc ServiceAssembly.(null) <stripped>
 }

 struct TeaFoundation.PatienceTimeoutExpired {

	// Properties
	let expectedType : String // +0x0
 }

 class TeaFoundation.DefinitionConfiguration {
 class TeaFoundation.CallbackRegistration : _SwiftObject /usr/lib/swift/libswiftCore.dylib, CallbackRegistrationType {

	// Properties
	let callbackStore : CallbackStore
	let callbackRegistration : NFCallbackRegistration
	let publicContainer : Container
	let privateContainer : Container

	// Swift methods
 }

 enum TeaFoundation.AsyncOperationError {

	// Properties
	case cancelled  
 }

 class TeaFoundation.AsyncOperation {
 enum TeaFoundation.State {

	// Properties
	case ready  
	case executing  
	case finished  
 }

 class TeaFoundation.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var unfairLock : os_unfair_lock_s
	let options : os_unfair_lock_options_t

	// Swift methods
	0xb44b0  class func UnfairLock.__allocating_init(options:) // init 
 }

 struct TeaFoundation.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.MutexLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var mutex : _opaque_pthread_mutex_t

	// Swift methods
	0xb45c0  class func MutexLock.__allocating_init() // init 
 }

 struct TeaFoundation.AddressCache {

	// Properties
	var cache : [UInt : B]
 }

 class TeaFoundation.JSONDeserializer {
 struct TeaFoundation.DeferredPromise {

	// Properties
	var promise : Promise
	var resolve : (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reject :  empty-list 
 }

 struct TeaFoundation.SignpostReport {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : M
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : M
	let entries : SignpostEntry
 }

 class TeaFoundation.ReferenceEncodingPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var references : ReferenceType

	// Swift methods
	0xb6a10  class func ReferenceEncodingPool.__allocating_init(from:) // init 
 }

 enum TeaFoundation.CodingKeys {

	// Properties
	case references  
 }

 class TeaFoundation.StateMachine {
 class TeaFoundation.Pool : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PoolAccessible {

	// Properties
	var depth : UInt
	var graph : Key
	var singletonPool : SingletonPool
	var containerSingletonPool : SingletonPool
	var drainBlocks : [()]
	var drainCopyPoolGraphBlocks : Pool
	var isGraphDrainingEnabled : Bool

	// Swift methods
 }

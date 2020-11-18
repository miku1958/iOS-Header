 protocol TeaFoundation.ProcessInfoValueType // 1 requirements
 {
	// class method
 }
 protocol TeaFoundation.Disposable // 2 requirements
 {
	// method
	// method
 }
 protocol TeaFoundation.ApplicationStateMonitor // 8 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol TeaFoundation.ApplicationStateManagerType // 7 requirements
 {
	// method
	// method
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
 protocol TeaFoundation.CallbackDefinitionType // 0 requirements
 {
 }
 protocol TeaFoundation.DefinitionType // 1 requirements
 {
	// getter
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
 protocol TeaFoundation.CallbackInstanceDefinitionType // 2 requirements
 {
	// class base protocol
	// method
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
 protocol TeaFoundation.StartupTaskType // 2 requirements
 {
	// getter
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
	var __opaque : -ü
 }

 struct __C.os_unfair_lock_options_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ·ü
 }

 enum __C.objc_AssociationPolicy { }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ·ü
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 class TeaFoundation.DebugCacheRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheFileURLs :  empty-list  // +0x10 (0x8)
	var cacheUserDefaultsEntries : UserDefaultsEntry // +0x18 (0x8)

	// Swift methods
	0x1db0  class func DebugCacheRegistry.__allocating_init() // init 
 }

 struct TeaFoundation.UserDefaultsEntry {

	// Properties
	let key : String // +0x0
	let defaults : NSUserDefaults // +0x10
 }

 struct TeaFoundation.StartupTaskGroup {

	// Properties
	let identifier : String // +0x0
 }

 struct TeaFoundation.Signpost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : …ò
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
	var object : weak Swift.AnyObject? // +0x10 (0x8)
	var objects : [Swift.AnyObject] // +0x18 (0x8)

	// Swift methods
	0x76e0  class func DisposableBag.__allocating_init(disposeOn:) // init 
 }

 class TeaFoundation.Localized : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaFoundation.ProxyRegistrationContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let registrationContainer : NFRegistrationContainer // +0x10 (0x8)
	let publicContainer : Container // +0x18 (0x8)
	let privateContainer : Container // +0x20 (0x8)

	// Swift methods
 }

 enum TeaFoundation.PromiseError {

	// Properties
	case cancelled  
	case abandoned  
 }

 class TeaFoundation.Promise {
 class TeaFoundation.StartupTaskManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var tasksByGroup : StartupTaskGroup // +0x10 (0x8)
	var promisesByGroup : StartupTaskGroup // +0x18 (0x8)
	var state : State // +0x20 (0x1)

	// Swift methods
	0xf770  class func StartupTaskManager.__allocating_init() // init 
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

 struct TeaFoundation.Safe {

	// Properties
	var value : A?
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
	0x19320  class func ApplicationStateManagerIOS.__allocating_init() // init 
 }

 class TeaFoundation.ApplicationStateManagerMacOS : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ApplicationStateManagerType {

	// Properties
	var monitors : DisposableMonitor
	var isWindowForeground : Bool
	var isBecomingActive : Bool

	// ObjC -> Swift bridged methods
	0x1c710  @objc ApplicationStateManagerMacOS.windowDidBecomeFrontmostNotification <stripped>
	0x1c730  @objc ApplicationStateManagerMacOS.windowDidLoseFrontmostNotification <stripped>

	// Swift methods
	0x1b200  class func ApplicationStateManagerMacOS.__allocating_init() // init 
 }

 class TeaFoundation.DisposableMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monitor : ApplicationStateMonitor
	var keepAliveObject : weak Swift.AnyObject?

	// Swift methods
 }

 enum TeaFoundation.RemoteNotificationFetchResult {

	// Properties
	case noData  
	case newData  
 }

 enum TeaFoundation.RemoteNotificationPattern {

	// Properties
	case category : String
	case any  
 }

 class TeaFoundation.RemoteNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var handlers : DisposableHandler
	var whenActiveBlocks : [()]

	// Swift methods
	0x1de80  class func RemoteNotificationManager.__allocating_init() // init 
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

 class TeaFoundation.DynamicLocale : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LocaleType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentLocale : é // +0x0 (0x0)
	var changeObserver : NSObject? // +0x0 (0x8)

	// Swift methods
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
	var store : Key // +0x10 (0x8)

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
	0x29d50  class func DeviceStorageManager.__allocating_init() // init 
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
 struct TeaFoundation.SignpostEntry {

	// Properties
	let object : A?
	let signposts : Signpost
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : …ò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : …ò
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
	case failed : ëï
 }

 enum TeaFoundation.Errors {

	// Properties
	case unknown  
 }

 class TeaFoundation.CallbackDefinition {
 class TeaFoundation.Definition {
 class TeaFoundation.TestDataLoader {
 enum TeaFoundation.TestDataError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidTestData : ëï
	case missingTestData  
 }

 struct TeaFoundation.UniqueCollection {

	// Properties
	var elements : [A]
	var table : [String : A]
 }

 class TeaFoundation.ManagerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x37730  @objc ManagerAssembly.init <stripped>
 }

 struct TeaFoundation.SignpostRecorder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : …ò
	var signposts : Signpost
 }

 struct TeaFoundation.VersionNumber {

	// Properties
	let numbers : [Int] // +0x0
 }

 class TeaFoundation.ProxyContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let public : RegistrationContainer // +0x10 (0x8)
	let private : RegistrationContainer // +0x18 (0x8)
	let objc : ProxyRegistrationContainer // +0x20 (0x8)
	let callback : CallbackRegistrationType // +0x28 (0x28)

	// Swift methods
	0x39d60  class func ProxyContainer.__allocating_init(registry:publicContainer:) // init 
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
	case error : —ü
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
	case rejected : —ü
	case cancelled  
 }

 struct TeaFoundation.FirstBlockRunner {

	// Properties
	var firstBlockHasRun : Bool
	var serialQueue : OS_dispatch_queue
 }

 class TeaFoundation.Synchronizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SynchronizerType {

	// Properties
	let group : OS_dispatch_group // +0x10 (0x8)

	// Swift methods
	0x4e280  class func Synchronizer.__allocating_init() // init 
 }

 class TeaFoundation.RegistrationContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let publicContainer : Container // +0x10 (0x8)
	let privateContainer : Container // +0x18 (0x8)
	let callbackRegistration : NFCallbackRegistration // +0x20 (0x8)

	// Swift methods
 }

 class TeaFoundation.Cache {
 struct TeaFoundation.CacheEntry {

	// Properties
	let value : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let enteredAt : …ò
 }

 class TeaFoundation.URLSessionPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessions : [NSURLSession] // +0x10 (0x8)
	var nextSessionIndex : Int // +0x18 (0x8)
	let lock : UnfairLock // +0x20 (0x8)

	// Swift methods
	0x51da0  class func URLSessionPool.__allocating_init(size:configuration:delegate:delegateQueue:) // init 
 }

 struct TeaFoundation.SignpostReporter {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdDate : …ò
	var entries : SignpostEntry
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
	0x547d0  class func BackgroundFetchManager.__allocating_init() // init 
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
	let objc : NFResolver // +0x10 (0x8)
	let publicResolver : Container // +0x18 (0x8)
	let privateResolver : Container // +0x20 (0x8)
	var context : Context // +0x28 (0x8)

	// Swift methods
	0x574c0  class func ProxyResolver.__allocating_init(objcResolver:publicResolver:privateResolver:) // init 
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
 class TeaFoundation.NetworkOperation {
 enum TeaFoundation.OperationError {

	// Properties
	case http : Int
	case unknown  
	case malformedURL  
 }

 class TeaFoundation.TaskScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concurrentDispatchQueue : OS_dispatch_queue // +0x10 (0x8)
	let concurrentOperationQueue : NSOperationQueue // +0x18 (0x8)
	let serialOperationQueue : NSOperationQueue // +0x20 (0x8)

	// Swift methods
 }

 struct TeaFoundation.Merging { }

 class TeaFoundation.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ContextType {

	// Properties
	let callbackStore : CallbackStore // +0x10 (0x8)
	var objects : Key // +0x18 (0x8)
	let publicContainer : Container // +0x20 (0x8)
	let contextContainer : Container // +0x28 (0x8)
	var bridgedContext : NFContext // +0x30 (0x8)

	// Swift methods
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

 struct TeaFoundation.SafeishKeyedDecodingContainer {

	// Properties
	let safe : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let container : Õ
 }

 struct TeaFoundation.SafeishSingleValueDecodingContainer {

	// Properties
	let safe : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let container : ¥Õ // +0x8
 }

 struct TeaFoundation.SafeishUnkeyedDecodingContainer {

	// Properties
	let safe : Bool // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var container : 'Õ // +0x8
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

 class TeaFoundation.Container : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var environment : Environment // +0x0
	var definitions : Key // +0x0
	var pool : Pool // +0x4ea0
	var lazyRegistrations : [()] // +0x0
	let callbackStore : CallbackStore // +0x39b0

	// Swift methods
 }

 struct TeaFoundation.TestSuite {

	// Properties
	let rawValue : Int // +0x0
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
 }

 class TeaFoundation.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x81930  @objc Assembly.assemblies <stripped>
	0x81ad0  @objc Assembly.init <stripped>
	0x819d0  @objc Assembly..cxx_destruct <stripped>
 }

 class TeaFoundation.Node {
 class TeaFoundation.DoublyLinkedList {
 class TeaFoundation.ObjectAssociation {
 class TeaFoundation.Manager {
 class TeaFoundation.Reportable {
 class TeaFoundation.ProxyContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let context : Context // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x886a0  @objc ProxyContext.init <stripped>
	0x88700  @objc ProxyContext..cxx_destruct <stripped>

	// Swift methods
 }

 class TeaFoundation.DefinitionConfiguration {
 class TeaFoundation.CallbackRegistration : _SwiftObject /usr/lib/swift/libswiftCore.dylib, CallbackRegistrationType {

	// Properties
	let callbackStore : CallbackStore // +0x10 (0x8)
	let callbackRegistration : NFCallbackRegistration // +0x18 (0x8)
	let publicContainer : Container // +0x20 (0x8)
	let privateContainer : Container // +0x28 (0x8)

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
	var unfairLock : os_unfair_lock_s // +0x0
	let options : os_unfair_lock_options_t // +0x0

	// Swift methods
	0x8b330  class func UnfairLock.__allocating_init(options:) // init 
 }

 struct TeaFoundation.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.MutexLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var mutex : _opaque_pthread_mutex_t

	// Swift methods
	0x8b440  class func MutexLock.__allocating_init() // init 
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
	let startDate : …ò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : …ò
	let entries : SignpostEntry
 }

 class TeaFoundation.SingletonPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var singletons : Key

	// Swift methods
 }

 class TeaFoundation.Pool : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PoolAccessible {

	// Properties
	var depth : UInt
	var graph : Key
	var singletonPool : SingletonPool
	var drainBlocks : [()]
	var drainCopyPoolGraphBlocks : Pool
	var isGraphDrainingEnabled : Bool

	// Swift methods
 }

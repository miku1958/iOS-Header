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
	var __opaque : (Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8, Int8)
 }

 struct __C.os_unfair_lock_options_t {

	// Properties
	let rawValue : UInt32
 }

 enum __C.objc_AssociationPolicy { }

 struct __C.os_unfair_lock_s {

	// Properties
	var _os_unfair_lock_opaque : UInt32
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 class TeaFoundation.DebugCacheRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cacheFileURLs : [URL] // +0x10 (0x8)
	var cacheUserDefaultsEntries : UserDefaultsEntry // +0x18 (0x8)

	// Swift methods
	0x2440  class func DebugCacheRegistry.__allocating_init() // init 
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
	let createdDate : Date
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
	0x88d0  class func DisposableBag.__allocating_init(disposeOn:) // init 
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
	var tasksByGroup : [StartupTaskGroup : [StartupTaskType]] // +0x10 (0x8)
	var promisesByGroup : [StartupTaskGroup : DeferredPromise<()>] // +0x18 (0x8)
	var state : State // +0x20 (0x1)

	// Swift methods
	0x11810  class func StartupTaskManager.__allocating_init() // init 
 }

 enum TeaFoundation.State {

	// Properties
	case notStarted  
	case started  
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
	0x1c0f0  class func ApplicationStateManagerIOS.__allocating_init() // init 
 }

 class TeaFoundation.ApplicationStateManagerMacOS : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ApplicationStateManagerType {

	// Properties
	var monitors : DisposableMonitor
	var isWindowForeground : Bool
	var isBecomingActive : Bool

	// ObjC -> Swift bridged methods
	0x1f930  @objc ApplicationStateManagerMacOS.windowDidBecomeFrontmostNotification <stripped>
	0x1f950  @objc ApplicationStateManagerMacOS.windowDidLoseFrontmostNotification <stripped>

	// Swift methods
	0x1e150  class func ApplicationStateManagerMacOS.__allocating_init() // init 
 }

 class TeaFoundation.DisposableMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monitor : weak ApplicationStateMonitor?
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
	0x21290  class func RemoteNotificationManager.__allocating_init() // init 
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
	var currentLocale : Locale // +0x0 (0x0)
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
	var store : [Key : [CallbackDefinitionType]] // +0x10 (0x8)

	// Swift methods
 }

 struct TeaFoundation.Random { }

 struct TeaFoundation.VersionQualifier {

	// Properties
	let name : String // +0x0
	let version : VersionNumber? // +0x10
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
	var observablePurgeUrgency : DeviceStoragePurgeUrgency
	var purgeables : DisposablePurgeable
	let lock : UnfairLock

	// Swift methods
	0x2ded0  class func DeviceStorageManager.__allocating_init() // init 
 }

 class TeaFoundation.DisposablePurgeable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var purgeable : DeviceStoragePurgeable
	var keepAliveObject : weak Swift.AnyObject?

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
	let signposts : [Signpost<A>]
	let startDate : Date
	let endDate : Date
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
	case failed : (error: Error)
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
	case invalidTestData : (error: Error)
	case missingTestData  
 }

 struct TeaFoundation.UniqueCollection {

	// Properties
	var elements : [A]
	var table : [String : A]
 }

 class TeaFoundation.ManagerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x3c910  @objc ManagerAssembly.init <stripped>
 }

 struct TeaFoundation.SignpostRecorder {

	// Properties
	let createdDate : Date
	var signposts : [Signpost<A>]
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
	0x3f100  class func ProxyContainer.__allocating_init(registry:publicContainer:) // init 
 }

 class TeaFoundation.AsyncBlockOperation {
 struct TeaFoundation.ShortDescription: ShortDescribable,  ShortDescriptionType {

	// Properties
	let name : String
	var values : [String : Any]
 }

 enum TeaFoundation.StoreState {

	// Properties
	case error : Error
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
	case rejected : Error
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
	0x552f0  class func Synchronizer.__allocating_init() // init 
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
	let enteredAt : Date
 }

 class TeaFoundation.URLSessionPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessions : [NSURLSession] // +0x10 (0x8)
	var nextSessionIndex : Int // +0x18 (0x8)
	let lock : UnfairLock // +0x20 (0x8)

	// Swift methods
	0x58f20  class func URLSessionPool.__allocating_init(size:configuration:delegate:delegateQueue:) // init 
 }

 struct TeaFoundation.SignpostReporter {

	// Properties
	let createdDate : Date
	var entries : [SignpostEntry<A>]
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
	0x5be70  class func BackgroundFetchManager.__allocating_init() // init 
 }

 class TeaFoundation.DisposableWorker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var worker : BackgroundFetchWorker
	var keepAliveObject : weak Swift.AnyObject?

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
	var context : Context? // +0x28 (0x8)

	// Swift methods
	0x5f4d0  class func ProxyResolver.__allocating_init(objcResolver:publicResolver:privateResolver:) // init 
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
	var objects : [Key : Any] // +0x18 (0x8)
	let publicContainer : Container // +0x20 (0x8)
	let contextContainer : Container // +0x28 (0x8)
	var bridgedContext : NFContext // +0x30 (0x8)

	// Swift methods
 }

 class TeaFoundation.PromiseDeduper {
 struct TeaFoundation.Version {

	// Properties
	let base : VersionNumber // +0x0
	let qualifier : VersionQualifier? // +0x8
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
	let container : KeyedDecodingContainer<A>
 }

 struct TeaFoundation.SafeishSingleValueDecodingContainer {

	// Properties
	let safe : Bool // +0x0
	let container : SingleValueDecodingContainer // +0x8
 }

 struct TeaFoundation.SafeishUnkeyedDecodingContainer {

	// Properties
	let safe : Bool // +0x0
	var container : UnkeyedDecodingContainer // +0x8
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
	var environment : Environment
	var definitions : Key
	var pool : Pool
	var lazyRegistrations : [()]
	let callbackStore : CallbackStore

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
	0x8cec0  @objc Assembly.assemblies <stripped>
	0x8d0a0  @objc Assembly.init <stripped>
	0x8d1f0  @objc Assembly..cxx_destruct <stripped>
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
	0x947b0  @objc ProxyContext.init <stripped>
	0x94830  @objc ProxyContext..cxx_destruct <stripped>

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
	var unfairLock : UnsafeMutablePointer<os_unfair_lock_s>
	let options : os_unfair_lock_options_t

	// Swift methods
	0x97990  class func UnfairLock.__allocating_init(options:) // init 
 }

 struct TeaFoundation.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class TeaFoundation.MutexLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	var mutex : _opaque_pthread_mutex_t

	// Swift methods
	0x97b30  class func MutexLock.__allocating_init() // init 
 }

 class TeaFoundation.JSONDeserializer {
 struct TeaFoundation.DeferredPromise {

	// Properties
	var promise : Promise<A>?
	var resolve : (_:)?
	var reject : (_:)?
 }

 struct TeaFoundation.SignpostReport {

	// Properties
	let startDate : Date
	let endDate : Date
	let entries : [SignpostEntry<A>]
 }

 class TeaFoundation.SingletonPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var singletons : [Key : Any]

	// Swift methods
 }

 class TeaFoundation.Pool : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PoolAccessible {

	// Properties
	var depth : UInt
	var graph : [Key : Any]
	var singletonPool : SingletonPool
	var drainBlocks : [()]
	var drainCopyPoolGraphBlocks : Pool
	var isGraphDrainingEnabled : Bool

	// Swift methods
 }
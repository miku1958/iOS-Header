 protocol JetEngine.Injectable // 2 requirements
 {
	// class associated type access function
	// class init
 }
 protocol JetEngine.AsyncObjectGraphBuilder // 2 requirements
 {
	// method
	// method
 }
 protocol JetEngine.Logger // 1 requirements
 {
	// method
 }
 protocol JetEngine.AnyStateful // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol JetEngine.Stateful // 3 requirements
 {
	// class base protocol
	// class base protocol
	// class init
 }
 protocol JetEngine.MetricsEventDispatcher // 1 requirements
 {
	// method
 }
 protocol JetEngine.ShelvesPresenter // 5 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// method
 }
 protocol JetEngine.AnyPreferenceKey // 1 requirements
 {
	// getter
 }
 protocol JetEngine.MappedPreferenceKey // 4 requirements
 {
	// class base protocol
	// class associated type access function
	// method
	// method
 }
 protocol JetEngine.ExistentialOptimized // 0 requirements
 {
 }
 protocol JetEngine.ApplicationStatePresenterDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol JetEngine.TaskScheduler // 1 requirements
 {
	// method
 }
 protocol JetEngine.ExpressibleByJSValue // 1 requirements
 {
	// class init
 }
 protocol JetEngine.ConditionallyExpressibleByJSValue // 1 requirements
 {
	// class init
 }
 protocol JetEngine.CustomJSValueConvertible // 1 requirements
 {
	// method
 }
 protocol JetEngine.Preferences // 5 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol JetEngine.StateCenterTransaction // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol JetEngine.StateCenter // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol JetEngine.MergeableModel // 1 requirements
 {
	// method
 }
 protocol JetEngine.FlowActionModel // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// getter
 }
 protocol JetEngine.ViewControllerPresenter // 5 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
 }
 protocol JetEngine.IndexedPresenterObserver // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol JetEngine.JSReference // 1 requirements
 {
	// getter
 }
 protocol JetEngine.ShelfModel // 9 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
 }
 protocol JetEngine.PreferenceMigrationRule // 1 requirements
 {
	// method
 }
 protocol JetEngine.Lockable // 1 requirements
 {
	// getter
 }
 protocol JetEngine.ComponentModel // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol JetEngine.JSONInitFailureObserver // 1 requirements
 {
	// method
 }
 protocol JetEngine.ActionModel // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol JetEngine.PageModel // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol JetEngine.AnyPresenter // 0 requirements
 {
 }
 protocol JetEngine.JSNetworkRequestInterceptor // 2 requirements
 {
	// method
	// method
 }
 protocol JetEngine.FrameworkBootstrap // 1 requirements
 {
	// method
 }
 protocol JetEngine.JSONTypeCluster // 3 requirements
 {
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol JetEngine.ExpressibleByJSON // 2 requirements
 {
	// class init
	// class init
 }
 protocol JetEngine.JSSourceProvider // 1 requirements
 {
	// method
 }
 protocol JetEngine.ViewModel // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol JetEngine.MetricsEventQueue // 1 requirements
 {
	// method
 }

 class __C.CFRunLoopTimer {
 class __C.CFRunLoopSource {
 struct __C.SignpostComponent {

	// Properties
	let rawValue : UInt32
 }

 enum __C.AMSBagValueType { }

 class __C.CFString {
 enum __C.CachePolicy { }

 enum __C.PropertyListFormat { }

 class __C.CFRunLoop {
 struct __C.AMSBagKey {

	// Properties
	var _rawValue : NSString
 }

 struct JetEngine.JetEngineBootstrap {

	// Properties
	var bagProfile : Bag.Profile // +0x0
	var process : AMSProcessInfo // +0x20
	var bagSpy : (_:)? // +0x28
 }

 class JetEngine.LocalPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundleIdentifier : CFStringRef // +0x10 (0x8)

	// Swift methods
	0x4aa0  class func LocalPreferences.__allocating_init(bundleIdentifier:) // init 
 }

 enum JetEngine.JSONTimeUnit {

	// Properties
	case seconds  
	case milliseconds  
 }

 class JetEngine.MockedAMSBag : AMSSnapshotBag /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices {

	// Properties
	let bagProfile : Bag.Profile // +0x8 (0x20)
	let stubs : [AMSBagKey : Any] // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x6520  @objc MockedAMSBag.isExpired <stripped>
	0x6530  @objc MockedAMSBag.expirationDate <stripped>
	0x6540  @objc MockedAMSBag.profile <stripped>
	0x6590  @objc MockedAMSBag.profileVersion <stripped>
	0x6af0  @objc MockedAMSBag.arrayForKey: <stripped>
	0x6b20  @objc MockedAMSBag.boolForKey: <stripped>
	0x6be0  @objc MockedAMSBag.doubleForKey: <stripped>
	0x6c20  @objc MockedAMSBag.integerForKey: <stripped>
	0x6c60  @objc MockedAMSBag.stringForKey: <stripped>
	0x6ca0  @objc MockedAMSBag.URLForKey: <stripped>
	0x6ce0  @objc MockedAMSBag.dictionaryForKey: <stripped>
	0x6d20  @objc MockedAMSBag.createSnapshotWithCompletion: <stripped>
	0x6d70  @objc MockedAMSBag.init <stripped>
	0x6df0  @objc MockedAMSBag..cxx_destruct <stripped>

	// Swift methods
 }

 struct JetEngine.Stubs {

	// Properties
	var values : [AMSBagKey : Any] // +0x0
 }

 struct JetEngine.LookupRequest {

	// Properties
	let profile : String // +0x0
	let caller : String // +0x10
	let ids : [String] // +0x20
	let idType : LookupRequest.IdentifierType // +0x28
	let version : Int // +0x30
	let platform : String? // +0x38
 }

 enum JetEngine.IdentifierType {

	// Properties
	case adamID  
	case bundleID  
 }

 struct JetEngine.MetricsSamplingLottery {

	// Properties
	let isForcedKey : PreferenceKey<Bool> // +0x0
	let sampleWindowStartKey : PreferenceKey<Double> // +0x10
	let percentage : Double // +0x20
	let duration : Double // +0x28
 }

 class JetEngine.Promise {
 struct JetEngine.Observer {

	// Properties
	let scheduler : TaskScheduler
	let valueHandler : (_:)
	let errorHandler : (_:)
 }

 enum JetEngine.Resolution {

	// Properties
	case value : A
	case error : Error
	case pending  
 }

 struct JetEngine.MapPreferenceMigrationRule {

	// Properties
	let oldKey : PreferenceKey<A>
	let newKey : PreferenceKey<B>
	let mapper : (_:)
 }

 struct JetEngine.SetPreferenceMigrationRule {

	// Properties
	let key : PreferenceKey<A>
	let value : A
 }

 enum JetEngine.CryptoAlgorithm {

	// Properties
	case sha256  
	case sha512  
 }

 struct JetEngine.NilState: Stateful,  AnyStateful { }

 enum JetEngine.CodingKeys { }

 struct JetEngine.ActionMetrics {

	// Properties
	var events : [MetricsEvent] // +0x0
 }

 enum JetEngine.LogMessageLevel {

	// Properties
	case error  
	case warning  
	case info  
	case debug  
 }

 struct JetEngine.ViewMetrics { }

 struct JetEngine.CompoundError {

	// Properties
	let errors : [Error] // +0x0
 }

 struct JetEngine.PageMetrics {

	// Properties
	var events : InvocationPoint // +0x0
 }

 enum JetEngine.InvocationPoint {

	// Properties
	case pageEnter  
	case pageExit  
	case appExit  
	case appEnter  
	case backButton  
	case timer  
 }

 struct JetEngine.JSRoute {

	// Properties
	var service : String // +0x0
	var function : String // +0x10
 }

 struct JetEngine.JSONContext {

	// Properties
	var storage : [String : Any] // +0x0
 }

 struct JetEngine.Property {

	// Properties
	var key : String
 }

 struct JetEngine.JSRequestTimeOutError {

	// Properties
	let route : JSRoute // +0x0
	let timeoutInterval : Double // +0x20
 }

 struct JetEngine.AsyncObjectGraphMetrics {

	// Properties
	var builtDependencies : BuiltDependency // +0x0
 }

 struct JetEngine.BuiltDependency {

	// Properties
	var typeName : String // +0x0
	var elapsedTime : Double // +0x10
 }

 struct JetEngine.JSError {

	// Properties
	let message : String // +0x0
	let line : Int? // +0x10
	let column : Int? // +0x20
	let sourceURL : String? // +0x30
	let constructorName : String? // +0x40
 }

 struct JetEngine.JSBytecodeSource {

	// Properties
	let script : Any // +0x0
	let virtualMachine : JSVirtualMachine // +0x20
 }

 struct JetEngine.Device {

	// Properties
	let device : UIDevice // +0x0
 }

 struct JetEngine.Bag {

	// Properties
	let amsBag : AMSBagProtocol // +0x0
 }

 struct JetEngine.Profile {

	// Properties
	var name : String // +0x0
	var version : String // +0x10
 }

 struct JetEngine.JSStrongReference {

	// Properties
	let referent : JSValue? // +0x0
 }

 class JetEngine.JSPlistObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x293d0  @objc JSPlistObject.parse: <stripped>
	0x297d0  @objc JSPlistObject.stringify:: <stripped>
	0x29840  @objc JSPlistObject.init <stripped>
 }

 struct JetEngine.KeySet {

	// Properties
	var values : [AMSBagKey : AMSBagValueType] // +0x0
 }

 struct JetEngine.CoarselyTimed {

	// Properties
	var contained : A
	var duration : DateInterval
 }

 struct JetEngine.PreferenceKey: AnyPreferenceKey {

	// Properties
	var lookupName : String
 }

 struct JetEngine.PreferenceMigrator {

	// Properties
	var rules : [PreferenceMigrationRule] // +0x0
 }

 class JetEngine.JSStack : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let workerThread : RunLoopWorkerThread // +0x10 (0x8)
	let context : JSContext // +0x18 (0x8)
	var exceptionObserver : JSStack // +0x20 (0x10)

	// Swift methods
	0x2eb80  class func JSStack.__allocating_init(prerequisites:virtualMachine:) // init 
 }

 enum JetEngine.Prerequisite {

	// Properties
	case source : JSSourceProvider
	case globalObject : (String, JSExport)
	case globalFunction : (String, (_:_:_:))
 }

 struct JetEngine.StandardGlobalConfiguration {

	// Properties
	var isProtocolHandlingEnabled : Bool // +0x0
	var requestInterceptor : JSNetworkRequestInterceptor? // +0x8
 }

 struct JetEngine.LookupResponse {

	// Properties
	let items : [String : Any] // +0x0
	let missing : Set<String> // +0x8
	let metrics : [JSNetworkPerformanceMetrics] // +0x10
 }

 struct JetEngine.Indirect {

	// Properties
	var interior : MutableBox<A>
 }

 enum JetEngine.Unstable { }

 class JetEngine.ApplicationStatePresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isEnabled : Bool // +0x10 (0x1)
	var delegate : ApplicationStatePresenterDelegate // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x38220  @objc ApplicationStatePresenter.applicationDidBecomeActive <stripped>
	0x382c0  @objc ApplicationStatePresenter.applicationDidResignActive <stripped>

	// Swift methods
	0x37c30  class func ApplicationStatePresenter.__allocating_init(isEnabled:) // init 
 }

 class JetEngine.JSWeakReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let context : JSContext // +0x10 (0x8)
	let weakValue : UnsafeRawPointer // +0x18 (0x8)

	// Swift methods
	0x38360  class func JSWeakReference.__allocating_init(_:) // init 
 }

 struct JetEngine.SyncTaskScheduler: TaskScheduler { }

 struct JetEngine.JSCallable {

	// Properties
	let reference : JSReference // +0x0
 }

 struct JetEngine.JSConstructable {

	// Properties
	let reference : JSReference // +0x0
 }

 struct JetEngine.MonotonicTimeReference {

	// Properties
	let referenceDate : Date
	let referenceTime : MonotonicTime
 }

 struct JetEngine.Dependency {

	// Properties
	let type : Any.Type // +0x0
	let object : UnsafeCastable // +0x8
 }

 struct JetEngine.DependencyDictionary {

	// Properties
	var contents : UnsafeCastable // +0x0
 }

 enum JetEngine.MergeStrategy {

	// Properties
	case oldDependencies  
	case newDependencies  
 }

 enum JetEngine.UnsafeCastable {

	// Properties
	case valueType : Any
	case classType : Swift.AnyObject
 }

 struct JetEngine.JSResponse {

	// Properties
	let requestRoute : JSRoute
	let requestDuration : DateInterval
	let body : CoarselyTimed<JSONObject>
	let incidents : [JSIncident]
	let networkPerformance : [JSNetworkPerformanceMetrics]
 }

 struct JetEngine.StandaloneObjectGraphBuilder {

	// Properties
	let partialGraph : BaseObjectGraph // +0x0
	var producers : [(_:)] // +0x8
 }

 class JetEngine.MescalBagContract : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x4bfc0  @objc MescalBagContract.mescalCertificateURL <stripped>
	0x4c020  @objc MescalBagContract.mescalSetupURL <stripped>
	0x4c080  @objc MescalBagContract.mescalPrimingURL <stripped>
	0x4c0e0  @objc MescalBagContract.mescalSignedActions <stripped>
	0x4c140  @objc MescalBagContract.mescalSignSapRequests <stripped>
	0x4c1a0  @objc MescalBagContract.mescalSignSapResponses <stripped>
	0x4c330  @objc MescalBagContract.init <stripped>
	0x4c3b0  @objc MescalBagContract..cxx_destruct <stripped>

	// Swift methods
	0x4bec0  class func MescalBagContract.__allocating_init(_:) // init 
 }

 class JetEngine.NestedPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let key : PreferenceKey<[String : Any]> // +0x10 (0x10)
	let parent : Preferences // +0x20 (0x10)

	// Swift methods
 }

 class JetEngine.OSLogRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let instancesGuard : JEUnfairLock // +0x10 (0x8)
	var instances : Key // +0x18 (0x8)

	// Swift methods
 }

 struct JetEngine.OSLogger {

	// Properties
	let osLog : OS_os_log // +0x0
 }

 struct JetEngine.Subsystem {

	// Properties
	let rawValue : String // +0x0
 }

 struct JetEngine.Key {

	// Properties
	let subsystem : OSLogger.Subsystem // +0x0
	let category : String // +0x10
 }

 class JetEngine.ReplayLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateLock : JEUnfairLock // +0x10 (0x8)
	var rawMessages : Message // +0x18 (0x8)

	// Swift methods
	0x4f0b0  class func ReplayLogger.__allocating_init() // init 
 }

 struct JetEngine.Message {

	// Properties
	let fragments : [LogMessageFragment] // +0x0
	let level : LogMessageLevel // +0x8
 }

 enum JetEngine.ModelMergingError {

	// Properties
	case incompatibleTypes : (Any, Any)
	case conflictingData  
	case missingData  
 }

 struct JetEngine.LogMessageFragment {

	// Properties
	var rawValue : Any // +0x0
	var valueTreatment : ValueTreatment // +0x20
 }

 enum JetEngine.ValueTreatment {

	// Properties
	case safe  
	case sensitive  
	case traceableSensitive  
 }

 class JetEngine.Accounts : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let backingStore : ACAccountStore // +0x10 (0x8)
	let accountsLock : JEUnfairLock // +0x18 (0x8)
	var unlockedActiveiTunesAccount : ACAccount? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x51f30  @objc Accounts.accountStoreDidChange: <stripped>

	// Swift methods
	0x51aa0  class func Unstable.Accounts.__allocating_init(_:) // init 
 }

 class JetEngine.Atomic {
 struct JetEngine.JSONObject {

	// Properties
	let rawValue : Any? // +0x0
 }

 class JetEngine.JSConditionalReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let managedValue : JSManagedValue // +0x10 (0x8)

	// Swift methods
	0x53c60  class func JSConditionalReference.__allocating_init(value:ownedBy:) // init 
 }

 enum JetEngine.Result {

	// Properties
	case value : A
	case error : Error
 }

 enum JetEngine.JSONDateFormat {

	// Properties
	case iso8601  
	case iso8601WithMilliseconds  
 }

 struct JetEngine.MetricsEvent {

	// Properties
	var fields : [String : Any] // +0x0
 }

 struct JetEngine.JSPromise {

	// Properties
	let value : JSValue // +0x0
 }

 class JetEngine.JSBagObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var bag : Bag // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x59170  @objc JSBagObject.registerBagKeys: <stripped>
	0x59830  @objc JSBagObject.string: <stripped>
	0x59e70  @objc JSBagObject.double: <stripped>
	0x5a4c0  @objc JSBagObject.integer: <stripped>
	0x5ab00  @objc JSBagObject.boolean: <stripped>
	0x5b170  @objc JSBagObject.array: <stripped>
	0x5b7f0  @objc JSBagObject.dictionary: <stripped>
	0x5bf80  @objc JSBagObject.url: <stripped>
	0x5c0b0  @objc JSBagObject.init <stripped>
	0x5c130  @objc JSBagObject..cxx_destruct <stripped>

	// Swift methods
 }

 struct JetEngine.StatePath {

	// Properties
	let components : [A]
 }

 enum JetEngine.CodingKeys {

	// Properties
	case components  
 }

 struct JetEngine.DependentObjectGraphBuilder {

	// Properties
	let parent : Promise<A>
	var producers : [(_:)]
 }

 struct JetEngine.AccountHandle {

	// Properties
	let account : ACAccount // +0x0
 }

 struct JetEngine.ComponentTypes {

	// Properties
	var types : ComponentModel
 }

 struct JetEngine.PreferenceNamespace {

	// Properties
	let rawValue : String // +0x0
 }

 struct JetEngine.FetchResponse {

	// Properties
	let ok : Bool
	let headers : [String : String]
	let redirected : Bool
	let status : Int
	let statusText : String
	let url : URL?
	let body : String?
	let metrics : [JSNetworkPerformanceMetrics]
 }

 class JetEngine.JSBytesDeallocatorHolder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let deallocator : (_:) // +0x10 (0x10)

	// Swift methods
 }

 struct JetEngine.JSRequest {

	// Properties
	var route : JSRoute // +0x0
	var timeoutInterval : Double? // +0x20
	var options : [String : Any] // +0x30
 }

 class JetEngine.JSRandomObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x631e0  @objc JSRandomObject.nextBoolean <stripped>
	0x63240  @objc JSRandomObject.nextNumber <stripped>
	0x63280  @objc JSRandomObject.nextUUID <stripped>
	0x63320  @objc JSRandomObject.init <stripped>
 }

 struct JetEngine.ActionTypes {

	// Properties
	var types : ActionModel
 }

 struct JetEngine.MonotonicTime {

	// Properties
	let seconds : Int // +0x0
	let nanoseconds : Int // +0x8
 }

 struct JetEngine.CompoundLogger {

	// Properties
	var loggers : [Logger] // +0x0
 }

 class JetEngine.MapStateCenter {
 struct JetEngine.Transaction {

	// Properties
	var changes : Change
 }

 enum JetEngine.Change {

	// Properties
	case changeOne : (StatePath<A>, AnyStateful)
	case removeOne : StatePath<A>
	case removeRecursively : StatePath<A>
	case removeAll  
 }

 class JetEngine.TransientPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var storage : [String : Any] // +0x10 (0x8)

	// Swift methods
	0x67410  class func TransientPreferences.__allocating_init() // init 
 }

 class JetEngine.OverriddenAMSBag : AMSSnapshotBag /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)
	let overrides : [AMSBagKey : AnyAMSBagValue] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x67f40  @objc OverriddenAMSBag.dealloc <stripped>
	0x68110  @objc OverriddenAMSBag.forwardSnapshotBagExpiredValueAccessed: <stripped>
	0x681b0  @objc OverriddenAMSBag.isExpired <stripped>
	0x681e0  @objc OverriddenAMSBag.expirationDate <stripped>
	0x68330  @objc OverriddenAMSBag.profile <stripped>
	0x68350  @objc OverriddenAMSBag.profileVersion <stripped>
	0x68410  @objc OverriddenAMSBag.arrayForKey: <stripped>
	0x68430  @objc OverriddenAMSBag.boolForKey: <stripped>
	0x684c0  @objc OverriddenAMSBag.doubleForKey: <stripped>
	0x684e0  @objc OverriddenAMSBag.integerForKey: <stripped>
	0x68500  @objc OverriddenAMSBag.stringForKey: <stripped>
	0x68520  @objc OverriddenAMSBag.URLForKey: <stripped>
	0x685e0  @objc OverriddenAMSBag.dictionaryForKey: <stripped>
	0x687d0  @objc OverriddenAMSBag.createSnapshotWithCompletion: <stripped>
	0x68840  @objc OverriddenAMSBag.init <stripped>
	0x67ff0  @objc OverriddenAMSBag..cxx_destruct <stripped>

	// Swift methods
 }

 enum JetEngine.JSONError {

	// Properties
	case malformedDocument : (forType: Any.Type, errors: [Error])
	case missingProperty : (forKey: String, containedIn: Any.Type)
	case malformedProperty : (forKey: String, containedIn: Any.Type, errors: [Error])
	case unknownType : (named: String, containedIn: Any.Type)
	case unknownCase : (named: String, containedIn: Any.Type)
	case invalidDocument : (forType: Any.Type, error: Error)
	case unknownClass : (named: String, containedIn: Any.Type)
	case filterObject  
 }

 class JetEngine.JSNetworkObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let urlSession : AMSURLSession // +0x8 (0x8)
	let accounts : Unstable.Accounts // +0x10 (0x8)
	let requestEncoder : AMSURLRequestEncoder // +0x18 (0x8)
	let requestInterceptor : JSNetworkRequestInterceptor? // +0x20 (0x28)

	// ObjC -> Swift bridged methods
	0x6abb0  @objc JSNetworkObject.fetch: <stripped>
	0x6ac10  @objc JSNetworkObject.init <stripped>
	0x6ac90  @objc JSNetworkObject..cxx_destruct <stripped>

	// Swift methods
 }

 struct JetEngine.FetchRequest {

	// Properties
	let url : URL
	let method : String
	let cache : NSURLRequestCachePolicy
	let signingStyle : FetchRequest.SigningStyle
	let headers : [String : String]
	let timeout : Double
	let body : String?
 }

 enum JetEngine.SigningStyle {

	// Properties
	case none  
	case default  
	case prime  
	case platform  
 }

 struct JetEngine.JSNetworkPerformanceMetrics {

	// Properties
	var clientCorrelationKey : String? // +0x0
	var pageURL : String? // +0x10
	var requestStartTime : Double? // +0x20
	var responseStartTime : Double? // +0x30
	var responseEndTime : Double? // +0x40
	var responseWasCached : Bool? // +0x49
	var parseStartTime : Double? // +0x50
	var parseEndTime : Double? // +0x60
 }

 struct JetEngine.JSONArray {

	// Properties
	let array : NSArray // +0x0
 }

 class JetEngine.JSPlatformObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let bag : Bag // +0x8 (0x8)
	let process : AMSProcessInfo // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x73ea0  @objc JSPlatformObject.lookup: <stripped>
	0x73f00  @objc JSPlatformObject.init <stripped>
	0x73f80  @objc JSPlatformObject..cxx_destruct <stripped>

	// Swift methods
 }

 class JetEngine.BaseObjectGraph : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dependencies : DependencyDictionary // +0x10 (0x8)
	var name : String // +0x18 (0x10)

	// Swift methods
	0x74b40  class func BaseObjectGraph.__allocating_init(name:dependencies:) // init 
	0x74d30  func BaseObjectGraph.adding(allDependenciesOf:) // method 
	0x74eb0  func BaseObjectGraph.adding<A>(allDependencies:) // method 
	0x75030  func BaseObjectGraph.adding(dependency:) // method 
	0x751c0  func BaseObjectGraph.adding(uniqueDependenciesOf:) // method 
	0x75380  func BaseObjectGraph.subtracting<A>(dependenciesFor:) // method 
	0x756a0  func BaseObjectGraph.subtracting(dependencyFor:) // method 
	0x75840  func BaseObjectGraph.subtracting<A>(allDependenciesExcept:) // method 
	0x75b60  func BaseObjectGraph.availableCandidates.getter // getter 
	0x76010  func BaseObjectGraph.errorDescription<A>(forNoMemberSatisfying:) // method 
	0x76490  func BaseObjectGraph.noMemberFound<A>(toSatisfy:) // method 
	0x76540  func BaseObjectGraph.name.getter // getter 
	0x76580  func BaseObjectGraph.name.setter // setter 
	0x765c0  func BaseObjectGraph.name.modify // modifyCoroutine 
	0x76600  func BaseObjectGraph.description.getter // getter 
 }

 enum JetEngine.ValueOverride {

	// Properties
	case array : [Any]
	case bool : Bool
	case double : Double
	case int : Int
	case string : String
	case URL : URL
	case dictionary : [AnyHashable : Any]
 }

 struct JetEngine.OpaqueMetatype {

	// Properties
	let metatype : ObjectIdentifier // +0x0
	let name : String // +0x8
 }

 struct JetEngine.RemovePreferenceMigrationRule {

	// Properties
	let key : AnyPreferenceKey // +0x0
 }

 class JetEngine.OptionalLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logger : Logger // +0x10 (0x28)
	let levelNameKey : Key // +0x38 (0x10)
	let defaultVerbosityLevel : LogMessageLevel // +0x48 (0x1)

	// Swift methods
 }

 struct JetEngine.Key {

	// Properties
	var lookupName : String // +0x0
 }

 struct JetEngine.JSIncident {

	// Properties
	let type : IncidentType // +0x0
	let expected : String // +0x8
	let actual : String // +0x18
	let objectPath : String // +0x28
	let contextNames : [String] // +0x38
	let recoveryAction : RecoveryAction // +0x40
 }

 enum JetEngine.IncidentType {

	// Properties
	case badType  
	case nullValue  
 }

 enum JetEngine.RecoveryAction {

	// Properties
	case coercedValue  
	case defaultValue  
	case ignoredValue  
 }

 class JetEngine.LookupBagContract : URLBagContract {

	// Properties
	let backing : AMSBagProtocol // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x7ff40  @objc LookupBagContract.unpersonalizedLookupURL <stripped>
	0x800b0  @objc LookupBagContract..cxx_destruct <stripped>

	// Swift methods
	0x7ffd0  func LookupBagContract.unpersonalizedLookupURL.getter // getter 
 }

 struct JetEngine.MutableStateRef {

	// Properties
	let path : StatePath<A.StateCenter.Transaction.StateCenterTransaction.PathComponent>
	let center : A
 }

 struct JetEngine.AsyncObjectGraphError {

	// Properties
	let errors : [Error] // +0x0
 }

 struct JetEngine.ImpulseSignpost {

	// Properties
	let component : JESignpostComponent // +0x0
	let event : UInt32 // +0x4
 }

 struct JetEngine.IntervalSignpost {

	// Properties
	let component : JESignpostComponent // +0x0
	let beginEvent : UInt32 // +0x4
	let endEvent : UInt32 // +0x8
 }

 struct JetEngine.StateRef {

	// Properties
	let path : StatePath<A.StateCenter.Transaction.StateCenterTransaction.PathComponent>
	let center : A
 }

 struct JetEngine.RenamePreferenceMigrationRule {

	// Properties
	let oldKey : PreferenceKey<A>
	let newKey : PreferenceKey<A>
 }

 class JetEngine.JSBoundReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let propertyName : String // +0x10 (0x10)
	let weakOwner : JSWeakReference // +0x20 (0x8)

	// Swift methods
	0x81b20  class func JSBoundReference.__allocating_init(value:ownedBy:) // init 
 }

 class JetEngine.JSNotifyObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var observersByName : [String : [JSCallable]] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x82c00  @objc JSNotifyObject.init <stripped>
	0x83310  @objc JSNotifyObject.register:: <stripped>
	0x836c0  @objc JSNotifyObject.unregister:: <stripped>
	0x83760  @objc JSNotifyObject.post: <stripped>
	0x83800  @objc JSNotifyObject..cxx_destruct <stripped>
 }

 class JetEngine.DeferredLazy {
 struct JetEngine.JSArrayBuffer {

	// Properties
	let value : JSValue // +0x0
 }

 class JetEngine.AnyBacking {
 class JetEngine.AMSValueBacking {
 struct JetEngine.Value {

	// Properties
	let backing : AnyBacking
 }

 class JetEngine.JSCryptoObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x89f60  @objc JSCryptoObject.supports: <stripped>
	0x8a230  @objc JSCryptoObject.hash:: <stripped>
	0x8a2a0  @objc JSCryptoObject.init <stripped>
 }

 struct JetEngine.JSSource {

	// Properties
	var code : String
	var sourceURL : URL?
 }

 class JetEngine.PageMetricsPresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appStatePresenter : ApplicationStatePresenter // +0x10 (0x8)
	var hasResignedActiveWhileAppeared : Bool // +0x18 (0x1)
	let eventDispatcher : MetricsEventDispatcher // +0x20 (0x28)
	var pageMetrics : PageMetrics? // +0x48 (0x8)

	// Swift methods
	0x8b880  class func PageMetricsPresenter.__allocating_init(eventDispatcher:pageMetrics:) // init 
 }

 struct JetEngine.JSONDictionary {

	// Properties
	let dictionary : NSDictionary // +0x0
 }

 class JetEngine.JSHostObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x8e230  @objc JSHostObject.platform <stripped>
	0x8e260  @objc JSHostObject.osBuild <stripped>
	0x8e340  @objc JSHostObject.deviceModel <stripped>
	0x8e360  @objc JSHostObject.deviceLocalizedModel <stripped>
	0x8e440  @objc JSHostObject.clientIdentifier <stripped>
	0x8e520  @objc JSHostObject.clientVersion <stripped>
	0x8e560  @objc JSHostObject.isOSAtLeast::: <stripped>
	0x8e690  @objc JSHostObject.init <stripped>
 }

 struct JetEngine.SwiftLogger {

	// Properties
	let name : String // +0x0
 }

 class JetEngine.FamilyInfoLookupBagContract : URLBagContract {

	// Properties
	let backing : AMSBagProtocol // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x8f020  @objc FamilyInfoLookupBagContract.familyInfoURL <stripped>
	0x8f170  @objc FamilyInfoLookupBagContract..cxx_destruct <stripped>

	// Swift methods
	0x8f0a0  func FamilyInfoLookupBagContract.familyInfoURL.getter // getter 
 }

 struct JetEngine.JSTypedArray {

	// Properties
	let value : JSValue // +0x0
 }

 enum JetEngine.ElementType {

	// Properties
	case float32  
	case float64  
	case int8  
	case int16  
	case int32  
	case uint8  
	case uint8Clamped  
	case uint16  
	case uint32  
 }

 class JetEngine.RunLoopWorkerThread : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String // +0x10 (0x10)
	let stateLock : NSLock // +0x20 (0x8)
	var runLoopStorage : Atomic<CFRunLoopRef?> // +0x28 (0x8)
	var source : CFRunLoopSourceRef? // +0x30 (0x8)
	var tasks : [()] // +0x38 (0x8)

	// Swift methods
	0x91390  class func RunLoopWorkerThread.__allocating_init(name:) // init 
	0x916a0  func RunLoopWorkerThread.isRunning.getter // getter 
	0x91770  func RunLoopWorkerThread.start() // method 
	0x91a60  func RunLoopWorkerThread.stop() // method 
	0x91c80  func <stripped> // method 
	0x923f0  func RunLoopWorkerThread.scheduleAfter(delay:execute:) // method 
	0x92c90  func RunLoopWorkerThread.scheduleSync<A>(task:) // method 
	0x93080  func RunLoopWorkerThread.scheduleSync<A>(task:) // method 
	0x931a0  func RunLoopWorkerThread.schedule(task:) // method 
	0x933a0  func RunLoopWorkerThread.description.getter // getter 
 }

 struct JetEngine.PendingTask {

	// Properties
	let timer : CFRunLoopTimerRef? // +0x0
 }

 class JetEngine.ImmutableBox {
 class JetEngine.MutableBox {
 class JetEngine.MetricsLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let loggerName : String // +0x10 (0x10)
	let metrics : MetricsEventQueue // +0x20 (0x10)
	let eventTopic : String // +0x30 (0x10)
	let sampling : MetricsSamplingLottery // +0x40 (0x30)

	// Swift methods
	0x948d0  class func MetricsLogger.__allocating_init(loggerName:configuration:) // init 
 }

 struct JetEngine.Configuration {

	// Properties
	var metrics : MetricsEventQueue // +0x0
	var eventTopic : String // +0x10
	var samplingPercentage : Double // +0x20
	var samplingDuration : Double // +0x28
 }

 class JetEngine.URLBagContract : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)
	let mescalContract : AMSMescalBagContract // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x97100  @objc URLBagContract.guidRegexes <stripped>
	0x97130  @objc URLBagContract.guidSchemes <stripped>
	0x97160  @objc URLBagContract.storefrontSuffix <stripped>
	0x97190  @objc URLBagContract.trustedDomains <stripped>
	0x971c0  @objc URLBagContract.metricsContract <stripped>
	0x971e0  @objc URLBagContract.mescalContract <stripped>
	0x97230  @objc URLBagContract.TLSSamplingPercentage <stripped>
	0x97260  @objc URLBagContract.TLSSamplingSessionDuration <stripped>
	0x97290  @objc URLBagContract.TFOSamplingPercentage <stripped>
	0x972c0  @objc URLBagContract.TFOSamplingSessionDuration <stripped>
	0x972f0  @objc URLBagContract.apsEnabledPatterns <stripped>
	0x97320  @objc URLBagContract.apsSamplingPercent <stripped>
	0x97350  @objc URLBagContract.metricsURL <stripped>
	0x97380  @objc URLBagContract.metricsDictionary <stripped>
	0x97480  @objc URLBagContract.init <stripped>
	0x97500  @objc URLBagContract..cxx_destruct <stripped>

	// Swift methods
	0x97030  class func URLBagContract.__allocating_init(_:) // init 
	0x96d70  func URLBagContract.guidRegexes.getter // getter 
	0x96da0  func URLBagContract.guidSchemes.getter // getter 
	0x96dd0  func URLBagContract.storefrontSuffix.getter // getter 
	0x96e00  func URLBagContract.trustedDomains.getter // getter 
	0x96e30  func URLBagContract.metricsContract.getter // getter 
	0x96e50  func URLBagContract.tlsSamplingPercentage.getter // getter 
	0x96e80  func URLBagContract.tlsSamplingSessionDuration.getter // getter 
	0x96eb0  func URLBagContract.tfoSamplingPercentage.getter // getter 
	0x96ee0  func URLBagContract.tfoSamplingSessionDuration.getter // getter 
	0x96f10  func URLBagContract.apsEnabledPatterns.getter // getter 
	0x96f40  func URLBagContract.apsSamplingPercent.getter // getter 
	0x96f70  func URLBagContract.metricsURL.getter // getter 
	0x96fa0  func URLBagContract.metricsDictionary.getter // getter 
 }

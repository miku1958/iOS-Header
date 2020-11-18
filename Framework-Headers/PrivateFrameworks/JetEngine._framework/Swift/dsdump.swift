 protocol JetEngine._AnyCollectionContentReloadTriggerPublisher // 1 requirements
 {
	// method
 }
 protocol JetEngine.CollectionContentReloadTriggerPublisher // 6 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// getter
 }
 protocol JetEngine.Injectable // 2 requirements
 {
	// class associated type access function
	// class init
 }
 protocol JetEngine.JSSourceURLProvider // 1 requirements
 {
	// getter
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
 protocol JetEngine.AnyStateful // 0 requirements
 {
 }
 protocol JetEngine.Stateful // 3 requirements
 {
	// class base protocol
	// class base protocol
	// class init
 }
 protocol JetEngine.CollectionContentReloadableCell // 1 requirements
 {
	// getter
 }
 protocol JetEngine.MetricsEventLinter // 1 requirements
 {
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
 protocol JetEngine.FlowActionFactory // 4 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
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
 protocol JetEngine.AnyStateStoreHandle // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol JetEngine.MetricsFieldsProvider // 2 requirements
 {
	// getter
	// method
 }
 protocol JetEngine.EventEmitter // 5 requirements
 {
	// class associated type access function
	// class getter
	// method
	// method
	// method
 }
 protocol JetEngine.TaskScheduler // 1 requirements
 {
	// method
 }
 protocol JetEngine.JSURLRequestEncoder // 1 requirements
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
 protocol JetEngine.MetricsFieldsBuilder // 3 requirements
 {
	// class init
	// method
	// getter
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
 protocol JetEngine.Lens // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol JetEngine.FlowActionModel // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// getter
 }
 protocol JetEngine.ViewControllerPresenter // 7 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol JetEngine.DiffableDataPresenter // 5 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// getter
	// method
 }
 protocol JetEngine.JSReference // 1 requirements
 {
	// getter
 }
 protocol JetEngine.ShelfModel // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class associated type access function
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
 protocol JetEngine.Future // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol JetEngine.ComponentModel // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol JetEngine.ActionImplementation // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol JetEngine.StateStore // 8 requirements
 {
	// class associated type access function
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
 }
 protocol JetEngine.JSONInitFailureObserver // 1 requirements
 {
	// method
 }
 protocol JetEngine.ActionModel // 1 requirements
 {
	// getter
 }
 protocol JetEngine.PipelineTask // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol JetEngine.PageModel // 1 requirements
 {
	// getter
 }
 protocol JetEngine.EventObserver // 3 requirements
 {
	// class associated type access function
	// getter
	// method
 }
 protocol JetEngine.AnyPresenter // 0 requirements
 {
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
 protocol JetEngine.ViewModel // 1 requirements
 {
	// getter
 }
 protocol JetEngine.MetricsEventRecorder // 2 requirements
 {
	// method
	// method
 }

 class __C.CFRunLoopSource {
 struct __C.SignpostComponent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ßb
 }

 enum __C.AMSBagValueType { }

 class __C.CFString {
 enum __C.CachePolicy { }

 enum __C.PropertyListFormat { }

 class __C.CFRunLoop {
 class __C.CFRunLoopTimer {
 struct __C.AMSBagKey {

	// Properties
	var _rawValue : NSString
 }

 struct JetEngine.JetEngineBootstrap {

	// Properties
	var bagProfile : Profile // +0x0
	var process : AMSProcessInfo // +0x20
	var bagSpy : Promise // +0x28
	var protocolHandler : URLProtocolHandler // +0x38
 }

 enum JetEngine.URLProtocolHandler {

	// Properties
	case media : (clientIdentifier: String, keychainAccessGroup: String?)
	case none  
	case standard  
 }

 class JetEngine.LocalPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundleIdentifier : CFString // +0x10 (0x8)

	// Swift methods
	0x58f0  class func LocalPreferences.__allocating_init(bundleIdentifier:) // init 
 }

 enum JetEngine.JSONTimeUnit {

	// Properties
	case seconds  
	case milliseconds  
 }

 struct JetEngine.MetricsPipeline {

	// Properties
	let builderType : MetricsFieldsBuilder // +0x0
	let aggregator : MetricsFieldsAggregator // +0x10
	let linter : MetricsEventLinter // +0x20
	let recorder : MetricsEventRecorder // +0x48
 }

 class JetEngine.MockedAMSBag : AMSSnapshotBag /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices {

	// Properties
	let bagProfile : Profile // +0x8 (0x20)
	let stubs : AMSBagKey // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x9fb0  @objc MockedAMSBag.isExpired <stripped>
	0x9fc0  @objc MockedAMSBag.expirationDate <stripped>
	0x9fd0  @objc MockedAMSBag.profile <stripped>
	0xa020  @objc MockedAMSBag.profileVersion <stripped>
	0xa620  @objc MockedAMSBag.arrayForKey: <stripped>
	0xa650  @objc MockedAMSBag.boolForKey: <stripped>
	0xa690  @objc MockedAMSBag.doubleForKey: <stripped>
	0xa6d0  @objc MockedAMSBag.integerForKey: <stripped>
	0xa710  @objc MockedAMSBag.stringForKey: <stripped>
	0xa750  @objc MockedAMSBag.URLForKey: <stripped>
	0xa790  @objc MockedAMSBag.dictionaryForKey: <stripped>
	0xa850  @objc MockedAMSBag.createSnapshotWithCompletion: <stripped>
	0xa910  @objc MockedAMSBag.init <stripped>
	0xa8d0  @objc MockedAMSBag..cxx_destruct <stripped>

	// Swift methods
 }

 struct JetEngine.Stubs {

	// Properties
	var values : AMSBagKey // +0x0
 }

 struct JetEngine.LookupRequest {

	// Properties
	let profile : String // +0x0
	let caller : String // +0x10
	let ids : [String] // +0x20
	let idType : IdentifierType // +0x28
	let version : Int // +0x30
	let platform : String? // +0x38
 }

 enum JetEngine.IdentifierType {

	// Properties
	case adamID  
	case bundleID  
 }

 struct JetEngine.ScalarDictionary {

	// Properties
	var values : Value // +0x0
 }

 enum JetEngine.Value {

	// Properties
	case bool : Bool
	case double : Double
	case int : Int
	case string : String
 }

 struct JetEngine.MetricsSamplingLottery {

	// Properties
	let isForcedKey : PreferenceKey // +0x0
	let sampleWindowStartKey : PreferenceKey // +0x10
	let percentage : Double // +0x20
	let duration : Double // +0x28
 }

 class JetEngine.Promise {
 struct JetEngine.Observer {

	// Properties
	let valueBlock : (_:)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorBlock :  empty-list 
	let scheduler : TaskScheduler
 }

 enum JetEngine.State {

	// Properties
	case pending : Observer
	case resolved : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rejected : Å^
 }

 class JetEngine.EventObserverBox {
 class JetEngine.ConcreteEventObserverBox {
 struct JetEngine.EventSubscription {

	// Properties
	let base : EventObserverBox
 }

 class JetEngine.TransientStateStore {
 class JetEngine.Transaction {
 enum JetEngine.Change {

	// Properties
	case updateOne : StatePath
	case removeOne : StatePath
	case removeManyWithPrefix : StatePath
	case removeAll  
 }

 struct JetEngine.StatefulCodingThunk {

	// Properties
	let value : AnyStateful // +0x0
 }

 enum JetEngine.CodingKeys {

	// Properties
	case isConcurrent  
	case values  
 }

 enum JetEngine.CodingKeys {

	// Properties
	case typeName  
	case base  
 }

 struct JetEngine.MapPreferenceMigrationRule {

	// Properties
	let oldKey : PreferenceKey
	let newKey : PreferenceKey
	let mapper : (_:)
 }

 struct JetEngine.SetPreferenceMigrationRule {

	// Properties
	let key : PreferenceKey
	let value : A
 }

 class JetEngine.SyncEvent {
 struct JetEngine.MetricsFieldsAggregator {

	// Properties
	var optInProviders : MetricsFieldInclusionRequest // +0x0
	var optOutProviders : MetricsFieldExclusionRequest // +0x8
 }

 class JetEngine.JSRemoteScriptFetcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let remoteFetcher : RemoteFetcher // +0x10 (0x30)
	let isRetryLock : NSLock // +0x40 (0x8)
	var isRetry : Bool // +0x48 (0x1)

	// Swift methods
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
	var data : MetricsData // +0x0
	var custom : ScalarDictionary // +0x8
 }

 struct JetEngine.PageMetricsFieldsProvider { }

 enum JetEngine.LogMessageLevel {

	// Properties
	case error  
	case warning  
	case info  
	case debug  
 }

 struct JetEngine.JSPackageIndex {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let packageURL : ÍF
	let scriptPath : String
	let properties : [String : Any]
 }

 struct JetEngine.CompoundError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errors :  empty-list  // +0x0
 }

 struct JetEngine.PageMetrics {

	// Properties
	var instructions : Instruction // +0x0
	var pageFields : [String : Any]? // +0x8
	var custom : ScalarDictionary // +0x10
 }

 struct JetEngine.InvocationPoint {

	// Properties
	let rawValue : String // +0x0
 }

 struct JetEngine.Instruction {

	// Properties
	var data : MetricsData // +0x0
	var invocationPoints : InvocationPoint // +0x30
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

 class JetEngine.ActionImplementationBox {
 class JetEngine.ConcreteActionImplementationBox {
 struct JetEngine.ActionDispatcher {

	// Properties
	var implementations : OpaqueMetatype
	var nextStorage : Indirect
	var targetQueue : OS_dispatch_queue?
 }

 enum JetEngine.MetricsBehavior {

	// Properties
	case fromAction : MetricsFieldsContext
	case notProcessed  
 }

 enum JetEngine.PerformError {

	// Properties
	case noMetricsPipelineInObjectGraph  
 }

 struct JetEngine.JSBytecodeSource {

	// Properties
	let script : Any // +0x0
	let virtualMachine : JSVirtualMachine // +0x20
 }

 struct JetEngine.Device { }

 struct JetEngine.MetricsData {

	// Properties
	let topic : String? // +0x0
	let shouldFlush : Bool // +0x10
	var fields : [String : Any] // +0x18
	var includingFields : MetricsFieldInclusionRequest // +0x20
	var excludingFields : MetricsFieldExclusionRequest // +0x28
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
	0x45490  @objc JSPlistObject.parse: <stripped>
	0x45900  @objc JSPlistObject.stringify:: <stripped>
	0x45a50  @objc JSPlistObject.init <stripped>
 }

 struct JetEngine.KeySet {

	// Properties
	var values : AMSBagKey // +0x0
 }

 enum JetEngine.Pipeline { }

 struct JetEngine.PipelinePhase {

	// Properties
	let body : Promise
 }

 struct JetEngine.CoarselyTimed {

	// Properties
	var contained : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var duration : á@
 }

 struct JetEngine.PreferenceKey: AnyPreferenceKey {

	// Properties
	var lookupName : String
 }

 struct JetEngine.PreferenceMigrator {

	// Properties
	var rules : PreferenceMigrationRule // +0x0
 }

 class JetEngine.JSStack : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let workerThread : RunLoopWorkerThread // +0x10 (0x8)
	let context : JSContext // +0x18 (0x8)
	var exceptionObserver : JSStack // +0x20 (0x10)

	// Swift methods
	0x4b270  class func JSStack.__allocating_init(prerequisites:virtualMachine:) // init 
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
 }

 struct JetEngine.PresenterMultiplexer {

	// Properties
	var presenters : ViewControllerPresenter // +0x0
 }

 struct JetEngine.LookupResponse {

	// Properties
	let items : [String : Any] // +0x0
	let missing : Set<String> // +0x8
	let metrics : JSNetworkPerformanceMetrics // +0x10
 }

 struct JetEngine.Indirect {

	// Properties
	var interior : MutableBox
 }

 struct JetEngine.ClosureAction {

	// Properties
	var actionMetrics : ActionMetrics // +0x0
	var body : () // +0x10
 }

 class JetEngine.AnyStateStoreBox {
 class JetEngine.ConcreteStateStoreBox {
 struct JetEngine.AnyStateStore {

	// Properties
	let base : AnyStateStoreBox
 }

 enum JetEngine.Unstable { }

 class JetEngine.ApplicationStatePresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isEnabled : Bool // +0x10 (0x1)
	var delegate : ApplicationStatePresenterDelegate // +0x18 (0x10)
	let onActiveDidChange : SyncEvent // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x550d0  @objc ApplicationStatePresenter.applicationDidBecomeActive <stripped>
	0x551c0  @objc ApplicationStatePresenter.applicationDidResignActive <stripped>

	// Swift methods
	0x54ae0  class func ApplicationStatePresenter.__allocating_init(isEnabled:) // init 
 }

 class JetEngine.JSWeakReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let context : JSContext // +0x10 (0x8)
	let weakValue : UnsafeRawPointer // +0x18 (0x8)

	// Swift methods
	0x55230  class func JSWeakReference.__allocating_init(_:) // init 
 }

 struct JetEngine.StateStoreHandle: AnyStateStoreHandle {

	// Properties
	let path : StatePath
	let store : A
 }

 enum JetEngine.MetricsFieldsProviderCategory {

	// Properties
	case timeSensitive  
	case expensive  
 }

 class JetEngine.ProxyingStateCenter {
 struct JetEngine.Transaction {

	// Properties
	var changes : Change
 }

 enum JetEngine.Change {

	// Properties
	case changeOne : StatePath
	case removeOne : StatePath
	case removeRecursively : StatePath
	case removeAll  
 }

 struct JetEngine.StateLens {

	// Properties
	let handle : AnyStateStoreHandle
 }

 struct JetEngine.SyncTaskScheduler: TaskScheduler { }

 struct JetEngine.NoURLRequestEncoder: JSURLRequestEncoder { }

 struct JetEngine.JSCallable {

	// Properties
	let reference : JSReference // +0x0
 }

 struct JetEngine.JSConstructable {

	// Properties
	let reference : JSReference // +0x0
 }

 class JetEngine.LazyPromise {
 enum JetEngine.State {

	// Properties
	case pending : TaskScheduler
	case started : Promise
 }

 struct JetEngine.MetricsFieldsContext {

	// Properties
	var storage : [String : Any] // +0x0
 }

 struct JetEngine.Property {

	// Properties
	var key : String
 }

 struct JetEngine.MonotonicTimeReference {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referenceDate : å9
	let referenceTime : MonotonicTime
 }

 struct JetEngine.ReadOnlyLens {

	// Properties
	let value : A
 }

 struct JetEngine.IndexJSLoader {

	// Properties
	let indexPipeline : AnyPipelineTask // +0x0
	let sourcePipeline : AnyPipelineTask // +0x8
 }

 struct JetEngine.Dependency {

	// Properties
	let type : Any.Type // +0x0
	let object : UnsafeCastable // +0x8
 }

 struct JetEngine.DependencyDictionary {

	// Properties
	var contents : OpaqueMetatype // +0x0
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestDuration : á@
	let body : CoarselyTimed
	let incidents : JSIncident
	let networkPerformance : JSNetworkPerformanceMetrics
 }

 struct JetEngine.RemoteFetcher {

	// Properties
	let urlSession : AMSURLSession // +0x0
	let urlEncoder : AMSURLRequestEncoder // +0x8
	let cachingPolicy : CachingPolicy // +0x10
	let onNetworkMetricsEventsCollected : AsyncEvent // +0x28
 }

 enum JetEngine.CachingPolicy {

	// Properties
	case always : CachePolicy
	case alternativeRetry : CachePolicy
 }

 class JetEngine.AsyncEvent {
 struct JetEngine.StandaloneObjectGraphBuilder {

	// Properties
	let partialGraph : BaseObjectGraph // +0x0
	var producers : Promise // +0x8
 }

 class JetEngine.MescalBagContract : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x71d10  @objc MescalBagContract.mescalCertificateURL <stripped>
	0x71d70  @objc MescalBagContract.mescalSetupURL <stripped>
	0x71dd0  @objc MescalBagContract.mescalPrimingURL <stripped>
	0x71e30  @objc MescalBagContract.mescalSignedActions <stripped>
	0x71e90  @objc MescalBagContract.mescalSignSapRequests <stripped>
	0x71ef0  @objc MescalBagContract.mescalSignSapResponses <stripped>
	0x720d0  @objc MescalBagContract.init <stripped>
	0x72060  @objc MescalBagContract..cxx_destruct <stripped>

	// Swift methods
	0x71c90  class func MescalBagContract.__allocating_init(_:) // init 
 }

 enum JetEngine.PlatformUI { }

 class JetEngine.NestedPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let key : PreferenceKey // +0x10 (0x10)
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
	let subsystem : Subsystem // +0x0
	let category : String // +0x10
 }

 class JetEngine.ReplayLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateLock : JEUnfairLock // +0x10 (0x8)
	var rawRecords : Record // +0x18 (0x8)

	// Swift methods
	0x74ab0  class func ReplayLogger.__allocating_init() // init 
 }

 struct JetEngine.Record {

	// Properties
	let messages : LogMessage // +0x0
	let level : LogMessageLevel // +0x8
 }

 struct JetEngine.LintedMetricsEvent {

	// Properties
	let fields : [String : Any] // +0x0
	let issues : Issue // +0x8
 }

 struct JetEngine.Issue { }

 enum JetEngine.ModelMergingError {

	// Properties
	case incompatibleTypes : (Any, Any)
	case conflictingData  
	case missingData  
 }

 struct JetEngine.LogMessage {

	// Properties
	var components : Component // +0x0
 }

 enum JetEngine.ValueTreatment {

	// Properties
	case safe  
	case sensitive  
	case traceableSensitive  
 }

 struct JetEngine.StringInterpolation {

	// Properties
	var components : Component // +0x0
 }

 struct JetEngine.Component {

	// Properties
	var value : Any? // +0x0
	var treatment : ValueTreatment // +0x20
 }

 class JetEngine.ShelvesPresenter {
 enum JetEngine.InsertionPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case before : ID
WARNING: couldn't find address 0x0 (0x0) in binary!
	case after : ID
	case start  
	case end  
 }

 enum JetEngine.MergeProblem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case missingShelf : ID
WARNING: couldn't find address 0x0 (0x0) in binary!
	case mergeFailure : Å^
 }

 enum JetEngine.MergeSolution {

	// Properties
	case insert : InsertionPoint
	case rollbackAndAbort  
	case discard  
 }

 class JetEngine.Accounts : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let backingStore : ACAccountStore // +0x10 (0x8)
	let accountsLock : JEUnfairLock // +0x18 (0x8)
	var unlockedActiveiTunesAccount : ACAccount? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7d1b0  @objc Accounts.accountStoreDidChange: <stripped>

	// Swift methods
	0x7cdd0  class func Unstable.Accounts.__allocating_init(_:) // init 
 }

 class JetEngine.Atomic {
 struct JetEngine.JSONObject {

	// Properties
	let rawValue : Any? // +0x0
 }

 enum JetEngine.DataDecodingError {

	// Properties
	case decodingFailed  
 }

 struct JetEngine.ViewWillDisappearReason {

	// Properties
	let rawValue : String // +0x0
 }

 class JetEngine.JSConditionalReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let managedValue : JSManagedValue // +0x10 (0x8)

	// Swift methods
	0x800f0  class func JSConditionalReference.__allocating_init(value:ownedBy:) // init 
 }

 struct JetEngine.ClosureActionImplementation {

	// Properties
	var scheduler : TaskScheduler
 }

 enum JetEngine.Result {

	// Properties
	case value : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error : Å^
 }

 struct JetEngine.CompoundActionImplementation { }

 enum JetEngine.PerformError {

	// Properties
	case unsupportedAction : ActionModel
	case noActionDispatcherInObjectGraph  
 }

 enum JetEngine.JSONDateFormat {

	// Properties
	case iso8601  
	case iso8601WithMilliseconds  
 }

 class JetEngine.AnyValueBox {
 class JetEngine.IdentifiableValueBox {
 class JetEngine.AnyComponentModelValueBox {
 class JetEngine.ComponentModelValueBox {
 struct JetEngine.DiffableLens {

	// Properties
	let base : AnyValueBox
 }

 struct JetEngine.EmptyAction {

	// Properties
	var actionMetrics : ActionMetrics // +0x0
 }

 struct JetEngine.JSPromise {

	// Properties
	let value : JSValue // +0x0
 }

 class JetEngine.JSBagObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var bag : Bag // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x86c40  @objc JSBagObject.registerBagKeys: <stripped>
	0x86f40  @objc JSBagObject.string: <stripped>
	0x870e0  @objc JSBagObject.double: <stripped>
	0x87280  @objc JSBagObject.integer: <stripped>
	0x87420  @objc JSBagObject.boolean: <stripped>
	0x87630  @objc JSBagObject.array: <stripped>
	0x87840  @objc JSBagObject.dictionary: <stripped>
	0x87ae0  @objc JSBagObject.url: <stripped>
	0x87c10  @objc JSBagObject.init <stripped>
	0x87c70  @objc JSBagObject..cxx_destruct <stripped>

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
	let parent : Promise
	var producers : AsyncObjectGraphBuilder
 }

 struct JetEngine.AccountHandle {

	// Properties
	let account : ACAccount // +0x0
 }

 class JetEngine.AMSMetricsEventRecorder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metrics : AMSMetrics // +0x10 (0x8)
	let defaultTopic : String // +0x18 (0x10)

	// Swift methods
	0x89600  class func AMSMetricsEventRecorder.__allocating_init(metrics:defaultTopic:) // init 
 }

 struct JetEngine.ComponentTypes {

	// Properties
	var types : ComponentModel
 }

 struct JetEngine.AppMetricsFieldProvider {

	// Properties
	let bundle : NSBundle // +0x0
 }

 struct JetEngine.PreferenceNamespace {

	// Properties
	let rawValue : String // +0x0
 }

 enum JetEngine.ActionOutcome {

	// Properties
	case performed  
	case unsupported  
 }

 struct JetEngine.FetchResponse {

	// Properties
	let ok : Bool
	let headers : [String : String]
	let redirected : Bool
	let status : Int
	let statusText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : å'
	let body : String?
	let metrics : JSNetworkPerformanceMetrics
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
	0x8f000  @objc JSRandomObject.nextBoolean <stripped>
	0x8f020  @objc JSRandomObject.nextNumber <stripped>
	0x8f040  @objc JSRandomObject.nextUUID <stripped>
	0x8f060  @objc JSRandomObject.init <stripped>
 }

 struct JetEngine.MethodEventObserver {

	// Properties
	let scheduler : TaskScheduler
	var target : weak A?
	let method : (_:)
 }

 struct JetEngine.LanguagesMetricFieldProvider { }

 struct JetEngine.MetricsFieldExclusionRequest {

	// Properties
	let rawValue : String // +0x0
 }

 struct JetEngine.ActionTypes {

	// Properties
	var types : ActionModel
 }

 class JetEngine.TableContent {
 class JetEngine.DiffableDataStatePresenter {
 class JetEngine.SingleUseClosureEventObserver {
 enum JetEngine.State {

	// Properties
	case waiting : TaskScheduler
	case invalid  
 }

 struct JetEngine.ClosureEventObserver {

	// Properties
	let scheduler : TaskScheduler
	let body : (_:)
 }

 struct JetEngine.NSObjectEventObserver {

	// Properties
	let scheduler : TaskScheduler
	var target : weak NSObject?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let selector : $
 }

 class JetEngine.CollectionContent {
 enum JetEngine.SupplementaryViewProvider {

	// Properties
	case section : DiffableLens
	case generic : CollectionContent
 }

 class JetEngine.CompoundMetricsEventRecorder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var recorders : MetricsEventRecorder // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x98350  class func CompoundMetricsEventRecorder.__allocating_init(recorders:) // init 
 }

 class JetEngine.PageMetricsPresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appMetrics : AppMetricsPresenter // +0x10 (0x8)
	let pipeline : MetricsPipeline // +0x18 (0x70)
	var appStateEventSubscription : EventSubscription // +0x88 (0x8)
	var isViewAppeared : Bool // +0x90 (0x1)
	var hasAppExitedWhileAppeared : Bool // +0x91 (0x1)
	var context : MetricsFieldsContext // +0x98 (0x8)
	var data : PageMetrics // +0xa0 (0x18)

	// Swift methods
	0x99a30  class func PageMetricsPresenter.__allocating_init(appMetrics:pipeline:context:data:) // init 
 }

 struct JetEngine.MonotonicTime {

	// Properties
	let seconds : Int // +0x0
	let nanoseconds : Int // +0x8
 }

 struct JetEngine.CompoundLogger {

	// Properties
	var loggers : Logger // +0x0
 }

 class JetEngine.PipelineTaskBox {
 class JetEngine.SpecializedPipelineTaskBox {
 struct JetEngine.AnyPipelineTask: PipelineTask {

	// Properties
	let base : PipelineTaskBox
 }

 struct JetEngine.PipelineEntryTask: PipelineTask {

	// Properties
	let promise : Promise
 }

 class JetEngine.MapPipelineTask {
 class JetEngine.MapStateCenter {
 struct JetEngine.Transaction {

	// Properties
	var changes : Change
 }

 enum JetEngine.Change {

	// Properties
	case changeOne : StatePath
	case removeOne : StatePath
	case removeRecursively : StatePath
	case removeAll  
 }

 class JetEngine.TransientPreferences : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var storage : [String : Any] // +0x10 (0x8)

	// Swift methods
	0x9e930  class func TransientPreferences.__allocating_init() // init 
 }

 class JetEngine.OverriddenAMSBag : AMSSnapshotBag /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)
	let overrides : AMSBagKey // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x9f360  @objc OverriddenAMSBag.dealloc <stripped>
	0x9f510  @objc OverriddenAMSBag.forwardSnapshotBagExpiredValueAccessed: <stripped>
	0x9f5b0  @objc OverriddenAMSBag.isExpired <stripped>
	0x9f5d0  @objc OverriddenAMSBag.expirationDate <stripped>
	0x9f6e0  @objc OverriddenAMSBag.profile <stripped>
	0x9f700  @objc OverriddenAMSBag.profileVersion <stripped>
	0x9f7b0  @objc OverriddenAMSBag.arrayForKey: <stripped>
	0x9f7d0  @objc OverriddenAMSBag.boolForKey: <stripped>
	0x9f7f0  @objc OverriddenAMSBag.doubleForKey: <stripped>
	0x9f810  @objc OverriddenAMSBag.integerForKey: <stripped>
	0x9f830  @objc OverriddenAMSBag.stringForKey: <stripped>
	0x9f850  @objc OverriddenAMSBag.URLForKey: <stripped>
	0x9f870  @objc OverriddenAMSBag.dictionaryForKey: <stripped>
	0x9f9f0  @objc OverriddenAMSBag.createSnapshotWithCompletion: <stripped>
	0x9fb30  @objc OverriddenAMSBag.init <stripped>
	0x9f400  @objc OverriddenAMSBag..cxx_destruct <stripped>

	// Swift methods
 }

 enum JetEngine.JSONError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case malformedDocument :  empty-list 
	case missingProperty : (forKey: String, containedIn: Any.Type)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case malformedProperty :  empty-list 
	case unknownType : (named: String, containedIn: Any.Type)
	case unknownCase : (named: String, containedIn: Any.Type)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case invalidDocument :  first-element-marker 
	case unknownClass : (named: String, containedIn: Any.Type)
	case filterObject  
 }

 class JetEngine.JSNetworkObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let urlSession : AMSURLSession // +0x8 (0x8)
	let accounts : Accounts // +0x10 (0x8)
	let requestEncoder : JSURLRequestEncoder // +0x18 (0x28)

	// ObjC -> Swift bridged methods
	0xa1d30  @objc JSNetworkObject.fetch: <stripped>
	0xa1e40  @objc JSNetworkObject.init <stripped>
	0xa1ea0  @objc JSNetworkObject..cxx_destruct <stripped>

	// Swift methods
 }

 struct JetEngine.FetchRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ÍF
	let method : String
	let cache : CachePolicy
	let signingStyle : SigningStyle
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

 class JetEngine.InMemoryMetricsEventRecorder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let historySize : Int // +0x10 (0x8)
	var events : LintedMetricsEvent // +0x18 (0x8)
	let stateLock : JEUnfairLock // +0x20 (0x8)
	let onEventRecorded : AsyncEvent // +0x28 (0x8)

	// Swift methods
	0xaab00  class func InMemoryMetricsEventRecorder.__allocating_init(historySize:) // init 
 }

 class JetEngine.JSPlatformObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let bag : Bag // +0x8 (0x8)
	let process : AMSProcessInfo // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xacfc0  @objc JSPlatformObject.lookup: <stripped>
	0xad0d0  @objc JSPlatformObject.init <stripped>
	0xad130  @objc JSPlatformObject..cxx_destruct <stripped>

	// Swift methods
 }

 class JetEngine.BaseObjectGraph : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dependencies : DependencyDictionary // +0x10 (0x8)
	var name : String // +0x18 (0x10)

	// Swift methods
	0xae120  class func BaseObjectGraph.__allocating_init(name:dependencies:) // init 
	0xae240  func BaseObjectGraph.adding(allDependenciesOf:) // method 
	0xae3a0  func BaseObjectGraph.adding<A>(allDependencies:) // method 
	0xae500  func BaseObjectGraph.adding(dependency:) // method 
	0xae650  func BaseObjectGraph.adding(uniqueDependenciesOf:) // method 
	0xae7e0  func BaseObjectGraph.subtracting<A>(dependenciesFor:) // method 
	0xaeaa0  func BaseObjectGraph.subtracting(dependencyFor:) // method 
	0xaec10  func BaseObjectGraph.subtracting<A>(allDependenciesExcept:) // method 
	0xaeee0  func BaseObjectGraph.availableCandidates.getter // getter 
	0xaf330  func BaseObjectGraph.errorDescription<A>(forNoMemberSatisfying:) // method 
	0xaf700  func BaseObjectGraph.noMemberFound<A>(toSatisfy:) // method 
	0xaf790  func BaseObjectGraph.name.getter // getter 
	0xaf7d0  func BaseObjectGraph.name.setter // setter 
	0xaf810  func BaseObjectGraph.name.modify // modifyCoroutine 
	0xaf850  func BaseObjectGraph.description.getter // getter 
 }

 enum JetEngine.ValueOverride {

	// Properties
	case array : [Any]
	case bool : Bool
	case double : Double
	case int : Int
	case string : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case URL : ÍF
WARNING: couldn't find address 0x0 (0x0) in binary!
	case dictionary :  empty-list 
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
	0xb88a0  @objc LookupBagContract.unpersonalizedLookupURL <stripped>
	0xb8a20  @objc LookupBagContract..cxx_destruct <stripped>

	// Swift methods
	0xb8930  func LookupBagContract.unpersonalizedLookupURL.getter // getter 
 }

 struct JetEngine.MutableStateRef {

	// Properties
	let path : StatePath
	let center : A
 }

 struct JetEngine.AsyncObjectGraphError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errors :  empty-list  // +0x0
 }

 struct JetEngine.ImpulseSignpost {

	// Properties
	let component : SignpostComponent // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let event : ßb // +0x4
 }

 struct JetEngine.IntervalSignpost {

	// Properties
	let component : SignpostComponent // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let beginEvent : ßb // +0x4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endEvent : ßb // +0x8
 }

 struct JetEngine.StateRef {

	// Properties
	let path : StatePath
	let center : A
 }

 struct JetEngine.RenamePreferenceMigrationRule {

	// Properties
	let oldKey : PreferenceKey
	let newKey : PreferenceKey
 }

 class JetEngine.PropertyEventObserver {
 class JetEngine.JSRemoteIndexFetcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let remoteFetcher : RemoteFetcher // +0x10 (0x30)
	let isRetryLock : NSLock // +0x40 (0x8)
	var isRetry : Bool // +0x48 (0x1)

	// Swift methods
 }

 struct JetEngine.EmptyActionImplementation { }

 class JetEngine.JSBoundReference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let propertyName : String // +0x10 (0x10)
	let weakOwner : JSWeakReference // +0x20 (0x8)

	// Swift methods
	0xbb320  class func JSBoundReference.__allocating_init(value:ownedBy:) // init 
 }

 class JetEngine.JSNotifyObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var observersByName : JSCallable // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xbc220  @objc JSNotifyObject.init <stripped>
	0xbc710  @objc JSNotifyObject.register:: <stripped>
	0xbcb70  @objc JSNotifyObject.unregister:: <stripped>
	0xbcbe0  @objc JSNotifyObject.post: <stripped>
	0xbcc60  @objc JSNotifyObject..cxx_destruct <stripped>
 }

 class JetEngine.DeferredLazy {
 struct JetEngine.SystemInfoMetricsFieldsProvider { }

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

 struct JetEngine.ImpressionMetrics {

	// Properties
	var id : ID // +0x0
	var fields : [String : Any] // +0x28
	var custom : ScalarDictionary // +0x30
 }

 struct JetEngine.ID {

	// Properties
	var parent : String? // +0x0
	var element : String // +0x10
	var index : Int // +0x20
 }

 struct JetEngine.MetricsFieldInclusionRequest {

	// Properties
	let rawValue : String // +0x0
 }

 class JetEngine.JSCryptoObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc7200  @objc JSCryptoObject.supports: <stripped>
	0xc7470  @objc JSCryptoObject.hash:: <stripped>
	0xc7590  @objc JSCryptoObject.init <stripped>
 }

 struct JetEngine.JSSource {

	// Properties
	var code : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sourceURL : å'
 }

 struct JetEngine.JSONDictionary {

	// Properties
	let dictionary : NSDictionary // +0x0
 }

 struct JetEngine.CompoundAction {

	// Properties
	var actionMetrics : ActionMetrics // +0x0
	var subactions : ActionModel // +0x10
 }

 class JetEngine.AppMetricsPresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let pipeline : MetricsPipeline // +0x10 (0x70)
	var canSendEnter : Bool // +0x80 (0x1)
	var flushedEvents : AppStateEvent // +0x88 (0x8)
	let onAppStateEvent : SyncEvent // +0x90 (0x8)

	// Swift methods
	0xc9ff0  class func AppMetricsPresenter.__allocating_init(pipeline:) // init 
 }

 struct JetEngine.AppStateEvent {

	// Properties
	let value : String // +0x0
 }

 class JetEngine.JSHostObject : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xcae60  @objc JSHostObject.platform <stripped>
	0xcae90  @objc JSHostObject.osBuild <stripped>
	0xcaeb0  @objc JSHostObject.deviceModel <stripped>
	0xcaed0  @objc JSHostObject.deviceLocalizedModel <stripped>
	0xcaf70  @objc JSHostObject.clientIdentifier <stripped>
	0xcb050  @objc JSHostObject.clientVersion <stripped>
	0xcb090  @objc JSHostObject.isOSAtLeast::: <stripped>
	0xcb1b0  @objc JSHostObject.init <stripped>
 }

 struct JetEngine.SwiftLogger {

	// Properties
	let name : String // +0x0
 }

 class JetEngine.FamilyInfoLookupBagContract : URLBagContract {

	// Properties
	let backing : AMSBagProtocol // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcbaa0  @objc FamilyInfoLookupBagContract.familyInfoURL <stripped>
	0xcbc00  @objc FamilyInfoLookupBagContract..cxx_destruct <stripped>

	// Swift methods
	0xcbb20  func FamilyInfoLookupBagContract.familyInfoURL.getter // getter 
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
	var runLoopStorage : Atomic // +0x28 (0x8)
	var source : CFRunLoopSource // +0x30 (0x8)
	var tasks : [()] // +0x38 (0x8)

	// Swift methods
	0xcd970  class func RunLoopWorkerThread.__allocating_init(name:) // init 
	0xcdc20  func RunLoopWorkerThread.isRunning.getter // getter 
	0xcdce0  func RunLoopWorkerThread.start() // method 
	0xcdfe0  func RunLoopWorkerThread.stop() // method 
	0xce1a0  func <stripped> // method 
	0xce7a0  func RunLoopWorkerThread.scheduleAfter(delay:execute:) // method 
	0xcef70  func RunLoopWorkerThread.scheduleSync<A>(task:) // method 
	0xcf310  func RunLoopWorkerThread.scheduleSync<A>(task:) // method 
	0xcf430  func RunLoopWorkerThread.schedule(task:) // method 
	0xcf610  func RunLoopWorkerThread.description.getter // getter 
 }

 struct JetEngine.PendingTask {

	// Properties
	let timer : CFRunLoopTimer // +0x0
 }

 class JetEngine.ImmutableBox {
 class JetEngine.MutableBox {
 enum JetEngine.DiffableData { }

 struct JetEngine.EventTimeMetricsFieldProvider { }

 class JetEngine.MetricsLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let loggerName : String // +0x10 (0x10)
	let recorder : MetricsEventRecorder // +0x20 (0x28)
	let eventTopic : String // +0x48 (0x10)
	let sampling : MetricsSamplingLottery // +0x58 (0x30)

	// Swift methods
	0xd2df0  class func MetricsLogger.__allocating_init(loggerName:configuration:) // init 
 }

 struct JetEngine.Configuration {

	// Properties
	var recorder : MetricsEventRecorder // +0x0
	var eventTopic : String // +0x28
	var samplingPercentage : Double // +0x38
	var samplingDuration : Double // +0x40
 }

 struct JetEngine.WritableStateLens {

	// Properties
	let handle : AnyStateStoreHandle
 }

 class JetEngine.URLBagContract : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let backing : AMSBagProtocol // +0x8 (0x8)
	let mescalContract : AMSMescalBagContract // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd5760  @objc URLBagContract.guidRegexes <stripped>
	0xd5790  @objc URLBagContract.guidSchemes <stripped>
	0xd57c0  @objc URLBagContract.storefrontSuffix <stripped>
	0xd57f0  @objc URLBagContract.trustedDomains <stripped>
	0xd5820  @objc URLBagContract.metricsContract <stripped>
	0xd5840  @objc URLBagContract.mescalContract <stripped>
	0xd5890  @objc URLBagContract.TLSSamplingPercentage <stripped>
	0xd58c0  @objc URLBagContract.TLSSamplingSessionDuration <stripped>
	0xd58f0  @objc URLBagContract.TFOSamplingPercentage <stripped>
	0xd5920  @objc URLBagContract.TFOSamplingSessionDuration <stripped>
	0xd5950  @objc URLBagContract.apsEnabledPatterns <stripped>
	0xd5980  @objc URLBagContract.apsSamplingPercent <stripped>
	0xd59b0  @objc URLBagContract.metricsURL <stripped>
	0xd59e0  @objc URLBagContract.metricsDictionary <stripped>
	0xd5ae0  @objc URLBagContract.init <stripped>
	0xd5b40  @objc URLBagContract..cxx_destruct <stripped>

	// Swift methods
	0xd56a0  class func URLBagContract.__allocating_init(_:) // init 
	0xd53e0  func URLBagContract.guidRegexes.getter // getter 
	0xd5410  func URLBagContract.guidSchemes.getter // getter 
	0xd5440  func URLBagContract.storefrontSuffix.getter // getter 
	0xd5470  func URLBagContract.trustedDomains.getter // getter 
	0xd54a0  func URLBagContract.metricsContract.getter // getter 
	0xd54c0  func URLBagContract.tlsSamplingPercentage.getter // getter 
	0xd54f0  func URLBagContract.tlsSamplingSessionDuration.getter // getter 
	0xd5520  func URLBagContract.tfoSamplingPercentage.getter // getter 
	0xd5550  func URLBagContract.tfoSamplingSessionDuration.getter // getter 
	0xd5580  func URLBagContract.apsEnabledPatterns.getter // getter 
	0xd55b0  func URLBagContract.apsSamplingPercent.getter // getter 
	0xd55e0  func URLBagContract.metricsURL.getter // getter 
	0xd5610  func URLBagContract.metricsDictionary.getter // getter 
 }

 protocol HealthExperience.PluginInfo // 3 requirements
 {
	// getter
	// getter
	// class init
 }
 protocol HealthExperience.CoreSpotlightIndexable // 2 requirements
 {
	// getter
	// method
 }
 protocol HealthExperience.SuggestedActionDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol HealthExperience.NSManagedObjectUnique // 2 requirements
 {
	// class method
	// class getter
 }
 protocol HealthExperience.MatcherProtocol // 7 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// class init
 }
 protocol HealthExperience.AggregateMatcherProtocol // 10 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol HealthExperience.SectionedDataSourceItem // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthExperience.SectionedDataSourceItemTitleProviding // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.SectionedDataSourceIdentifying // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthExperience.SectionedDataSource // 15 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
	// getter
	// getter
	// method
	// method
	// method
 }
 protocol HealthExperience.SupplementaryItemDataSource // 1 requirements
 {
	// method
 }
 protocol HealthExperience.SectionedDataSourceEventHandler // 1 requirements
 {
	// method
 }
 protocol HealthExperience.FavoritablesProvider // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.UntypedFocus // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol HealthExperience.RelevanceFeatureTagKeyPathCorresponding // 2 requirements
 {
	// class base protocol
	// class getter
 }
 protocol HealthExperience.RelevanceFeatureTagCodable // 4 requirements
 {
	// class base protocol
	// class method
	// class method
	// method
 }
 protocol HealthExperience.CycleTrackingFavoritesProviderObserver // 1 requirements
 {
	// method
 }
 protocol HealthExperience.FavoritesProviding // 4 requirements
 {
	// class associated type access function
	// getter
	// method
	// method
 }
 protocol HealthExperience.Statisticable // 3 requirements
 {
	// class init
	// getter
	// class getter
 }
 protocol HealthExperience.Unitable // 4 requirements
 {
	// getter
	// getter
	// class getter
	// class getter
 }
 protocol HealthExperience.HealthExperienceStore // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol HealthExperience.FeedItemSuggestionRelevanceCalculating // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.ObservableConvertible // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol HealthExperience.LockProviding // 2 requirements
 {
	// method
	// method
 }
 protocol HealthExperience.ManagedObjectContextOperating // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.RunLoopObserving // 1 requirements
 {
	// method
 }
 protocol HealthExperience.AsyncPrecondition // 1 requirements
 {
	// method
 }
 protocol HealthExperience.HealthKitType // 3 requirements
 {
	// class associated type access function
	// class getter
	// class getter
 }
 protocol HealthExperience.Queryable // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.FeedItemGenerator // 2 requirements
 {
	// getter
	// class init
 }
 protocol HealthExperience.FeedItemGenerationPluginInfo // 5 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol HealthExperience.SummarySingleDaySubmitting // 0 requirements
 {
 }
 protocol HealthExperience.AnalyticsProviding // 1 requirements
 {
	// method
 }
 protocol HealthExperience.Displayable // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol HealthExperience.REFeatureCorresponding // 2 requirements
 {
	// class method
	// method
 }
 protocol HealthExperience.RERawFeatureValueExpressible // 3 requirements
 {
	// class base protocol
	// class getter
	// getter
 }
 protocol HealthExperience.Queriable // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthExperience.Searchable // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.Quantifiable // 8 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol HealthExperience.Joinable // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.Characteristic // 0 requirements
 {
 }
 protocol HealthExperience.ActivitySummary // 0 requirements
 {
 }
 protocol HealthExperience.HealthDocument // 0 requirements
 {
 }
 protocol HealthExperience.ECG // 0 requirements
 {
 }
 protocol HealthExperience.HealthDataSource // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol HealthExperience.HealthDataSourceProducer // 1 requirements
 {
	// method
 }
 protocol HealthExperience.Matchable // 3 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
 }
 protocol HealthExperience.AggregateMatchable // 2 requirements
 {
	// class base protocol
	// class associated conformance access function
 }
 protocol HealthExperience.HKType // 2 requirements
 {
	// class getter
	// class init
 }
 protocol HealthExperience.FeedItemContext // 10 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
 }
 protocol HealthExperience.RelevanceFeatureTag // 4 requirements
 {
	// class associated type access function
	// class getter
	// getter
	// class init
 }

 enum HealthExperience.LogCategory {

	// Properties
	case analytics  
	case general  
	case generation  
	case personalization  
	case focus  
	case dataSource  
	case view  
	case plugin  
	case xpc  
	case daemon  
	case profile  
	case menstrualCycles  
	case cloudSync  
	case heart  
 }

 struct HealthExperience.Log {

	// Properties
	let categories : LogCategory // +0x0
 }

 struct HealthExperience.LogCategoryWrapper {

	// Properties
	let handle : OS_os_log // +0x0
 }

 class HealthExperience.EncodedFeatureTag : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xaec0  @objc EncodedFeatureTag.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.SignalListener : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateDumpSignalSource : OS_dispatch_source_signal // +0x10 (0x8)

	// Swift methods
	0xb2e0  func SignalListener.sourceNotification() // method 
 }

 class HealthExperience.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PluginInfo {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0xd900  func BasicPluginInfo.bundleIdentifier.getter // getter 
	0xd940  func BasicPluginInfo.bundleIdentifier.setter // setter 
	0xd980  func BasicPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xd9c0  class func BasicPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthExperience.FoundationPluginBundleProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.PluginBundleLoadError {

	// Properties
	case notAllowed : (bundleIdentifier: String)
	case loadFailed : (loadError: Error)
	case badURLPath  
	case notFound  
	case noBundleIdentifier  
 }

 class HealthExperience.PluginBundleProvider {
 enum HealthExperience.FeedItemProminence {

	// Properties
	case low  
	case normal  
	case high  
 }

 struct HealthExperience.ProminenceFeatureTag {

	// Properties
	let value : FeedItemProminence // +0x0
 }

 class HealthExperience.RelevanceEngineMetricsBlockRecorder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var callback : (_:_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x14050  @objc RelevanceEngineMetricsBlockRecorder.recordTrainingMetrics:forInteraction: <stripped>
	0x14140  @objc RelevanceEngineMetricsBlockRecorder.init <stripped>
	0x141f0  @objc RelevanceEngineMetricsBlockRecorder..cxx_destruct <stripped>

	// Swift methods
	0x13e20  func <stripped> // method 
 }

 class HealthExperience.HKHealthSourceDataSource : MutableArrayDataSource {

	// Properties
	let healthStore : HKHealthStore // +0x50 (0x8)
	var objectType : HKObjectType // +0x58 (0x8)

	// Swift methods
	0x14260  func <stripped> // method 
	0x14500  func <stripped> // method 
	0x146e0  func <stripped> // method 
 }

 class HealthExperience.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext? // +0x10 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x18 (0x8)
	var persistentStoreDescription : NSPersistentStoreDescription // +0x20 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x28 (0x8)

	// Swift methods
	0x15050  func MemoryHealthExperienceStore.viewContext.getter // getter 
	0x15110  func MemoryHealthExperienceStore.viewContext.setter // setter 
	0x15130  func MemoryHealthExperienceStore.viewContext.modify // modifyCoroutine 
	0x15230  func MemoryHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x15330  func MemoryHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x15350  func MemoryHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x153a0  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x15680  func MemoryHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x156b0  func MemoryHealthExperienceStore.persistentStoreDescription.setter // setter 
	0x156f0  func MemoryHealthExperienceStore.persistentStoreDescription.modify // modifyCoroutine 
	0x15730  func MemoryHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x157b0  func MemoryHealthExperienceStore.initPersistentContainer() // method 
	0x157e0  func MemoryHealthExperienceStore.persistentContainer.getter // getter 
	0x15840  func MemoryHealthExperienceStore.persistentContainer.setter // setter 
	0x15860  func MemoryHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x158f0  func <stripped> // method 
	0x15d60  func MemoryHealthExperienceStore.deleteAllFeedItems() // method 
 }

 class HealthExperience.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : [BasicPluginInfo] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x16ee0  @objc PluginBundleProviderPrecacheOperation.main <stripped>
	0x16f60  @objc PluginBundleProviderPrecacheOperation.init <stripped>
	0x16fe0  @objc PluginBundleProviderPrecacheOperation..cxx_destruct <stripped>

	// Swift methods
	0x16820  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
 }

 class HealthExperience.HKCorrelationQueryDataSource {
 struct HealthExperience.MutualExclusionGroupFeatureTag {

	// Properties
	let value : String // +0x0
 }

 class HealthExperience.DataSourceWithSectionItemLimit {
 class HealthExperience.HealthExperienceStoreCoreSpotlightOperation : AsynchronousOperation {

	// Properties
	let store : HealthExperienceStore // +0x30 (0x28)

	// ObjC -> Swift bridged methods
	0x1bed0  @objc HealthExperienceStoreCoreSpotlightOperation.main <stripped>
	0x1bfb0  @objc HealthExperienceStoreCoreSpotlightOperation.init <stripped>
	0x1c050  @objc HealthExperienceStoreCoreSpotlightOperation..cxx_destruct <stripped>

	// Swift methods
	0x1bb20  class func HealthExperienceStoreCoreSpotlightOperation.__allocating_init(store:) // init 
	0x1bf00  func HealthExperienceStoreCoreSpotlightOperation.makeCoreSpotlightDelegate() // method 
 }

 enum HealthExperience.DataVisualizationKind {

	// Properties
	case averageReport  
	case consistencySummary  
	case distribution  
	case dotPlot  
	case lineChart  
	case route  
	case eventOverview  
	case twoBarComparison  
 }

 struct HealthExperience.DataVisualizationKindFeatureTag {

	// Properties
	let value : DataVisualizationKind // +0x0
 }

 class HealthExperience.AsynchronousProgressOperation : AsynchronousOperation {

	// Properties
	var timeout : DispatchTimeInterval // +0x3 (0x0)
	var operationTimedOut : Bool // +0x67 (0x1)
	var progress : NSProgress? // +0x6100085 (0x8)

	// ObjC -> Swift bridged methods
	0x1d400  @objc AsynchronousProgressOperation.main <stripped>
	0x1e560  @objc AsynchronousProgressOperation.init <stripped>
	0x1e600  @objc AsynchronousProgressOperation..cxx_destruct <stripped>

	// Swift methods
	0x1cfb0  func AsynchronousProgressOperation.timeout.getter // getter 
	0x1d000  func AsynchronousProgressOperation.timeout.setter // setter 
	0x1d060  func AsynchronousProgressOperation.timeout.modify // modifyCoroutine 
	0x1d0a0  func AsynchronousProgressOperation.operationTimedOut.getter // getter 
	0x1d0d0  func AsynchronousProgressOperation.operationTimedOut.setter // setter 
	0x1d110  func AsynchronousProgressOperation.operationTimedOut.modify // modifyCoroutine 
	0x1d160  func AsynchronousProgressOperation.progress.getter // getter 
	0x1d1a0  func AsynchronousProgressOperation.progress.setter // setter 
	0x1d210  func AsynchronousProgressOperation.progress.modify // modifyCoroutine 
	0x1d310  func AsynchronousProgressOperation.beginWork() // method 
	0x1d320  func AsynchronousProgressOperation.timeoutOccured() // method 
	0x1da00  func AsynchronousProgressOperation.interceptCancellationHandler() // method 
 }

 struct HealthExperience.TypeLister { }

 class HealthExperience.AsynchronousOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var autoFinishesOnCancel : Bool // +0x8 (0x1)
	let operationState : OperationState // +0x10 (0x8)
	let workLock : UnfairLock // +0x18 (0x8)
	var didBeginWork : ()? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x210f0  @objc AsynchronousOperation.isAsynchronous <stripped>
	0x21120  @objc AsynchronousOperation.isCancelled <stripped>
	0x21140  @objc AsynchronousOperation.isExecuting <stripped>
	0x21240  @objc AsynchronousOperation.isFinished <stripped>
	0x215d0  @objc AsynchronousOperation.start <stripped>
	0x21600  @objc AsynchronousOperation.cancel <stripped>
	0x21660  @objc AsynchronousOperation.main <stripped>
	0x216c0  @objc AsynchronousOperation.description <stripped>
	0x21a00  @objc AsynchronousOperation.init <stripped>
	0x21a70  @objc AsynchronousOperation..cxx_destruct <stripped>

	// Swift methods
	0x1fff0  func AsynchronousOperation.autoFinishesOnCancel.getter // getter 
	0x20020  func AsynchronousOperation.autoFinishesOnCancel.setter // setter 
	0x20060  func AsynchronousOperation.autoFinishesOnCancel.modify // modifyCoroutine 
	0x200a0  func AsynchronousOperation.performWithExclusiveAccess(_:) // method 
	0x200e0  func AsynchronousOperation.performWithExclusiveAccessThenFinish(_:) // method 
	0x21690  func AsynchronousOperation.cleanUp() // method 
	0x20260  func AsynchronousOperation.didBeginWork.getter // getter 
	0x202b0  func AsynchronousOperation.didBeginWork.setter // setter 
	0x20310  func AsynchronousOperation.didBeginWork.modify // modifyCoroutine 
 }

 enum HealthExperience.ExecutionState {

	// Properties
	case ready  
	case executing  
	case finished  
 }

 struct HealthExperience.OperationState {

	// Properties
	let cancelled : Bool // +0x0
	let executionState : AsynchronousOperation.ExecutionState // +0x1
 }

 class HealthExperience.HKBloodPressureStatisticsDataSource : MutableArrayDataSource {

	// Properties
	let healthStore : HKHealthStore // +0x50 (0x8)
	let predicate : NSPredicate? // +0x58 (0x8)
	let options : HKStatisticsOptions // +0x60 (0x8)
	let anchorDate : Date // +0x0 (0x0)
	let intervalComponents : DateComponents // +0x17d000 (0x0)
	var statisticsLock : UnfairLock // +0x0 (0x8)
	let systolicType : HKQuantityType // +0x17d000 (0x8)
	let diastolicType : HKQuantityType // +0x5 (0x8)
	var systolicQuery : HKStatisticsCollectionQuery? // +0x14 (0x8)
	var diastolicQuery : HKStatisticsCollectionQuery? // +0x65745f5f (0x8)
	var systolicStatisticsCollection : HKStatisticsCollection? // +0x0 (0x8)
	var diastolicStatisticsCollection : HKStatisticsCollection? // +0x45545f5f (0x8)

	// Swift methods
	0x22120  func <stripped> // method 
	0x22180  func <stripped> // method 
	0x22e40  func <stripped> // method 
	0x236c0  func <stripped> // method 
 }

 class HealthExperience.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)

	// Swift methods
	0x25820  class func UnfairLock.__allocating_init() // init 
	0x25930  func UnfairLock.lock() // method 
	0x25940  func UnfairLock.unlock() // method 
	0x25950  func UnfairLock.assertOwner() // method 
 }

 class HealthExperience.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25aa0  @objc FeedSection.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25da0  @objc HealthExperienceStoreCoreSpotlightDelegate.usePrivateIndex <stripped>
	0x25df0  @objc HealthExperienceStoreCoreSpotlightDelegate.bundleIdentifier <stripped>
	0x25e50  @objc HealthExperienceStoreCoreSpotlightDelegate.domainIdentifier <stripped>
	0x25eb0  @objc HealthExperienceStoreCoreSpotlightDelegate.indexName <stripped>
	0x25f30  @objc HealthExperienceStoreCoreSpotlightDelegate.protectionClass <stripped>
	0x26310  @objc HealthExperienceStoreCoreSpotlightDelegate.attributeSetForObject: <stripped>
	0x26680  @objc HealthExperienceStoreCoreSpotlightDelegate.initForStoreWithDescription:model: <stripped>
	0x26770  @objc HealthExperienceStoreCoreSpotlightDelegate..cxx_destruct <stripped>

	// Swift methods
	0x25d80  func HealthExperienceStoreCoreSpotlightDelegate.setUp() // method 
 }

 class HealthExperience.MedicalIDFetchOperation : AsyncOperation {

	// Properties
	var medicalIDData : _HKMedicalIDData? // +0x18 (0x8)
	var fetchError : Error? // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x26e70  @objc MedicalIDFetchOperation.main <stripped>
	0x270c0  @objc MedicalIDFetchOperation.init <stripped>
	0x27190  @objc MedicalIDFetchOperation..cxx_destruct <stripped>

	// Swift methods
	0x26ea0  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : () // +0x10 (0x10)
	var queue : OS_dispatch_queue // +0x20 (0x8)
	var debounceInterval : Double // +0x28 (0x8)
	var workItem : Atomic<DispatchWorkItem?> // +0x30 (0x8)

	// Swift methods
	0x27290  func DebouncedDispatchItem.block.getter // getter 
	0x272d0  func DebouncedDispatchItem.block.setter // setter 
	0x27310  func DebouncedDispatchItem.block.modify // modifyCoroutine 
	0x27340  func DebouncedDispatchItem.queue.getter // getter 
	0x27370  func DebouncedDispatchItem.queue.setter // setter 
	0x273b0  func DebouncedDispatchItem.queue.modify // modifyCoroutine 
	0x273e0  func DebouncedDispatchItem.debounceInterval.getter // getter 
	0x27410  func DebouncedDispatchItem.debounceInterval.setter // setter 
	0x27450  func DebouncedDispatchItem.debounceInterval.modify // modifyCoroutine 
	0x27490  func DebouncedDispatchItem.cancel() // method 
	0x27550  func DebouncedDispatchItem.dispatch() // method 
	0x27aa0  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
 }

 class HealthExperience.ModelTrainingScenarioExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinator : RelevanceEngineCoordinator // +0x10 (0x8)
	let store : HealthExperienceStore // +0x18 (0x28)

	// Swift methods
	0x27ec0  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x27f80  func ModelTrainingScenarioExecutor.saveModelToDisk(completion:) // method 
	0x27fa0  func ModelTrainingScenarioExecutor.execute(scenario:completion:) // method 
 }

 enum HealthExperience.Kind {

	// Properties
	case appsForHealth  
	case getMoreFromHealth  
	case highlights  
	case notices  
	case summary  
 }

 enum HealthExperience.UserDefaultsKeys { }

 enum HealthExperience.MedicalIDDataResult {

	// Properties
	case setup : _HKMedicalIDData
	case unknown  
	case notSetup  
 }

 class HealthExperience.MedicalIDCache : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var medicalIDDataResult : MedicalIDDataResult // +0x8 (0x8)
	let medicalIDFetchOperation : Atomic<MedicalIDFetchOperation?> // +0x10 (0x8)
	var medicalIDChangeObserver : MedicalIDChangeObserver // +0x18 (0x8)
	let healthStore : HKHealthStore // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x300b0  @objc MedicalIDCache.init <stripped>
	0x30130  @objc MedicalIDCache..cxx_destruct <stripped>

	// Swift methods
	0x2f090  func MedicalIDCache.medicalIDDataResult.getter // getter 
	0x2ef20  class func MedicalIDCache.__allocating_init(healthStore:) // init 
	0x2f100  func <stripped> // method 
	0x2f7f0  func MedicalIDCache.enqueueMedicalIDFetch() // method 
	0x2f9a0  func <stripped> // method 
	0x2fef0  func <stripped> // method 
 }

 struct HealthExperience.SuggestedAction {

	// Properties
	let feedItemUniqueIdentifier : String // +0x0
 }

 class HealthExperience.FeedItemSuggestedActionDataSource {
 struct HealthExperience.ContentCompletenessFeatureTag {

	// Properties
	let value : Double // +0x0
 }

 class HealthExperience.GroupConfigurationLoader : REBundleConfiguration /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
	0x31030  @objc GroupConfigurationLoader.elementGroupWithIdentifier: <stripped>
	0x310f0  @objc GroupConfigurationLoader.init <stripped>
 }

 class HealthExperience.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x33390  @objc HealthExperienceStoreCleanupOperation.start <stripped>
	0x333c0  @objc HealthExperienceStoreCleanupOperation.description <stripped>
	0x33540  @objc HealthExperienceStoreCleanupOperation.init <stripped>
	0x335c0  @objc HealthExperienceStoreCleanupOperation..cxx_destruct <stripped>

	// Swift methods
	0x32630  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.Matcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)

	// Swift methods
	0x35510  func Matcher.constraintPredicates.getter // getter 
	0x35500  func Matcher.constraintPredicates.setter // setter 
	0x336b0  func Matcher.constraintPredicates.modify // modifyCoroutine 
	0x336e0  class func Matcher.__allocating_init() // init 
 }

 class HealthExperience.AggregateMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AggregateMatcherProtocol,  MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)
	var aggregateIntervalComponents : DateComponents? // +0x0 (0x0)
	var aggregateStatisticsOptions : HKStatisticsOptions // +0x74735f5f (0x8)
	var anchorDate : Date // +0x0 (0x0)

	// Swift methods
	0x33a00  func AggregateMatcher.constraintPredicates.getter // getter 
	0x33a30  func AggregateMatcher.constraintPredicates.setter // setter 
	0x33a70  func AggregateMatcher.constraintPredicates.modify // modifyCoroutine 
	0x33aa0  func AggregateMatcher.aggregateIntervalComponents.getter // getter 
	0x33ae0  func AggregateMatcher.aggregateIntervalComponents.setter // setter 
	0x33b30  func AggregateMatcher.aggregateIntervalComponents.modify // modifyCoroutine 
	0x33b70  func AggregateMatcher.aggregateStatisticsOptions.getter // getter 
	0x33ba0  func AggregateMatcher.aggregateStatisticsOptions.setter // setter 
	0x33be0  func AggregateMatcher.aggregateStatisticsOptions.modify // modifyCoroutine 
	0x33c20  func AggregateMatcher.anchorDate.getter // getter 
	0x33c70  func AggregateMatcher.anchorDate.setter // setter 
	0x33cd0  func AggregateMatcher.anchorDate.modify // modifyCoroutine 
	0x33d20  class func AggregateMatcher.__allocating_init() // init 
 }

 class HealthExperience.FetchedResultsControllerDataSource {
 class HealthExperience.RelevanceEngineCoordinator : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : NSOperationQueue // +0x8 (0x8)
	let dispatchQueue : OS_dispatch_queue // +0x10 (0x8)
	let engineName : String // +0x18 (0x10)
	var $__lazy_storage_$_primaryFeatures : REFeatureSet? // +0x28 (0x8)
	var $__lazy_storage_$_crossedFeatures : [REFeature]? // +0x30 (0x8)
	var $__lazy_storage_$_relevanceProviderManagerClasses : [RERelevanceProviderManager.Type]? // +0x38 (0x8)
	let modelVersion : UInt // +0x40 (0x8)
	let modelDirectoryName : String // +0x48 (0x10)
	var $__lazy_storage_$_modelPath : URL? // +0x0 (0x0)
	let pretrainedModelURL : URL? // +0x141598 (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder? // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4bf80  @objc RelevanceEngineCoordinator.init <stripped>
	0x4bff0  @objc RelevanceEngineCoordinator..cxx_destruct <stripped>

	// Swift methods
	0x48a00  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelDirectoryName:pretrainedModelURL:) // init 
	0x48ef0  func RelevanceEngineCoordinator.resumeEngineIfNeeded(completion:) // method 
	0x49060  func RelevanceEngineCoordinator.makeResumeEngineOperation() // method 
	0x49100  func RelevanceEngineCoordinator.modelPath.getter // getter 
	0x49570  func RelevanceEngineCoordinator.modelPath.setter // setter 
	0x49630  func RelevanceEngineCoordinator.modelPath.modify // modifyCoroutine 
	0x49780  func RelevanceEngineCoordinator.trainingContext.getter // getter 
	0x49890  func RelevanceEngineCoordinator.trainingContext.setter // setter 
	0x498b0  func RelevanceEngineCoordinator.trainingContext.modify // modifyCoroutine 
	0x49910  func <stripped> // method 
	0x4a180  func RelevanceEngineCoordinator.element(for:in:) // method 
	0x4a4a0  func RelevanceEngineCoordinator.submitTraining(trainingEvents:store:completion:) // method 
	0x4a6e0  func <stripped> // method 
	0x4b440  func RelevanceEngineCoordinator.collectDiagnosticLogs(completion:) // method 
	0x4b690  func RelevanceEngineCoordinator.gatherMetrics(completion:) // method 
	0x4b800  func RelevanceEngineCoordinator.clearEngineAndModel(completion:) // method 
	0x4bba0  func RelevanceEngineCoordinator.saveModelToDisk(completion:) // method 
 }

 struct HealthExperience.SectionedDataSourceSectionIdentifier: SectionedDataSourceIdentifying {

	// Properties
	let dataSourceIdentifer : String // +0x0
	let identifier : String // +0x10
 }

 struct HealthExperience.SectionedDataSourceItemIdentifier: SectionedDataSourceIdentifying {

	// Properties
	let dataSourceIdentifer : String // +0x0
	let identifier : String // +0x10
 }

 enum HealthExperience.DataSourceError {

	// Properties
	case invalid : (error: String)
 }

 class HealthExperience.StorageLocations : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MutableArrayDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : weak SectionedDataSourceEventHandler? // +0x10 (0x10)
	var promise : Promise<[SectionedDataSourceChangeset]>? // +0x20 (0x8)
	let changes : Observable<[SectionedDataSourceChangeset]> // +0x28 (0x8)
	var arrangedSections : [ArrayDataSourceSection] // +0x30 (0x8)
	var $__lazy_storage_$_identifier : String? // +0x38 (0x10)
	var lock : UnfairLock // +0x48 (0x8)

	// Swift methods
	0x577a0  func MutableArrayDataSource.eventHandler.getter // getter 
	0x577d0  func MutableArrayDataSource.eventHandler.setter // setter 
	0x57820  func MutableArrayDataSource.eventHandler.modify // modifyCoroutine 
	0x57900  func MutableArrayDataSource.promise.getter // getter 
	0x57930  func MutableArrayDataSource.arrangedSections.getter // getter 
	0x57960  func MutableArrayDataSource.arrangedSections.setter // setter 
	0x579a0  func MutableArrayDataSource.arrangedSections.modify // modifyCoroutine 
	0x579e0  func MutableArrayDataSource.identifier.getter // getter 
	0x57a60  func MutableArrayDataSource.identifier.setter // setter 
	0x57a80  func MutableArrayDataSource.identifier.modify // modifyCoroutine 
	0x57b90  func MutableArrayDataSource.sectionIdentifiers.getter // getter 
	0x58b40  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x57f80  func MutableArrayDataSource.replaceAllSections(with:) // method 
	0x58070  func MutableArrayDataSource.insert(section:index:) // method 
	0x580a0  func MutableArrayDataSource.removeSection(at:) // method 
	0x582b0  func MutableArrayDataSource.insert(item:at:) // method 
	0x58320  func MutableArrayDataSource.removeItemAt(indexPath:) // method 
	0x58390  func MutableArrayDataSource.reload(item:at:) // method 
	0x58400  func MutableArrayDataSource.send(_:) // method 
 }

 class HealthExperience.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x5e250  @objc FeedItem.initWithEntity:insertIntoManagedObjectContext: <stripped>
	0x5e340  @objc FeedItem..cxx_construct <stripped>
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter // +0x18 (0x8)

	// Swift methods
	0x5ed40  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
 }

 struct HealthExperience.DefaultFavoritablesProvider: FavoritablesProvider {

	// Properties
	let wheelchairUse : HKWheelchairUse // +0x0
	let hasPairedWatch : Bool // +0x8
 }

 class HealthExperience.FeedItemREElementDataSource : REElementDataSource /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
	let store : HealthExperienceStore // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x607b0  @objc FeedItemREElementDataSource.supportedSections <stripped>
	0x61420  @objc FeedItemREElementDataSource.getElementsInSection:withHandler: <stripped>
	0x615c0  @objc FeedItemREElementDataSource.init <stripped>
	0x61640  @objc FeedItemREElementDataSource..cxx_destruct <stripped>

	// Swift methods
	0x60620  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
 }

 enum HealthExperience.RelevanceFeatureTagCoreDataError {

	// Properties
	case metadataDecodingFailure : (underlyingError: Error)
	case metadataNotFound  
 }

 struct HealthExperience.ValueJSONWrapper {

	// Properties
	var value : A
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case value  
 }

 struct HealthExperience.RelevantDateInterval {

	// Properties
	let interval : DateInterval
	let rampUpTime : Double
	let rampDownTime : Double
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case interval  
	case rampUpTime  
	case rampDownTime  
 }

 class HealthExperience.FavoritesProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let observers : HKObserverSet<FavoritesProviderObserver> // +0x8 (0x8)
	let favoriteDisplayTypesController : WDFavoriteDisplayTypesController // +0x10 (0x8)
	let nonspecificUpdatesDisabled : Atomic<Bool> // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x66450  @objc FavoritesProvider.dealloc <stripped>
	0x66cb0  @objc FavoritesProvider.favoritesChangedRemotely: <stripped>
	0x66da0  @objc FavoritesProvider.init <stripped>
	0x66500  @objc FavoritesProvider..cxx_destruct <stripped>

	// Swift methods
	0x65fc0  func FavoritesProvider.favorites.getter // getter 
	0x66250  class func FavoritesProvider.__allocating_init(controller:) // init 
	0x66550  func FavoritesProvider.addObserver(_:) // method 
	0x665f0  func FavoritesProvider.removeObserver(_:) // method 
	0x66610  func <stripped> // method 
 }

 class HealthExperience.HideableDataSource {
 enum HealthExperience.Visibility {

	// Properties
	case hidden  
	case visible  
 }

 class HealthExperience.HKActiveEnergySample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_debugDescription : String?
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0x6b500  func HKActiveEnergySample.debugDescription.getter // getter 
	0x6b7f0  func HKActiveEnergySample.debugDescription.setter // setter 
	0x6b810  func HKActiveEnergySample.debugDescription.modify // modifyCoroutine 
	0x6b8b0  func HKActiveEnergySample.shortUnitString.getter // getter 
	0x6b8f0  func HKActiveEnergySample.shortUnitString.setter // setter 
	0x6b930  func HKActiveEnergySample.shortUnitString.modify // modifyCoroutine 
	0x6b960  func HKActiveEnergySample.longUnitString.getter // getter 
	0x6b9a0  func HKActiveEnergySample.longUnitString.setter // setter 
	0x6b9e0  func HKActiveEnergySample.longUnitString.modify // modifyCoroutine 
	0x6c0d0  func HKActiveEnergySample.dateRange.getter // getter 
	0x6c120  func HKActiveEnergySample.dateRange.setter // setter 
	0x6c180  func HKActiveEnergySample.dateRange.modify // modifyCoroutine 
	0x6c1c0  class func HKActiveEnergySample.__allocating_init(statistics:) // init 
	0x6c210  class func HKActiveEnergySample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKActiveEnergyMatcher {
 class HealthExperience.SetDefaultFavoritesOperation : AsynchronousOperation {

	// Properties
	let favoritesProvider : FavoritesProvider // +0x30 (0x8)
	let healthStore : HKHealthStore // +0x38 (0x8)
	let precondition : AsyncPrecondition // +0x40 (0x28)
	let timeout : Int // +0x68 (0x8)
	var $__lazy_storage_$_defaultFavoritablesProvider : FavoritablesProvider? // +0x70 (0x28)
	var timeoutWork : DispatchWorkItem? // +0x98 (0x8)

	// ObjC -> Swift bridged methods
	0x6db70  @objc SetDefaultFavoritesOperation.main <stripped>
	0x6e1f0  @objc SetDefaultFavoritesOperation.init <stripped>
	0x6e2d0  @objc SetDefaultFavoritesOperation..cxx_destruct <stripped>

	// Swift methods
	0x6d380  func <stripped> // getter 
	0x6d4a0  func <stripped> // getter 
	0x6d8b0  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x6dba0  func <stripped> // method 
 }

 class HealthExperience.HKAnchoredObjectQueryDataSource {
 struct HealthExperience.KeywordFeatureTag {

	// Properties
	var value : Set<String> // +0x0
 }

 struct HealthExperience.CommonIdentifier { }

 struct HealthExperience.FilterIdentifier { }

 struct HealthExperience.TimeScopeIdentifier { }

 class HealthExperience.FeedPopulationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthExperienceStore : HealthExperienceStore
	let childOperationQueue : NSOperationQueue
	let requestCoalesceQueue : OS_dispatch_queue
	let queue : NSOperationQueue
	var relevanceEngineCoordinator : RelevanceEngineCoordinator
	var $__lazy_storage_$_liveFeedsPopulationDebouncer : DebouncedDispatchItem?
	var $__lazy_storage_$_highlightsFeedPopulationDebouncer : DebouncedDispatchItem?
	var trainingAnalyticsCache : Atomic<[ModelTrainingEvent]>

	// Swift methods
	0x75780  func <stripped> // method 
	0x75ba0  func FeedPopulationManager.relevanceEngineCoordinator.getter // getter 
	0x75bd0  class func FeedPopulationManager.__allocating_init(healthExperienceStore:) // init 
	0x76460  func FeedPopulationManager.populateFeed(feedKinds:for:completion:) // method 
	0x77720  func FeedPopulationManager.deleteFeed(feedKinds:completion:) // method 
	0x786e0  func FeedPopulationManager.submitTraining(trainingEvents:store:completion:) // method 
	0x79000  func <stripped> // method 
	0x79d90  func FeedPopulationManager.feedItemSubmissionOccurred(_:) // method 
 }

 class HealthExperience.PopulationOperation : AsynchronousOperation {

	// Properties
	let kinds : [Feed.Kind]
	let populationManager : FeedPopulationManager

	// ObjC -> Swift bridged methods
	0x7ad00  @objc PopulationOperation.main <stripped>
	0x7ad40  @objc PopulationOperation.init <stripped>
	0x7adf0  @objc PopulationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 enum HealthExperience.HealthExperienceStoreCreationError {

	// Properties
	case unrecoverableError  
	case recoverableErrorDeviceLocked  
 }

 class HealthExperience.HealthExperienceStoreModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HealthExperienceStoreFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var healthStore : HKHealthStore // +0x10 (0x8)
	var favoritesProvider : FavoritesProvider // +0x18 (0x8)
	var environment : FeedItemContextEnvironment // +0x20 (0x20)
	var boundingRange : DateInterval // +0x11aed (0x0)
	let storageContext : NSManagedObjectContext // +0x0 (0x8)
	let pluginInfo : PluginInfo // +0x2 (0x28)
	var hasOperationCompleted : Bool? // +0x143550 (0x1)

	// Swift methods
	0x82cb0  func HealthExperienceStoreFeedItemContext.healthStore.getter // getter 
	0x82d70  func HealthExperienceStoreFeedItemContext.favoritesProvider.getter // getter 
	0x82e90  func HealthExperienceStoreFeedItemContext.environment.getter // getter 
	0x83030  func HealthExperienceStoreFeedItemContext.boundingRange.getter // getter 
	0x83080  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x83320  func HealthExperienceStoreFeedItemContext.pluginData.getter // getter 
	0x83800  func HealthExperienceStoreFeedItemContext.commit(_:) // method 
	0x84ae0  func <stripped> // method 
	0x869a0  func <stripped> // method 
	0x87300  func <stripped> // method 
 }

 struct HealthExperience.ArrayDataSourceSection {

	// Properties
	let title : String? // +0x0
	var arrangedItems : [SectionedDataSourceItem] // +0x10
	var identifier : String // +0x18
 }

 enum HealthExperience.FeedItemTimeScope {

	// Properties
	case hour  
	case day  
	case week  
	case month  
	case year  
 }

 struct HealthExperience.TimeScopeFeatureTag {

	// Properties
	let value : FeedItemTimeScope // +0x0
 }

 class HealthExperience.HKBloodPressureSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	var dateRange : DateInterval
	var underlyingSystolic : UnderlyingKitType
	var underlyingDiastolic : UnderlyingKitType
	var $__lazy_storage_$_systolic : Double?
	var $__lazy_storage_$_diastolic : Double?

	// Swift methods
	0x8c410  func HKBloodPressureSample.shortUnitString.getter // getter 
	0x8c450  func HKBloodPressureSample.shortUnitString.setter // setter 
	0x8c490  func HKBloodPressureSample.shortUnitString.modify // modifyCoroutine 
	0x8c4c0  func HKBloodPressureSample.longUnitString.getter // getter 
	0x8c500  func HKBloodPressureSample.longUnitString.setter // setter 
	0x8c540  func HKBloodPressureSample.longUnitString.modify // modifyCoroutine 
	0x8caa0  func HKBloodPressureSample.dateRange.getter // getter 
	0x8caf0  func HKBloodPressureSample.dateRange.setter // setter 
	0x8cb50  func HKBloodPressureSample.dateRange.modify // modifyCoroutine 
	0x8cb90  func HKBloodPressureSample.systolic.getter // getter 
	0x8cd40  func HKBloodPressureSample.systolic.setter // setter 
	0x8cd60  func HKBloodPressureSample.systolic.modify // modifyCoroutine 
	0x8cde0  func HKBloodPressureSample.diastolic.getter // getter 
	0x8cfd0  func HKBloodPressureSample.diastolic.setter // setter 
	0x8cff0  func HKBloodPressureSample.diastolic.modify // modifyCoroutine 
	0x8d050  class func HKBloodPressureSample.__allocating_init(sample:) // init 
	0x8d080  class func HKBloodPressureSample.__allocating_init(statistics:) // init 
	0x8c370  class func HKBloodPressureSample.__allocating_init(systolic:diastolic:) // init 
	0x8f720  func HKBloodPressureSample.smallDescriptionString() // method 
	0x8d110  func HKBloodPressureSample.longDescriptionString() // method 
 }

 class HealthExperience.HKBloodPressureSampleMatcher : AggregateMatcher {
	// Swift methods
	0x8d840  func HKBloodPressureSampleMatcher.dataSource(healthStore:) // method 
 }

 struct HealthExperience.DateRangeFeatureTag {

	// Properties
	let value : RelevantDateInterval?
 }

 enum HealthExperience.FavoritesChangeLocation {

	// Properties
	case none  
	case editFavorites  
	case dataTypeDetailRoom  
 }

 enum HealthExperience.SearchMode {

	// Properties
	case browse  
	case search  
 }

 enum HealthExperience.SearchSection {

	// Properties
	case data  
	case healthRecords  
	case highlights  
	case categories  
	case healthRecordsCategories  
	case healthRecordsAccounts  
	case healthRecordsCDAs  
	case healthRecordsUnreadableData  
	case noData  
	case other  
 }

 class HealthExperience.SaveManagedObjectContextOperation : AsyncOperation {

	// Properties
	let context : NSManagedObjectContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x96090  @objc SaveManagedObjectContextOperation.main <stripped>
	0x961c0  @objc SaveManagedObjectContextOperation.init <stripped>
	0x96260  @objc SaveManagedObjectContextOperation..cxx_destruct <stripped>

	// Swift methods
	0x95ba0  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.HKStatisticsCollectionQueryDataSource {
 enum HealthExperience.Result {

	// Properties
	case success : A
	case failure : Error
 }

 class HealthExperience.AsynchronousBlockOperation : AsynchronousOperation {

	// Properties
	let workBlock : AsynchronousBlockOperation // +0x30 (0x10)
	let debugIdentifier : String? // +0x40 (0x10)

	// ObjC -> Swift bridged methods
	0x999b0  @objc AsynchronousBlockOperation.main <stripped>
	0x99a10  @objc AsynchronousBlockOperation.debugDescription <stripped>
	0x99c80  @objc AsynchronousBlockOperation.init <stripped>
	0x99d30  @objc AsynchronousBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x99770  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
 }

 struct HealthExperience.PluginFeedItem {

	// Properties
	var uniqueIdentifier : String
	var userInterface : UserInterface
	var userData : Data?
	var dateSubmitted : Date
	var relevantDateInterval : RelevantDateInterval?
	var isFavorite : Bool?
	var contentKind : ContentKind
	var associatedHKTypes : Set<HKObjectType>
	var featureTags : [String : Data]
	var keywords : Set<String>
	var localizedTitle : String?
	var localizedDescription : String?
	var sortHint : Int
	var searchSectionHint : SearchSection?
	var indexForSearch : Bool
	var hideInDiscover : Bool?
 }

 enum HealthExperience.UserInterface {

	// Properties
	case storyboardIdentifier : String
	case viewControllerClassName : String
 }

 class HealthExperience.RunLoopObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var useMockUnitTestCompletion : Bool // +0x10 (0x1)
	var $__lazy_storage_$_mockCompletion : ()? // +0x18 (0x10)
	var mainRunLoopObserver : CFRunLoopObserverRef? // +0x28 (0x8)
	var observerDelegate : RunLoopObserving // +0x30 (0x10)

	// Swift methods
 }

 struct HealthExperience.CompoundAsyncPrecondition: AsyncPrecondition {

	// Properties
	let asyncPreconditions : AsyncPrecondition // +0x0
 }

 class HealthExperience.UserDefaultsQueryPrecondition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let userDefaults : WDUserDefaults
	let key : String
	let shouldProceedIfNoValue : Bool
	let evaluate : (_:)

	// Swift methods
	0xa1030  func <stripped> // method 
 }

 class HealthExperience.HasUpgradedFavoritesPrecondition : UserDefaultsQueryPrecondition {
	// Swift methods
 }

 class HealthExperience.HasNotChangedFavoritesPrecondition : UserDefaultsQueryPrecondition {
	// Swift methods
 }

 class HealthExperience.HasNoFavoritesPrecondition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let favoritesProvider : FavoritesProvider
	var preconditionCompletion : (_:)?

	// Swift methods
	0xa1940  func <stripped> // method 
 }

 struct HealthExperience.ModelTrainingScenario {

	// Properties
	let commands : ModelTrainingCommand // +0x0
	let data : ModelTrainingElement // +0x8
 }

 struct HealthExperience.ModelTrainingCommand {

	// Properties
	let type : Kind
	let id : String?
	let date : Date?
 }

 enum HealthExperience.Kind {

	// Properties
	case tap  
	case setDate  
 }

 struct HealthExperience.ModelTrainingElement {

	// Properties
	let associatedHKTypesRaw : [Int]?
	let contentKind : ContentKind
	let completeness : Double?
	let dataVisualizationKind : DataVisualizationKind?
	let relevantDateInterval : RelevantDateInterval?
	let dateSubmitted : Date
	let keywords : [String]?
	let magnitude : Double?
	let prominence : FeedItemProminence?
	let timeScope : FeedItemTimeScope?
	let uniqueIdentifier : String
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case associatedHKTypesRaw  
	case contentKind  
	case completeness  
	case dataVisualizationKind  
	case relevantDateInterval  
	case dateSubmitted  
	case keywords  
	case magnitude  
	case prominence  
	case timeScope  
	case uniqueIdentifier  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case type  
	case id  
	case date  
 }

 enum HealthExperience.ModelTrainingScenarioError {

	// Properties
	case unsupportedInput : String
	case missingCommandIDs : [String]
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case commands  
	case data  
 }

 class HealthExperience.HKBloodGlucoseSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0420  func HKBloodGlucoseSample.shortUnitString.getter // getter 
	0xc1160  func HKBloodGlucoseSample.shortUnitString.setter // setter 
	0xa9b60  func HKBloodGlucoseSample.shortUnitString.modify // modifyCoroutine 
	0xc0430  func HKBloodGlucoseSample.longUnitString.getter // getter 
	0xc1170  func HKBloodGlucoseSample.longUnitString.setter // setter 
	0xa9b90  func HKBloodGlucoseSample.longUnitString.modify // modifyCoroutine 
	0xaa040  func HKBloodGlucoseSample.dateRange.getter // getter 
	0xaa060  func HKBloodGlucoseSample.dateRange.setter // setter 
	0xaa080  func HKBloodGlucoseSample.dateRange.modify // modifyCoroutine 
	0xaa0c0  class func HKBloodGlucoseSample.__allocating_init(statistics:) // init 
	0xaa130  class func HKBloodGlucoseSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0460  func HKBodyMassIndex.shortUnitString.getter // getter 
	0xc11a0  func HKBodyMassIndex.shortUnitString.setter // setter 
	0xaa560  func HKBodyMassIndex.shortUnitString.modify // modifyCoroutine 
	0xc0470  func HKBodyMassIndex.longUnitString.getter // getter 
	0xc11b0  func HKBodyMassIndex.longUnitString.setter // setter 
	0xaa590  func HKBodyMassIndex.longUnitString.modify // modifyCoroutine 
	0xaaa40  func HKBodyMassIndex.dateRange.getter // getter 
	0xaaa60  func HKBodyMassIndex.dateRange.setter // setter 
	0xaaa80  func HKBodyMassIndex.dateRange.modify // modifyCoroutine 
	0xaaac0  class func HKBodyMassIndex.__allocating_init(statistics:) // init 
	0xaab10  class func HKBodyMassIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0440  func HKBodyFatPercentage.shortUnitString.getter // getter 
	0xc1180  func HKBodyFatPercentage.shortUnitString.setter // setter 
	0xaae60  func HKBodyFatPercentage.shortUnitString.modify // modifyCoroutine 
	0xc0450  func HKBodyFatPercentage.longUnitString.getter // getter 
	0xc1190  func HKBodyFatPercentage.longUnitString.setter // setter 
	0xaae90  func HKBodyFatPercentage.longUnitString.modify // modifyCoroutine 
	0xab340  func HKBodyFatPercentage.dateRange.getter // getter 
	0xab360  func HKBodyFatPercentage.dateRange.setter // setter 
	0xab380  func HKBodyFatPercentage.dateRange.modify // modifyCoroutine 
	0xab3c0  class func HKBodyFatPercentage.__allocating_init(statistics:) // init 
	0xab410  class func HKBodyFatPercentage.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyHeight : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc04e0  func HKBodyHeight.shortUnitString.getter // getter 
	0xc1220  func HKBodyHeight.shortUnitString.setter // setter 
	0xab780  func HKBodyHeight.shortUnitString.modify // modifyCoroutine 
	0xc04f0  func HKBodyHeight.longUnitString.getter // getter 
	0xc1230  func HKBodyHeight.longUnitString.setter // setter 
	0xab7b0  func HKBodyHeight.longUnitString.modify // modifyCoroutine 
	0xabc40  func HKBodyHeight.dateRange.getter // getter 
	0xabc60  func HKBodyHeight.dateRange.setter // setter 
	0xabc80  func HKBodyHeight.dateRange.modify // modifyCoroutine 
	0xabcc0  class func HKBodyHeight.__allocating_init(statistics:) // init 
	0xabd10  class func HKBodyHeight.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKWaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0480  func HKWaistCircumference.shortUnitString.getter // getter 
	0xc11c0  func HKWaistCircumference.shortUnitString.setter // setter 
	0xac060  func HKWaistCircumference.shortUnitString.modify // modifyCoroutine 
	0xc0490  func HKWaistCircumference.longUnitString.getter // getter 
	0xc11d0  func HKWaistCircumference.longUnitString.setter // setter 
	0xac090  func HKWaistCircumference.longUnitString.modify // modifyCoroutine 
	0xac520  func HKWaistCircumference.dateRange.getter // getter 
	0xac540  func HKWaistCircumference.dateRange.setter // setter 
	0xac560  func HKWaistCircumference.dateRange.modify // modifyCoroutine 
	0xac5a0  class func HKWaistCircumference.__allocating_init(statistics:) // init 
	0xac5f0  class func HKWaistCircumference.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKVO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc04a0  func HKVO2Max.shortUnitString.getter // getter 
	0xc11e0  func HKVO2Max.shortUnitString.setter // setter 
	0xac960  func HKVO2Max.shortUnitString.modify // modifyCoroutine 
	0xc04b0  func HKVO2Max.longUnitString.getter // getter 
	0xc11f0  func HKVO2Max.longUnitString.setter // setter 
	0xac990  func HKVO2Max.longUnitString.modify // modifyCoroutine 
	0xace40  func HKVO2Max.dateRange.getter // getter 
	0xace60  func HKVO2Max.dateRange.setter // setter 
	0xace80  func HKVO2Max.dateRange.modify // modifyCoroutine 
	0xacec0  class func HKVO2Max.__allocating_init(statistics:) // init 
	0xacf10  class func HKVO2Max.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKLeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc04c0  func HKLeanBodyMass.shortUnitString.getter // getter 
	0xc1200  func HKLeanBodyMass.shortUnitString.setter // setter 
	0xad260  func HKLeanBodyMass.shortUnitString.modify // modifyCoroutine 
	0xc04d0  func HKLeanBodyMass.longUnitString.getter // getter 
	0xc1210  func HKLeanBodyMass.longUnitString.setter // setter 
	0xad290  func HKLeanBodyMass.longUnitString.modify // modifyCoroutine 
	0xad720  func HKLeanBodyMass.dateRange.getter // getter 
	0xad740  func HKLeanBodyMass.dateRange.setter // setter 
	0xad760  func HKLeanBodyMass.dateRange.modify // modifyCoroutine 
	0xad7a0  class func HKLeanBodyMass.__allocating_init(statistics:) // init 
	0xad7f0  class func HKLeanBodyMass.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xadb40  func HKHeartRate.shortUnitString.getter // getter 
	0xadb80  func HKHeartRate.shortUnitString.setter // setter 
	0xadbc0  func HKHeartRate.shortUnitString.modify // modifyCoroutine 
	0xadbf0  func HKHeartRate.longUnitString.getter // getter 
	0xadc30  func HKHeartRate.longUnitString.setter // setter 
	0xadc70  func HKHeartRate.longUnitString.modify // modifyCoroutine 
	0xae160  func HKHeartRate.dateRange.getter // getter 
	0xae180  func HKHeartRate.dateRange.setter // setter 
	0xae1a0  func HKHeartRate.dateRange.modify // modifyCoroutine 
	0xae1e0  class func HKHeartRate.__allocating_init(statistics:) // init 
	0xae230  class func HKHeartRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDistanceWalkingRunning : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0500  func HKDistanceWalkingRunning.shortUnitString.getter // getter 
	0xc1240  func HKDistanceWalkingRunning.shortUnitString.setter // setter 
	0xae630  func HKDistanceWalkingRunning.shortUnitString.modify // modifyCoroutine 
	0xc0510  func HKDistanceWalkingRunning.longUnitString.getter // getter 
	0xc1250  func HKDistanceWalkingRunning.longUnitString.setter // setter 
	0xae660  func HKDistanceWalkingRunning.longUnitString.modify // modifyCoroutine 
	0xaeaf0  func HKDistanceWalkingRunning.dateRange.getter // getter 
	0xaeb10  func HKDistanceWalkingRunning.dateRange.setter // setter 
	0xaeb30  func HKDistanceWalkingRunning.dateRange.modify // modifyCoroutine 
	0xaeb70  class func HKDistanceWalkingRunning.__allocating_init(statistics:) // init 
	0xaebc0  class func HKDistanceWalkingRunning.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKFlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0520  func HKFlightsClimbed.shortUnitString.getter // getter 
	0xc1260  func HKFlightsClimbed.shortUnitString.setter // setter 
	0xaef30  func HKFlightsClimbed.shortUnitString.modify // modifyCoroutine 
	0xc0530  func HKFlightsClimbed.longUnitString.getter // getter 
	0xc1270  func HKFlightsClimbed.longUnitString.setter // setter 
	0xaef60  func HKFlightsClimbed.longUnitString.modify // modifyCoroutine 
	0xaf410  func HKFlightsClimbed.dateRange.getter // getter 
	0xaf430  func HKFlightsClimbed.dateRange.setter // setter 
	0xaf450  func HKFlightsClimbed.dateRange.modify // modifyCoroutine 
	0xaf490  class func HKFlightsClimbed.__allocating_init(statistics:) // init 
	0xaf4e0  class func HKFlightsClimbed.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0540  func HKOxygenSaturation.shortUnitString.getter // getter 
	0xc1280  func HKOxygenSaturation.shortUnitString.setter // setter 
	0xaf850  func HKOxygenSaturation.shortUnitString.modify // modifyCoroutine 
	0xc0550  func HKOxygenSaturation.longUnitString.getter // getter 
	0xc1290  func HKOxygenSaturation.longUnitString.setter // setter 
	0xaf880  func HKOxygenSaturation.longUnitString.modify // modifyCoroutine 
	0xafd10  func HKOxygenSaturation.dateRange.getter // getter 
	0xafd30  func HKOxygenSaturation.dateRange.setter // setter 
	0xafd50  func HKOxygenSaturation.dateRange.modify // modifyCoroutine 
	0xafd90  class func HKOxygenSaturation.__allocating_init(statistics:) // init 
	0xafde0  class func HKOxygenSaturation.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0560  func HKBloodAlcoholContent.shortUnitString.getter // getter 
	0xc12a0  func HKBloodAlcoholContent.shortUnitString.setter // setter 
	0xb0150  func HKBloodAlcoholContent.shortUnitString.modify // modifyCoroutine 
	0xc0570  func HKBloodAlcoholContent.longUnitString.getter // getter 
	0xc12b0  func HKBloodAlcoholContent.longUnitString.setter // setter 
	0xb0180  func HKBloodAlcoholContent.longUnitString.modify // modifyCoroutine 
	0xb0610  func HKBloodAlcoholContent.dateRange.getter // getter 
	0xb0630  func HKBloodAlcoholContent.dateRange.setter // setter 
	0xb0650  func HKBloodAlcoholContent.dateRange.modify // modifyCoroutine 
	0xb0690  class func HKBloodAlcoholContent.__allocating_init(statistics:) // init 
	0xb06e0  class func HKBloodAlcoholContent.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0580  func HKForcedVitalCapacity.shortUnitString.getter // getter 
	0xc12c0  func HKForcedVitalCapacity.shortUnitString.setter // setter 
	0xb0a50  func HKForcedVitalCapacity.shortUnitString.modify // modifyCoroutine 
	0xc0590  func HKForcedVitalCapacity.longUnitString.getter // getter 
	0xc12d0  func HKForcedVitalCapacity.longUnitString.setter // setter 
	0xb0a80  func HKForcedVitalCapacity.longUnitString.modify // modifyCoroutine 
	0xb0f10  func HKForcedVitalCapacity.dateRange.getter // getter 
	0xb0f30  func HKForcedVitalCapacity.dateRange.setter // setter 
	0xb0f50  func HKForcedVitalCapacity.dateRange.modify // modifyCoroutine 
	0xb0f90  class func HKForcedVitalCapacity.__allocating_init(statistics:) // init 
	0xb0fe0  class func HKForcedVitalCapacity.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedExpiratoryVolume : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc05a0  func HKForcedExpiratoryVolume.shortUnitString.getter // getter 
	0xc12e0  func HKForcedExpiratoryVolume.shortUnitString.setter // setter 
	0xb1350  func HKForcedExpiratoryVolume.shortUnitString.modify // modifyCoroutine 
	0xc05b0  func HKForcedExpiratoryVolume.longUnitString.getter // getter 
	0xc12f0  func HKForcedExpiratoryVolume.longUnitString.setter // setter 
	0xb1380  func HKForcedExpiratoryVolume.longUnitString.modify // modifyCoroutine 
	0xb1810  func HKForcedExpiratoryVolume.dateRange.getter // getter 
	0xb1830  func HKForcedExpiratoryVolume.dateRange.setter // setter 
	0xb1850  func HKForcedExpiratoryVolume.dateRange.modify // modifyCoroutine 
	0xb1890  class func HKForcedExpiratoryVolume.__allocating_init(statistics:) // init 
	0xb18e0  class func HKForcedExpiratoryVolume.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc05c0  func HKPeakExpiratoryFlowRate.shortUnitString.getter // getter 
	0xc1300  func HKPeakExpiratoryFlowRate.shortUnitString.setter // setter 
	0xb1c50  func HKPeakExpiratoryFlowRate.shortUnitString.modify // modifyCoroutine 
	0xc05d0  func HKPeakExpiratoryFlowRate.longUnitString.getter // getter 
	0xc1310  func HKPeakExpiratoryFlowRate.longUnitString.setter // setter 
	0xb1c80  func HKPeakExpiratoryFlowRate.longUnitString.modify // modifyCoroutine 
	0xb2130  func HKPeakExpiratoryFlowRate.dateRange.getter // getter 
	0xb2150  func HKPeakExpiratoryFlowRate.dateRange.setter // setter 
	0xb2170  func HKPeakExpiratoryFlowRate.dateRange.modify // modifyCoroutine 
	0xb21b0  class func HKPeakExpiratoryFlowRate.__allocating_init(statistics:) // init 
	0xb2200  class func HKPeakExpiratoryFlowRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc05e0  func HKPeripheralPerfusionIndex.shortUnitString.getter // getter 
	0xc1320  func HKPeripheralPerfusionIndex.shortUnitString.setter // setter 
	0xb2570  func HKPeripheralPerfusionIndex.shortUnitString.modify // modifyCoroutine 
	0xc05f0  func HKPeripheralPerfusionIndex.longUnitString.getter // getter 
	0xc1330  func HKPeripheralPerfusionIndex.longUnitString.setter // setter 
	0xb25a0  func HKPeripheralPerfusionIndex.longUnitString.modify // modifyCoroutine 
	0xb2a30  func HKPeripheralPerfusionIndex.dateRange.getter // getter 
	0xb2a50  func HKPeripheralPerfusionIndex.dateRange.setter // setter 
	0xb2a70  func HKPeripheralPerfusionIndex.dateRange.modify // modifyCoroutine 
	0xb2ab0  class func HKPeripheralPerfusionIndex.__allocating_init(statistics:) // init 
	0xb2b00  class func HKPeripheralPerfusionIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0600  func HKDietaryFatTotal.shortUnitString.getter // getter 
	0xc1340  func HKDietaryFatTotal.shortUnitString.setter // setter 
	0xb2e70  func HKDietaryFatTotal.shortUnitString.modify // modifyCoroutine 
	0xc0610  func HKDietaryFatTotal.longUnitString.getter // getter 
	0xc1350  func HKDietaryFatTotal.longUnitString.setter // setter 
	0xb2ea0  func HKDietaryFatTotal.longUnitString.modify // modifyCoroutine 
	0xb3330  func HKDietaryFatTotal.dateRange.getter // getter 
	0xb3350  func HKDietaryFatTotal.dateRange.setter // setter 
	0xb3370  func HKDietaryFatTotal.dateRange.modify // modifyCoroutine 
	0xb33b0  class func HKDietaryFatTotal.__allocating_init(statistics:) // init 
	0xb3400  class func HKDietaryFatTotal.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0620  func HKDietaryFatPolyunsaturated.shortUnitString.getter // getter 
	0xc1360  func HKDietaryFatPolyunsaturated.shortUnitString.setter // setter 
	0xb3770  func HKDietaryFatPolyunsaturated.shortUnitString.modify // modifyCoroutine 
	0xc0630  func HKDietaryFatPolyunsaturated.longUnitString.getter // getter 
	0xc1370  func HKDietaryFatPolyunsaturated.longUnitString.setter // setter 
	0xb37a0  func HKDietaryFatPolyunsaturated.longUnitString.modify // modifyCoroutine 
	0xb3c30  func HKDietaryFatPolyunsaturated.dateRange.getter // getter 
	0xb3c50  func HKDietaryFatPolyunsaturated.dateRange.setter // setter 
	0xb3c70  func HKDietaryFatPolyunsaturated.dateRange.modify // modifyCoroutine 
	0xb3cb0  class func HKDietaryFatPolyunsaturated.__allocating_init(statistics:) // init 
	0xb3d00  class func HKDietaryFatPolyunsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0640  func HKDietaryFatMonounsaturated.shortUnitString.getter // getter 
	0xc1380  func HKDietaryFatMonounsaturated.shortUnitString.setter // setter 
	0xb4070  func HKDietaryFatMonounsaturated.shortUnitString.modify // modifyCoroutine 
	0xc0650  func HKDietaryFatMonounsaturated.longUnitString.getter // getter 
	0xc1390  func HKDietaryFatMonounsaturated.longUnitString.setter // setter 
	0xb40a0  func HKDietaryFatMonounsaturated.longUnitString.modify // modifyCoroutine 
	0xb4530  func HKDietaryFatMonounsaturated.dateRange.getter // getter 
	0xb4550  func HKDietaryFatMonounsaturated.dateRange.setter // setter 
	0xb4570  func HKDietaryFatMonounsaturated.dateRange.modify // modifyCoroutine 
	0xb45b0  class func HKDietaryFatMonounsaturated.__allocating_init(statistics:) // init 
	0xb4600  class func HKDietaryFatMonounsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0660  func HKDietaryFatSaturated.shortUnitString.getter // getter 
	0xc13a0  func HKDietaryFatSaturated.shortUnitString.setter // setter 
	0xb4970  func HKDietaryFatSaturated.shortUnitString.modify // modifyCoroutine 
	0xc0670  func HKDietaryFatSaturated.longUnitString.getter // getter 
	0xc13b0  func HKDietaryFatSaturated.longUnitString.setter // setter 
	0xb49a0  func HKDietaryFatSaturated.longUnitString.modify // modifyCoroutine 
	0xb4e30  func HKDietaryFatSaturated.dateRange.getter // getter 
	0xb4e50  func HKDietaryFatSaturated.dateRange.setter // setter 
	0xb4e70  func HKDietaryFatSaturated.dateRange.modify // modifyCoroutine 
	0xb4eb0  class func HKDietaryFatSaturated.__allocating_init(statistics:) // init 
	0xb4f00  class func HKDietaryFatSaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xc0680  func HKDietaryCholesterol.shortUnitString.getter // getter 
	0xc13c0  func HKDietaryCholesterol.shortUnitString.setter // setter 
	0xb5270  func HKDietaryCholesterol.shortUnitString.modify // modifyCoroutine 
	0xc0690  func HKDietaryCholesterol.longUnitString.getter // getter 
	0xc13d0  func HKDietaryCholesterol.longUnitString.setter // setter 
	0xb52a0  func HKDietaryCholesterol.longUnitString.modify // modifyCoroutine 
	0xb5a30  func HKDietaryCholesterol.dateRange.getter // getter 
	0xb5a50  func HKDietaryCholesterol.dateRange.setter // setter 
	0xb5a70  func HKDietaryCholesterol.dateRange.modify // modifyCoroutine 
	0xb5ab0  class func HKDietaryCholesterol.__allocating_init(statistics:) // init 
	0xb5b00  class func HKDietaryCholesterol.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOvulationTestResultSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueOvulationTestResult
	var dateRange : DateInterval

	// Swift methods
	0xc0170  func HKOvulationTestResultSample.value.getter // getter 
	0xc0190  func HKOvulationTestResultSample.value.setter // setter 
	0xb6030  func HKOvulationTestResultSample.value.modify // modifyCoroutine 
	0xb6230  func HKOvulationTestResultSample.dateRange.getter // getter 
	0xb6250  func HKOvulationTestResultSample.dateRange.setter // setter 
	0xb6270  func HKOvulationTestResultSample.dateRange.modify // modifyCoroutine 
	0xb62b0  class func HKOvulationTestResultSample.__allocating_init(sample:) // init 
	0xb62f0  class func HKOvulationTestResultSample.__allocating_init(categorySample:) // init 
	0xb6330  func HKOvulationTestResultSample.smallDescriptionString() // method 
	0xb63f0  func HKOvulationTestResultSample.longDescriptionString() // method 
 }

 class HealthExperience.HKMenstrualFlowSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueMenstrualFlow
	var dateRange : DateInterval

	// Swift methods
	0xb6710  func HKMenstrualFlowSample.value.getter // getter 
	0xb6740  func HKMenstrualFlowSample.value.setter // setter 
	0xb6770  func HKMenstrualFlowSample.value.modify // modifyCoroutine 
	0xb6910  func HKMenstrualFlowSample.dateRange.getter // getter 
	0xb6980  func HKMenstrualFlowSample.dateRange.setter // setter 
	0xb6a00  func HKMenstrualFlowSample.dateRange.modify // modifyCoroutine 
	0xb6a40  class func HKMenstrualFlowSample.__allocating_init(sample:) // init 
	0xb6a80  class func HKMenstrualFlowSample.__allocating_init(categorySample:) // init 
	0xb6e20  func HKMenstrualFlowSample.smallDescriptionString() // method 
	0xb6ef0  func HKMenstrualFlowSample.longDescriptionString() // method 
 }

 enum HealthExperience.SectionedDataSourceChangeset {

	// Properties
	case insertSection : Int
	case removeSection : Int
	case reloadSection : Int
	case insertItem : IndexPath
	case removeItem : IndexPath
	case moveItem : (from: IndexPath, to: IndexPath)
	case reloadItem : IndexPath
	case initialData  
 }

 class HealthExperience.OperationQueueObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : NSOperationQueue // +0x10 (0x8)
	let lock : UnfairLock // +0x18 (0x8)
	var currentOperations : Set<NSOperation> // +0x20 (0x8)

	// Swift methods
	0xc2ca0  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0xc2d70  func OperationQueueObserver.addOperation(_:) // method 
	0xc2e10  func OperationQueueObserver.addOperations(_:waitUntilFinished:) // method 
	0xc34f0  func OperationQueueObserver.currentOperationsCopy.getter // getter 
	0xc3610  func OperationQueueObserver.operationCount.getter // getter 
	0xc36a0  func OperationQueueObserver.clearObserving() // method 
	0xc3710  func OperationQueueObserver.didComplete(_:) // method 
 }

 class HealthExperience.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xc5ee0  @objc Feed.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 struct HealthExperience.Observable {

	// Properties
	let body : ObservableBody
 }

 class HealthExperience.Promise {
 class HealthExperience.ObservableBody {
 struct HealthExperience.UserDefault {

	// Properties
	let key : String
	let userDefaults : NSUserDefaults
	let fallbackValue : A
	let isAppleInternalOnly : Bool
 }

 class HealthExperience.ArrayDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : weak SectionedDataSourceEventHandler? // +0x10 (0x10)
	var $__lazy_storage_$_debugDescription : String? // +0x20 (0x10)
	var $__lazy_storage_$_identifier : String? // +0x30 (0x10)
	let arrangedSections : [ArrayDataSourceSection] // +0x40 (0x8)

	// Swift methods
	0xc8a70  func ArrayDataSource.eventHandler.getter // getter 
	0xc8aa0  func ArrayDataSource.eventHandler.setter // setter 
	0xc8af0  func ArrayDataSource.eventHandler.modify // modifyCoroutine 
	0xc8bd0  func ArrayDataSource.debugDescription.getter // getter 
	0xc8dc0  func ArrayDataSource.debugDescription.setter // setter 
	0xc8de0  func ArrayDataSource.debugDescription.modify // modifyCoroutine 
	0xc8e80  func ArrayDataSource.identifier.getter // getter 
	0xc9030  func ArrayDataSource.identifier.setter // setter 
	0xc9050  func ArrayDataSource.identifier.modify // modifyCoroutine 
	0xc9160  func ArrayDataSource.numberOfSections.getter // getter 
	0xc9170  func ArrayDataSource.titleForHeader(in:) // method 
	0xc89a0  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0xc9210  func ArrayDataSource.sections.getter // getter 
	0xc9220  func ArrayDataSource.sectionIdentifiers.getter // getter 
	0xc95f0  func ArrayDataSource.numberOfItems(in:) // method 
	0xc9660  func ArrayDataSource.item(at:) // method 
	0xc9870  func ArrayDataSource.reuseIdentifierForItem(at:) // method 
	0xc98d0  func ArrayDataSource.item(for:) // method 
	0xc9ba0  func ArrayDataSource.reuseIdentifierForItem(with:) // method 
	0xc9c20  func ArrayDataSource.itemIdentifiers(in:) // method 
 }

 struct HealthExperience.SecondaryProfileContextFactory { }

 class HealthExperience.HKCervicalMucusQualitySample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueCervicalMucusQuality // +0x10 (0x8)
	var dateRange : DateInterval // +0x0 (0x0)

	// Swift methods
	0xcd630  func HKCervicalMucusQualitySample.value.getter // getter 
	0xcd660  func HKCervicalMucusQualitySample.value.setter // setter 
	0xcd690  func HKCervicalMucusQualitySample.value.modify // modifyCoroutine 
	0xcd8a0  func HKCervicalMucusQualitySample.dateRange.getter // getter 
	0xcd8f0  func HKCervicalMucusQualitySample.dateRange.setter // setter 
	0xcd950  func HKCervicalMucusQualitySample.dateRange.modify // modifyCoroutine 
	0xcd990  class func HKCervicalMucusQualitySample.__allocating_init(sample:) // init 
	0xcd9c0  class func HKCervicalMucusQualitySample.__allocating_init(categorySample:) // init 
	0xcdd20  func HKCervicalMucusQualitySample.smallDescriptionString() // method 
	0xcdde0  func HKCervicalMucusQualitySample.longDescriptionString() // method 
 }

 class HealthExperience.HKCervicalMucusQualitySampleMatcher : Matcher {
	// Swift methods
	0xce5b0  func HKCervicalMucusQualitySampleMatcher.dataSource(healthStore:) // method 
 }

 class HealthExperience.SampleQuery {
 class HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var cloudSyncObserver : HKCloudSyncObserver? // +0x8 (0x8)
	var preconditionCompletion : (_:)? // +0x10 (0x10)
	let healthStore : HKHealthStore // +0x20 (0x8)
	let waitUntilShouldProceed : Bool // +0x28 (0x1)
	var completionQueue : OS_dispatch_queue? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0xcfa80  @objc FirstRestoreNotInProgressPrecondition.dealloc <stripped>
	0xcfbb0  @objc FirstRestoreNotInProgressPrecondition.description <stripped>
	0xcfda0  @objc FirstRestoreNotInProgressPrecondition.init <stripped>
	0xcfaa0  @objc FirstRestoreNotInProgressPrecondition..cxx_destruct <stripped>

	// Swift methods
	0xcf640  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0xcfb00  func FirstRestoreNotInProgressPrecondition.evaluate(_:) // method 
 }

 enum HealthExperience.ForYouSectionKind {

	// Properties
	case highlights  
	case getMoreFromHealth  
	case appsForHealth  
 }

 class HealthExperience.QuantitySampleMatcher {
 struct HealthExperience.ContentMagnitudeFeatureTag {

	// Properties
	let value : Double // +0x0
 }

 struct HealthExperience.NSSecureCodingCodableWrapper {

	// Properties
	let object : A
 }

 enum HealthExperience.NSSecureCodableError {

	// Properties
	case decodingError  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case data  
 }

 class HealthExperience.CategorySampleMatcher {
 class HealthExperience.Plugin : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xd5a00  @objc Plugin.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 enum HealthExperience.FocusConstraint {

	// Properties
	case equal : (predicateString: String, comparisonValue: A)
	case lessThan : (predicateString: String, comparisonValue: A)
	case greaterThan : (predicateString: String, comparisonValue: A)
	case none  
 }

 class HealthExperience.DateRangeRelevanceProvider : RERelevanceProvider /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
	let relevantDateInterval : RelevantDateInterval // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xda5b0  @objc DateRangeRelevanceProvider.init <stripped>
	0xda7d0  @objc DateRangeRelevanceProvider.isEqual: <stripped>
	0xda870  @objc DateRangeRelevanceProvider.hash <stripped>
	0xda910  @objc DateRangeRelevanceProvider.description <stripped>
	0xdaba0  @objc DateRangeRelevanceProvider..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExperience.ComposableAsyncOperation : AsyncOperation {

	// Properties
	var automaticallyDispatchFinishOperation : Bool // +0x18 (0x1)
	var childOperations : [NSOperation] // +0x20 (0x8)
	var currentQueue : weak NSOperationQueue? // +0x28 (0x8)
	var dispatchChildOperationsCalled : Bool // +0x30 (0x1)
	var lock : UnfairLock // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0xdb540  @objc ComposableAsyncOperation.start <stripped>
	0xdbf60  @objc ComposableAsyncOperation.cancel <stripped>
	0xdc0c0  @objc ComposableAsyncOperation.init <stripped>
	0xdc170  @objc ComposableAsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0xdb090  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.getter // getter 
	0xdb0c0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.setter // setter 
	0xdb100  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.modify // modifyCoroutine 
	0xdb150  func ComposableAsyncOperation.childOperations.getter // getter 
	0xdb190  func ComposableAsyncOperation.childOperations.setter // setter 
	0xdb1e0  func ComposableAsyncOperation.childOperations.modify // modifyCoroutine 
	0xdb220  func ComposableAsyncOperation.addChild(_:) // method 
	0xdb570  func ComposableAsyncOperation.dispatchChildOperations() // method 
 }

 class HealthExperience.DisplayType : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : String? // +0x10 (0x10)
	var isHidden : Bool? // +0x20 (0x1)

	// Swift methods
 }

 class HealthExperience.Atomic {
 class HealthExperience.CDA : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.UVExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.VO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ActiveEnergyBurned : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ActivityCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AllergyRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleExerciseTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandHour : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandHourGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AudioExposureEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BasalBodyTemperature : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BasalEnergyBurned : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodGlucose : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodPressure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodPressureDiastolic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodPressureSystolic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyTemperature : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BriskMinuteGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CalorieGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CervicalMucusQuality : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CoachingEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ConditionRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryBiotin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryCaffeine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryCalcium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryCarbohydrates : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryChloride : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryChromium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryCopper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryEnergyConsumed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFiber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFolate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryIodine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryIron : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryMagnesium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryManganese : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryMolybdenum : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryNiacin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPantothenicAcid : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPhosphorus : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPotassium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryProtein : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryRiboflavin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietarySelenium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietarySodium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietarySugar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryThiamin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminA : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminB12 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminB6 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminC : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminD : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminE : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminK : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryWater : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryZinc : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Distance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceCycling : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceDownhillSnowSports : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceSwimming : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceWheelchair : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ElectrodermalActivity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.EnvironmentalAudioExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.FlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Food : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ForcedExpiratoryVolume1 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeadphoneAudioExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartRateVariabilitySDNN : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartStudyEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Height : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HighHeartRateEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ImmunizationRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.InhalerUsage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.InsulinDelivery : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.IntermenstrualBleeding : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.IrregularHeartRhythmEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LabResultRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LowHeartRateEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MedicationRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomAbdominalCramps : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomAcne : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomAppetiteChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomBloating : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomBreastTenderness : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomConstipation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomDiarrhea : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomHeadache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomHotFlashes : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomLowerBackPain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomMoodChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomNausea : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomOvulationPain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomSleepChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualSymptomTiredness : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MindfulSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NikeFuel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NumberOfTimesFallen : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.OvulationTestResult : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.OxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ProcedureRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PushCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.RespiratoryRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.RestingHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SexualActivity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SleepAnalysis : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.StepCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SwimmingStrokeCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ToothbrushingEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.VitalSignRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WalkingHeartRateAverage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WatchActivation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WheelchairUseChange : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WristEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Zeppelin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HealthExperienceStoreOracle : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let notificationCenter : NSNotificationCenter // +0x8 (0x8)
	var notifydObserver : NotifydObserver? // +0x10 (0x8)
	var readyHealthExperienceStore : HealthExperienceStore? // +0x18 (0x28)
	var $__lazy_storage_$_healthExperienceStore : HealthExperienceStore? // +0x40 (0x28)
	var lock : UnfairLock // +0x68 (0x8)

	// ObjC -> Swift bridged methods
	0xe1010  @objc HealthExperienceStoreOracle.init <stripped>
	0xe2090  @objc HealthExperienceStoreOracle..cxx_destruct <stripped>

	// Swift methods
	0xe0750  func HealthExperienceStoreOracle.readyHealthExperienceStore.getter // getter 
	0xe07f0  func HealthExperienceStoreOracle.readyHealthExperienceStore.setter // setter 
	0xe0890  func HealthExperienceStoreOracle.readyHealthExperienceStore.modify // modifyCoroutine 
	0xe08e0  func HealthExperienceStoreOracle.healthExperienceStore.getter // getter 
	0xe0a00  func HealthExperienceStoreOracle.register(observer:) // method 
	0xe1030  func HealthExperienceStoreOracle.attemptToInitilizeStore(shouldListen:) // method 
	0xe1c80  func HealthExperienceStoreOracle.beginListeningToDataAccessChanges() // method 
	0xe1e50  func HealthExperienceStoreOracle.handleUnrecoverableError() // method 
	0xe1ff0  func HealthExperienceStoreOracle.makeHealthExperienceStore() // method 
 }

 enum HealthExperience.UnderlyingKitType {

	// Properties
	case quantity : HKQuantity
	case statistic : HKStatistics
	case notSet  
 }

 class HealthExperience.SectionMappingEventHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let childIndex : Int
	var source : CompoundSectionedDataSource

	// Swift methods
 }

 class HealthExperience.CompoundSectionedDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue
	var childDataSources : [(source: SectionedDataSource, lastSectionCount: Int, eventHandler: SectionedDataSourceEventHandler)]
	var eventHandler : weak SectionedDataSourceEventHandler?
	let changes : Observable<[SectionedDataSourceChangeset]>
	var promise : Promise<[SectionedDataSourceChangeset]>?
	var fullChangeSet : [SectionedDataSourceChangeset]
	var lock : UnfairLock
	var currentRunLoopObserver : RunLoopObserver?
	var identifier : String

	// Swift methods
	0xe3870  func CompoundSectionedDataSource.childDataSources.getter // getter 
	0xe38a0  func CompoundSectionedDataSource.eventHandler.getter // getter 
	0xe38d0  func CompoundSectionedDataSource.eventHandler.setter // setter 
	0xe3920  func CompoundSectionedDataSource.eventHandler.modify // modifyCoroutine 
	0xe3aa0  func CompoundSectionedDataSource.promise.getter // getter 
	0xe3ad0  func CompoundSectionedDataSource.identifier.getter // getter 
	0xe3b10  func CompoundSectionedDataSource.identifier.setter // setter 
	0xe3b50  func CompoundSectionedDataSource.identifier.modify // modifyCoroutine 
	0xe3b90  func CompoundSectionedDataSource.sectionIdentifiers.getter // getter 
	0xe3f70  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0xe4010  func CompoundSectionedDataSource.determineSectionOffset(for:) // method 
	0xe4310  func CompoundSectionedDataSource.handle(change:for:) // method 
 }

 struct HealthExperience.FakeHeaderItem {

	// Properties
	var reuseIdentifier : String // +0x0
 }

 class HealthExperience.HKHealthSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let bundleIdentifier : String

	// Swift methods
	0xec610  class func HKHealthSource.__allocating_init(name:bundleIdentifier:) // init 
 }

 class HealthExperience.HKHealthSourceMatcher : Matcher {

	// Properties
	var objectType : HKObjectType?

	// Swift methods
	0xec920  func HKHealthSourceMatcher.dataSource(healthStore:) // method 
	0xeca30  func HKHealthSourceMatcher.addConstraint(sourcesFor:) // method 
 }

 struct HealthExperience.HKTypesFeatureTag {

	// Properties
	var value : Set<HKObjectType> // +0x0
 }

 class HealthExperience.CancellableProgressList : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : UnfairLock // +0x10 (0x8)
	var list : [NSProgress] // +0x18 (0x8)

	// Swift methods
	0xed100  class func CancellableProgressList.__allocating_init() // init 
	0xed260  func CancellableProgressList.add(_:uuid:) // method 
	0xedc00  func CancellableProgressList.clearProgress(for:) // method 
	0xee990  func CancellableProgressList.cancelAll() // method 
 }

 class HealthExperience.DateRangeRelevanceProviderManager : RERelevanceProviderManager /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
	0xf1150  @objc DateRangeRelevanceProviderManager._valueForProvider:context:feature: <stripped>
	0xf11e0  @objc DateRangeRelevanceProviderManager._valueForProvider:feature: <stripped>
	0xf1210  @objc DateRangeRelevanceProviderManager.initWithQueue: <stripped>
 }

 enum HealthExperience.ContentKind {

	// Properties
	case acknowledgedAlert  
	case alert  
	case app  
	case article  
	case book  
	case category  
	case data  
	case distribution  
	case highlight  
	case highlightSearch  
	case navigation  
	case news  
	case noData  
	case outlier  
	case platformAlert  
	case podcast  
	case promotion  
	case prompt  
	case streak  
	case timehop  
	case trend  
	case update  
 }

 struct HealthExperience.Group {

	// Properties
	let identifier : String // +0x0
	let elements : ContentKind // +0x10
 }

 struct HealthExperience.ContentKindFeatureTag {

	// Properties
	let value : ContentKind // +0x0
 }

 class HealthExperience.BundleFeedItemPluginBundleProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BundleFeedItemGenerationPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bundle : NSBundle
	var bundleIdentifier : String
	var $__lazy_storage_$_principalClass : Swift.AnyObject.Type??

	// Swift methods
	0xf3e20  func BundleFeedItemGenerationPluginInfo.bundle.getter // getter 
	0xf3e50  func BundleFeedItemGenerationPluginInfo.bundle.setter // setter 
	0xf3e90  func BundleFeedItemGenerationPluginInfo.bundle.modify // modifyCoroutine 
	0xf3ec0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.getter // getter 
	0xf3f00  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.setter // setter 
	0xf3f40  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xf3f70  func BundleFeedItemGenerationPluginInfo.principalClass.getter // getter 
	0xf4170  func BundleFeedItemGenerationPluginInfo.principalClass.setter // setter 
	0xf4180  func BundleFeedItemGenerationPluginInfo.principalClass.modify // modifyCoroutine 
	0xf41d0  func BundleFeedItemGenerationPluginInfo.makeFeedItemGenerator(context:) // method 
	0xf4600  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthExperience.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xf50f0  @objc Keyword.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 enum HealthExperience.SectionedDataSourceTransaction {

	// Properties
	case open : (pending: [SectionedDataSourceChangeset])
	case closed  
 }

 class HealthExperience.ManagedProfileConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1055e0  func ManagedProfileConnection.isImproveHealthDataAllowed.getter // getter 
	0x105600  func ManagedProfileConnection.isImproveWheelchairDataAllowed.getter // getter 
	0x1056d0  func ManagedProfileConnection.setImproveHealthData(value:) // method 
	0x1056f0  func ManagedProfileConnection.setImproveWheelchairData(value:) // method 
 }

 struct HealthExperience.HostingCellReusePolicy {

	// Properties
	var policy : Policy // +0x0
 }

 enum HealthExperience.Policy {

	// Properties
	case reusable : (class: Swift.AnyObject.Type, hostedViewReuseIdentifier: String)
	case singleUse : (reuseIdentifier: String)
 }

 class HealthExperience.Focus {
 enum HealthExperience.URLType {

	// Properties
	case pluginURL : PluginURLType
	case researchStudies : String?
	case browse  
	case dataType  
	case medicalID  
 }

 struct HealthExperience.PluginURLType {

	// Properties
	let rawValue : String // +0x0
 }

 struct HealthExperience.AppURLRouting { }

 struct HealthExperience.NoveltyFeatureTag {

	// Properties
	let value : String // +0x0
 }

 class HealthExperience.HKStepsSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	var underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0x1091a0  func HKStepsSample.shortUnitString.getter // getter 
	0x1091e0  func HKStepsSample.shortUnitString.setter // setter 
	0x109220  func HKStepsSample.shortUnitString.modify // modifyCoroutine 
	0x109250  func HKStepsSample.longUnitString.getter // getter 
	0x109290  func HKStepsSample.longUnitString.setter // setter 
	0x1092d0  func HKStepsSample.longUnitString.modify // modifyCoroutine 
	0x109300  func HKStepsSample.underlyingType.getter // getter 
	0x109340  func HKStepsSample.underlyingType.setter // setter 
	0x109380  func HKStepsSample.underlyingType.modify // modifyCoroutine 
	0x109a20  func HKStepsSample.dateRange.getter // getter 
	0x109a70  func HKStepsSample.dateRange.setter // setter 
	0x109ad0  func HKStepsSample.dateRange.modify // modifyCoroutine 
	0x109b10  class func HKStepsSample.__allocating_init(statistics:) // init 
	0x109b80  class func HKStepsSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKStepsSampleMatcher {
 class HealthExperience.PopulateFeedFromRelevanceEngineOperation : AsyncOperation {

	// Properties
	let context : NSManagedObjectContext // +0x18 (0x8)
	let feedKind : Feed.Kind // +0x20 (0x1)
	let dateRange : DateInterval // +0x17d000 (0x0)
	var engineCoordinator : RelevanceEngineCoordinator // +0x54534e4f (0x8)

	// ObjC -> Swift bridged methods
	0x10e1b0  @objc PopulateFeedFromRelevanceEngineOperation.main <stripped>
	0x1113c0  @objc PopulateFeedFromRelevanceEngineOperation.init <stripped>
	0x111480  @objc PopulateFeedFromRelevanceEngineOperation..cxx_destruct <stripped>

	// Swift methods
	0x10d5c0  class func PopulateFeedFromRelevanceEngineOperation.__allocating_init(context:engineCoordinator:feedKind:dateRange:) // init 
	0x10e1e0  func <stripped> // method 
	0x10feb0  func <stripped> // method 
 }

 struct HealthExperience.ShowAllHighlightsDataSourceItem { }

 class HealthExperience.DataType : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x11d860  @objc DataType.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.ResumeRelevanceEngineIfNeededOperation : AsyncOperation {

	// Properties
	let relevanceEngine : RERelevanceEngine // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11e050  @objc ResumeRelevanceEngineIfNeededOperation.main <stripped>
	0x11e110  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance: <stripped>
	0x11e220  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance: <stripped>
	0x11e2b0  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:performBatchUpdateBlock:completion: <stripped>
	0x11e360  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didReloadElement:atPath: <stripped>
	0x11e360  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didRemoveElement:atPath: <stripped>
	0x11e360  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didInsertElement:atPath: <stripped>
	0x11e380  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didMoveElement:fromPath:toPath: <stripped>
	0x11e3a0  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:isElementAtPathVisible: <stripped>
	0x11e410  @objc ResumeRelevanceEngineIfNeededOperation.init <stripped>
	0x11e4b0  @objc ResumeRelevanceEngineIfNeededOperation..cxx_destruct <stripped>

	// Swift methods
	0x11e080  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance(_:) // method 
	0x11e1d0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance(_:) // method 
	0x11e2a0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:performBatchUpdate:completion:) // method 
	0x11e330  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didReload:at:) // method 
	0x11e340  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didRemove:at:) // method 
	0x11e350  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didInsert:at:) // method 
	0x11e370  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didMove:from:to:) // method 
	0x11e390  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:isElementAtPathVisible:) // method 
 }

 enum HealthExperience.SummarySectionIdentifier {

	// Properties
	case baseDay  
	case lastWeek  
	case lastMonth  
	case lastYear  
	case older  
	case noDate  
	case noData  
 }

 struct HealthExperience.SummarySection {

	// Properties
	let date : Date
	let identifier : SummarySectionIdentifier
 }

 struct HealthExperience.SummarySectionDateRange {

	// Properties
	let interval : DateInterval?
	let identifier : SummarySectionIdentifier
 }

 class HealthExperience.PrimarySecondaryDataSource {
 class HealthExperience.SectionedDataSourceCallbackEventHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let callback : (_:_:) // +0x10 (0x10)

	// Swift methods
 }

 class HealthExperience.FeedItemGeneratorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let availablePlugins : [FeedItemGenerationPluginInfo] // +0x10 (0x8)
	let store : HealthExperienceStore // +0x18 (0x28)
	let healthStore : HKHealthStore // +0x40 (0x8)
	let favoritesProvider : FavoritesProvider // +0x48 (0x8)

	// Swift methods
	0x124240  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x1244f0  func FeedItemGeneratorManager.run(dateRange:completion:) // method 
	0x125a00  func FeedItemGeneratorManager.startInteractiveGeneration(plugins:cancellationCompletion:) // method 
 }

 class HealthExperience.DiskHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diskHealthExperienceStoreVersionKey : String // +0x10 (0x10)
	let diskHealthExperienceStoreLocaleKey : String // +0x20 (0x10)
	var previousMergeFailed : Bool // +0x30 (0x1)
	var fetchLimit : Int // +0x38 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x40 (0x8)
	var $__lazy_storage_$_allEntities : [NSEntityDescription]? // +0x48 (0x8)
	var persistentHistoryToken : NSPersistentHistoryToken? // +0x50 (0x8)
	var mergeNotificationQueue : OS_dispatch_queue // +0x58 (0x8)
	var $__lazy_storage_$_mergeNotificationDebouncer : DebouncedDispatchItem? // +0x60 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x68 (0x8)

	// Swift methods
	0x127c50  func DiskHealthExperienceStore.isRunningInApplicationProcess.getter // getter 
	0x127e00  func DiskHealthExperienceStore.viewContext.getter // getter 
	0x127fd0  func DiskHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x1280d0  func DiskHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x1280f0  func DiskHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x128140  func DiskHealthExperienceStore.allEntities.getter // getter 
	0x128250  func DiskHealthExperienceStore.allEntities.setter // setter 
	0x128270  func DiskHealthExperienceStore.allEntities.modify // modifyCoroutine 
	0x127ab0  class func DiskHealthExperienceStore.__allocating_init() // init 
	0x1287a0  func DiskHealthExperienceStore.makeStoreLocation() // method 
	0x1289a0  class func static DiskHealthExperienceStore.storeFileURL.getter // getter 
	0x128ae0  func DiskHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x128dc0  func DiskHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x128e40  func DiskHealthExperienceStore.initPersistentContainer() // method 
	0x128fb0  func DiskHealthExperienceStore.persistentContainer.getter // getter 
	0x129190  func DiskHealthExperienceStore.persistentContainer.setter // setter 
	0x1291b0  func DiskHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x129240  func DiskHealthExperienceStore.destroyStoreIfNeededAndMakePersistentContainer() // method 
	0x129480  func DiskHealthExperienceStore.deleteAllObjects() // method 
	0x1294c0  func DiskHealthExperienceStore.delete(_:from:) // method 
	0x12a070  func DiskHealthExperienceStore.makePersistentContainer(retryOnFailure:) // method 
	0x12a110  func DiskHealthExperienceStore.updateStoreMetadataWithLatestVersion(_:) // method 
	0x12ab40  func DiskHealthExperienceStore.unsafeMakePersistentContainer(retryOnFailure:) // method 
	0x12c7a0  func DiskHealthExperienceStore.getStoreState() // method 
 }

 enum HealthExperience.State {

	// Properties
	case ready  
	case missing  
	case needsUpgrade  
	case needsDataWipe  
 }

 enum HealthExperience.FeedItemCreationError {

	// Properties
	case identifierNotFeedItem  
 }

 class HealthExperience.AsyncOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var underlyingState : State // +0x8 (0x1)
	var stateLock : UnfairLock // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x13ae90  @objc AsyncOperation.isExecuting <stripped>
	0x13af20  @objc AsyncOperation.isFinished <stripped>
	0x13aff0  @objc AsyncOperation.isAsynchronous <stripped>
	0x13b060  @objc AsyncOperation.start <stripped>
	0x13b0e0  @objc AsyncOperation.main <stripped>
	0x13b1b0  @objc AsyncOperation.init <stripped>
	0x13b220  @objc AsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0x13a9f0  func AsyncOperation.state.getter // getter 
	0x13aa60  func AsyncOperation.state.setter // setter 
	0x13acb0  func AsyncOperation.state.modify // modifyCoroutine 
	0x13ad60  func AsyncOperation.finish() // method 
 }

 enum HealthExperience.State {

	// Properties
	case ready  
	case executing  
	case finished  
 }

 enum HealthExperience.FeedItemContextEnvironment {

	// Properties
	case userInteractive : (named: String, userData: Data?)
	case background  
	case launch  
 }

 enum HealthExperience.FeedItemContextChange {

	// Properties
	case setPluginData : Data?
	case updateOrCreate : (feedItems: [PluginFeedItem])
	case delete : (feedItems: [String])
	case deleteAllFeedItems  
 }

 enum HealthExperience.FeedItemContextChangeError {

	// Properties
	case unableToSave  
 }

 struct HealthExperience.ModelTrainingEvent {

	// Properties
	let feedItemURL : URL
	let eventKind : EventKind
	let isPositive : Bool
	let date : Date
 }

 enum HealthExperience.EventKind {

	// Properties
	case tap  
	case dwell  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case feedItemURL  
	case eventKind  
	case isPositive  
	case date  
 }

 enum HealthExperience.DailyRoutineKind {

	// Properties
	case morning  
	case evening  
 }

 struct HealthExperience.DailyRoutineFeatureTag {

	// Properties
	let value : DailyRoutineKind // +0x0
 }

 class HealthExperience.NotifydObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationName : NotificationName // +0x0 (0x0)
	var notifyToken : Int32 // +0x10 (0x4)
	var eventHandler : NotifydObserver // +0x18 (0x10)

	// Swift methods
 }

 enum HealthExperience.NotificationName {

	// Properties
	case mobileKeyBagLockStatus  
 }

 enum __C.HKCategoryValueCervicalMucusQuality { }

 enum __C.HKCategoryValueMenstrualFlow { }

 enum __C.HKCategoryValueOvulationTestResult { }

 class __C.CFRunLoopObserver {
 enum __C.HKWheelchairUse { }

 struct __C.HKStatisticsOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.HKCategoryTypeIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.HKQuantityTypeIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.os_unfair_lock_s {

	// Properties
	var _os_unfair_lock_opaque : UInt32
 }

 enum __C._HKDataTypeCode { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct __C.ProgressUserInfoKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.HKDisplayCategoryIdentifier { }

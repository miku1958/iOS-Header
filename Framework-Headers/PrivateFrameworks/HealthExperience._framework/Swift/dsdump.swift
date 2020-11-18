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
	0xa840  @objc EncodedFeatureTag.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.SignalListener : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateDumpSignalSource : OS_dispatch_source_signal // +0x10 (0x8)

	// Swift methods
	0xac60  func SignalListener.sourceNotification() // method 
 }

 class HealthExperience.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PluginInfo {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0xd280  func BasicPluginInfo.bundleIdentifier.getter // getter 
	0xd2c0  func BasicPluginInfo.bundleIdentifier.setter // setter 
	0xd300  func BasicPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xd340  class func BasicPluginInfo.__allocating_init(bundle:) // init 
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
	0x139d0  @objc RelevanceEngineMetricsBlockRecorder.recordTrainingMetrics:forInteraction: <stripped>
	0x13ac0  @objc RelevanceEngineMetricsBlockRecorder.recordPredictionMetrics:forInteraction: <stripped>
	0x13ac0  @objc RelevanceEngineMetricsBlockRecorder.recordCallibrationCurveMetrics:forInteraction: <stripped>
	0x13ad0  @objc RelevanceEngineMetricsBlockRecorder.init <stripped>
	0x13b80  @objc RelevanceEngineMetricsBlockRecorder..cxx_destruct <stripped>

	// Swift methods
	0x137a0  func <stripped> // method 
 }

 class HealthExperience.HKHealthSourceDataSource : MutableArrayDataSource {

	// Properties
	let healthStore : HKHealthStore // +0x50 (0x8)
	var objectType : HKObjectType // +0x58 (0x8)

	// Swift methods
	0x13bf0  func <stripped> // method 
	0x13e90  func <stripped> // method 
	0x14070  func <stripped> // method 
 }

 class HealthExperience.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext? // +0x10 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x18 (0x8)
	var persistentStoreDescription : NSPersistentStoreDescription // +0x20 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x28 (0x8)

	// Swift methods
	0x149e0  func MemoryHealthExperienceStore.viewContext.getter // getter 
	0x14aa0  func MemoryHealthExperienceStore.viewContext.setter // setter 
	0x14ac0  func MemoryHealthExperienceStore.viewContext.modify // modifyCoroutine 
	0x14bc0  func MemoryHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x14cc0  func MemoryHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x14ce0  func MemoryHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x14d30  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x15010  func MemoryHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x15040  func MemoryHealthExperienceStore.persistentStoreDescription.setter // setter 
	0x15080  func MemoryHealthExperienceStore.persistentStoreDescription.modify // modifyCoroutine 
	0x150c0  func MemoryHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x15140  func MemoryHealthExperienceStore.initPersistentContainer() // method 
	0x15170  func MemoryHealthExperienceStore.persistentContainer.getter // getter 
	0x151d0  func MemoryHealthExperienceStore.persistentContainer.setter // setter 
	0x151f0  func MemoryHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x15280  func <stripped> // method 
	0x156f0  func MemoryHealthExperienceStore.deleteAllFeedItems() // method 
 }

 class HealthExperience.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : [BasicPluginInfo] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x16870  @objc PluginBundleProviderPrecacheOperation.main <stripped>
	0x168f0  @objc PluginBundleProviderPrecacheOperation.init <stripped>
	0x16970  @objc PluginBundleProviderPrecacheOperation..cxx_destruct <stripped>

	// Swift methods
	0x161b0  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
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
	0x1b820  @objc HealthExperienceStoreCoreSpotlightOperation.main <stripped>
	0x1b8b0  @objc HealthExperienceStoreCoreSpotlightOperation.init <stripped>
	0x1b950  @objc HealthExperienceStoreCoreSpotlightOperation..cxx_destruct <stripped>

	// Swift methods
	0x1b460  class func HealthExperienceStoreCoreSpotlightOperation.__allocating_init(store:) // init 
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
	0x1cd00  @objc AsynchronousProgressOperation.main <stripped>
	0x1de60  @objc AsynchronousProgressOperation.init <stripped>
	0x1df00  @objc AsynchronousProgressOperation..cxx_destruct <stripped>

	// Swift methods
	0x1c8b0  func AsynchronousProgressOperation.timeout.getter // getter 
	0x1c900  func AsynchronousProgressOperation.timeout.setter // setter 
	0x1c960  func AsynchronousProgressOperation.timeout.modify // modifyCoroutine 
	0x1c9a0  func AsynchronousProgressOperation.operationTimedOut.getter // getter 
	0x1c9d0  func AsynchronousProgressOperation.operationTimedOut.setter // setter 
	0x1ca10  func AsynchronousProgressOperation.operationTimedOut.modify // modifyCoroutine 
	0x1ca60  func AsynchronousProgressOperation.progress.getter // getter 
	0x1caa0  func AsynchronousProgressOperation.progress.setter // setter 
	0x1cb10  func AsynchronousProgressOperation.progress.modify // modifyCoroutine 
	0x1cc10  func AsynchronousProgressOperation.beginWork() // method 
	0x1cc20  func AsynchronousProgressOperation.timeoutOccured() // method 
	0x1d300  func AsynchronousProgressOperation.interceptCancellationHandler() // method 
 }

 struct HealthExperience.TypeLister { }

 class HealthExperience.AsynchronousOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var autoFinishesOnCancel : Bool // +0x8 (0x1)
	let operationState : OperationState // +0x10 (0x8)
	let workLock : UnfairLock // +0x18 (0x8)
	var didBeginWork : ()? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x209f0  @objc AsynchronousOperation.isAsynchronous <stripped>
	0x20a20  @objc AsynchronousOperation.isCancelled <stripped>
	0x20a40  @objc AsynchronousOperation.isExecuting <stripped>
	0x20b40  @objc AsynchronousOperation.isFinished <stripped>
	0x20ed0  @objc AsynchronousOperation.start <stripped>
	0x20f00  @objc AsynchronousOperation.cancel <stripped>
	0x20f60  @objc AsynchronousOperation.main <stripped>
	0x20fc0  @objc AsynchronousOperation.description <stripped>
	0x21300  @objc AsynchronousOperation.init <stripped>
	0x21370  @objc AsynchronousOperation..cxx_destruct <stripped>

	// Swift methods
	0x1f8f0  func AsynchronousOperation.autoFinishesOnCancel.getter // getter 
	0x1f920  func AsynchronousOperation.autoFinishesOnCancel.setter // setter 
	0x1f960  func AsynchronousOperation.autoFinishesOnCancel.modify // modifyCoroutine 
	0x1f9a0  func AsynchronousOperation.performWithExclusiveAccess(_:) // method 
	0x1f9e0  func AsynchronousOperation.performWithExclusiveAccessThenFinish(_:) // method 
	0x20f90  func AsynchronousOperation.cleanUp() // method 
	0x1fb60  func AsynchronousOperation.didBeginWork.getter // getter 
	0x1fbb0  func AsynchronousOperation.didBeginWork.setter // setter 
	0x1fc10  func AsynchronousOperation.didBeginWork.modify // modifyCoroutine 
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
	let intervalComponents : DateComponents // +0x176000 (0x0)
	var statisticsLock : UnfairLock // +0x0 (0x8)
	let systolicType : HKQuantityType // +0x176000 (0x8)
	let diastolicType : HKQuantityType // +0x5 (0x8)
	var systolicQuery : HKStatisticsCollectionQuery? // +0x14 (0x8)
	var diastolicQuery : HKStatisticsCollectionQuery? // +0x65745f5f (0x8)
	var systolicStatisticsCollection : HKStatisticsCollection? // +0x0 (0x8)
	var diastolicStatisticsCollection : HKStatisticsCollection? // +0x45545f5f (0x8)

	// Swift methods
	0x21a20  func <stripped> // method 
	0x21a80  func <stripped> // method 
	0x22740  func <stripped> // method 
	0x22fc0  func <stripped> // method 
 }

 class HealthExperience.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)

	// Swift methods
	0x25120  class func UnfairLock.__allocating_init() // init 
	0x25230  func UnfairLock.lock() // method 
	0x25240  func UnfairLock.unlock() // method 
	0x25250  func UnfairLock.assertOwner() // method 
 }

 class HealthExperience.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x253a0  @objc FeedSection.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25670  @objc HealthExperienceStoreCoreSpotlightDelegate.usePrivateIndex <stripped>
	0x256c0  @objc HealthExperienceStoreCoreSpotlightDelegate.bundleIdentifier <stripped>
	0x25720  @objc HealthExperienceStoreCoreSpotlightDelegate.domainIdentifier <stripped>
	0x25780  @objc HealthExperienceStoreCoreSpotlightDelegate.indexName <stripped>
	0x25800  @objc HealthExperienceStoreCoreSpotlightDelegate.protectionClass <stripped>
	0x25be0  @objc HealthExperienceStoreCoreSpotlightDelegate.attributeSetForObject: <stripped>
	0x25f50  @objc HealthExperienceStoreCoreSpotlightDelegate.initForStoreWithDescription:model: <stripped>
	0x26040  @objc HealthExperienceStoreCoreSpotlightDelegate..cxx_destruct <stripped>
 }

 class HealthExperience.MedicalIDFetchOperation : AsyncOperation {

	// Properties
	var medicalIDData : _HKMedicalIDData? // +0x18 (0x8)
	var fetchError : Error? // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x26740  @objc MedicalIDFetchOperation.main <stripped>
	0x26990  @objc MedicalIDFetchOperation.init <stripped>
	0x26a60  @objc MedicalIDFetchOperation..cxx_destruct <stripped>

	// Swift methods
	0x26770  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : () // +0x10 (0x10)
	var queue : OS_dispatch_queue // +0x20 (0x8)
	var debounceInterval : Double // +0x28 (0x8)
	var workItem : Atomic<DispatchWorkItem?> // +0x30 (0x8)

	// Swift methods
	0x26b60  func DebouncedDispatchItem.block.getter // getter 
	0x26ba0  func DebouncedDispatchItem.block.setter // setter 
	0x26be0  func DebouncedDispatchItem.block.modify // modifyCoroutine 
	0x26c10  func DebouncedDispatchItem.queue.getter // getter 
	0x26c40  func DebouncedDispatchItem.queue.setter // setter 
	0x26c80  func DebouncedDispatchItem.queue.modify // modifyCoroutine 
	0x26cb0  func DebouncedDispatchItem.debounceInterval.getter // getter 
	0x26ce0  func DebouncedDispatchItem.debounceInterval.setter // setter 
	0x26d20  func DebouncedDispatchItem.debounceInterval.modify // modifyCoroutine 
	0x26d60  func DebouncedDispatchItem.cancel() // method 
	0x26e20  func DebouncedDispatchItem.dispatch() // method 
	0x27370  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
 }

 class HealthExperience.ModelTrainingScenarioExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinator : RelevanceEngineCoordinator // +0x10 (0x8)
	let store : HealthExperienceStore // +0x18 (0x28)

	// Swift methods
	0x27740  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x27800  func ModelTrainingScenarioExecutor.saveModelToDisk(completion:) // method 
	0x27820  func ModelTrainingScenarioExecutor.execute(scenario:completion:) // method 
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
	0x2f930  @objc MedicalIDCache.init <stripped>
	0x2f9b0  @objc MedicalIDCache..cxx_destruct <stripped>

	// Swift methods
	0x2e910  func MedicalIDCache.medicalIDDataResult.getter // getter 
	0x2e7a0  class func MedicalIDCache.__allocating_init(healthStore:) // init 
	0x2e980  func <stripped> // method 
	0x2f070  func MedicalIDCache.enqueueMedicalIDFetch() // method 
	0x2f220  func <stripped> // method 
	0x2f770  func <stripped> // method 
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
	0x308b0  @objc GroupConfigurationLoader.elementGroupWithIdentifier: <stripped>
	0x30970  @objc GroupConfigurationLoader.init <stripped>
 }

 class HealthExperience.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x32bf0  @objc HealthExperienceStoreCleanupOperation.start <stripped>
	0x32c20  @objc HealthExperienceStoreCleanupOperation.description <stripped>
	0x32da0  @objc HealthExperienceStoreCleanupOperation.init <stripped>
	0x32e20  @objc HealthExperienceStoreCleanupOperation..cxx_destruct <stripped>

	// Swift methods
	0x31e90  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.Matcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)

	// Swift methods
	0x34d70  func Matcher.constraintPredicates.getter // getter 
	0x34d60  func Matcher.constraintPredicates.setter // setter 
	0x32f10  func Matcher.constraintPredicates.modify // modifyCoroutine 
	0x32f40  class func Matcher.__allocating_init() // init 
 }

 class HealthExperience.AggregateMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AggregateMatcherProtocol,  MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)
	var aggregateIntervalComponents : DateComponents? // +0x80000400 (0x0)
	var aggregateStatisticsOptions : HKStatisticsOptions // +0x0 (0x8)
	var anchorDate : Date // +0x74735f5f (0x0)

	// Swift methods
	0x33260  func AggregateMatcher.constraintPredicates.getter // getter 
	0x33290  func AggregateMatcher.constraintPredicates.setter // setter 
	0x332d0  func AggregateMatcher.constraintPredicates.modify // modifyCoroutine 
	0x33300  func AggregateMatcher.aggregateIntervalComponents.getter // getter 
	0x33340  func AggregateMatcher.aggregateIntervalComponents.setter // setter 
	0x33390  func AggregateMatcher.aggregateIntervalComponents.modify // modifyCoroutine 
	0x333d0  func AggregateMatcher.aggregateStatisticsOptions.getter // getter 
	0x33400  func AggregateMatcher.aggregateStatisticsOptions.setter // setter 
	0x33440  func AggregateMatcher.aggregateStatisticsOptions.modify // modifyCoroutine 
	0x33480  func AggregateMatcher.anchorDate.getter // getter 
	0x334d0  func AggregateMatcher.anchorDate.setter // setter 
	0x33530  func AggregateMatcher.anchorDate.modify // modifyCoroutine 
	0x33580  class func AggregateMatcher.__allocating_init() // init 
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
	let pretrainedModelURL : URL? // +0xbd0 (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder? // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4b510  @objc RelevanceEngineCoordinator.init <stripped>
	0x4b580  @objc RelevanceEngineCoordinator..cxx_destruct <stripped>

	// Swift methods
	0x48260  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelDirectoryName:pretrainedModelURL:) // init 
	0x48750  func RelevanceEngineCoordinator.resumeEngineIfNeeded(completion:) // method 
	0x488c0  func RelevanceEngineCoordinator.makeResumeEngineOperation() // method 
	0x48960  func RelevanceEngineCoordinator.modelPath.getter // getter 
	0x48dd0  func RelevanceEngineCoordinator.modelPath.setter // setter 
	0x48e90  func RelevanceEngineCoordinator.modelPath.modify // modifyCoroutine 
	0x48fe0  func RelevanceEngineCoordinator.trainingContext.getter // getter 
	0x490f0  func RelevanceEngineCoordinator.trainingContext.setter // setter 
	0x49110  func RelevanceEngineCoordinator.trainingContext.modify // modifyCoroutine 
	0x49170  func <stripped> // method 
	0x499e0  func RelevanceEngineCoordinator.element(for:in:) // method 
	0x49d00  func RelevanceEngineCoordinator.submitTraining(trainingEvents:store:completion:) // method 
	0x49f40  func <stripped> // method 
	0x4a9d0  func RelevanceEngineCoordinator.collectDiagnosticLogs(completion:) // method 
	0x4ac20  func RelevanceEngineCoordinator.gatherMetrics(completion:) // method 
	0x4ad90  func RelevanceEngineCoordinator.clearEngineAndModel(completion:) // method 
	0x4b130  func RelevanceEngineCoordinator.saveModelToDisk(completion:) // method 
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
	0x56f70  func MutableArrayDataSource.eventHandler.getter // getter 
	0x56fa0  func MutableArrayDataSource.eventHandler.setter // setter 
	0x56ff0  func MutableArrayDataSource.eventHandler.modify // modifyCoroutine 
	0x570d0  func MutableArrayDataSource.promise.getter // getter 
	0x57100  func MutableArrayDataSource.arrangedSections.getter // getter 
	0x57130  func MutableArrayDataSource.arrangedSections.setter // setter 
	0x57170  func MutableArrayDataSource.arrangedSections.modify // modifyCoroutine 
	0x571b0  func MutableArrayDataSource.identifier.getter // getter 
	0x57230  func MutableArrayDataSource.identifier.setter // setter 
	0x57250  func MutableArrayDataSource.identifier.modify // modifyCoroutine 
	0x57360  func MutableArrayDataSource.sectionIdentifiers.getter // getter 
	0x58310  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x57750  func MutableArrayDataSource.replaceAllSections(with:) // method 
	0x57840  func MutableArrayDataSource.insert(section:index:) // method 
	0x57870  func MutableArrayDataSource.removeSection(at:) // method 
	0x57a80  func MutableArrayDataSource.insert(item:at:) // method 
	0x57af0  func MutableArrayDataSource.removeItemAt(indexPath:) // method 
	0x57b60  func MutableArrayDataSource.reload(item:at:) // method 
	0x57bd0  func MutableArrayDataSource.send(_:) // method 
 }

 class HealthExperience.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x5da20  @objc FeedItem.initWithEntity:insertIntoManagedObjectContext: <stripped>
	0x5db10  @objc FeedItem..cxx_construct <stripped>
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter // +0x18 (0x8)

	// Swift methods
	0x5e330  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
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
	0x5fda0  @objc FeedItemREElementDataSource.supportedSections <stripped>
	0x60a10  @objc FeedItemREElementDataSource.getElementsInSection:withHandler: <stripped>
	0x60bb0  @objc FeedItemREElementDataSource.init <stripped>
	0x60c30  @objc FeedItemREElementDataSource..cxx_destruct <stripped>

	// Swift methods
	0x5fc10  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
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
	0x65a40  @objc FavoritesProvider.dealloc <stripped>
	0x662a0  @objc FavoritesProvider.favoritesChangedRemotely: <stripped>
	0x66390  @objc FavoritesProvider.init <stripped>
	0x65af0  @objc FavoritesProvider..cxx_destruct <stripped>

	// Swift methods
	0x655b0  func FavoritesProvider.favorites.getter // getter 
	0x65840  class func FavoritesProvider.__allocating_init(controller:) // init 
	0x65b40  func FavoritesProvider.addObserver(_:) // method 
	0x65be0  func FavoritesProvider.removeObserver(_:) // method 
	0x65c00  func <stripped> // method 
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
	0x6aaf0  func HKActiveEnergySample.debugDescription.getter // getter 
	0x6ade0  func HKActiveEnergySample.debugDescription.setter // setter 
	0x6ae00  func HKActiveEnergySample.debugDescription.modify // modifyCoroutine 
	0x6aea0  func HKActiveEnergySample.shortUnitString.getter // getter 
	0x6aee0  func HKActiveEnergySample.shortUnitString.setter // setter 
	0x6af20  func HKActiveEnergySample.shortUnitString.modify // modifyCoroutine 
	0x6af50  func HKActiveEnergySample.longUnitString.getter // getter 
	0x6af90  func HKActiveEnergySample.longUnitString.setter // setter 
	0x6afd0  func HKActiveEnergySample.longUnitString.modify // modifyCoroutine 
	0x6b6c0  func HKActiveEnergySample.dateRange.getter // getter 
	0x6b710  func HKActiveEnergySample.dateRange.setter // setter 
	0x6b770  func HKActiveEnergySample.dateRange.modify // modifyCoroutine 
	0x6b7b0  class func HKActiveEnergySample.__allocating_init(statistics:) // init 
	0x6b800  class func HKActiveEnergySample.__allocating_init(sample:) // init 
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
	0x6d130  @objc SetDefaultFavoritesOperation.main <stripped>
	0x6d7b0  @objc SetDefaultFavoritesOperation.init <stripped>
	0x6d890  @objc SetDefaultFavoritesOperation..cxx_destruct <stripped>

	// Swift methods
	0x6c970  func <stripped> // getter 
	0x6ca90  func <stripped> // getter 
	0x6ce70  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x6d160  func <stripped> // method 
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
	let requestQueue : NSOperationQueue
	let queue : NSOperationQueue
	var relevanceEngineCoordinator : RelevanceEngineCoordinator
	var $__lazy_storage_$_liveFeedsPopulationDebouncer : DebouncedDispatchItem?
	var $__lazy_storage_$_highlightsFeedPopulationDebouncer : DebouncedDispatchItem?
	var trainingAnalyticsCache : Atomic<[ModelTrainingEvent]>

	// Swift methods
	0x73fc0  func FeedPopulationManager.relevanceEngineCoordinator.getter // getter 
	0x73ff0  class func FeedPopulationManager.__allocating_init(healthExperienceStore:) // init 
	0x745e0  func FeedPopulationManager.populateFeed(feedKinds:for:completion:) // method 
	0x755b0  func FeedPopulationManager.submitTraining(trainingEvents:store:completion:) // method 
	0x75d90  func <stripped> // method 
	0x76b20  func FeedPopulationManager.feedItemSubmissionOccurred(_:) // method 
 }

 class HealthExperience.PopulationOperation : AsynchronousOperation {

	// Properties
	let kinds : [Feed.Kind]
	let populationManager : FeedPopulationManager

	// ObjC -> Swift bridged methods
	0x777a0  @objc PopulationOperation.main <stripped>
	0x777e0  @objc PopulationOperation.init <stripped>
	0x77890  @objc PopulationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExperience.SkipWhileDataSource {
 class HealthExperience.SkipWhileEventHandler {
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
	var boundingRange : DateInterval // +0x13c8c0 (0x0)
	let storageContext : NSManagedObjectContext // +0x13c8c0 (0x8)
	let pluginInfo : PluginInfo // +0x0 (0x28)
	var hasOperationCompleted : Bool? // +0x1144d (0x1)

	// Swift methods
	0x7fcb0  func HealthExperienceStoreFeedItemContext.healthStore.getter // getter 
	0x7fd70  func HealthExperienceStoreFeedItemContext.favoritesProvider.getter // getter 
	0x7fe90  func HealthExperienceStoreFeedItemContext.environment.getter // getter 
	0x80030  func HealthExperienceStoreFeedItemContext.boundingRange.getter // getter 
	0x80080  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x80320  func HealthExperienceStoreFeedItemContext.pluginData.getter // getter 
	0x80800  func HealthExperienceStoreFeedItemContext.commit(_:) // method 
	0x81640  func <stripped> // method 
	0x839d0  func <stripped> // method 
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
	0x883f0  func HKBloodPressureSample.shortUnitString.getter // getter 
	0x88430  func HKBloodPressureSample.shortUnitString.setter // setter 
	0x88470  func HKBloodPressureSample.shortUnitString.modify // modifyCoroutine 
	0x884a0  func HKBloodPressureSample.longUnitString.getter // getter 
	0x884e0  func HKBloodPressureSample.longUnitString.setter // setter 
	0x88520  func HKBloodPressureSample.longUnitString.modify // modifyCoroutine 
	0x88a80  func HKBloodPressureSample.dateRange.getter // getter 
	0x88ad0  func HKBloodPressureSample.dateRange.setter // setter 
	0x88b30  func HKBloodPressureSample.dateRange.modify // modifyCoroutine 
	0x88b70  func HKBloodPressureSample.systolic.getter // getter 
	0x88d20  func HKBloodPressureSample.systolic.setter // setter 
	0x88d40  func HKBloodPressureSample.systolic.modify // modifyCoroutine 
	0x88dc0  func HKBloodPressureSample.diastolic.getter // getter 
	0x88fb0  func HKBloodPressureSample.diastolic.setter // setter 
	0x88fd0  func HKBloodPressureSample.diastolic.modify // modifyCoroutine 
	0x89030  class func HKBloodPressureSample.__allocating_init(sample:) // init 
	0x89060  class func HKBloodPressureSample.__allocating_init(statistics:) // init 
	0x88350  class func HKBloodPressureSample.__allocating_init(systolic:diastolic:) // init 
	0x8b700  func HKBloodPressureSample.smallDescriptionString() // method 
	0x890f0  func HKBloodPressureSample.longDescriptionString() // method 
 }

 class HealthExperience.HKBloodPressureSampleMatcher : AggregateMatcher {
	// Swift methods
	0x89820  func HKBloodPressureSampleMatcher.dataSource(healthStore:) // method 
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
	0x92070  @objc SaveManagedObjectContextOperation.main <stripped>
	0x921a0  @objc SaveManagedObjectContextOperation.init <stripped>
	0x92240  @objc SaveManagedObjectContextOperation..cxx_destruct <stripped>

	// Swift methods
	0x91b80  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
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

	// ObjC -> Swift bridged methods
	0x95890  @objc AsynchronousBlockOperation.main <stripped>
	0x95940  @objc AsynchronousBlockOperation.init <stripped>
	0x959e0  @objc AsynchronousBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x95750  class func AsynchronousBlockOperation.__allocating_init(_:) // init 
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
	0x9ccc0  func <stripped> // method 
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
	0x9d5d0  func <stripped> // method 
 }

 class HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_cloudSyncObserver : HKCloudSyncObserver?
	var preconditionCompletion : (_:)?
	let healthStore : HKHealthStore

	// ObjC -> Swift bridged methods
	0x9d820  @objc FirstRestoreNotInProgressPrecondition.init <stripped>
	0x9d8a0  @objc FirstRestoreNotInProgressPrecondition..cxx_destruct <stripped>

	// Swift methods
	0x9d750  func <stripped> // method 
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
	0xbc6b0  func HKBloodGlucoseSample.shortUnitString.getter // getter 
	0xbd3f0  func HKBloodGlucoseSample.shortUnitString.setter // setter 
	0xa5df0  func HKBloodGlucoseSample.shortUnitString.modify // modifyCoroutine 
	0xbc6c0  func HKBloodGlucoseSample.longUnitString.getter // getter 
	0xbd400  func HKBloodGlucoseSample.longUnitString.setter // setter 
	0xa5e20  func HKBloodGlucoseSample.longUnitString.modify // modifyCoroutine 
	0xa62d0  func HKBloodGlucoseSample.dateRange.getter // getter 
	0xa62f0  func HKBloodGlucoseSample.dateRange.setter // setter 
	0xa6310  func HKBloodGlucoseSample.dateRange.modify // modifyCoroutine 
	0xa6350  class func HKBloodGlucoseSample.__allocating_init(statistics:) // init 
	0xa63c0  class func HKBloodGlucoseSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc6f0  func HKBodyMassIndex.shortUnitString.getter // getter 
	0xbd430  func HKBodyMassIndex.shortUnitString.setter // setter 
	0xa67f0  func HKBodyMassIndex.shortUnitString.modify // modifyCoroutine 
	0xbc700  func HKBodyMassIndex.longUnitString.getter // getter 
	0xbd440  func HKBodyMassIndex.longUnitString.setter // setter 
	0xa6820  func HKBodyMassIndex.longUnitString.modify // modifyCoroutine 
	0xa6cd0  func HKBodyMassIndex.dateRange.getter // getter 
	0xa6cf0  func HKBodyMassIndex.dateRange.setter // setter 
	0xa6d10  func HKBodyMassIndex.dateRange.modify // modifyCoroutine 
	0xa6d50  class func HKBodyMassIndex.__allocating_init(statistics:) // init 
	0xa6da0  class func HKBodyMassIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc6d0  func HKBodyFatPercentage.shortUnitString.getter // getter 
	0xbd410  func HKBodyFatPercentage.shortUnitString.setter // setter 
	0xa70f0  func HKBodyFatPercentage.shortUnitString.modify // modifyCoroutine 
	0xbc6e0  func HKBodyFatPercentage.longUnitString.getter // getter 
	0xbd420  func HKBodyFatPercentage.longUnitString.setter // setter 
	0xa7120  func HKBodyFatPercentage.longUnitString.modify // modifyCoroutine 
	0xa75d0  func HKBodyFatPercentage.dateRange.getter // getter 
	0xa75f0  func HKBodyFatPercentage.dateRange.setter // setter 
	0xa7610  func HKBodyFatPercentage.dateRange.modify // modifyCoroutine 
	0xa7650  class func HKBodyFatPercentage.__allocating_init(statistics:) // init 
	0xa76a0  class func HKBodyFatPercentage.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyHeight : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc770  func HKBodyHeight.shortUnitString.getter // getter 
	0xbd4b0  func HKBodyHeight.shortUnitString.setter // setter 
	0xa7a10  func HKBodyHeight.shortUnitString.modify // modifyCoroutine 
	0xbc780  func HKBodyHeight.longUnitString.getter // getter 
	0xbd4c0  func HKBodyHeight.longUnitString.setter // setter 
	0xa7a40  func HKBodyHeight.longUnitString.modify // modifyCoroutine 
	0xa7ed0  func HKBodyHeight.dateRange.getter // getter 
	0xa7ef0  func HKBodyHeight.dateRange.setter // setter 
	0xa7f10  func HKBodyHeight.dateRange.modify // modifyCoroutine 
	0xa7f50  class func HKBodyHeight.__allocating_init(statistics:) // init 
	0xa7fa0  class func HKBodyHeight.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKWaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc710  func HKWaistCircumference.shortUnitString.getter // getter 
	0xbd450  func HKWaistCircumference.shortUnitString.setter // setter 
	0xa82f0  func HKWaistCircumference.shortUnitString.modify // modifyCoroutine 
	0xbc720  func HKWaistCircumference.longUnitString.getter // getter 
	0xbd460  func HKWaistCircumference.longUnitString.setter // setter 
	0xa8320  func HKWaistCircumference.longUnitString.modify // modifyCoroutine 
	0xa87b0  func HKWaistCircumference.dateRange.getter // getter 
	0xa87d0  func HKWaistCircumference.dateRange.setter // setter 
	0xa87f0  func HKWaistCircumference.dateRange.modify // modifyCoroutine 
	0xa8830  class func HKWaistCircumference.__allocating_init(statistics:) // init 
	0xa8880  class func HKWaistCircumference.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKVO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc730  func HKVO2Max.shortUnitString.getter // getter 
	0xbd470  func HKVO2Max.shortUnitString.setter // setter 
	0xa8bf0  func HKVO2Max.shortUnitString.modify // modifyCoroutine 
	0xbc740  func HKVO2Max.longUnitString.getter // getter 
	0xbd480  func HKVO2Max.longUnitString.setter // setter 
	0xa8c20  func HKVO2Max.longUnitString.modify // modifyCoroutine 
	0xa90d0  func HKVO2Max.dateRange.getter // getter 
	0xa90f0  func HKVO2Max.dateRange.setter // setter 
	0xa9110  func HKVO2Max.dateRange.modify // modifyCoroutine 
	0xa9150  class func HKVO2Max.__allocating_init(statistics:) // init 
	0xa91a0  class func HKVO2Max.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKLeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc750  func HKLeanBodyMass.shortUnitString.getter // getter 
	0xbd490  func HKLeanBodyMass.shortUnitString.setter // setter 
	0xa94f0  func HKLeanBodyMass.shortUnitString.modify // modifyCoroutine 
	0xbc760  func HKLeanBodyMass.longUnitString.getter // getter 
	0xbd4a0  func HKLeanBodyMass.longUnitString.setter // setter 
	0xa9520  func HKLeanBodyMass.longUnitString.modify // modifyCoroutine 
	0xa99b0  func HKLeanBodyMass.dateRange.getter // getter 
	0xa99d0  func HKLeanBodyMass.dateRange.setter // setter 
	0xa99f0  func HKLeanBodyMass.dateRange.modify // modifyCoroutine 
	0xa9a30  class func HKLeanBodyMass.__allocating_init(statistics:) // init 
	0xa9a80  class func HKLeanBodyMass.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xa9dd0  func HKHeartRate.shortUnitString.getter // getter 
	0xa9e10  func HKHeartRate.shortUnitString.setter // setter 
	0xa9e50  func HKHeartRate.shortUnitString.modify // modifyCoroutine 
	0xa9e80  func HKHeartRate.longUnitString.getter // getter 
	0xa9ec0  func HKHeartRate.longUnitString.setter // setter 
	0xa9f00  func HKHeartRate.longUnitString.modify // modifyCoroutine 
	0xaa3f0  func HKHeartRate.dateRange.getter // getter 
	0xaa410  func HKHeartRate.dateRange.setter // setter 
	0xaa430  func HKHeartRate.dateRange.modify // modifyCoroutine 
	0xaa470  class func HKHeartRate.__allocating_init(statistics:) // init 
	0xaa4c0  class func HKHeartRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDistanceWalkingRunning : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc790  func HKDistanceWalkingRunning.shortUnitString.getter // getter 
	0xbd4d0  func HKDistanceWalkingRunning.shortUnitString.setter // setter 
	0xaa8c0  func HKDistanceWalkingRunning.shortUnitString.modify // modifyCoroutine 
	0xbc7a0  func HKDistanceWalkingRunning.longUnitString.getter // getter 
	0xbd4e0  func HKDistanceWalkingRunning.longUnitString.setter // setter 
	0xaa8f0  func HKDistanceWalkingRunning.longUnitString.modify // modifyCoroutine 
	0xaad80  func HKDistanceWalkingRunning.dateRange.getter // getter 
	0xaada0  func HKDistanceWalkingRunning.dateRange.setter // setter 
	0xaadc0  func HKDistanceWalkingRunning.dateRange.modify // modifyCoroutine 
	0xaae00  class func HKDistanceWalkingRunning.__allocating_init(statistics:) // init 
	0xaae50  class func HKDistanceWalkingRunning.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKFlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc7b0  func HKFlightsClimbed.shortUnitString.getter // getter 
	0xbd4f0  func HKFlightsClimbed.shortUnitString.setter // setter 
	0xab1c0  func HKFlightsClimbed.shortUnitString.modify // modifyCoroutine 
	0xbc7c0  func HKFlightsClimbed.longUnitString.getter // getter 
	0xbd500  func HKFlightsClimbed.longUnitString.setter // setter 
	0xab1f0  func HKFlightsClimbed.longUnitString.modify // modifyCoroutine 
	0xab6a0  func HKFlightsClimbed.dateRange.getter // getter 
	0xab6c0  func HKFlightsClimbed.dateRange.setter // setter 
	0xab6e0  func HKFlightsClimbed.dateRange.modify // modifyCoroutine 
	0xab720  class func HKFlightsClimbed.__allocating_init(statistics:) // init 
	0xab770  class func HKFlightsClimbed.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc7d0  func HKOxygenSaturation.shortUnitString.getter // getter 
	0xbd510  func HKOxygenSaturation.shortUnitString.setter // setter 
	0xabae0  func HKOxygenSaturation.shortUnitString.modify // modifyCoroutine 
	0xbc7e0  func HKOxygenSaturation.longUnitString.getter // getter 
	0xbd520  func HKOxygenSaturation.longUnitString.setter // setter 
	0xabb10  func HKOxygenSaturation.longUnitString.modify // modifyCoroutine 
	0xabfa0  func HKOxygenSaturation.dateRange.getter // getter 
	0xabfc0  func HKOxygenSaturation.dateRange.setter // setter 
	0xabfe0  func HKOxygenSaturation.dateRange.modify // modifyCoroutine 
	0xac020  class func HKOxygenSaturation.__allocating_init(statistics:) // init 
	0xac070  class func HKOxygenSaturation.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc7f0  func HKBloodAlcoholContent.shortUnitString.getter // getter 
	0xbd530  func HKBloodAlcoholContent.shortUnitString.setter // setter 
	0xac3e0  func HKBloodAlcoholContent.shortUnitString.modify // modifyCoroutine 
	0xbc800  func HKBloodAlcoholContent.longUnitString.getter // getter 
	0xbd540  func HKBloodAlcoholContent.longUnitString.setter // setter 
	0xac410  func HKBloodAlcoholContent.longUnitString.modify // modifyCoroutine 
	0xac8a0  func HKBloodAlcoholContent.dateRange.getter // getter 
	0xac8c0  func HKBloodAlcoholContent.dateRange.setter // setter 
	0xac8e0  func HKBloodAlcoholContent.dateRange.modify // modifyCoroutine 
	0xac920  class func HKBloodAlcoholContent.__allocating_init(statistics:) // init 
	0xac970  class func HKBloodAlcoholContent.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc810  func HKForcedVitalCapacity.shortUnitString.getter // getter 
	0xbd550  func HKForcedVitalCapacity.shortUnitString.setter // setter 
	0xacce0  func HKForcedVitalCapacity.shortUnitString.modify // modifyCoroutine 
	0xbc820  func HKForcedVitalCapacity.longUnitString.getter // getter 
	0xbd560  func HKForcedVitalCapacity.longUnitString.setter // setter 
	0xacd10  func HKForcedVitalCapacity.longUnitString.modify // modifyCoroutine 
	0xad1a0  func HKForcedVitalCapacity.dateRange.getter // getter 
	0xad1c0  func HKForcedVitalCapacity.dateRange.setter // setter 
	0xad1e0  func HKForcedVitalCapacity.dateRange.modify // modifyCoroutine 
	0xad220  class func HKForcedVitalCapacity.__allocating_init(statistics:) // init 
	0xad270  class func HKForcedVitalCapacity.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedExpiratoryVolume : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc830  func HKForcedExpiratoryVolume.shortUnitString.getter // getter 
	0xbd570  func HKForcedExpiratoryVolume.shortUnitString.setter // setter 
	0xad5e0  func HKForcedExpiratoryVolume.shortUnitString.modify // modifyCoroutine 
	0xbc840  func HKForcedExpiratoryVolume.longUnitString.getter // getter 
	0xbd580  func HKForcedExpiratoryVolume.longUnitString.setter // setter 
	0xad610  func HKForcedExpiratoryVolume.longUnitString.modify // modifyCoroutine 
	0xadaa0  func HKForcedExpiratoryVolume.dateRange.getter // getter 
	0xadac0  func HKForcedExpiratoryVolume.dateRange.setter // setter 
	0xadae0  func HKForcedExpiratoryVolume.dateRange.modify // modifyCoroutine 
	0xadb20  class func HKForcedExpiratoryVolume.__allocating_init(statistics:) // init 
	0xadb70  class func HKForcedExpiratoryVolume.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc850  func HKPeakExpiratoryFlowRate.shortUnitString.getter // getter 
	0xbd590  func HKPeakExpiratoryFlowRate.shortUnitString.setter // setter 
	0xadee0  func HKPeakExpiratoryFlowRate.shortUnitString.modify // modifyCoroutine 
	0xbc860  func HKPeakExpiratoryFlowRate.longUnitString.getter // getter 
	0xbd5a0  func HKPeakExpiratoryFlowRate.longUnitString.setter // setter 
	0xadf10  func HKPeakExpiratoryFlowRate.longUnitString.modify // modifyCoroutine 
	0xae3c0  func HKPeakExpiratoryFlowRate.dateRange.getter // getter 
	0xae3e0  func HKPeakExpiratoryFlowRate.dateRange.setter // setter 
	0xae400  func HKPeakExpiratoryFlowRate.dateRange.modify // modifyCoroutine 
	0xae440  class func HKPeakExpiratoryFlowRate.__allocating_init(statistics:) // init 
	0xae490  class func HKPeakExpiratoryFlowRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc870  func HKPeripheralPerfusionIndex.shortUnitString.getter // getter 
	0xbd5b0  func HKPeripheralPerfusionIndex.shortUnitString.setter // setter 
	0xae800  func HKPeripheralPerfusionIndex.shortUnitString.modify // modifyCoroutine 
	0xbc880  func HKPeripheralPerfusionIndex.longUnitString.getter // getter 
	0xbd5c0  func HKPeripheralPerfusionIndex.longUnitString.setter // setter 
	0xae830  func HKPeripheralPerfusionIndex.longUnitString.modify // modifyCoroutine 
	0xaecc0  func HKPeripheralPerfusionIndex.dateRange.getter // getter 
	0xaece0  func HKPeripheralPerfusionIndex.dateRange.setter // setter 
	0xaed00  func HKPeripheralPerfusionIndex.dateRange.modify // modifyCoroutine 
	0xaed40  class func HKPeripheralPerfusionIndex.__allocating_init(statistics:) // init 
	0xaed90  class func HKPeripheralPerfusionIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc890  func HKDietaryFatTotal.shortUnitString.getter // getter 
	0xbd5d0  func HKDietaryFatTotal.shortUnitString.setter // setter 
	0xaf100  func HKDietaryFatTotal.shortUnitString.modify // modifyCoroutine 
	0xbc8a0  func HKDietaryFatTotal.longUnitString.getter // getter 
	0xbd5e0  func HKDietaryFatTotal.longUnitString.setter // setter 
	0xaf130  func HKDietaryFatTotal.longUnitString.modify // modifyCoroutine 
	0xaf5c0  func HKDietaryFatTotal.dateRange.getter // getter 
	0xaf5e0  func HKDietaryFatTotal.dateRange.setter // setter 
	0xaf600  func HKDietaryFatTotal.dateRange.modify // modifyCoroutine 
	0xaf640  class func HKDietaryFatTotal.__allocating_init(statistics:) // init 
	0xaf690  class func HKDietaryFatTotal.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc8b0  func HKDietaryFatPolyunsaturated.shortUnitString.getter // getter 
	0xbd5f0  func HKDietaryFatPolyunsaturated.shortUnitString.setter // setter 
	0xafa00  func HKDietaryFatPolyunsaturated.shortUnitString.modify // modifyCoroutine 
	0xbc8c0  func HKDietaryFatPolyunsaturated.longUnitString.getter // getter 
	0xbd600  func HKDietaryFatPolyunsaturated.longUnitString.setter // setter 
	0xafa30  func HKDietaryFatPolyunsaturated.longUnitString.modify // modifyCoroutine 
	0xafec0  func HKDietaryFatPolyunsaturated.dateRange.getter // getter 
	0xafee0  func HKDietaryFatPolyunsaturated.dateRange.setter // setter 
	0xaff00  func HKDietaryFatPolyunsaturated.dateRange.modify // modifyCoroutine 
	0xaff40  class func HKDietaryFatPolyunsaturated.__allocating_init(statistics:) // init 
	0xaff90  class func HKDietaryFatPolyunsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc8d0  func HKDietaryFatMonounsaturated.shortUnitString.getter // getter 
	0xbd610  func HKDietaryFatMonounsaturated.shortUnitString.setter // setter 
	0xb0300  func HKDietaryFatMonounsaturated.shortUnitString.modify // modifyCoroutine 
	0xbc8e0  func HKDietaryFatMonounsaturated.longUnitString.getter // getter 
	0xbd620  func HKDietaryFatMonounsaturated.longUnitString.setter // setter 
	0xb0330  func HKDietaryFatMonounsaturated.longUnitString.modify // modifyCoroutine 
	0xb07c0  func HKDietaryFatMonounsaturated.dateRange.getter // getter 
	0xb07e0  func HKDietaryFatMonounsaturated.dateRange.setter // setter 
	0xb0800  func HKDietaryFatMonounsaturated.dateRange.modify // modifyCoroutine 
	0xb0840  class func HKDietaryFatMonounsaturated.__allocating_init(statistics:) // init 
	0xb0890  class func HKDietaryFatMonounsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc8f0  func HKDietaryFatSaturated.shortUnitString.getter // getter 
	0xbd630  func HKDietaryFatSaturated.shortUnitString.setter // setter 
	0xb0c00  func HKDietaryFatSaturated.shortUnitString.modify // modifyCoroutine 
	0xbc900  func HKDietaryFatSaturated.longUnitString.getter // getter 
	0xbd640  func HKDietaryFatSaturated.longUnitString.setter // setter 
	0xb0c30  func HKDietaryFatSaturated.longUnitString.modify // modifyCoroutine 
	0xb10c0  func HKDietaryFatSaturated.dateRange.getter // getter 
	0xb10e0  func HKDietaryFatSaturated.dateRange.setter // setter 
	0xb1100  func HKDietaryFatSaturated.dateRange.modify // modifyCoroutine 
	0xb1140  class func HKDietaryFatSaturated.__allocating_init(statistics:) // init 
	0xb1190  class func HKDietaryFatSaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbc910  func HKDietaryCholesterol.shortUnitString.getter // getter 
	0xbd650  func HKDietaryCholesterol.shortUnitString.setter // setter 
	0xb1500  func HKDietaryCholesterol.shortUnitString.modify // modifyCoroutine 
	0xbc920  func HKDietaryCholesterol.longUnitString.getter // getter 
	0xbd660  func HKDietaryCholesterol.longUnitString.setter // setter 
	0xb1530  func HKDietaryCholesterol.longUnitString.modify // modifyCoroutine 
	0xb1cc0  func HKDietaryCholesterol.dateRange.getter // getter 
	0xb1ce0  func HKDietaryCholesterol.dateRange.setter // setter 
	0xb1d00  func HKDietaryCholesterol.dateRange.modify // modifyCoroutine 
	0xb1d40  class func HKDietaryCholesterol.__allocating_init(statistics:) // init 
	0xb1d90  class func HKDietaryCholesterol.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOvulationTestResultSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueOvulationTestResult
	var dateRange : DateInterval

	// Swift methods
	0xbc400  func HKOvulationTestResultSample.value.getter // getter 
	0xbc420  func HKOvulationTestResultSample.value.setter // setter 
	0xb22c0  func HKOvulationTestResultSample.value.modify // modifyCoroutine 
	0xb24c0  func HKOvulationTestResultSample.dateRange.getter // getter 
	0xb24e0  func HKOvulationTestResultSample.dateRange.setter // setter 
	0xb2500  func HKOvulationTestResultSample.dateRange.modify // modifyCoroutine 
	0xb2540  class func HKOvulationTestResultSample.__allocating_init(sample:) // init 
	0xb2580  class func HKOvulationTestResultSample.__allocating_init(categorySample:) // init 
	0xb25c0  func HKOvulationTestResultSample.smallDescriptionString() // method 
	0xb2680  func HKOvulationTestResultSample.longDescriptionString() // method 
 }

 class HealthExperience.HKMenstrualFlowSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueMenstrualFlow
	var dateRange : DateInterval

	// Swift methods
	0xb29a0  func HKMenstrualFlowSample.value.getter // getter 
	0xb29d0  func HKMenstrualFlowSample.value.setter // setter 
	0xb2a00  func HKMenstrualFlowSample.value.modify // modifyCoroutine 
	0xb2ba0  func HKMenstrualFlowSample.dateRange.getter // getter 
	0xb2c10  func HKMenstrualFlowSample.dateRange.setter // setter 
	0xb2c90  func HKMenstrualFlowSample.dateRange.modify // modifyCoroutine 
	0xb2cd0  class func HKMenstrualFlowSample.__allocating_init(sample:) // init 
	0xb2d10  class func HKMenstrualFlowSample.__allocating_init(categorySample:) // init 
	0xb30b0  func HKMenstrualFlowSample.smallDescriptionString() // method 
	0xb3180  func HKMenstrualFlowSample.longDescriptionString() // method 
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
	0xbef30  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0xbf000  func OperationQueueObserver.addOperation(_:) // method 
	0xbf0a0  func OperationQueueObserver.addOperations(_:waitUntilFinished:) // method 
	0xbf780  func OperationQueueObserver.currentOperationsCopy.getter // getter 
	0xbf8a0  func OperationQueueObserver.operationCount.getter // getter 
	0xbf930  func OperationQueueObserver.clearObserving() // method 
	0xbf9a0  func OperationQueueObserver.didComplete(_:) // method 
 }

 class HealthExperience.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xc1d90  @objc Feed.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 struct HealthExperience.Observable {

	// Properties
	let body : ObservableBody
 }

 class HealthExperience.Promise {
 class HealthExperience.ObservableBody {
 class HealthExperience.ArrayDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : weak SectionedDataSourceEventHandler? // +0x10 (0x10)
	var $__lazy_storage_$_debugDescription : String? // +0x20 (0x10)
	var $__lazy_storage_$_identifier : String? // +0x30 (0x10)
	let arrangedSections : [ArrayDataSourceSection] // +0x40 (0x8)

	// Swift methods
	0xc3a90  func ArrayDataSource.eventHandler.getter // getter 
	0xc3ac0  func ArrayDataSource.eventHandler.setter // setter 
	0xc3b10  func ArrayDataSource.eventHandler.modify // modifyCoroutine 
	0xc3bf0  func ArrayDataSource.debugDescription.getter // getter 
	0xc3de0  func ArrayDataSource.debugDescription.setter // setter 
	0xc3e00  func ArrayDataSource.debugDescription.modify // modifyCoroutine 
	0xc3ea0  func ArrayDataSource.identifier.getter // getter 
	0xc4050  func ArrayDataSource.identifier.setter // setter 
	0xc4070  func ArrayDataSource.identifier.modify // modifyCoroutine 
	0xc4180  func ArrayDataSource.numberOfSections.getter // getter 
	0xc4190  func ArrayDataSource.titleForHeader(in:) // method 
	0xc39c0  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0xc4230  func ArrayDataSource.sections.getter // getter 
	0xc4240  func ArrayDataSource.sectionIdentifiers.getter // getter 
	0xc4610  func ArrayDataSource.numberOfItems(in:) // method 
	0xc4680  func ArrayDataSource.item(at:) // method 
	0xc4890  func ArrayDataSource.reuseIdentifierForItem(at:) // method 
	0xc48f0  func ArrayDataSource.item(for:) // method 
	0xc4bc0  func ArrayDataSource.reuseIdentifierForItem(with:) // method 
	0xc4c40  func ArrayDataSource.itemIdentifiers(in:) // method 
 }

 struct HealthExperience.SecondaryProfileContextFactory { }

 class HealthExperience.HKCervicalMucusQualitySample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueCervicalMucusQuality // +0x10 (0x8)
	var dateRange : DateInterval // +0x0 (0x0)

	// Swift methods
	0xc8650  func HKCervicalMucusQualitySample.value.getter // getter 
	0xc8680  func HKCervicalMucusQualitySample.value.setter // setter 
	0xc86b0  func HKCervicalMucusQualitySample.value.modify // modifyCoroutine 
	0xc88c0  func HKCervicalMucusQualitySample.dateRange.getter // getter 
	0xc8910  func HKCervicalMucusQualitySample.dateRange.setter // setter 
	0xc8970  func HKCervicalMucusQualitySample.dateRange.modify // modifyCoroutine 
	0xc89b0  class func HKCervicalMucusQualitySample.__allocating_init(sample:) // init 
	0xc89e0  class func HKCervicalMucusQualitySample.__allocating_init(categorySample:) // init 
	0xc8d40  func HKCervicalMucusQualitySample.smallDescriptionString() // method 
	0xc8e00  func HKCervicalMucusQualitySample.longDescriptionString() // method 
 }

 class HealthExperience.HKCervicalMucusQualitySampleMatcher : Matcher {
	// Swift methods
	0xc95d0  func HKCervicalMucusQualitySampleMatcher.dataSource(healthStore:) // method 
 }

 class HealthExperience.SampleQuery {
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
	0xcf9d0  @objc Plugin.initWithEntity:insertIntoManagedObjectContext: <stripped>
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
	0xd40f0  @objc DateRangeRelevanceProvider.init <stripped>
	0xd4310  @objc DateRangeRelevanceProvider.isEqual: <stripped>
	0xd43b0  @objc DateRangeRelevanceProvider.hash <stripped>
	0xd4490  @objc DateRangeRelevanceProvider..cxx_destruct <stripped>

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
	0xd4e30  @objc ComposableAsyncOperation.start <stripped>
	0xd5850  @objc ComposableAsyncOperation.cancel <stripped>
	0xd59b0  @objc ComposableAsyncOperation.init <stripped>
	0xd5a60  @objc ComposableAsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0xd4980  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.getter // getter 
	0xd49b0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.setter // setter 
	0xd49f0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.modify // modifyCoroutine 
	0xd4a40  func ComposableAsyncOperation.childOperations.getter // getter 
	0xd4a80  func ComposableAsyncOperation.childOperations.setter // setter 
	0xd4ad0  func ComposableAsyncOperation.childOperations.modify // modifyCoroutine 
	0xd4b10  func ComposableAsyncOperation.addChild(_:) // method 
	0xd4e60  func ComposableAsyncOperation.dispatchChildOperations() // method 
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
	0xda8b0  @objc HealthExperienceStoreOracle.init <stripped>
	0xdb930  @objc HealthExperienceStoreOracle..cxx_destruct <stripped>

	// Swift methods
	0xd9ff0  func HealthExperienceStoreOracle.readyHealthExperienceStore.getter // getter 
	0xda090  func HealthExperienceStoreOracle.readyHealthExperienceStore.setter // setter 
	0xda130  func HealthExperienceStoreOracle.readyHealthExperienceStore.modify // modifyCoroutine 
	0xda180  func HealthExperienceStoreOracle.healthExperienceStore.getter // getter 
	0xda2a0  func HealthExperienceStoreOracle.register(observer:) // method 
	0xda8d0  func HealthExperienceStoreOracle.attemptToInitilizeStore(shouldListen:) // method 
	0xdb520  func HealthExperienceStoreOracle.beginListeningToDataAccessChanges() // method 
	0xdb6f0  func HealthExperienceStoreOracle.handleUnrecoverableError() // method 
	0xdb890  func HealthExperienceStoreOracle.makeHealthExperienceStore() // method 
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
	0xdd110  func CompoundSectionedDataSource.childDataSources.getter // getter 
	0xdd140  func CompoundSectionedDataSource.eventHandler.getter // getter 
	0xdd170  func CompoundSectionedDataSource.eventHandler.setter // setter 
	0xdd1c0  func CompoundSectionedDataSource.eventHandler.modify // modifyCoroutine 
	0xdd340  func CompoundSectionedDataSource.promise.getter // getter 
	0xdd370  func CompoundSectionedDataSource.identifier.getter // getter 
	0xdd3b0  func CompoundSectionedDataSource.identifier.setter // setter 
	0xdd3f0  func CompoundSectionedDataSource.identifier.modify // modifyCoroutine 
	0xdd430  func CompoundSectionedDataSource.sectionIdentifiers.getter // getter 
	0xdd810  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0xdd8b0  func CompoundSectionedDataSource.determineSectionOffset(for:) // method 
	0xddbb0  func CompoundSectionedDataSource.handle(change:for:) // method 
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
	0xe5eb0  class func HKHealthSource.__allocating_init(name:bundleIdentifier:) // init 
 }

 class HealthExperience.HKHealthSourceMatcher : Matcher {

	// Properties
	var objectType : HKObjectType?

	// Swift methods
	0xe61c0  func HKHealthSourceMatcher.dataSource(healthStore:) // method 
	0xe62d0  func HKHealthSourceMatcher.addConstraint(sourcesFor:) // method 
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
	0xe69a0  class func CancellableProgressList.__allocating_init() // init 
	0xe6b00  func CancellableProgressList.add(_:uuid:) // method 
	0xe74a0  func CancellableProgressList.clearProgress(for:) // method 
	0xe8230  func CancellableProgressList.cancelAll() // method 
 }

 class HealthExperience.DateRangeRelevanceProviderManager : RERelevanceProviderManager /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
	0xea9f0  @objc DateRangeRelevanceProviderManager._valueForProvider:context:feature: <stripped>
	0xeaa80  @objc DateRangeRelevanceProviderManager._valueForProvider:feature: <stripped>
	0xeaab0  @objc DateRangeRelevanceProviderManager.initWithQueue: <stripped>
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
	0xed6c0  func BundleFeedItemGenerationPluginInfo.bundle.getter // getter 
	0xed6f0  func BundleFeedItemGenerationPluginInfo.bundle.setter // setter 
	0xed730  func BundleFeedItemGenerationPluginInfo.bundle.modify // modifyCoroutine 
	0xed760  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.getter // getter 
	0xed7a0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.setter // setter 
	0xed7e0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xed810  func BundleFeedItemGenerationPluginInfo.principalClass.getter // getter 
	0xeda10  func BundleFeedItemGenerationPluginInfo.principalClass.setter // setter 
	0xeda20  func BundleFeedItemGenerationPluginInfo.principalClass.modify // modifyCoroutine 
	0xeda70  func BundleFeedItemGenerationPluginInfo.makeFeedItemGenerator(context:) // method 
	0xedea0  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthExperience.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xee990  @objc Keyword.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 enum HealthExperience.SectionedDataSourceTransaction {

	// Properties
	case open : (pending: [SectionedDataSourceChangeset])
	case closed  
 }

 class HealthExperience.ManagedProfileConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xfed90  func ManagedProfileConnection.isImproveHealthDataAllowed.getter // getter 
	0xfedb0  func ManagedProfileConnection.isImproveWheelchairDataAllowed.getter // getter 
	0xfee80  func ManagedProfileConnection.setImproveHealthData(value:) // method 
	0xfeea0  func ManagedProfileConnection.setImproveWheelchairData(value:) // method 
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
	0x102580  func HKStepsSample.shortUnitString.getter // getter 
	0x1025c0  func HKStepsSample.shortUnitString.setter // setter 
	0x102600  func HKStepsSample.shortUnitString.modify // modifyCoroutine 
	0x102630  func HKStepsSample.longUnitString.getter // getter 
	0x102670  func HKStepsSample.longUnitString.setter // setter 
	0x1026b0  func HKStepsSample.longUnitString.modify // modifyCoroutine 
	0x1026e0  func HKStepsSample.underlyingType.getter // getter 
	0x102720  func HKStepsSample.underlyingType.setter // setter 
	0x102760  func HKStepsSample.underlyingType.modify // modifyCoroutine 
	0x102e00  func HKStepsSample.dateRange.getter // getter 
	0x102e50  func HKStepsSample.dateRange.setter // setter 
	0x102eb0  func HKStepsSample.dateRange.modify // modifyCoroutine 
	0x102ef0  class func HKStepsSample.__allocating_init(statistics:) // init 
	0x102f60  class func HKStepsSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKStepsSampleMatcher {
 class HealthExperience.PopulateFeedFromRelevanceEngineOperation : AsyncOperation {

	// Properties
	let context : NSManagedObjectContext // +0x18 (0x8)
	let feedKind : Feed.Kind // +0x20 (0x1)
	let dateRange : DateInterval // +0x3 (0x0)
	var engineCoordinator : RelevanceEngineCoordinator // +0x1a000 (0x8)

	// ObjC -> Swift bridged methods
	0x107590  @objc PopulateFeedFromRelevanceEngineOperation.main <stripped>
	0x10a7a0  @objc PopulateFeedFromRelevanceEngineOperation.init <stripped>
	0x10a860  @objc PopulateFeedFromRelevanceEngineOperation..cxx_destruct <stripped>

	// Swift methods
	0x1069a0  class func PopulateFeedFromRelevanceEngineOperation.__allocating_init(context:engineCoordinator:feedKind:dateRange:) // init 
	0x1075c0  func <stripped> // method 
	0x109290  func <stripped> // method 
 }

 struct HealthExperience.ShowAllHighlightsDataSourceItem { }

 class HealthExperience.DataType : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x116c40  @objc DataType.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.ResumeRelevanceEngineIfNeededOperation : AsyncOperation {

	// Properties
	let relevanceEngine : RERelevanceEngine // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x117430  @objc ResumeRelevanceEngineIfNeededOperation.main <stripped>
	0x1174f0  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance: <stripped>
	0x117600  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance: <stripped>
	0x117690  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:performBatchUpdateBlock:completion: <stripped>
	0x117740  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didReloadElement:atPath: <stripped>
	0x117740  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didRemoveElement:atPath: <stripped>
	0x117740  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didInsertElement:atPath: <stripped>
	0x117760  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didMoveElement:fromPath:toPath: <stripped>
	0x117780  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:isElementAtPathVisible: <stripped>
	0x1177f0  @objc ResumeRelevanceEngineIfNeededOperation.init <stripped>
	0x117890  @objc ResumeRelevanceEngineIfNeededOperation..cxx_destruct <stripped>

	// Swift methods
	0x117460  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance(_:) // method 
	0x1175b0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance(_:) // method 
	0x117680  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:performBatchUpdate:completion:) // method 
	0x117710  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didReload:at:) // method 
	0x117720  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didRemove:at:) // method 
	0x117730  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didInsert:at:) // method 
	0x117750  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didMove:from:to:) // method 
	0x117770  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:isElementAtPathVisible:) // method 
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
	0x11d620  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x11d8d0  func FeedItemGeneratorManager.run(dateRange:completion:) // method 
	0x11ede0  func FeedItemGeneratorManager.startInteractiveGeneration(plugins:cancellationCompletion:) // method 
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
	0x121030  func DiskHealthExperienceStore.isRunningInApplicationProcess.getter // getter 
	0x1211e0  func DiskHealthExperienceStore.viewContext.getter // getter 
	0x1213b0  func DiskHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x1214b0  func DiskHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x1214d0  func DiskHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x121520  func DiskHealthExperienceStore.allEntities.getter // getter 
	0x121630  func DiskHealthExperienceStore.allEntities.setter // setter 
	0x121650  func DiskHealthExperienceStore.allEntities.modify // modifyCoroutine 
	0x120e90  class func DiskHealthExperienceStore.__allocating_init() // init 
	0x121b80  func DiskHealthExperienceStore.makeStoreLocation() // method 
	0x121d80  class func static DiskHealthExperienceStore.storeFileURL.getter // getter 
	0x121ec0  func DiskHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x1221a0  func DiskHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x122220  func DiskHealthExperienceStore.initPersistentContainer() // method 
	0x122390  func DiskHealthExperienceStore.persistentContainer.getter // getter 
	0x122570  func DiskHealthExperienceStore.persistentContainer.setter // setter 
	0x122590  func DiskHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x122620  func DiskHealthExperienceStore.destroyStoreIfNeededAndMakePersistentContainer() // method 
	0x122860  func DiskHealthExperienceStore.deleteAllObjects() // method 
	0x1228a0  func DiskHealthExperienceStore.delete(_:from:) // method 
	0x123450  func DiskHealthExperienceStore.makePersistentContainer(retryOnFailure:) // method 
	0x1234f0  func DiskHealthExperienceStore.updateStoreMetadataWithLatestVersion(_:) // method 
	0x123f20  func DiskHealthExperienceStore.unsafeMakePersistentContainer(retryOnFailure:) // method 
	0x125b80  func DiskHealthExperienceStore.getStoreState() // method 
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
	0x134280  @objc AsyncOperation.isExecuting <stripped>
	0x134310  @objc AsyncOperation.isFinished <stripped>
	0x1343e0  @objc AsyncOperation.isAsynchronous <stripped>
	0x134450  @objc AsyncOperation.start <stripped>
	0x1344d0  @objc AsyncOperation.main <stripped>
	0x1345a0  @objc AsyncOperation.init <stripped>
	0x134610  @objc AsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0x133de0  func AsyncOperation.state.getter // getter 
	0x133e50  func AsyncOperation.state.setter // setter 
	0x1340a0  func AsyncOperation.state.modify // modifyCoroutine 
	0x134150  func AsyncOperation.finish() // method 
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

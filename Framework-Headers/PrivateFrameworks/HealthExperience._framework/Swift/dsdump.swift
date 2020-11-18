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
	0xaa00  @objc EncodedFeatureTag.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.SignalListener : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateDumpSignalSource : OS_dispatch_source_signal // +0x10 (0x8)

	// Swift methods
	0xae20  func SignalListener.sourceNotification() // method 
 }

 class HealthExperience.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PluginInfo {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0xd440  func BasicPluginInfo.bundleIdentifier.getter // getter 
	0xd480  func BasicPluginInfo.bundleIdentifier.setter // setter 
	0xd4c0  func BasicPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xd500  class func BasicPluginInfo.__allocating_init(bundle:) // init 
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
	0x13b90  @objc RelevanceEngineMetricsBlockRecorder.recordTrainingMetrics:forInteraction: <stripped>
	0x13c80  @objc RelevanceEngineMetricsBlockRecorder.recordPredictionMetrics:forInteraction: <stripped>
	0x13c80  @objc RelevanceEngineMetricsBlockRecorder.recordCallibrationCurveMetrics:forInteraction: <stripped>
	0x13c90  @objc RelevanceEngineMetricsBlockRecorder.init <stripped>
	0x13d40  @objc RelevanceEngineMetricsBlockRecorder..cxx_destruct <stripped>

	// Swift methods
	0x13960  func <stripped> // method 
 }

 class HealthExperience.HKHealthSourceDataSource : MutableArrayDataSource {

	// Properties
	let healthStore : HKHealthStore // +0x50 (0x8)
	var objectType : HKObjectType // +0x58 (0x8)

	// Swift methods
	0x13db0  func <stripped> // method 
	0x14050  func <stripped> // method 
	0x14230  func <stripped> // method 
 }

 class HealthExperience.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext? // +0x10 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x18 (0x8)
	var persistentStoreDescription : NSPersistentStoreDescription // +0x20 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x28 (0x8)

	// Swift methods
	0x14ba0  func MemoryHealthExperienceStore.viewContext.getter // getter 
	0x14c60  func MemoryHealthExperienceStore.viewContext.setter // setter 
	0x14c80  func MemoryHealthExperienceStore.viewContext.modify // modifyCoroutine 
	0x14d80  func MemoryHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x14e80  func MemoryHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x14ea0  func MemoryHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x14ef0  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x151d0  func MemoryHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x15200  func MemoryHealthExperienceStore.persistentStoreDescription.setter // setter 
	0x15240  func MemoryHealthExperienceStore.persistentStoreDescription.modify // modifyCoroutine 
	0x15280  func MemoryHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x15300  func MemoryHealthExperienceStore.initPersistentContainer() // method 
	0x15330  func MemoryHealthExperienceStore.persistentContainer.getter // getter 
	0x15390  func MemoryHealthExperienceStore.persistentContainer.setter // setter 
	0x153b0  func MemoryHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x15440  func <stripped> // method 
	0x158b0  func MemoryHealthExperienceStore.deleteAllFeedItems() // method 
 }

 class HealthExperience.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : [BasicPluginInfo] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x16a30  @objc PluginBundleProviderPrecacheOperation.main <stripped>
	0x16ab0  @objc PluginBundleProviderPrecacheOperation.init <stripped>
	0x16b30  @objc PluginBundleProviderPrecacheOperation..cxx_destruct <stripped>

	// Swift methods
	0x16370  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
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
	0x1b9e0  @objc HealthExperienceStoreCoreSpotlightOperation.main <stripped>
	0x1ba70  @objc HealthExperienceStoreCoreSpotlightOperation.init <stripped>
	0x1bb10  @objc HealthExperienceStoreCoreSpotlightOperation..cxx_destruct <stripped>

	// Swift methods
	0x1b620  class func HealthExperienceStoreCoreSpotlightOperation.__allocating_init(store:) // init 
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
	0x1cec0  @objc AsynchronousProgressOperation.main <stripped>
	0x1e020  @objc AsynchronousProgressOperation.init <stripped>
	0x1e0c0  @objc AsynchronousProgressOperation..cxx_destruct <stripped>

	// Swift methods
	0x1ca70  func AsynchronousProgressOperation.timeout.getter // getter 
	0x1cac0  func AsynchronousProgressOperation.timeout.setter // setter 
	0x1cb20  func AsynchronousProgressOperation.timeout.modify // modifyCoroutine 
	0x1cb60  func AsynchronousProgressOperation.operationTimedOut.getter // getter 
	0x1cb90  func AsynchronousProgressOperation.operationTimedOut.setter // setter 
	0x1cbd0  func AsynchronousProgressOperation.operationTimedOut.modify // modifyCoroutine 
	0x1cc20  func AsynchronousProgressOperation.progress.getter // getter 
	0x1cc60  func AsynchronousProgressOperation.progress.setter // setter 
	0x1ccd0  func AsynchronousProgressOperation.progress.modify // modifyCoroutine 
	0x1cdd0  func AsynchronousProgressOperation.beginWork() // method 
	0x1cde0  func AsynchronousProgressOperation.timeoutOccured() // method 
	0x1d4c0  func AsynchronousProgressOperation.interceptCancellationHandler() // method 
 }

 struct HealthExperience.TypeLister { }

 class HealthExperience.AsynchronousOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var autoFinishesOnCancel : Bool // +0x8 (0x1)
	let operationState : OperationState // +0x10 (0x8)
	let workLock : UnfairLock // +0x18 (0x8)
	var didBeginWork : ()? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x20bb0  @objc AsynchronousOperation.isAsynchronous <stripped>
	0x20be0  @objc AsynchronousOperation.isCancelled <stripped>
	0x20c00  @objc AsynchronousOperation.isExecuting <stripped>
	0x20d00  @objc AsynchronousOperation.isFinished <stripped>
	0x21090  @objc AsynchronousOperation.start <stripped>
	0x210c0  @objc AsynchronousOperation.cancel <stripped>
	0x21120  @objc AsynchronousOperation.main <stripped>
	0x21180  @objc AsynchronousOperation.description <stripped>
	0x214c0  @objc AsynchronousOperation.init <stripped>
	0x21530  @objc AsynchronousOperation..cxx_destruct <stripped>

	// Swift methods
	0x1fab0  func AsynchronousOperation.autoFinishesOnCancel.getter // getter 
	0x1fae0  func AsynchronousOperation.autoFinishesOnCancel.setter // setter 
	0x1fb20  func AsynchronousOperation.autoFinishesOnCancel.modify // modifyCoroutine 
	0x1fb60  func AsynchronousOperation.performWithExclusiveAccess(_:) // method 
	0x1fba0  func AsynchronousOperation.performWithExclusiveAccessThenFinish(_:) // method 
	0x21150  func AsynchronousOperation.cleanUp() // method 
	0x1fd20  func AsynchronousOperation.didBeginWork.getter // getter 
	0x1fd70  func AsynchronousOperation.didBeginWork.setter // setter 
	0x1fdd0  func AsynchronousOperation.didBeginWork.modify // modifyCoroutine 
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
	let intervalComponents : DateComponents // +0x17a000 (0x0)
	var statisticsLock : UnfairLock // +0x0 (0x8)
	let systolicType : HKQuantityType // +0x17a000 (0x8)
	let diastolicType : HKQuantityType // +0x5 (0x8)
	var systolicQuery : HKStatisticsCollectionQuery? // +0x14 (0x8)
	var diastolicQuery : HKStatisticsCollectionQuery? // +0x65745f5f (0x8)
	var systolicStatisticsCollection : HKStatisticsCollection? // +0x0 (0x8)
	var diastolicStatisticsCollection : HKStatisticsCollection? // +0x45545f5f (0x8)

	// Swift methods
	0x21be0  func <stripped> // method 
	0x21c40  func <stripped> // method 
	0x22900  func <stripped> // method 
	0x23180  func <stripped> // method 
 }

 class HealthExperience.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)

	// Swift methods
	0x252e0  class func UnfairLock.__allocating_init() // init 
	0x253f0  func UnfairLock.lock() // method 
	0x25400  func UnfairLock.unlock() // method 
	0x25410  func UnfairLock.assertOwner() // method 
 }

 class HealthExperience.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25560  @objc FeedSection.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25830  @objc HealthExperienceStoreCoreSpotlightDelegate.usePrivateIndex <stripped>
	0x25880  @objc HealthExperienceStoreCoreSpotlightDelegate.bundleIdentifier <stripped>
	0x258e0  @objc HealthExperienceStoreCoreSpotlightDelegate.domainIdentifier <stripped>
	0x25940  @objc HealthExperienceStoreCoreSpotlightDelegate.indexName <stripped>
	0x259c0  @objc HealthExperienceStoreCoreSpotlightDelegate.protectionClass <stripped>
	0x25da0  @objc HealthExperienceStoreCoreSpotlightDelegate.attributeSetForObject: <stripped>
	0x26110  @objc HealthExperienceStoreCoreSpotlightDelegate.initForStoreWithDescription:model: <stripped>
	0x26200  @objc HealthExperienceStoreCoreSpotlightDelegate..cxx_destruct <stripped>
 }

 class HealthExperience.MedicalIDFetchOperation : AsyncOperation {

	// Properties
	var medicalIDData : _HKMedicalIDData? // +0x18 (0x8)
	var fetchError : Error? // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x26900  @objc MedicalIDFetchOperation.main <stripped>
	0x26b50  @objc MedicalIDFetchOperation.init <stripped>
	0x26c20  @objc MedicalIDFetchOperation..cxx_destruct <stripped>

	// Swift methods
	0x26930  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : () // +0x10 (0x10)
	var queue : OS_dispatch_queue // +0x20 (0x8)
	var debounceInterval : Double // +0x28 (0x8)
	var workItem : Atomic<DispatchWorkItem?> // +0x30 (0x8)

	// Swift methods
	0x26d20  func DebouncedDispatchItem.block.getter // getter 
	0x26d60  func DebouncedDispatchItem.block.setter // setter 
	0x26da0  func DebouncedDispatchItem.block.modify // modifyCoroutine 
	0x26dd0  func DebouncedDispatchItem.queue.getter // getter 
	0x26e00  func DebouncedDispatchItem.queue.setter // setter 
	0x26e40  func DebouncedDispatchItem.queue.modify // modifyCoroutine 
	0x26e70  func DebouncedDispatchItem.debounceInterval.getter // getter 
	0x26ea0  func DebouncedDispatchItem.debounceInterval.setter // setter 
	0x26ee0  func DebouncedDispatchItem.debounceInterval.modify // modifyCoroutine 
	0x26f20  func DebouncedDispatchItem.cancel() // method 
	0x26fe0  func DebouncedDispatchItem.dispatch() // method 
	0x27530  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
 }

 class HealthExperience.ModelTrainingScenarioExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinator : RelevanceEngineCoordinator // +0x10 (0x8)
	let store : HealthExperienceStore // +0x18 (0x28)

	// Swift methods
	0x27950  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x27a10  func ModelTrainingScenarioExecutor.saveModelToDisk(completion:) // method 
	0x27a30  func ModelTrainingScenarioExecutor.execute(scenario:completion:) // method 
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
	0x2fb40  @objc MedicalIDCache.init <stripped>
	0x2fbc0  @objc MedicalIDCache..cxx_destruct <stripped>

	// Swift methods
	0x2eb20  func MedicalIDCache.medicalIDDataResult.getter // getter 
	0x2e9b0  class func MedicalIDCache.__allocating_init(healthStore:) // init 
	0x2eb90  func <stripped> // method 
	0x2f280  func MedicalIDCache.enqueueMedicalIDFetch() // method 
	0x2f430  func <stripped> // method 
	0x2f980  func <stripped> // method 
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
	0x30ac0  @objc GroupConfigurationLoader.elementGroupWithIdentifier: <stripped>
	0x30b80  @objc GroupConfigurationLoader.init <stripped>
 }

 class HealthExperience.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x32e20  @objc HealthExperienceStoreCleanupOperation.start <stripped>
	0x32e50  @objc HealthExperienceStoreCleanupOperation.description <stripped>
	0x32fd0  @objc HealthExperienceStoreCleanupOperation.init <stripped>
	0x33050  @objc HealthExperienceStoreCleanupOperation..cxx_destruct <stripped>

	// Swift methods
	0x320c0  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.Matcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)

	// Swift methods
	0x34fa0  func Matcher.constraintPredicates.getter // getter 
	0x34f90  func Matcher.constraintPredicates.setter // setter 
	0x33140  func Matcher.constraintPredicates.modify // modifyCoroutine 
	0x33170  class func Matcher.__allocating_init() // init 
 }

 class HealthExperience.AggregateMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AggregateMatcherProtocol,  MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)
	var aggregateIntervalComponents : DateComponents? // +0x0 (0x0)
	var aggregateStatisticsOptions : HKStatisticsOptions // +0x74735f5f (0x8)
	var anchorDate : Date // +0x0 (0x0)

	// Swift methods
	0x33490  func AggregateMatcher.constraintPredicates.getter // getter 
	0x334c0  func AggregateMatcher.constraintPredicates.setter // setter 
	0x33500  func AggregateMatcher.constraintPredicates.modify // modifyCoroutine 
	0x33530  func AggregateMatcher.aggregateIntervalComponents.getter // getter 
	0x33570  func AggregateMatcher.aggregateIntervalComponents.setter // setter 
	0x335c0  func AggregateMatcher.aggregateIntervalComponents.modify // modifyCoroutine 
	0x33600  func AggregateMatcher.aggregateStatisticsOptions.getter // getter 
	0x33630  func AggregateMatcher.aggregateStatisticsOptions.setter // setter 
	0x33670  func AggregateMatcher.aggregateStatisticsOptions.modify // modifyCoroutine 
	0x336b0  func AggregateMatcher.anchorDate.getter // getter 
	0x33700  func AggregateMatcher.anchorDate.setter // setter 
	0x33760  func AggregateMatcher.anchorDate.modify // modifyCoroutine 
	0x337b0  class func AggregateMatcher.__allocating_init() // init 
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
	let pretrainedModelURL : URL? // +0x13e5a8 (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder? // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4ba10  @objc RelevanceEngineCoordinator.init <stripped>
	0x4ba80  @objc RelevanceEngineCoordinator..cxx_destruct <stripped>

	// Swift methods
	0x48490  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelDirectoryName:pretrainedModelURL:) // init 
	0x48980  func RelevanceEngineCoordinator.resumeEngineIfNeeded(completion:) // method 
	0x48af0  func RelevanceEngineCoordinator.makeResumeEngineOperation() // method 
	0x48b90  func RelevanceEngineCoordinator.modelPath.getter // getter 
	0x49000  func RelevanceEngineCoordinator.modelPath.setter // setter 
	0x490c0  func RelevanceEngineCoordinator.modelPath.modify // modifyCoroutine 
	0x49210  func RelevanceEngineCoordinator.trainingContext.getter // getter 
	0x49320  func RelevanceEngineCoordinator.trainingContext.setter // setter 
	0x49340  func RelevanceEngineCoordinator.trainingContext.modify // modifyCoroutine 
	0x493a0  func <stripped> // method 
	0x49c10  func RelevanceEngineCoordinator.element(for:in:) // method 
	0x49f30  func RelevanceEngineCoordinator.submitTraining(trainingEvents:store:completion:) // method 
	0x4a170  func <stripped> // method 
	0x4aed0  func RelevanceEngineCoordinator.collectDiagnosticLogs(completion:) // method 
	0x4b120  func RelevanceEngineCoordinator.gatherMetrics(completion:) // method 
	0x4b290  func RelevanceEngineCoordinator.clearEngineAndModel(completion:) // method 
	0x4b630  func RelevanceEngineCoordinator.saveModelToDisk(completion:) // method 
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
	0x57150  func MutableArrayDataSource.eventHandler.getter // getter 
	0x57180  func MutableArrayDataSource.eventHandler.setter // setter 
	0x571d0  func MutableArrayDataSource.eventHandler.modify // modifyCoroutine 
	0x572b0  func MutableArrayDataSource.promise.getter // getter 
	0x572e0  func MutableArrayDataSource.arrangedSections.getter // getter 
	0x57310  func MutableArrayDataSource.arrangedSections.setter // setter 
	0x57350  func MutableArrayDataSource.arrangedSections.modify // modifyCoroutine 
	0x57390  func MutableArrayDataSource.identifier.getter // getter 
	0x57410  func MutableArrayDataSource.identifier.setter // setter 
	0x57430  func MutableArrayDataSource.identifier.modify // modifyCoroutine 
	0x57540  func MutableArrayDataSource.sectionIdentifiers.getter // getter 
	0x584f0  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x57930  func MutableArrayDataSource.replaceAllSections(with:) // method 
	0x57a20  func MutableArrayDataSource.insert(section:index:) // method 
	0x57a50  func MutableArrayDataSource.removeSection(at:) // method 
	0x57c60  func MutableArrayDataSource.insert(item:at:) // method 
	0x57cd0  func MutableArrayDataSource.removeItemAt(indexPath:) // method 
	0x57d40  func MutableArrayDataSource.reload(item:at:) // method 
	0x57db0  func MutableArrayDataSource.send(_:) // method 
 }

 class HealthExperience.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x5dc00  @objc FeedItem.initWithEntity:insertIntoManagedObjectContext: <stripped>
	0x5dcf0  @objc FeedItem..cxx_construct <stripped>
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter // +0x18 (0x8)

	// Swift methods
	0x5e6f0  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
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
	0x60160  @objc FeedItemREElementDataSource.supportedSections <stripped>
	0x60dd0  @objc FeedItemREElementDataSource.getElementsInSection:withHandler: <stripped>
	0x60f70  @objc FeedItemREElementDataSource.init <stripped>
	0x60ff0  @objc FeedItemREElementDataSource..cxx_destruct <stripped>

	// Swift methods
	0x5ffd0  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
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
	0x65e00  @objc FavoritesProvider.dealloc <stripped>
	0x66660  @objc FavoritesProvider.favoritesChangedRemotely: <stripped>
	0x66750  @objc FavoritesProvider.init <stripped>
	0x65eb0  @objc FavoritesProvider..cxx_destruct <stripped>

	// Swift methods
	0x65970  func FavoritesProvider.favorites.getter // getter 
	0x65c00  class func FavoritesProvider.__allocating_init(controller:) // init 
	0x65f00  func FavoritesProvider.addObserver(_:) // method 
	0x65fa0  func FavoritesProvider.removeObserver(_:) // method 
	0x65fc0  func <stripped> // method 
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
	0x6aeb0  func HKActiveEnergySample.debugDescription.getter // getter 
	0x6b1a0  func HKActiveEnergySample.debugDescription.setter // setter 
	0x6b1c0  func HKActiveEnergySample.debugDescription.modify // modifyCoroutine 
	0x6b260  func HKActiveEnergySample.shortUnitString.getter // getter 
	0x6b2a0  func HKActiveEnergySample.shortUnitString.setter // setter 
	0x6b2e0  func HKActiveEnergySample.shortUnitString.modify // modifyCoroutine 
	0x6b310  func HKActiveEnergySample.longUnitString.getter // getter 
	0x6b350  func HKActiveEnergySample.longUnitString.setter // setter 
	0x6b390  func HKActiveEnergySample.longUnitString.modify // modifyCoroutine 
	0x6ba80  func HKActiveEnergySample.dateRange.getter // getter 
	0x6bad0  func HKActiveEnergySample.dateRange.setter // setter 
	0x6bb30  func HKActiveEnergySample.dateRange.modify // modifyCoroutine 
	0x6bb70  class func HKActiveEnergySample.__allocating_init(statistics:) // init 
	0x6bbc0  class func HKActiveEnergySample.__allocating_init(sample:) // init 
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
	0x6d520  @objc SetDefaultFavoritesOperation.main <stripped>
	0x6dba0  @objc SetDefaultFavoritesOperation.init <stripped>
	0x6dc80  @objc SetDefaultFavoritesOperation..cxx_destruct <stripped>

	// Swift methods
	0x6cd30  func <stripped> // getter 
	0x6ce50  func <stripped> // getter 
	0x6d260  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x6d550  func <stripped> // method 
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
	0x75130  func <stripped> // method 
	0x75550  func FeedPopulationManager.relevanceEngineCoordinator.getter // getter 
	0x75580  class func FeedPopulationManager.__allocating_init(healthExperienceStore:) // init 
	0x75ca0  func FeedPopulationManager.populateFeed(feedKinds:for:completion:) // method 
	0x76eb0  func FeedPopulationManager.deleteFeed(feedKinds:completion:) // method 
	0x77e70  func FeedPopulationManager.submitTraining(trainingEvents:store:completion:) // method 
	0x78790  func <stripped> // method 
	0x79520  func FeedPopulationManager.feedItemSubmissionOccurred(_:) // method 
 }

 class HealthExperience.PopulationOperation : AsynchronousOperation {

	// Properties
	let kinds : [Feed.Kind]
	let populationManager : FeedPopulationManager

	// ObjC -> Swift bridged methods
	0x7a1a0  @objc PopulationOperation.main <stripped>
	0x7a1e0  @objc PopulationOperation.init <stripped>
	0x7a290  @objc PopulationOperation..cxx_destruct <stripped>

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
	var boundingRange : DateInterval // +0x11a3d (0x0)
	let storageContext : NSManagedObjectContext // +0x0 (0x8)
	let pluginInfo : PluginInfo // +0x2 (0x28)
	var hasOperationCompleted : Bool? // +0x140540 (0x1)

	// Swift methods
	0x81960  func HealthExperienceStoreFeedItemContext.healthStore.getter // getter 
	0x81a20  func HealthExperienceStoreFeedItemContext.favoritesProvider.getter // getter 
	0x81b40  func HealthExperienceStoreFeedItemContext.environment.getter // getter 
	0x81ce0  func HealthExperienceStoreFeedItemContext.boundingRange.getter // getter 
	0x81d30  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x81fd0  func HealthExperienceStoreFeedItemContext.pluginData.getter // getter 
	0x824b0  func HealthExperienceStoreFeedItemContext.commit(_:) // method 
	0x83790  func <stripped> // method 
	0x85650  func <stripped> // method 
	0x85fb0  func <stripped> // method 
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
	0x8b0c0  func HKBloodPressureSample.shortUnitString.getter // getter 
	0x8b100  func HKBloodPressureSample.shortUnitString.setter // setter 
	0x8b140  func HKBloodPressureSample.shortUnitString.modify // modifyCoroutine 
	0x8b170  func HKBloodPressureSample.longUnitString.getter // getter 
	0x8b1b0  func HKBloodPressureSample.longUnitString.setter // setter 
	0x8b1f0  func HKBloodPressureSample.longUnitString.modify // modifyCoroutine 
	0x8b750  func HKBloodPressureSample.dateRange.getter // getter 
	0x8b7a0  func HKBloodPressureSample.dateRange.setter // setter 
	0x8b800  func HKBloodPressureSample.dateRange.modify // modifyCoroutine 
	0x8b840  func HKBloodPressureSample.systolic.getter // getter 
	0x8b9f0  func HKBloodPressureSample.systolic.setter // setter 
	0x8ba10  func HKBloodPressureSample.systolic.modify // modifyCoroutine 
	0x8ba90  func HKBloodPressureSample.diastolic.getter // getter 
	0x8bc80  func HKBloodPressureSample.diastolic.setter // setter 
	0x8bca0  func HKBloodPressureSample.diastolic.modify // modifyCoroutine 
	0x8bd00  class func HKBloodPressureSample.__allocating_init(sample:) // init 
	0x8bd30  class func HKBloodPressureSample.__allocating_init(statistics:) // init 
	0x8b020  class func HKBloodPressureSample.__allocating_init(systolic:diastolic:) // init 
	0x8e3d0  func HKBloodPressureSample.smallDescriptionString() // method 
	0x8bdc0  func HKBloodPressureSample.longDescriptionString() // method 
 }

 class HealthExperience.HKBloodPressureSampleMatcher : AggregateMatcher {
	// Swift methods
	0x8c4f0  func HKBloodPressureSampleMatcher.dataSource(healthStore:) // method 
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
	0x94d40  @objc SaveManagedObjectContextOperation.main <stripped>
	0x94e70  @objc SaveManagedObjectContextOperation.init <stripped>
	0x94f10  @objc SaveManagedObjectContextOperation..cxx_destruct <stripped>

	// Swift methods
	0x94850  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
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
	0x98660  @objc AsynchronousBlockOperation.main <stripped>
	0x986c0  @objc AsynchronousBlockOperation.debugDescription <stripped>
	0x98930  @objc AsynchronousBlockOperation.init <stripped>
	0x989e0  @objc AsynchronousBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x98420  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
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
	0x9fce0  func <stripped> // method 
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
	0xa05f0  func <stripped> // method 
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
	0xbf0d0  func HKBloodGlucoseSample.shortUnitString.getter // getter 
	0xbfe10  func HKBloodGlucoseSample.shortUnitString.setter // setter 
	0xa8810  func HKBloodGlucoseSample.shortUnitString.modify // modifyCoroutine 
	0xbf0e0  func HKBloodGlucoseSample.longUnitString.getter // getter 
	0xbfe20  func HKBloodGlucoseSample.longUnitString.setter // setter 
	0xa8840  func HKBloodGlucoseSample.longUnitString.modify // modifyCoroutine 
	0xa8cf0  func HKBloodGlucoseSample.dateRange.getter // getter 
	0xa8d10  func HKBloodGlucoseSample.dateRange.setter // setter 
	0xa8d30  func HKBloodGlucoseSample.dateRange.modify // modifyCoroutine 
	0xa8d70  class func HKBloodGlucoseSample.__allocating_init(statistics:) // init 
	0xa8de0  class func HKBloodGlucoseSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf110  func HKBodyMassIndex.shortUnitString.getter // getter 
	0xbfe50  func HKBodyMassIndex.shortUnitString.setter // setter 
	0xa9210  func HKBodyMassIndex.shortUnitString.modify // modifyCoroutine 
	0xbf120  func HKBodyMassIndex.longUnitString.getter // getter 
	0xbfe60  func HKBodyMassIndex.longUnitString.setter // setter 
	0xa9240  func HKBodyMassIndex.longUnitString.modify // modifyCoroutine 
	0xa96f0  func HKBodyMassIndex.dateRange.getter // getter 
	0xa9710  func HKBodyMassIndex.dateRange.setter // setter 
	0xa9730  func HKBodyMassIndex.dateRange.modify // modifyCoroutine 
	0xa9770  class func HKBodyMassIndex.__allocating_init(statistics:) // init 
	0xa97c0  class func HKBodyMassIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf0f0  func HKBodyFatPercentage.shortUnitString.getter // getter 
	0xbfe30  func HKBodyFatPercentage.shortUnitString.setter // setter 
	0xa9b10  func HKBodyFatPercentage.shortUnitString.modify // modifyCoroutine 
	0xbf100  func HKBodyFatPercentage.longUnitString.getter // getter 
	0xbfe40  func HKBodyFatPercentage.longUnitString.setter // setter 
	0xa9b40  func HKBodyFatPercentage.longUnitString.modify // modifyCoroutine 
	0xa9ff0  func HKBodyFatPercentage.dateRange.getter // getter 
	0xaa010  func HKBodyFatPercentage.dateRange.setter // setter 
	0xaa030  func HKBodyFatPercentage.dateRange.modify // modifyCoroutine 
	0xaa070  class func HKBodyFatPercentage.__allocating_init(statistics:) // init 
	0xaa0c0  class func HKBodyFatPercentage.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyHeight : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf190  func HKBodyHeight.shortUnitString.getter // getter 
	0xbfed0  func HKBodyHeight.shortUnitString.setter // setter 
	0xaa430  func HKBodyHeight.shortUnitString.modify // modifyCoroutine 
	0xbf1a0  func HKBodyHeight.longUnitString.getter // getter 
	0xbfee0  func HKBodyHeight.longUnitString.setter // setter 
	0xaa460  func HKBodyHeight.longUnitString.modify // modifyCoroutine 
	0xaa8f0  func HKBodyHeight.dateRange.getter // getter 
	0xaa910  func HKBodyHeight.dateRange.setter // setter 
	0xaa930  func HKBodyHeight.dateRange.modify // modifyCoroutine 
	0xaa970  class func HKBodyHeight.__allocating_init(statistics:) // init 
	0xaa9c0  class func HKBodyHeight.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKWaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf130  func HKWaistCircumference.shortUnitString.getter // getter 
	0xbfe70  func HKWaistCircumference.shortUnitString.setter // setter 
	0xaad10  func HKWaistCircumference.shortUnitString.modify // modifyCoroutine 
	0xbf140  func HKWaistCircumference.longUnitString.getter // getter 
	0xbfe80  func HKWaistCircumference.longUnitString.setter // setter 
	0xaad40  func HKWaistCircumference.longUnitString.modify // modifyCoroutine 
	0xab1d0  func HKWaistCircumference.dateRange.getter // getter 
	0xab1f0  func HKWaistCircumference.dateRange.setter // setter 
	0xab210  func HKWaistCircumference.dateRange.modify // modifyCoroutine 
	0xab250  class func HKWaistCircumference.__allocating_init(statistics:) // init 
	0xab2a0  class func HKWaistCircumference.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKVO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf150  func HKVO2Max.shortUnitString.getter // getter 
	0xbfe90  func HKVO2Max.shortUnitString.setter // setter 
	0xab610  func HKVO2Max.shortUnitString.modify // modifyCoroutine 
	0xbf160  func HKVO2Max.longUnitString.getter // getter 
	0xbfea0  func HKVO2Max.longUnitString.setter // setter 
	0xab640  func HKVO2Max.longUnitString.modify // modifyCoroutine 
	0xabaf0  func HKVO2Max.dateRange.getter // getter 
	0xabb10  func HKVO2Max.dateRange.setter // setter 
	0xabb30  func HKVO2Max.dateRange.modify // modifyCoroutine 
	0xabb70  class func HKVO2Max.__allocating_init(statistics:) // init 
	0xabbc0  class func HKVO2Max.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKLeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf170  func HKLeanBodyMass.shortUnitString.getter // getter 
	0xbfeb0  func HKLeanBodyMass.shortUnitString.setter // setter 
	0xabf10  func HKLeanBodyMass.shortUnitString.modify // modifyCoroutine 
	0xbf180  func HKLeanBodyMass.longUnitString.getter // getter 
	0xbfec0  func HKLeanBodyMass.longUnitString.setter // setter 
	0xabf40  func HKLeanBodyMass.longUnitString.modify // modifyCoroutine 
	0xac3d0  func HKLeanBodyMass.dateRange.getter // getter 
	0xac3f0  func HKLeanBodyMass.dateRange.setter // setter 
	0xac410  func HKLeanBodyMass.dateRange.modify // modifyCoroutine 
	0xac450  class func HKLeanBodyMass.__allocating_init(statistics:) // init 
	0xac4a0  class func HKLeanBodyMass.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xac7f0  func HKHeartRate.shortUnitString.getter // getter 
	0xac830  func HKHeartRate.shortUnitString.setter // setter 
	0xac870  func HKHeartRate.shortUnitString.modify // modifyCoroutine 
	0xac8a0  func HKHeartRate.longUnitString.getter // getter 
	0xac8e0  func HKHeartRate.longUnitString.setter // setter 
	0xac920  func HKHeartRate.longUnitString.modify // modifyCoroutine 
	0xace10  func HKHeartRate.dateRange.getter // getter 
	0xace30  func HKHeartRate.dateRange.setter // setter 
	0xace50  func HKHeartRate.dateRange.modify // modifyCoroutine 
	0xace90  class func HKHeartRate.__allocating_init(statistics:) // init 
	0xacee0  class func HKHeartRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDistanceWalkingRunning : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf1b0  func HKDistanceWalkingRunning.shortUnitString.getter // getter 
	0xbfef0  func HKDistanceWalkingRunning.shortUnitString.setter // setter 
	0xad2e0  func HKDistanceWalkingRunning.shortUnitString.modify // modifyCoroutine 
	0xbf1c0  func HKDistanceWalkingRunning.longUnitString.getter // getter 
	0xbff00  func HKDistanceWalkingRunning.longUnitString.setter // setter 
	0xad310  func HKDistanceWalkingRunning.longUnitString.modify // modifyCoroutine 
	0xad7a0  func HKDistanceWalkingRunning.dateRange.getter // getter 
	0xad7c0  func HKDistanceWalkingRunning.dateRange.setter // setter 
	0xad7e0  func HKDistanceWalkingRunning.dateRange.modify // modifyCoroutine 
	0xad820  class func HKDistanceWalkingRunning.__allocating_init(statistics:) // init 
	0xad870  class func HKDistanceWalkingRunning.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKFlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf1d0  func HKFlightsClimbed.shortUnitString.getter // getter 
	0xbff10  func HKFlightsClimbed.shortUnitString.setter // setter 
	0xadbe0  func HKFlightsClimbed.shortUnitString.modify // modifyCoroutine 
	0xbf1e0  func HKFlightsClimbed.longUnitString.getter // getter 
	0xbff20  func HKFlightsClimbed.longUnitString.setter // setter 
	0xadc10  func HKFlightsClimbed.longUnitString.modify // modifyCoroutine 
	0xae0c0  func HKFlightsClimbed.dateRange.getter // getter 
	0xae0e0  func HKFlightsClimbed.dateRange.setter // setter 
	0xae100  func HKFlightsClimbed.dateRange.modify // modifyCoroutine 
	0xae140  class func HKFlightsClimbed.__allocating_init(statistics:) // init 
	0xae190  class func HKFlightsClimbed.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf1f0  func HKOxygenSaturation.shortUnitString.getter // getter 
	0xbff30  func HKOxygenSaturation.shortUnitString.setter // setter 
	0xae500  func HKOxygenSaturation.shortUnitString.modify // modifyCoroutine 
	0xbf200  func HKOxygenSaturation.longUnitString.getter // getter 
	0xbff40  func HKOxygenSaturation.longUnitString.setter // setter 
	0xae530  func HKOxygenSaturation.longUnitString.modify // modifyCoroutine 
	0xae9c0  func HKOxygenSaturation.dateRange.getter // getter 
	0xae9e0  func HKOxygenSaturation.dateRange.setter // setter 
	0xaea00  func HKOxygenSaturation.dateRange.modify // modifyCoroutine 
	0xaea40  class func HKOxygenSaturation.__allocating_init(statistics:) // init 
	0xaea90  class func HKOxygenSaturation.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf210  func HKBloodAlcoholContent.shortUnitString.getter // getter 
	0xbff50  func HKBloodAlcoholContent.shortUnitString.setter // setter 
	0xaee00  func HKBloodAlcoholContent.shortUnitString.modify // modifyCoroutine 
	0xbf220  func HKBloodAlcoholContent.longUnitString.getter // getter 
	0xbff60  func HKBloodAlcoholContent.longUnitString.setter // setter 
	0xaee30  func HKBloodAlcoholContent.longUnitString.modify // modifyCoroutine 
	0xaf2c0  func HKBloodAlcoholContent.dateRange.getter // getter 
	0xaf2e0  func HKBloodAlcoholContent.dateRange.setter // setter 
	0xaf300  func HKBloodAlcoholContent.dateRange.modify // modifyCoroutine 
	0xaf340  class func HKBloodAlcoholContent.__allocating_init(statistics:) // init 
	0xaf390  class func HKBloodAlcoholContent.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf230  func HKForcedVitalCapacity.shortUnitString.getter // getter 
	0xbff70  func HKForcedVitalCapacity.shortUnitString.setter // setter 
	0xaf700  func HKForcedVitalCapacity.shortUnitString.modify // modifyCoroutine 
	0xbf240  func HKForcedVitalCapacity.longUnitString.getter // getter 
	0xbff80  func HKForcedVitalCapacity.longUnitString.setter // setter 
	0xaf730  func HKForcedVitalCapacity.longUnitString.modify // modifyCoroutine 
	0xafbc0  func HKForcedVitalCapacity.dateRange.getter // getter 
	0xafbe0  func HKForcedVitalCapacity.dateRange.setter // setter 
	0xafc00  func HKForcedVitalCapacity.dateRange.modify // modifyCoroutine 
	0xafc40  class func HKForcedVitalCapacity.__allocating_init(statistics:) // init 
	0xafc90  class func HKForcedVitalCapacity.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedExpiratoryVolume : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf250  func HKForcedExpiratoryVolume.shortUnitString.getter // getter 
	0xbff90  func HKForcedExpiratoryVolume.shortUnitString.setter // setter 
	0xb0000  func HKForcedExpiratoryVolume.shortUnitString.modify // modifyCoroutine 
	0xbf260  func HKForcedExpiratoryVolume.longUnitString.getter // getter 
	0xbffa0  func HKForcedExpiratoryVolume.longUnitString.setter // setter 
	0xb0030  func HKForcedExpiratoryVolume.longUnitString.modify // modifyCoroutine 
	0xb04c0  func HKForcedExpiratoryVolume.dateRange.getter // getter 
	0xb04e0  func HKForcedExpiratoryVolume.dateRange.setter // setter 
	0xb0500  func HKForcedExpiratoryVolume.dateRange.modify // modifyCoroutine 
	0xb0540  class func HKForcedExpiratoryVolume.__allocating_init(statistics:) // init 
	0xb0590  class func HKForcedExpiratoryVolume.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf270  func HKPeakExpiratoryFlowRate.shortUnitString.getter // getter 
	0xbffb0  func HKPeakExpiratoryFlowRate.shortUnitString.setter // setter 
	0xb0900  func HKPeakExpiratoryFlowRate.shortUnitString.modify // modifyCoroutine 
	0xbf280  func HKPeakExpiratoryFlowRate.longUnitString.getter // getter 
	0xbffc0  func HKPeakExpiratoryFlowRate.longUnitString.setter // setter 
	0xb0930  func HKPeakExpiratoryFlowRate.longUnitString.modify // modifyCoroutine 
	0xb0de0  func HKPeakExpiratoryFlowRate.dateRange.getter // getter 
	0xb0e00  func HKPeakExpiratoryFlowRate.dateRange.setter // setter 
	0xb0e20  func HKPeakExpiratoryFlowRate.dateRange.modify // modifyCoroutine 
	0xb0e60  class func HKPeakExpiratoryFlowRate.__allocating_init(statistics:) // init 
	0xb0eb0  class func HKPeakExpiratoryFlowRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf290  func HKPeripheralPerfusionIndex.shortUnitString.getter // getter 
	0xbffd0  func HKPeripheralPerfusionIndex.shortUnitString.setter // setter 
	0xb1220  func HKPeripheralPerfusionIndex.shortUnitString.modify // modifyCoroutine 
	0xbf2a0  func HKPeripheralPerfusionIndex.longUnitString.getter // getter 
	0xbffe0  func HKPeripheralPerfusionIndex.longUnitString.setter // setter 
	0xb1250  func HKPeripheralPerfusionIndex.longUnitString.modify // modifyCoroutine 
	0xb16e0  func HKPeripheralPerfusionIndex.dateRange.getter // getter 
	0xb1700  func HKPeripheralPerfusionIndex.dateRange.setter // setter 
	0xb1720  func HKPeripheralPerfusionIndex.dateRange.modify // modifyCoroutine 
	0xb1760  class func HKPeripheralPerfusionIndex.__allocating_init(statistics:) // init 
	0xb17b0  class func HKPeripheralPerfusionIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf2b0  func HKDietaryFatTotal.shortUnitString.getter // getter 
	0xbfff0  func HKDietaryFatTotal.shortUnitString.setter // setter 
	0xb1b20  func HKDietaryFatTotal.shortUnitString.modify // modifyCoroutine 
	0xbf2c0  func HKDietaryFatTotal.longUnitString.getter // getter 
	0xc0000  func HKDietaryFatTotal.longUnitString.setter // setter 
	0xb1b50  func HKDietaryFatTotal.longUnitString.modify // modifyCoroutine 
	0xb1fe0  func HKDietaryFatTotal.dateRange.getter // getter 
	0xb2000  func HKDietaryFatTotal.dateRange.setter // setter 
	0xb2020  func HKDietaryFatTotal.dateRange.modify // modifyCoroutine 
	0xb2060  class func HKDietaryFatTotal.__allocating_init(statistics:) // init 
	0xb20b0  class func HKDietaryFatTotal.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf2d0  func HKDietaryFatPolyunsaturated.shortUnitString.getter // getter 
	0xc0010  func HKDietaryFatPolyunsaturated.shortUnitString.setter // setter 
	0xb2420  func HKDietaryFatPolyunsaturated.shortUnitString.modify // modifyCoroutine 
	0xbf2e0  func HKDietaryFatPolyunsaturated.longUnitString.getter // getter 
	0xc0020  func HKDietaryFatPolyunsaturated.longUnitString.setter // setter 
	0xb2450  func HKDietaryFatPolyunsaturated.longUnitString.modify // modifyCoroutine 
	0xb28e0  func HKDietaryFatPolyunsaturated.dateRange.getter // getter 
	0xb2900  func HKDietaryFatPolyunsaturated.dateRange.setter // setter 
	0xb2920  func HKDietaryFatPolyunsaturated.dateRange.modify // modifyCoroutine 
	0xb2960  class func HKDietaryFatPolyunsaturated.__allocating_init(statistics:) // init 
	0xb29b0  class func HKDietaryFatPolyunsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf2f0  func HKDietaryFatMonounsaturated.shortUnitString.getter // getter 
	0xc0030  func HKDietaryFatMonounsaturated.shortUnitString.setter // setter 
	0xb2d20  func HKDietaryFatMonounsaturated.shortUnitString.modify // modifyCoroutine 
	0xbf300  func HKDietaryFatMonounsaturated.longUnitString.getter // getter 
	0xc0040  func HKDietaryFatMonounsaturated.longUnitString.setter // setter 
	0xb2d50  func HKDietaryFatMonounsaturated.longUnitString.modify // modifyCoroutine 
	0xb31e0  func HKDietaryFatMonounsaturated.dateRange.getter // getter 
	0xb3200  func HKDietaryFatMonounsaturated.dateRange.setter // setter 
	0xb3220  func HKDietaryFatMonounsaturated.dateRange.modify // modifyCoroutine 
	0xb3260  class func HKDietaryFatMonounsaturated.__allocating_init(statistics:) // init 
	0xb32b0  class func HKDietaryFatMonounsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf310  func HKDietaryFatSaturated.shortUnitString.getter // getter 
	0xc0050  func HKDietaryFatSaturated.shortUnitString.setter // setter 
	0xb3620  func HKDietaryFatSaturated.shortUnitString.modify // modifyCoroutine 
	0xbf320  func HKDietaryFatSaturated.longUnitString.getter // getter 
	0xc0060  func HKDietaryFatSaturated.longUnitString.setter // setter 
	0xb3650  func HKDietaryFatSaturated.longUnitString.modify // modifyCoroutine 
	0xb3ae0  func HKDietaryFatSaturated.dateRange.getter // getter 
	0xb3b00  func HKDietaryFatSaturated.dateRange.setter // setter 
	0xb3b20  func HKDietaryFatSaturated.dateRange.modify // modifyCoroutine 
	0xb3b60  class func HKDietaryFatSaturated.__allocating_init(statistics:) // init 
	0xb3bb0  class func HKDietaryFatSaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbf330  func HKDietaryCholesterol.shortUnitString.getter // getter 
	0xc0070  func HKDietaryCholesterol.shortUnitString.setter // setter 
	0xb3f20  func HKDietaryCholesterol.shortUnitString.modify // modifyCoroutine 
	0xbf340  func HKDietaryCholesterol.longUnitString.getter // getter 
	0xc0080  func HKDietaryCholesterol.longUnitString.setter // setter 
	0xb3f50  func HKDietaryCholesterol.longUnitString.modify // modifyCoroutine 
	0xb46e0  func HKDietaryCholesterol.dateRange.getter // getter 
	0xb4700  func HKDietaryCholesterol.dateRange.setter // setter 
	0xb4720  func HKDietaryCholesterol.dateRange.modify // modifyCoroutine 
	0xb4760  class func HKDietaryCholesterol.__allocating_init(statistics:) // init 
	0xb47b0  class func HKDietaryCholesterol.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOvulationTestResultSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueOvulationTestResult
	var dateRange : DateInterval

	// Swift methods
	0xbee20  func HKOvulationTestResultSample.value.getter // getter 
	0xbee40  func HKOvulationTestResultSample.value.setter // setter 
	0xb4ce0  func HKOvulationTestResultSample.value.modify // modifyCoroutine 
	0xb4ee0  func HKOvulationTestResultSample.dateRange.getter // getter 
	0xb4f00  func HKOvulationTestResultSample.dateRange.setter // setter 
	0xb4f20  func HKOvulationTestResultSample.dateRange.modify // modifyCoroutine 
	0xb4f60  class func HKOvulationTestResultSample.__allocating_init(sample:) // init 
	0xb4fa0  class func HKOvulationTestResultSample.__allocating_init(categorySample:) // init 
	0xb4fe0  func HKOvulationTestResultSample.smallDescriptionString() // method 
	0xb50a0  func HKOvulationTestResultSample.longDescriptionString() // method 
 }

 class HealthExperience.HKMenstrualFlowSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueMenstrualFlow
	var dateRange : DateInterval

	// Swift methods
	0xb53c0  func HKMenstrualFlowSample.value.getter // getter 
	0xb53f0  func HKMenstrualFlowSample.value.setter // setter 
	0xb5420  func HKMenstrualFlowSample.value.modify // modifyCoroutine 
	0xb55c0  func HKMenstrualFlowSample.dateRange.getter // getter 
	0xb5630  func HKMenstrualFlowSample.dateRange.setter // setter 
	0xb56b0  func HKMenstrualFlowSample.dateRange.modify // modifyCoroutine 
	0xb56f0  class func HKMenstrualFlowSample.__allocating_init(sample:) // init 
	0xb5730  class func HKMenstrualFlowSample.__allocating_init(categorySample:) // init 
	0xb5ad0  func HKMenstrualFlowSample.smallDescriptionString() // method 
	0xb5ba0  func HKMenstrualFlowSample.longDescriptionString() // method 
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
	0xc1950  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0xc1a20  func OperationQueueObserver.addOperation(_:) // method 
	0xc1ac0  func OperationQueueObserver.addOperations(_:waitUntilFinished:) // method 
	0xc21a0  func OperationQueueObserver.currentOperationsCopy.getter // getter 
	0xc22c0  func OperationQueueObserver.operationCount.getter // getter 
	0xc2350  func OperationQueueObserver.clearObserving() // method 
	0xc23c0  func OperationQueueObserver.didComplete(_:) // method 
 }

 class HealthExperience.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xc4b90  @objc Feed.initWithEntity:insertIntoManagedObjectContext: <stripped>
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
	0xc6890  func ArrayDataSource.eventHandler.getter // getter 
	0xc68c0  func ArrayDataSource.eventHandler.setter // setter 
	0xc6910  func ArrayDataSource.eventHandler.modify // modifyCoroutine 
	0xc69f0  func ArrayDataSource.debugDescription.getter // getter 
	0xc6be0  func ArrayDataSource.debugDescription.setter // setter 
	0xc6c00  func ArrayDataSource.debugDescription.modify // modifyCoroutine 
	0xc6ca0  func ArrayDataSource.identifier.getter // getter 
	0xc6e50  func ArrayDataSource.identifier.setter // setter 
	0xc6e70  func ArrayDataSource.identifier.modify // modifyCoroutine 
	0xc6f80  func ArrayDataSource.numberOfSections.getter // getter 
	0xc6f90  func ArrayDataSource.titleForHeader(in:) // method 
	0xc67c0  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0xc7030  func ArrayDataSource.sections.getter // getter 
	0xc7040  func ArrayDataSource.sectionIdentifiers.getter // getter 
	0xc7410  func ArrayDataSource.numberOfItems(in:) // method 
	0xc7480  func ArrayDataSource.item(at:) // method 
	0xc7690  func ArrayDataSource.reuseIdentifierForItem(at:) // method 
	0xc76f0  func ArrayDataSource.item(for:) // method 
	0xc79c0  func ArrayDataSource.reuseIdentifierForItem(with:) // method 
	0xc7a40  func ArrayDataSource.itemIdentifiers(in:) // method 
 }

 struct HealthExperience.SecondaryProfileContextFactory { }

 class HealthExperience.HKCervicalMucusQualitySample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueCervicalMucusQuality // +0x10 (0x8)
	var dateRange : DateInterval // +0x0 (0x0)

	// Swift methods
	0xcb450  func HKCervicalMucusQualitySample.value.getter // getter 
	0xcb480  func HKCervicalMucusQualitySample.value.setter // setter 
	0xcb4b0  func HKCervicalMucusQualitySample.value.modify // modifyCoroutine 
	0xcb6c0  func HKCervicalMucusQualitySample.dateRange.getter // getter 
	0xcb710  func HKCervicalMucusQualitySample.dateRange.setter // setter 
	0xcb770  func HKCervicalMucusQualitySample.dateRange.modify // modifyCoroutine 
	0xcb7b0  class func HKCervicalMucusQualitySample.__allocating_init(sample:) // init 
	0xcb7e0  class func HKCervicalMucusQualitySample.__allocating_init(categorySample:) // init 
	0xcbb40  func HKCervicalMucusQualitySample.smallDescriptionString() // method 
	0xcbc00  func HKCervicalMucusQualitySample.longDescriptionString() // method 
 }

 class HealthExperience.HKCervicalMucusQualitySampleMatcher : Matcher {
	// Swift methods
	0xcc3d0  func HKCervicalMucusQualitySampleMatcher.dataSource(healthStore:) // method 
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
	0xcd710  @objc FirstRestoreNotInProgressPrecondition.dealloc <stripped>
	0xcd840  @objc FirstRestoreNotInProgressPrecondition.description <stripped>
	0xcda30  @objc FirstRestoreNotInProgressPrecondition.init <stripped>
	0xcd730  @objc FirstRestoreNotInProgressPrecondition..cxx_destruct <stripped>

	// Swift methods
	0xcd460  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0xcd790  func FirstRestoreNotInProgressPrecondition.evaluate(_:) // method 
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
	0xd3150  @objc Plugin.initWithEntity:insertIntoManagedObjectContext: <stripped>
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
	let relevantDateInterval : RelevantDateInterval // +0x45545f5f (0x0)

	// ObjC -> Swift bridged methods
	0xd7980  @objc DateRangeRelevanceProvider.init <stripped>
	0xd7ba0  @objc DateRangeRelevanceProvider.isEqual: <stripped>
	0xd7c40  @objc DateRangeRelevanceProvider.hash <stripped>
	0xd7ce0  @objc DateRangeRelevanceProvider.description <stripped>
	0xd7f70  @objc DateRangeRelevanceProvider..cxx_destruct <stripped>

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
	0xd8910  @objc ComposableAsyncOperation.start <stripped>
	0xd9330  @objc ComposableAsyncOperation.cancel <stripped>
	0xd9490  @objc ComposableAsyncOperation.init <stripped>
	0xd9540  @objc ComposableAsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0xd8460  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.getter // getter 
	0xd8490  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.setter // setter 
	0xd84d0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.modify // modifyCoroutine 
	0xd8520  func ComposableAsyncOperation.childOperations.getter // getter 
	0xd8560  func ComposableAsyncOperation.childOperations.setter // setter 
	0xd85b0  func ComposableAsyncOperation.childOperations.modify // modifyCoroutine 
	0xd85f0  func ComposableAsyncOperation.addChild(_:) // method 
	0xd8940  func ComposableAsyncOperation.dispatchChildOperations() // method 
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
	0xde3e0  @objc HealthExperienceStoreOracle.init <stripped>
	0xdf460  @objc HealthExperienceStoreOracle..cxx_destruct <stripped>

	// Swift methods
	0xddb20  func HealthExperienceStoreOracle.readyHealthExperienceStore.getter // getter 
	0xddbc0  func HealthExperienceStoreOracle.readyHealthExperienceStore.setter // setter 
	0xddc60  func HealthExperienceStoreOracle.readyHealthExperienceStore.modify // modifyCoroutine 
	0xddcb0  func HealthExperienceStoreOracle.healthExperienceStore.getter // getter 
	0xdddd0  func HealthExperienceStoreOracle.register(observer:) // method 
	0xde400  func HealthExperienceStoreOracle.attemptToInitilizeStore(shouldListen:) // method 
	0xdf050  func HealthExperienceStoreOracle.beginListeningToDataAccessChanges() // method 
	0xdf220  func HealthExperienceStoreOracle.handleUnrecoverableError() // method 
	0xdf3c0  func HealthExperienceStoreOracle.makeHealthExperienceStore() // method 
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
	0xe0c40  func CompoundSectionedDataSource.childDataSources.getter // getter 
	0xe0c70  func CompoundSectionedDataSource.eventHandler.getter // getter 
	0xe0ca0  func CompoundSectionedDataSource.eventHandler.setter // setter 
	0xe0cf0  func CompoundSectionedDataSource.eventHandler.modify // modifyCoroutine 
	0xe0e70  func CompoundSectionedDataSource.promise.getter // getter 
	0xe0ea0  func CompoundSectionedDataSource.identifier.getter // getter 
	0xe0ee0  func CompoundSectionedDataSource.identifier.setter // setter 
	0xe0f20  func CompoundSectionedDataSource.identifier.modify // modifyCoroutine 
	0xe0f60  func CompoundSectionedDataSource.sectionIdentifiers.getter // getter 
	0xe1340  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0xe13e0  func CompoundSectionedDataSource.determineSectionOffset(for:) // method 
	0xe16e0  func CompoundSectionedDataSource.handle(change:for:) // method 
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
	0xe99e0  class func HKHealthSource.__allocating_init(name:bundleIdentifier:) // init 
 }

 class HealthExperience.HKHealthSourceMatcher : Matcher {

	// Properties
	var objectType : HKObjectType?

	// Swift methods
	0xe9cf0  func HKHealthSourceMatcher.dataSource(healthStore:) // method 
	0xe9e00  func HKHealthSourceMatcher.addConstraint(sourcesFor:) // method 
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
	0xea4d0  class func CancellableProgressList.__allocating_init() // init 
	0xea630  func CancellableProgressList.add(_:uuid:) // method 
	0xeafd0  func CancellableProgressList.clearProgress(for:) // method 
	0xebd60  func CancellableProgressList.cancelAll() // method 
 }

 class HealthExperience.DateRangeRelevanceProviderManager : RERelevanceProviderManager /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
	0xee520  @objc DateRangeRelevanceProviderManager._valueForProvider:context:feature: <stripped>
	0xee5b0  @objc DateRangeRelevanceProviderManager._valueForProvider:feature: <stripped>
	0xee5e0  @objc DateRangeRelevanceProviderManager.initWithQueue: <stripped>
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
	0xf11f0  func BundleFeedItemGenerationPluginInfo.bundle.getter // getter 
	0xf1220  func BundleFeedItemGenerationPluginInfo.bundle.setter // setter 
	0xf1260  func BundleFeedItemGenerationPluginInfo.bundle.modify // modifyCoroutine 
	0xf1290  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.getter // getter 
	0xf12d0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.setter // setter 
	0xf1310  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xf1340  func BundleFeedItemGenerationPluginInfo.principalClass.getter // getter 
	0xf1540  func BundleFeedItemGenerationPluginInfo.principalClass.setter // setter 
	0xf1550  func BundleFeedItemGenerationPluginInfo.principalClass.modify // modifyCoroutine 
	0xf15a0  func BundleFeedItemGenerationPluginInfo.makeFeedItemGenerator(context:) // method 
	0xf19d0  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthExperience.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xf24c0  @objc Keyword.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 enum HealthExperience.SectionedDataSourceTransaction {

	// Properties
	case open : (pending: [SectionedDataSourceChangeset])
	case closed  
 }

 class HealthExperience.ManagedProfileConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1029c0  func ManagedProfileConnection.isImproveHealthDataAllowed.getter // getter 
	0x1029e0  func ManagedProfileConnection.isImproveWheelchairDataAllowed.getter // getter 
	0x102ab0  func ManagedProfileConnection.setImproveHealthData(value:) // method 
	0x102ad0  func ManagedProfileConnection.setImproveWheelchairData(value:) // method 
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
	0x1061b0  func HKStepsSample.shortUnitString.getter // getter 
	0x1061f0  func HKStepsSample.shortUnitString.setter // setter 
	0x106230  func HKStepsSample.shortUnitString.modify // modifyCoroutine 
	0x106260  func HKStepsSample.longUnitString.getter // getter 
	0x1062a0  func HKStepsSample.longUnitString.setter // setter 
	0x1062e0  func HKStepsSample.longUnitString.modify // modifyCoroutine 
	0x106310  func HKStepsSample.underlyingType.getter // getter 
	0x106350  func HKStepsSample.underlyingType.setter // setter 
	0x106390  func HKStepsSample.underlyingType.modify // modifyCoroutine 
	0x106a30  func HKStepsSample.dateRange.getter // getter 
	0x106a80  func HKStepsSample.dateRange.setter // setter 
	0x106ae0  func HKStepsSample.dateRange.modify // modifyCoroutine 
	0x106b20  class func HKStepsSample.__allocating_init(statistics:) // init 
	0x106b90  class func HKStepsSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKStepsSampleMatcher {
 class HealthExperience.PopulateFeedFromRelevanceEngineOperation : AsyncOperation {

	// Properties
	let context : NSManagedObjectContext // +0x18 (0x8)
	let feedKind : Feed.Kind // +0x20 (0x1)
	let dateRange : DateInterval // +0x41445f5f (0x0)
	var engineCoordinator : RelevanceEngineCoordinator // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x10b1c0  @objc PopulateFeedFromRelevanceEngineOperation.main <stripped>
	0x10e3d0  @objc PopulateFeedFromRelevanceEngineOperation.init <stripped>
	0x10e490  @objc PopulateFeedFromRelevanceEngineOperation..cxx_destruct <stripped>

	// Swift methods
	0x10a5d0  class func PopulateFeedFromRelevanceEngineOperation.__allocating_init(context:engineCoordinator:feedKind:dateRange:) // init 
	0x10b1f0  func <stripped> // method 
	0x10cec0  func <stripped> // method 
 }

 struct HealthExperience.ShowAllHighlightsDataSourceItem { }

 class HealthExperience.DataType : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x11a870  @objc DataType.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.ResumeRelevanceEngineIfNeededOperation : AsyncOperation {

	// Properties
	let relevanceEngine : RERelevanceEngine // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11b060  @objc ResumeRelevanceEngineIfNeededOperation.main <stripped>
	0x11b120  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance: <stripped>
	0x11b230  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance: <stripped>
	0x11b2c0  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:performBatchUpdateBlock:completion: <stripped>
	0x11b370  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didReloadElement:atPath: <stripped>
	0x11b370  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didRemoveElement:atPath: <stripped>
	0x11b370  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didInsertElement:atPath: <stripped>
	0x11b390  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:didMoveElement:fromPath:toPath: <stripped>
	0x11b3b0  @objc ResumeRelevanceEngineIfNeededOperation.relevanceEngine:isElementAtPathVisible: <stripped>
	0x11b420  @objc ResumeRelevanceEngineIfNeededOperation.init <stripped>
	0x11b4c0  @objc ResumeRelevanceEngineIfNeededOperation..cxx_destruct <stripped>

	// Swift methods
	0x11b090  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidFinishUpdatingRelevance(_:) // method 
	0x11b1e0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngineDidBeginUpdatingRelevance(_:) // method 
	0x11b2b0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:performBatchUpdate:completion:) // method 
	0x11b340  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didReload:at:) // method 
	0x11b350  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didRemove:at:) // method 
	0x11b360  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didInsert:at:) // method 
	0x11b380  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:didMove:from:to:) // method 
	0x11b3a0  func ResumeRelevanceEngineIfNeededOperation.relevanceEngine(_:isElementAtPathVisible:) // method 
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
	0x121250  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x121500  func FeedItemGeneratorManager.run(dateRange:completion:) // method 
	0x122a10  func FeedItemGeneratorManager.startInteractiveGeneration(plugins:cancellationCompletion:) // method 
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
	0x124c60  func DiskHealthExperienceStore.isRunningInApplicationProcess.getter // getter 
	0x124e10  func DiskHealthExperienceStore.viewContext.getter // getter 
	0x124fe0  func DiskHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x1250e0  func DiskHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x125100  func DiskHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x125150  func DiskHealthExperienceStore.allEntities.getter // getter 
	0x125260  func DiskHealthExperienceStore.allEntities.setter // setter 
	0x125280  func DiskHealthExperienceStore.allEntities.modify // modifyCoroutine 
	0x124ac0  class func DiskHealthExperienceStore.__allocating_init() // init 
	0x1257b0  func DiskHealthExperienceStore.makeStoreLocation() // method 
	0x1259b0  class func static DiskHealthExperienceStore.storeFileURL.getter // getter 
	0x125af0  func DiskHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x125dd0  func DiskHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x125e50  func DiskHealthExperienceStore.initPersistentContainer() // method 
	0x125fc0  func DiskHealthExperienceStore.persistentContainer.getter // getter 
	0x1261a0  func DiskHealthExperienceStore.persistentContainer.setter // setter 
	0x1261c0  func DiskHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x126250  func DiskHealthExperienceStore.destroyStoreIfNeededAndMakePersistentContainer() // method 
	0x126490  func DiskHealthExperienceStore.deleteAllObjects() // method 
	0x1264d0  func DiskHealthExperienceStore.delete(_:from:) // method 
	0x127080  func DiskHealthExperienceStore.makePersistentContainer(retryOnFailure:) // method 
	0x127120  func DiskHealthExperienceStore.updateStoreMetadataWithLatestVersion(_:) // method 
	0x127b50  func DiskHealthExperienceStore.unsafeMakePersistentContainer(retryOnFailure:) // method 
	0x1297b0  func DiskHealthExperienceStore.getStoreState() // method 
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
	0x137ea0  @objc AsyncOperation.isExecuting <stripped>
	0x137f30  @objc AsyncOperation.isFinished <stripped>
	0x138000  @objc AsyncOperation.isAsynchronous <stripped>
	0x138070  @objc AsyncOperation.start <stripped>
	0x1380f0  @objc AsyncOperation.main <stripped>
	0x1381c0  @objc AsyncOperation.init <stripped>
	0x138230  @objc AsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0x137a00  func AsyncOperation.state.getter // getter 
	0x137a70  func AsyncOperation.state.setter // setter 
	0x137cc0  func AsyncOperation.state.modify // modifyCoroutine 
	0x137d70  func AsyncOperation.finish() // method 
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

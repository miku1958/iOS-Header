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
	0xa220  @objc EncodedFeatureTag.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.SignalListener : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateDumpSignalSource : OS_dispatch_source_signal // +0x10 (0x8)

	// Swift methods
	0xa640  func SignalListener.sourceNotification() // method 
 }

 class HealthExperience.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PluginInfo {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0xcc60  func BasicPluginInfo.bundleIdentifier.getter // getter 
	0xcca0  func BasicPluginInfo.bundleIdentifier.setter // setter 
	0xcce0  func BasicPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xcd20  class func BasicPluginInfo.__allocating_init(bundle:) // init 
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
	0x133b0  @objc RelevanceEngineMetricsBlockRecorder.recordTrainingMetrics:forInteraction: <stripped>
	0x134a0  @objc RelevanceEngineMetricsBlockRecorder.init <stripped>
	0x13550  @objc RelevanceEngineMetricsBlockRecorder..cxx_destruct <stripped>

	// Swift methods
	0x13180  func <stripped> // method 
 }

 class HealthExperience.HKHealthSourceDataSource : MutableArrayDataSource {

	// Properties
	let healthStore : HKHealthStore // +0x50 (0x8)
	var objectType : HKObjectType // +0x58 (0x8)

	// Swift methods
	0x135c0  func <stripped> // method 
	0x13860  func <stripped> // method 
	0x13a40  func <stripped> // method 
 }

 class HealthExperience.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext? // +0x10 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x18 (0x8)
	var persistentStoreDescription : NSPersistentStoreDescription // +0x20 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x28 (0x8)

	// Swift methods
	0x143b0  func MemoryHealthExperienceStore.viewContext.getter // getter 
	0x14470  func MemoryHealthExperienceStore.viewContext.setter // setter 
	0x14490  func MemoryHealthExperienceStore.viewContext.modify // modifyCoroutine 
	0x14590  func MemoryHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x14690  func MemoryHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x146b0  func MemoryHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x14700  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x149e0  func MemoryHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x14a10  func MemoryHealthExperienceStore.persistentStoreDescription.setter // setter 
	0x14a50  func MemoryHealthExperienceStore.persistentStoreDescription.modify // modifyCoroutine 
	0x14a90  func MemoryHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x14b10  func MemoryHealthExperienceStore.initPersistentContainer() // method 
	0x14b40  func MemoryHealthExperienceStore.persistentContainer.getter // getter 
	0x14ba0  func MemoryHealthExperienceStore.persistentContainer.setter // setter 
	0x14bc0  func MemoryHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x14c50  func <stripped> // method 
	0x150c0  func MemoryHealthExperienceStore.deleteAllFeedItems() // method 
 }

 class HealthExperience.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : [BasicPluginInfo] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x16240  @objc PluginBundleProviderPrecacheOperation.main <stripped>
	0x162c0  @objc PluginBundleProviderPrecacheOperation.init <stripped>
	0x16340  @objc PluginBundleProviderPrecacheOperation..cxx_destruct <stripped>

	// Swift methods
	0x15b80  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
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
	0x1b230  @objc HealthExperienceStoreCoreSpotlightOperation.main <stripped>
	0x1b310  @objc HealthExperienceStoreCoreSpotlightOperation.init <stripped>
	0x1b3b0  @objc HealthExperienceStoreCoreSpotlightOperation..cxx_destruct <stripped>

	// Swift methods
	0x1ae80  class func HealthExperienceStoreCoreSpotlightOperation.__allocating_init(store:) // init 
	0x1b260  func HealthExperienceStoreCoreSpotlightOperation.makeCoreSpotlightDelegate() // method 
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
	0x1c760  @objc AsynchronousProgressOperation.main <stripped>
	0x1d8c0  @objc AsynchronousProgressOperation.init <stripped>
	0x1d960  @objc AsynchronousProgressOperation..cxx_destruct <stripped>

	// Swift methods
	0x1c310  func AsynchronousProgressOperation.timeout.getter // getter 
	0x1c360  func AsynchronousProgressOperation.timeout.setter // setter 
	0x1c3c0  func AsynchronousProgressOperation.timeout.modify // modifyCoroutine 
	0x1c400  func AsynchronousProgressOperation.operationTimedOut.getter // getter 
	0x1c430  func AsynchronousProgressOperation.operationTimedOut.setter // setter 
	0x1c470  func AsynchronousProgressOperation.operationTimedOut.modify // modifyCoroutine 
	0x1c4c0  func AsynchronousProgressOperation.progress.getter // getter 
	0x1c500  func AsynchronousProgressOperation.progress.setter // setter 
	0x1c570  func AsynchronousProgressOperation.progress.modify // modifyCoroutine 
	0x1c670  func AsynchronousProgressOperation.beginWork() // method 
	0x1c680  func AsynchronousProgressOperation.timeoutOccured() // method 
	0x1cd60  func AsynchronousProgressOperation.interceptCancellationHandler() // method 
 }

 struct HealthExperience.TypeLister { }

 class HealthExperience.AsynchronousOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var autoFinishesOnCancel : Bool // +0x8 (0x1)
	let operationState : OperationState // +0x10 (0x8)
	let workLock : UnfairLock // +0x18 (0x8)
	var didBeginWork : ()? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x20470  @objc AsynchronousOperation.isAsynchronous <stripped>
	0x204a0  @objc AsynchronousOperation.isCancelled <stripped>
	0x204c0  @objc AsynchronousOperation.isExecuting <stripped>
	0x205c0  @objc AsynchronousOperation.isFinished <stripped>
	0x20950  @objc AsynchronousOperation.start <stripped>
	0x20980  @objc AsynchronousOperation.cancel <stripped>
	0x209e0  @objc AsynchronousOperation.main <stripped>
	0x20a40  @objc AsynchronousOperation.description <stripped>
	0x20d80  @objc AsynchronousOperation.init <stripped>
	0x20df0  @objc AsynchronousOperation..cxx_destruct <stripped>

	// Swift methods
	0x1f350  func AsynchronousOperation.autoFinishesOnCancel.getter // getter 
	0x1f380  func AsynchronousOperation.autoFinishesOnCancel.setter // setter 
	0x1f3c0  func AsynchronousOperation.autoFinishesOnCancel.modify // modifyCoroutine 
	0x1f400  func AsynchronousOperation.performWithExclusiveAccess(_:) // method 
	0x1f440  func AsynchronousOperation.performWithExclusiveAccessThenFinish(_:) // method 
	0x20a10  func AsynchronousOperation.cleanUp() // method 
	0x1f5d0  func AsynchronousOperation.didBeginWork.getter // getter 
	0x1f620  func AsynchronousOperation.didBeginWork.setter // setter 
	0x1f680  func AsynchronousOperation.didBeginWork.modify // modifyCoroutine 
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
	let intervalComponents : DateComponents // +0x17c000 (0x0)
	var statisticsLock : UnfairLock // +0x0 (0x8)
	let systolicType : HKQuantityType // +0x17c000 (0x8)
	let diastolicType : HKQuantityType // +0x5 (0x8)
	var systolicQuery : HKStatisticsCollectionQuery? // +0x14 (0x8)
	var diastolicQuery : HKStatisticsCollectionQuery? // +0x65745f5f (0x8)
	var systolicStatisticsCollection : HKStatisticsCollection? // +0x0 (0x8)
	var diastolicStatisticsCollection : HKStatisticsCollection? // +0x45545f5f (0x8)

	// Swift methods
	0x214a0  func <stripped> // method 
	0x21500  func <stripped> // method 
	0x221c0  func <stripped> // method 
	0x22a40  func <stripped> // method 
 }

 class HealthExperience.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : UnsafeMutablePointer<os_unfair_lock_s> // +0x10 (0x8)

	// Swift methods
	0x24ba0  class func UnfairLock.__allocating_init() // init 
	0x24cb0  func UnfairLock.lock() // method 
	0x24cc0  func UnfairLock.unlock() // method 
	0x24cd0  func UnfairLock.assertOwner() // method 
 }

 class HealthExperience.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x24e20  @objc FeedSection.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x25120  @objc HealthExperienceStoreCoreSpotlightDelegate.usePrivateIndex <stripped>
	0x25170  @objc HealthExperienceStoreCoreSpotlightDelegate.bundleIdentifier <stripped>
	0x251d0  @objc HealthExperienceStoreCoreSpotlightDelegate.domainIdentifier <stripped>
	0x25230  @objc HealthExperienceStoreCoreSpotlightDelegate.indexName <stripped>
	0x252b0  @objc HealthExperienceStoreCoreSpotlightDelegate.protectionClass <stripped>
	0x25690  @objc HealthExperienceStoreCoreSpotlightDelegate.attributeSetForObject: <stripped>
	0x25a00  @objc HealthExperienceStoreCoreSpotlightDelegate.initForStoreWithDescription:model: <stripped>
	0x25af0  @objc HealthExperienceStoreCoreSpotlightDelegate..cxx_destruct <stripped>

	// Swift methods
	0x25100  func HealthExperienceStoreCoreSpotlightDelegate.setUp() // method 
 }

 class HealthExperience.MedicalIDFetchOperation : AsyncOperation {

	// Properties
	var medicalIDData : _HKMedicalIDData? // +0x18 (0x8)
	var fetchError : Error? // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x261f0  @objc MedicalIDFetchOperation.main <stripped>
	0x26440  @objc MedicalIDFetchOperation.init <stripped>
	0x26510  @objc MedicalIDFetchOperation..cxx_destruct <stripped>

	// Swift methods
	0x26220  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : () // +0x10 (0x10)
	var queue : OS_dispatch_queue // +0x20 (0x8)
	var debounceInterval : Double // +0x28 (0x8)
	var workItem : Atomic<DispatchWorkItem?> // +0x30 (0x8)

	// Swift methods
	0x26610  func DebouncedDispatchItem.block.getter // getter 
	0x26650  func DebouncedDispatchItem.block.setter // setter 
	0x26690  func DebouncedDispatchItem.block.modify // modifyCoroutine 
	0x266c0  func DebouncedDispatchItem.queue.getter // getter 
	0x266f0  func DebouncedDispatchItem.queue.setter // setter 
	0x26730  func DebouncedDispatchItem.queue.modify // modifyCoroutine 
	0x26760  func DebouncedDispatchItem.debounceInterval.getter // getter 
	0x26790  func DebouncedDispatchItem.debounceInterval.setter // setter 
	0x267d0  func DebouncedDispatchItem.debounceInterval.modify // modifyCoroutine 
	0x26810  func DebouncedDispatchItem.cancel() // method 
	0x268d0  func DebouncedDispatchItem.dispatch() // method 
	0x26e20  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
 }

 class HealthExperience.ModelTrainingScenarioExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinator : RelevanceEngineCoordinator // +0x10 (0x8)
	let store : HealthExperienceStore // +0x18 (0x28)

	// Swift methods
	0x27240  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x27300  func ModelTrainingScenarioExecutor.saveModelToDisk(completion:) // method 
	0x27320  func ModelTrainingScenarioExecutor.execute(scenario:completion:) // method 
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
	0x2f430  @objc MedicalIDCache.init <stripped>
	0x2f4b0  @objc MedicalIDCache..cxx_destruct <stripped>

	// Swift methods
	0x2e410  func MedicalIDCache.medicalIDDataResult.getter // getter 
	0x2e2a0  class func MedicalIDCache.__allocating_init(healthStore:) // init 
	0x2e480  func <stripped> // method 
	0x2eb70  func MedicalIDCache.enqueueMedicalIDFetch() // method 
	0x2ed20  func <stripped> // method 
	0x2f270  func <stripped> // method 
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
	0x303b0  @objc GroupConfigurationLoader.elementGroupWithIdentifier: <stripped>
	0x30470  @objc GroupConfigurationLoader.init <stripped>
 }

 class HealthExperience.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x32710  @objc HealthExperienceStoreCleanupOperation.start <stripped>
	0x32740  @objc HealthExperienceStoreCleanupOperation.description <stripped>
	0x328c0  @objc HealthExperienceStoreCleanupOperation.init <stripped>
	0x32940  @objc HealthExperienceStoreCleanupOperation..cxx_destruct <stripped>

	// Swift methods
	0x319b0  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.Matcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)

	// Swift methods
	0x34890  func Matcher.constraintPredicates.getter // getter 
	0x34880  func Matcher.constraintPredicates.setter // setter 
	0x32a30  func Matcher.constraintPredicates.modify // modifyCoroutine 
	0x32a60  class func Matcher.__allocating_init() // init 
 }

 class HealthExperience.AggregateMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AggregateMatcherProtocol,  MatcherProtocol {

	// Properties
	var constraintPredicates : [NSPredicate] // +0x10 (0x8)
	var aggregateIntervalComponents : DateComponents? // +0x0 (0x0)
	var aggregateStatisticsOptions : HKStatisticsOptions // +0x74735f5f (0x8)
	var anchorDate : Date // +0x0 (0x0)

	// Swift methods
	0x32d80  func AggregateMatcher.constraintPredicates.getter // getter 
	0x32db0  func AggregateMatcher.constraintPredicates.setter // setter 
	0x32df0  func AggregateMatcher.constraintPredicates.modify // modifyCoroutine 
	0x32e20  func AggregateMatcher.aggregateIntervalComponents.getter // getter 
	0x32e60  func AggregateMatcher.aggregateIntervalComponents.setter // setter 
	0x32eb0  func AggregateMatcher.aggregateIntervalComponents.modify // modifyCoroutine 
	0x32ef0  func AggregateMatcher.aggregateStatisticsOptions.getter // getter 
	0x32f20  func AggregateMatcher.aggregateStatisticsOptions.setter // setter 
	0x32f60  func AggregateMatcher.aggregateStatisticsOptions.modify // modifyCoroutine 
	0x32fa0  func AggregateMatcher.anchorDate.getter // getter 
	0x32ff0  func AggregateMatcher.anchorDate.setter // setter 
	0x33050  func AggregateMatcher.anchorDate.modify // modifyCoroutine 
	0x330a0  class func AggregateMatcher.__allocating_init() // init 
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
	let pretrainedModelURL : URL? // +0x140658 (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder? // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4b440  @objc RelevanceEngineCoordinator.init <stripped>
	0x4b4b0  @objc RelevanceEngineCoordinator..cxx_destruct <stripped>

	// Swift methods
	0x47e80  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelDirectoryName:pretrainedModelURL:) // init 
	0x48370  func RelevanceEngineCoordinator.resumeEngineIfNeeded(completion:) // method 
	0x48500  func RelevanceEngineCoordinator.makeResumeEngineOperation() // method 
	0x485c0  func RelevanceEngineCoordinator.modelPath.getter // getter 
	0x48a30  func RelevanceEngineCoordinator.modelPath.setter // setter 
	0x48af0  func RelevanceEngineCoordinator.modelPath.modify // modifyCoroutine 
	0x48c40  func RelevanceEngineCoordinator.trainingContext.getter // getter 
	0x48d50  func RelevanceEngineCoordinator.trainingContext.setter // setter 
	0x48d70  func RelevanceEngineCoordinator.trainingContext.modify // modifyCoroutine 
	0x48dd0  func <stripped> // method 
	0x49640  func RelevanceEngineCoordinator.element(for:in:) // method 
	0x49960  func RelevanceEngineCoordinator.submitTraining(trainingEvents:store:completion:) // method 
	0x49ba0  func <stripped> // method 
	0x4a900  func RelevanceEngineCoordinator.collectDiagnosticLogs(completion:) // method 
	0x4ab50  func RelevanceEngineCoordinator.gatherMetrics(completion:) // method 
	0x4acc0  func RelevanceEngineCoordinator.clearEngineAndModel(completion:) // method 
	0x4b060  func RelevanceEngineCoordinator.saveModelToDisk(completion:) // method 
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
	0x56d50  func MutableArrayDataSource.eventHandler.getter // getter 
	0x56d80  func MutableArrayDataSource.eventHandler.setter // setter 
	0x56dd0  func MutableArrayDataSource.eventHandler.modify // modifyCoroutine 
	0x56eb0  func MutableArrayDataSource.promise.getter // getter 
	0x56ee0  func MutableArrayDataSource.arrangedSections.getter // getter 
	0x56f10  func MutableArrayDataSource.arrangedSections.setter // setter 
	0x56f50  func MutableArrayDataSource.arrangedSections.modify // modifyCoroutine 
	0x56f90  func MutableArrayDataSource.identifier.getter // getter 
	0x57010  func MutableArrayDataSource.identifier.setter // setter 
	0x57030  func MutableArrayDataSource.identifier.modify // modifyCoroutine 
	0x57140  func MutableArrayDataSource.sectionIdentifiers.getter // getter 
	0x580f0  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x57530  func MutableArrayDataSource.replaceAllSections(with:) // method 
	0x57620  func MutableArrayDataSource.insert(section:index:) // method 
	0x57650  func MutableArrayDataSource.removeSection(at:) // method 
	0x57860  func MutableArrayDataSource.insert(item:at:) // method 
	0x578d0  func MutableArrayDataSource.removeItemAt(indexPath:) // method 
	0x57940  func MutableArrayDataSource.reload(item:at:) // method 
	0x579b0  func MutableArrayDataSource.send(_:) // method 
 }

 class HealthExperience.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x5d800  @objc FeedItem.initWithEntity:insertIntoManagedObjectContext: <stripped>
	0x5d8f0  @objc FeedItem..cxx_construct <stripped>
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter // +0x18 (0x8)

	// Swift methods
	0x5e2f0  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
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
	0x5fd60  @objc FeedItemREElementDataSource.supportedSections <stripped>
	0x609d0  @objc FeedItemREElementDataSource.getElementsInSection:withHandler: <stripped>
	0x60b70  @objc FeedItemREElementDataSource.init <stripped>
	0x60bf0  @objc FeedItemREElementDataSource..cxx_destruct <stripped>

	// Swift methods
	0x5fbd0  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
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
	0x65a00  @objc FavoritesProvider.dealloc <stripped>
	0x66260  @objc FavoritesProvider.favoritesChangedRemotely: <stripped>
	0x66350  @objc FavoritesProvider.init <stripped>
	0x65ab0  @objc FavoritesProvider..cxx_destruct <stripped>

	// Swift methods
	0x65570  func FavoritesProvider.favorites.getter // getter 
	0x65800  class func FavoritesProvider.__allocating_init(controller:) // init 
	0x65b00  func FavoritesProvider.addObserver(_:) // method 
	0x65ba0  func FavoritesProvider.removeObserver(_:) // method 
	0x65bc0  func <stripped> // method 
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
	0x6aab0  func HKActiveEnergySample.debugDescription.getter // getter 
	0x6ada0  func HKActiveEnergySample.debugDescription.setter // setter 
	0x6adc0  func HKActiveEnergySample.debugDescription.modify // modifyCoroutine 
	0x6ae60  func HKActiveEnergySample.shortUnitString.getter // getter 
	0x6aea0  func HKActiveEnergySample.shortUnitString.setter // setter 
	0x6aee0  func HKActiveEnergySample.shortUnitString.modify // modifyCoroutine 
	0x6af10  func HKActiveEnergySample.longUnitString.getter // getter 
	0x6af50  func HKActiveEnergySample.longUnitString.setter // setter 
	0x6af90  func HKActiveEnergySample.longUnitString.modify // modifyCoroutine 
	0x6b680  func HKActiveEnergySample.dateRange.getter // getter 
	0x6b6d0  func HKActiveEnergySample.dateRange.setter // setter 
	0x6b730  func HKActiveEnergySample.dateRange.modify // modifyCoroutine 
	0x6b770  class func HKActiveEnergySample.__allocating_init(statistics:) // init 
	0x6b7c0  class func HKActiveEnergySample.__allocating_init(sample:) // init 
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
	0x6d120  @objc SetDefaultFavoritesOperation.main <stripped>
	0x6d7a0  @objc SetDefaultFavoritesOperation.init <stripped>
	0x6d880  @objc SetDefaultFavoritesOperation..cxx_destruct <stripped>

	// Swift methods
	0x6c930  func <stripped> // getter 
	0x6ca50  func <stripped> // getter 
	0x6ce60  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x6d150  func <stripped> // method 
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
	let debounceInterval : Double
	var $__lazy_storage_$_liveFeedsPopulationDebouncer : DebouncedDispatchItem?
	var $__lazy_storage_$_highlightsFeedPopulationDebouncer : DebouncedDispatchItem?
	var trainingAnalyticsCache : Atomic<[ModelTrainingEvent]>

	// Swift methods
	0x74d30  func <stripped> // method 
	0x75150  func FeedPopulationManager.relevanceEngineCoordinator.getter // getter 
	0x75180  class func FeedPopulationManager.__allocating_init(healthExperienceStore:debounceInterval:) // init 
	0x75a30  func FeedPopulationManager.populateFeed(feedKinds:for:completion:) // method 
	0x76cf0  func FeedPopulationManager.deleteFeed(feedKinds:completion:) // method 
	0x77cb0  func FeedPopulationManager.submitTraining(trainingEvents:store:completion:) // method 
	0x785d0  func <stripped> // method 
	0x79360  func FeedPopulationManager.feedItemSubmissionOccurred(_:) // method 
 }

 class HealthExperience.PopulationOperation : AsynchronousOperation {

	// Properties
	let kinds : [Feed.Kind]
	let populationManager : FeedPopulationManager

	// ObjC -> Swift bridged methods
	0x7a2e0  @objc PopulationOperation.main <stripped>
	0x7a320  @objc PopulationOperation.init <stripped>
	0x7a3d0  @objc PopulationOperation..cxx_destruct <stripped>

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
	var hasOperationCompleted : Bool? // +0x142610 (0x1)

	// Swift methods
	0x82290  func HealthExperienceStoreFeedItemContext.healthStore.getter // getter 
	0x82350  func HealthExperienceStoreFeedItemContext.favoritesProvider.getter // getter 
	0x82470  func HealthExperienceStoreFeedItemContext.environment.getter // getter 
	0x82610  func HealthExperienceStoreFeedItemContext.boundingRange.getter // getter 
	0x82660  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x82900  func HealthExperienceStoreFeedItemContext.pluginData.getter // getter 
	0x82de0  func HealthExperienceStoreFeedItemContext.commit(_:) // method 
	0x840c0  func <stripped> // method 
	0x85f80  func <stripped> // method 
	0x868e0  func <stripped> // method 
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
	0x8b9f0  func HKBloodPressureSample.shortUnitString.getter // getter 
	0x8ba30  func HKBloodPressureSample.shortUnitString.setter // setter 
	0x8ba70  func HKBloodPressureSample.shortUnitString.modify // modifyCoroutine 
	0x8baa0  func HKBloodPressureSample.longUnitString.getter // getter 
	0x8bae0  func HKBloodPressureSample.longUnitString.setter // setter 
	0x8bb20  func HKBloodPressureSample.longUnitString.modify // modifyCoroutine 
	0x8c080  func HKBloodPressureSample.dateRange.getter // getter 
	0x8c0d0  func HKBloodPressureSample.dateRange.setter // setter 
	0x8c130  func HKBloodPressureSample.dateRange.modify // modifyCoroutine 
	0x8c170  func HKBloodPressureSample.systolic.getter // getter 
	0x8c320  func HKBloodPressureSample.systolic.setter // setter 
	0x8c340  func HKBloodPressureSample.systolic.modify // modifyCoroutine 
	0x8c3c0  func HKBloodPressureSample.diastolic.getter // getter 
	0x8c5b0  func HKBloodPressureSample.diastolic.setter // setter 
	0x8c5d0  func HKBloodPressureSample.diastolic.modify // modifyCoroutine 
	0x8c630  class func HKBloodPressureSample.__allocating_init(sample:) // init 
	0x8c660  class func HKBloodPressureSample.__allocating_init(statistics:) // init 
	0x8b950  class func HKBloodPressureSample.__allocating_init(systolic:diastolic:) // init 
	0x8ed00  func HKBloodPressureSample.smallDescriptionString() // method 
	0x8c6f0  func HKBloodPressureSample.longDescriptionString() // method 
 }

 class HealthExperience.HKBloodPressureSampleMatcher : AggregateMatcher {
	// Swift methods
	0x8ce20  func HKBloodPressureSampleMatcher.dataSource(healthStore:) // method 
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
	0x95670  @objc SaveManagedObjectContextOperation.main <stripped>
	0x957a0  @objc SaveManagedObjectContextOperation.init <stripped>
	0x95840  @objc SaveManagedObjectContextOperation..cxx_destruct <stripped>

	// Swift methods
	0x95180  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
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
	0x98f90  @objc AsynchronousBlockOperation.main <stripped>
	0x98ff0  @objc AsynchronousBlockOperation.debugDescription <stripped>
	0x99260  @objc AsynchronousBlockOperation.init <stripped>
	0x99310  @objc AsynchronousBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x98d50  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
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
	0xa0610  func <stripped> // method 
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
	0xa0f20  func <stripped> // method 
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
	0xbfa00  func HKBloodGlucoseSample.shortUnitString.getter // getter 
	0xc0740  func HKBloodGlucoseSample.shortUnitString.setter // setter 
	0xa9140  func HKBloodGlucoseSample.shortUnitString.modify // modifyCoroutine 
	0xbfa10  func HKBloodGlucoseSample.longUnitString.getter // getter 
	0xc0750  func HKBloodGlucoseSample.longUnitString.setter // setter 
	0xa9170  func HKBloodGlucoseSample.longUnitString.modify // modifyCoroutine 
	0xa9620  func HKBloodGlucoseSample.dateRange.getter // getter 
	0xa9640  func HKBloodGlucoseSample.dateRange.setter // setter 
	0xa9660  func HKBloodGlucoseSample.dateRange.modify // modifyCoroutine 
	0xa96a0  class func HKBloodGlucoseSample.__allocating_init(statistics:) // init 
	0xa9710  class func HKBloodGlucoseSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfa40  func HKBodyMassIndex.shortUnitString.getter // getter 
	0xc0780  func HKBodyMassIndex.shortUnitString.setter // setter 
	0xa9b40  func HKBodyMassIndex.shortUnitString.modify // modifyCoroutine 
	0xbfa50  func HKBodyMassIndex.longUnitString.getter // getter 
	0xc0790  func HKBodyMassIndex.longUnitString.setter // setter 
	0xa9b70  func HKBodyMassIndex.longUnitString.modify // modifyCoroutine 
	0xaa020  func HKBodyMassIndex.dateRange.getter // getter 
	0xaa040  func HKBodyMassIndex.dateRange.setter // setter 
	0xaa060  func HKBodyMassIndex.dateRange.modify // modifyCoroutine 
	0xaa0a0  class func HKBodyMassIndex.__allocating_init(statistics:) // init 
	0xaa0f0  class func HKBodyMassIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfa20  func HKBodyFatPercentage.shortUnitString.getter // getter 
	0xc0760  func HKBodyFatPercentage.shortUnitString.setter // setter 
	0xaa440  func HKBodyFatPercentage.shortUnitString.modify // modifyCoroutine 
	0xbfa30  func HKBodyFatPercentage.longUnitString.getter // getter 
	0xc0770  func HKBodyFatPercentage.longUnitString.setter // setter 
	0xaa470  func HKBodyFatPercentage.longUnitString.modify // modifyCoroutine 
	0xaa920  func HKBodyFatPercentage.dateRange.getter // getter 
	0xaa940  func HKBodyFatPercentage.dateRange.setter // setter 
	0xaa960  func HKBodyFatPercentage.dateRange.modify // modifyCoroutine 
	0xaa9a0  class func HKBodyFatPercentage.__allocating_init(statistics:) // init 
	0xaa9f0  class func HKBodyFatPercentage.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBodyHeight : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfac0  func HKBodyHeight.shortUnitString.getter // getter 
	0xc0800  func HKBodyHeight.shortUnitString.setter // setter 
	0xaad60  func HKBodyHeight.shortUnitString.modify // modifyCoroutine 
	0xbfad0  func HKBodyHeight.longUnitString.getter // getter 
	0xc0810  func HKBodyHeight.longUnitString.setter // setter 
	0xaad90  func HKBodyHeight.longUnitString.modify // modifyCoroutine 
	0xab220  func HKBodyHeight.dateRange.getter // getter 
	0xab240  func HKBodyHeight.dateRange.setter // setter 
	0xab260  func HKBodyHeight.dateRange.modify // modifyCoroutine 
	0xab2a0  class func HKBodyHeight.__allocating_init(statistics:) // init 
	0xab2f0  class func HKBodyHeight.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKWaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfa60  func HKWaistCircumference.shortUnitString.getter // getter 
	0xc07a0  func HKWaistCircumference.shortUnitString.setter // setter 
	0xab640  func HKWaistCircumference.shortUnitString.modify // modifyCoroutine 
	0xbfa70  func HKWaistCircumference.longUnitString.getter // getter 
	0xc07b0  func HKWaistCircumference.longUnitString.setter // setter 
	0xab670  func HKWaistCircumference.longUnitString.modify // modifyCoroutine 
	0xabb00  func HKWaistCircumference.dateRange.getter // getter 
	0xabb20  func HKWaistCircumference.dateRange.setter // setter 
	0xabb40  func HKWaistCircumference.dateRange.modify // modifyCoroutine 
	0xabb80  class func HKWaistCircumference.__allocating_init(statistics:) // init 
	0xabbd0  class func HKWaistCircumference.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKVO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfa80  func HKVO2Max.shortUnitString.getter // getter 
	0xc07c0  func HKVO2Max.shortUnitString.setter // setter 
	0xabf40  func HKVO2Max.shortUnitString.modify // modifyCoroutine 
	0xbfa90  func HKVO2Max.longUnitString.getter // getter 
	0xc07d0  func HKVO2Max.longUnitString.setter // setter 
	0xabf70  func HKVO2Max.longUnitString.modify // modifyCoroutine 
	0xac420  func HKVO2Max.dateRange.getter // getter 
	0xac440  func HKVO2Max.dateRange.setter // setter 
	0xac460  func HKVO2Max.dateRange.modify // modifyCoroutine 
	0xac4a0  class func HKVO2Max.__allocating_init(statistics:) // init 
	0xac4f0  class func HKVO2Max.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKLeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfaa0  func HKLeanBodyMass.shortUnitString.getter // getter 
	0xc07e0  func HKLeanBodyMass.shortUnitString.setter // setter 
	0xac840  func HKLeanBodyMass.shortUnitString.modify // modifyCoroutine 
	0xbfab0  func HKLeanBodyMass.longUnitString.getter // getter 
	0xc07f0  func HKLeanBodyMass.longUnitString.setter // setter 
	0xac870  func HKLeanBodyMass.longUnitString.modify // modifyCoroutine 
	0xacd00  func HKLeanBodyMass.dateRange.getter // getter 
	0xacd20  func HKLeanBodyMass.dateRange.setter // setter 
	0xacd40  func HKLeanBodyMass.dateRange.modify // modifyCoroutine 
	0xacd80  class func HKLeanBodyMass.__allocating_init(statistics:) // init 
	0xacdd0  class func HKLeanBodyMass.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xad120  func HKHeartRate.shortUnitString.getter // getter 
	0xad160  func HKHeartRate.shortUnitString.setter // setter 
	0xad1a0  func HKHeartRate.shortUnitString.modify // modifyCoroutine 
	0xad1d0  func HKHeartRate.longUnitString.getter // getter 
	0xad210  func HKHeartRate.longUnitString.setter // setter 
	0xad250  func HKHeartRate.longUnitString.modify // modifyCoroutine 
	0xad740  func HKHeartRate.dateRange.getter // getter 
	0xad760  func HKHeartRate.dateRange.setter // setter 
	0xad780  func HKHeartRate.dateRange.modify // modifyCoroutine 
	0xad7c0  class func HKHeartRate.__allocating_init(statistics:) // init 
	0xad810  class func HKHeartRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDistanceWalkingRunning : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfae0  func HKDistanceWalkingRunning.shortUnitString.getter // getter 
	0xc0820  func HKDistanceWalkingRunning.shortUnitString.setter // setter 
	0xadc10  func HKDistanceWalkingRunning.shortUnitString.modify // modifyCoroutine 
	0xbfaf0  func HKDistanceWalkingRunning.longUnitString.getter // getter 
	0xc0830  func HKDistanceWalkingRunning.longUnitString.setter // setter 
	0xadc40  func HKDistanceWalkingRunning.longUnitString.modify // modifyCoroutine 
	0xae0d0  func HKDistanceWalkingRunning.dateRange.getter // getter 
	0xae0f0  func HKDistanceWalkingRunning.dateRange.setter // setter 
	0xae110  func HKDistanceWalkingRunning.dateRange.modify // modifyCoroutine 
	0xae150  class func HKDistanceWalkingRunning.__allocating_init(statistics:) // init 
	0xae1a0  class func HKDistanceWalkingRunning.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKFlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfb00  func HKFlightsClimbed.shortUnitString.getter // getter 
	0xc0840  func HKFlightsClimbed.shortUnitString.setter // setter 
	0xae510  func HKFlightsClimbed.shortUnitString.modify // modifyCoroutine 
	0xbfb10  func HKFlightsClimbed.longUnitString.getter // getter 
	0xc0850  func HKFlightsClimbed.longUnitString.setter // setter 
	0xae540  func HKFlightsClimbed.longUnitString.modify // modifyCoroutine 
	0xae9f0  func HKFlightsClimbed.dateRange.getter // getter 
	0xaea10  func HKFlightsClimbed.dateRange.setter // setter 
	0xaea30  func HKFlightsClimbed.dateRange.modify // modifyCoroutine 
	0xaea70  class func HKFlightsClimbed.__allocating_init(statistics:) // init 
	0xaeac0  class func HKFlightsClimbed.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfb20  func HKOxygenSaturation.shortUnitString.getter // getter 
	0xc0860  func HKOxygenSaturation.shortUnitString.setter // setter 
	0xaee30  func HKOxygenSaturation.shortUnitString.modify // modifyCoroutine 
	0xbfb30  func HKOxygenSaturation.longUnitString.getter // getter 
	0xc0870  func HKOxygenSaturation.longUnitString.setter // setter 
	0xaee60  func HKOxygenSaturation.longUnitString.modify // modifyCoroutine 
	0xaf2f0  func HKOxygenSaturation.dateRange.getter // getter 
	0xaf310  func HKOxygenSaturation.dateRange.setter // setter 
	0xaf330  func HKOxygenSaturation.dateRange.modify // modifyCoroutine 
	0xaf370  class func HKOxygenSaturation.__allocating_init(statistics:) // init 
	0xaf3c0  class func HKOxygenSaturation.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKBloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfb40  func HKBloodAlcoholContent.shortUnitString.getter // getter 
	0xc0880  func HKBloodAlcoholContent.shortUnitString.setter // setter 
	0xaf730  func HKBloodAlcoholContent.shortUnitString.modify // modifyCoroutine 
	0xbfb50  func HKBloodAlcoholContent.longUnitString.getter // getter 
	0xc0890  func HKBloodAlcoholContent.longUnitString.setter // setter 
	0xaf760  func HKBloodAlcoholContent.longUnitString.modify // modifyCoroutine 
	0xafbf0  func HKBloodAlcoholContent.dateRange.getter // getter 
	0xafc10  func HKBloodAlcoholContent.dateRange.setter // setter 
	0xafc30  func HKBloodAlcoholContent.dateRange.modify // modifyCoroutine 
	0xafc70  class func HKBloodAlcoholContent.__allocating_init(statistics:) // init 
	0xafcc0  class func HKBloodAlcoholContent.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfb60  func HKForcedVitalCapacity.shortUnitString.getter // getter 
	0xc08a0  func HKForcedVitalCapacity.shortUnitString.setter // setter 
	0xb0030  func HKForcedVitalCapacity.shortUnitString.modify // modifyCoroutine 
	0xbfb70  func HKForcedVitalCapacity.longUnitString.getter // getter 
	0xc08b0  func HKForcedVitalCapacity.longUnitString.setter // setter 
	0xb0060  func HKForcedVitalCapacity.longUnitString.modify // modifyCoroutine 
	0xb04f0  func HKForcedVitalCapacity.dateRange.getter // getter 
	0xb0510  func HKForcedVitalCapacity.dateRange.setter // setter 
	0xb0530  func HKForcedVitalCapacity.dateRange.modify // modifyCoroutine 
	0xb0570  class func HKForcedVitalCapacity.__allocating_init(statistics:) // init 
	0xb05c0  class func HKForcedVitalCapacity.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKForcedExpiratoryVolume : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfb80  func HKForcedExpiratoryVolume.shortUnitString.getter // getter 
	0xc08c0  func HKForcedExpiratoryVolume.shortUnitString.setter // setter 
	0xb0930  func HKForcedExpiratoryVolume.shortUnitString.modify // modifyCoroutine 
	0xbfb90  func HKForcedExpiratoryVolume.longUnitString.getter // getter 
	0xc08d0  func HKForcedExpiratoryVolume.longUnitString.setter // setter 
	0xb0960  func HKForcedExpiratoryVolume.longUnitString.modify // modifyCoroutine 
	0xb0df0  func HKForcedExpiratoryVolume.dateRange.getter // getter 
	0xb0e10  func HKForcedExpiratoryVolume.dateRange.setter // setter 
	0xb0e30  func HKForcedExpiratoryVolume.dateRange.modify // modifyCoroutine 
	0xb0e70  class func HKForcedExpiratoryVolume.__allocating_init(statistics:) // init 
	0xb0ec0  class func HKForcedExpiratoryVolume.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfba0  func HKPeakExpiratoryFlowRate.shortUnitString.getter // getter 
	0xc08e0  func HKPeakExpiratoryFlowRate.shortUnitString.setter // setter 
	0xb1230  func HKPeakExpiratoryFlowRate.shortUnitString.modify // modifyCoroutine 
	0xbfbb0  func HKPeakExpiratoryFlowRate.longUnitString.getter // getter 
	0xc08f0  func HKPeakExpiratoryFlowRate.longUnitString.setter // setter 
	0xb1260  func HKPeakExpiratoryFlowRate.longUnitString.modify // modifyCoroutine 
	0xb1710  func HKPeakExpiratoryFlowRate.dateRange.getter // getter 
	0xb1730  func HKPeakExpiratoryFlowRate.dateRange.setter // setter 
	0xb1750  func HKPeakExpiratoryFlowRate.dateRange.modify // modifyCoroutine 
	0xb1790  class func HKPeakExpiratoryFlowRate.__allocating_init(statistics:) // init 
	0xb17e0  class func HKPeakExpiratoryFlowRate.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKPeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfbc0  func HKPeripheralPerfusionIndex.shortUnitString.getter // getter 
	0xc0900  func HKPeripheralPerfusionIndex.shortUnitString.setter // setter 
	0xb1b50  func HKPeripheralPerfusionIndex.shortUnitString.modify // modifyCoroutine 
	0xbfbd0  func HKPeripheralPerfusionIndex.longUnitString.getter // getter 
	0xc0910  func HKPeripheralPerfusionIndex.longUnitString.setter // setter 
	0xb1b80  func HKPeripheralPerfusionIndex.longUnitString.modify // modifyCoroutine 
	0xb2010  func HKPeripheralPerfusionIndex.dateRange.getter // getter 
	0xb2030  func HKPeripheralPerfusionIndex.dateRange.setter // setter 
	0xb2050  func HKPeripheralPerfusionIndex.dateRange.modify // modifyCoroutine 
	0xb2090  class func HKPeripheralPerfusionIndex.__allocating_init(statistics:) // init 
	0xb20e0  class func HKPeripheralPerfusionIndex.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfbe0  func HKDietaryFatTotal.shortUnitString.getter // getter 
	0xc0920  func HKDietaryFatTotal.shortUnitString.setter // setter 
	0xb2450  func HKDietaryFatTotal.shortUnitString.modify // modifyCoroutine 
	0xbfbf0  func HKDietaryFatTotal.longUnitString.getter // getter 
	0xc0930  func HKDietaryFatTotal.longUnitString.setter // setter 
	0xb2480  func HKDietaryFatTotal.longUnitString.modify // modifyCoroutine 
	0xb2910  func HKDietaryFatTotal.dateRange.getter // getter 
	0xb2930  func HKDietaryFatTotal.dateRange.setter // setter 
	0xb2950  func HKDietaryFatTotal.dateRange.modify // modifyCoroutine 
	0xb2990  class func HKDietaryFatTotal.__allocating_init(statistics:) // init 
	0xb29e0  class func HKDietaryFatTotal.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfc00  func HKDietaryFatPolyunsaturated.shortUnitString.getter // getter 
	0xc0940  func HKDietaryFatPolyunsaturated.shortUnitString.setter // setter 
	0xb2d50  func HKDietaryFatPolyunsaturated.shortUnitString.modify // modifyCoroutine 
	0xbfc10  func HKDietaryFatPolyunsaturated.longUnitString.getter // getter 
	0xc0950  func HKDietaryFatPolyunsaturated.longUnitString.setter // setter 
	0xb2d80  func HKDietaryFatPolyunsaturated.longUnitString.modify // modifyCoroutine 
	0xb3210  func HKDietaryFatPolyunsaturated.dateRange.getter // getter 
	0xb3230  func HKDietaryFatPolyunsaturated.dateRange.setter // setter 
	0xb3250  func HKDietaryFatPolyunsaturated.dateRange.modify // modifyCoroutine 
	0xb3290  class func HKDietaryFatPolyunsaturated.__allocating_init(statistics:) // init 
	0xb32e0  class func HKDietaryFatPolyunsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfc20  func HKDietaryFatMonounsaturated.shortUnitString.getter // getter 
	0xc0960  func HKDietaryFatMonounsaturated.shortUnitString.setter // setter 
	0xb3650  func HKDietaryFatMonounsaturated.shortUnitString.modify // modifyCoroutine 
	0xbfc30  func HKDietaryFatMonounsaturated.longUnitString.getter // getter 
	0xc0970  func HKDietaryFatMonounsaturated.longUnitString.setter // setter 
	0xb3680  func HKDietaryFatMonounsaturated.longUnitString.modify // modifyCoroutine 
	0xb3b10  func HKDietaryFatMonounsaturated.dateRange.getter // getter 
	0xb3b30  func HKDietaryFatMonounsaturated.dateRange.setter // setter 
	0xb3b50  func HKDietaryFatMonounsaturated.dateRange.modify // modifyCoroutine 
	0xb3b90  class func HKDietaryFatMonounsaturated.__allocating_init(statistics:) // init 
	0xb3be0  class func HKDietaryFatMonounsaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfc40  func HKDietaryFatSaturated.shortUnitString.getter // getter 
	0xc0980  func HKDietaryFatSaturated.shortUnitString.setter // setter 
	0xb3f50  func HKDietaryFatSaturated.shortUnitString.modify // modifyCoroutine 
	0xbfc50  func HKDietaryFatSaturated.longUnitString.getter // getter 
	0xc0990  func HKDietaryFatSaturated.longUnitString.setter // setter 
	0xb3f80  func HKDietaryFatSaturated.longUnitString.modify // modifyCoroutine 
	0xb4410  func HKDietaryFatSaturated.dateRange.getter // getter 
	0xb4430  func HKDietaryFatSaturated.dateRange.setter // setter 
	0xb4450  func HKDietaryFatSaturated.dateRange.modify // modifyCoroutine 
	0xb4490  class func HKDietaryFatSaturated.__allocating_init(statistics:) // init 
	0xb44e0  class func HKDietaryFatSaturated.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKDietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var shortUnitString : String
	var longUnitString : String
	let underlyingType : UnderlyingKitType
	var dateRange : DateInterval

	// Swift methods
	0xbfc60  func HKDietaryCholesterol.shortUnitString.getter // getter 
	0xc09a0  func HKDietaryCholesterol.shortUnitString.setter // setter 
	0xb4850  func HKDietaryCholesterol.shortUnitString.modify // modifyCoroutine 
	0xbfc70  func HKDietaryCholesterol.longUnitString.getter // getter 
	0xc09b0  func HKDietaryCholesterol.longUnitString.setter // setter 
	0xb4880  func HKDietaryCholesterol.longUnitString.modify // modifyCoroutine 
	0xb5010  func HKDietaryCholesterol.dateRange.getter // getter 
	0xb5030  func HKDietaryCholesterol.dateRange.setter // setter 
	0xb5050  func HKDietaryCholesterol.dateRange.modify // modifyCoroutine 
	0xb5090  class func HKDietaryCholesterol.__allocating_init(statistics:) // init 
	0xb50e0  class func HKDietaryCholesterol.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKOvulationTestResultSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueOvulationTestResult
	var dateRange : DateInterval

	// Swift methods
	0xbf750  func HKOvulationTestResultSample.value.getter // getter 
	0xbf770  func HKOvulationTestResultSample.value.setter // setter 
	0xb5610  func HKOvulationTestResultSample.value.modify // modifyCoroutine 
	0xb5810  func HKOvulationTestResultSample.dateRange.getter // getter 
	0xb5830  func HKOvulationTestResultSample.dateRange.setter // setter 
	0xb5850  func HKOvulationTestResultSample.dateRange.modify // modifyCoroutine 
	0xb5890  class func HKOvulationTestResultSample.__allocating_init(sample:) // init 
	0xb58d0  class func HKOvulationTestResultSample.__allocating_init(categorySample:) // init 
	0xb5910  func HKOvulationTestResultSample.smallDescriptionString() // method 
	0xb59d0  func HKOvulationTestResultSample.longDescriptionString() // method 
 }

 class HealthExperience.HKMenstrualFlowSample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueMenstrualFlow
	var dateRange : DateInterval

	// Swift methods
	0xb5cf0  func HKMenstrualFlowSample.value.getter // getter 
	0xb5d20  func HKMenstrualFlowSample.value.setter // setter 
	0xb5d50  func HKMenstrualFlowSample.value.modify // modifyCoroutine 
	0xb5ef0  func HKMenstrualFlowSample.dateRange.getter // getter 
	0xb5f60  func HKMenstrualFlowSample.dateRange.setter // setter 
	0xb5fe0  func HKMenstrualFlowSample.dateRange.modify // modifyCoroutine 
	0xb6020  class func HKMenstrualFlowSample.__allocating_init(sample:) // init 
	0xb6060  class func HKMenstrualFlowSample.__allocating_init(categorySample:) // init 
	0xb6400  func HKMenstrualFlowSample.smallDescriptionString() // method 
	0xb64d0  func HKMenstrualFlowSample.longDescriptionString() // method 
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
	0xc2280  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0xc2350  func OperationQueueObserver.addOperation(_:) // method 
	0xc23f0  func OperationQueueObserver.addOperations(_:waitUntilFinished:) // method 
	0xc2ad0  func OperationQueueObserver.currentOperationsCopy.getter // getter 
	0xc2bf0  func OperationQueueObserver.operationCount.getter // getter 
	0xc2c80  func OperationQueueObserver.clearObserving() // method 
	0xc2cf0  func OperationQueueObserver.didComplete(_:) // method 
 }

 class HealthExperience.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xc54c0  @objc Feed.initWithEntity:insertIntoManagedObjectContext: <stripped>
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
	0xc8050  func ArrayDataSource.eventHandler.getter // getter 
	0xc8080  func ArrayDataSource.eventHandler.setter // setter 
	0xc80d0  func ArrayDataSource.eventHandler.modify // modifyCoroutine 
	0xc81b0  func ArrayDataSource.debugDescription.getter // getter 
	0xc83a0  func ArrayDataSource.debugDescription.setter // setter 
	0xc83c0  func ArrayDataSource.debugDescription.modify // modifyCoroutine 
	0xc8460  func ArrayDataSource.identifier.getter // getter 
	0xc8610  func ArrayDataSource.identifier.setter // setter 
	0xc8630  func ArrayDataSource.identifier.modify // modifyCoroutine 
	0xc8740  func ArrayDataSource.numberOfSections.getter // getter 
	0xc8750  func ArrayDataSource.titleForHeader(in:) // method 
	0xc7f80  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0xc87f0  func ArrayDataSource.sections.getter // getter 
	0xc8800  func ArrayDataSource.sectionIdentifiers.getter // getter 
	0xc8bd0  func ArrayDataSource.numberOfItems(in:) // method 
	0xc8c40  func ArrayDataSource.item(at:) // method 
	0xc8e50  func ArrayDataSource.reuseIdentifierForItem(at:) // method 
	0xc8eb0  func ArrayDataSource.item(for:) // method 
	0xc9180  func ArrayDataSource.reuseIdentifierForItem(with:) // method 
	0xc9200  func ArrayDataSource.itemIdentifiers(in:) // method 
 }

 struct HealthExperience.SecondaryProfileContextFactory { }

 class HealthExperience.HKCervicalMucusQualitySample : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : HKCategoryValueCervicalMucusQuality // +0x10 (0x8)
	var dateRange : DateInterval // +0x0 (0x0)

	// Swift methods
	0xccc10  func HKCervicalMucusQualitySample.value.getter // getter 
	0xccc40  func HKCervicalMucusQualitySample.value.setter // setter 
	0xccc70  func HKCervicalMucusQualitySample.value.modify // modifyCoroutine 
	0xcce80  func HKCervicalMucusQualitySample.dateRange.getter // getter 
	0xcced0  func HKCervicalMucusQualitySample.dateRange.setter // setter 
	0xccf30  func HKCervicalMucusQualitySample.dateRange.modify // modifyCoroutine 
	0xccf70  class func HKCervicalMucusQualitySample.__allocating_init(sample:) // init 
	0xccfa0  class func HKCervicalMucusQualitySample.__allocating_init(categorySample:) // init 
	0xcd300  func HKCervicalMucusQualitySample.smallDescriptionString() // method 
	0xcd3c0  func HKCervicalMucusQualitySample.longDescriptionString() // method 
 }

 class HealthExperience.HKCervicalMucusQualitySampleMatcher : Matcher {
	// Swift methods
	0xcdb90  func HKCervicalMucusQualitySampleMatcher.dataSource(healthStore:) // method 
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
	0xcf060  @objc FirstRestoreNotInProgressPrecondition.dealloc <stripped>
	0xcf190  @objc FirstRestoreNotInProgressPrecondition.description <stripped>
	0xcf380  @objc FirstRestoreNotInProgressPrecondition.init <stripped>
	0xcf080  @objc FirstRestoreNotInProgressPrecondition..cxx_destruct <stripped>

	// Swift methods
	0xcec20  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0xcf0e0  func FirstRestoreNotInProgressPrecondition.evaluate(_:) // method 
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
	0xd4fe0  @objc Plugin.initWithEntity:insertIntoManagedObjectContext: <stripped>
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
	0xd9b90  @objc DateRangeRelevanceProvider.init <stripped>
	0xd9db0  @objc DateRangeRelevanceProvider.isEqual: <stripped>
	0xd9e50  @objc DateRangeRelevanceProvider.hash <stripped>
	0xd9ef0  @objc DateRangeRelevanceProvider.description <stripped>
	0xda180  @objc DateRangeRelevanceProvider..cxx_destruct <stripped>

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
	0xdab20  @objc ComposableAsyncOperation.start <stripped>
	0xdb540  @objc ComposableAsyncOperation.cancel <stripped>
	0xdb6a0  @objc ComposableAsyncOperation.init <stripped>
	0xdb750  @objc ComposableAsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0xda670  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.getter // getter 
	0xda6a0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.setter // setter 
	0xda6e0  func ComposableAsyncOperation.automaticallyDispatchFinishOperation.modify // modifyCoroutine 
	0xda730  func ComposableAsyncOperation.childOperations.getter // getter 
	0xda770  func ComposableAsyncOperation.childOperations.setter // setter 
	0xda7c0  func ComposableAsyncOperation.childOperations.modify // modifyCoroutine 
	0xda800  func ComposableAsyncOperation.addChild(_:) // method 
	0xdab50  func ComposableAsyncOperation.dispatchChildOperations() // method 
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
	0xe05f0  @objc HealthExperienceStoreOracle.init <stripped>
	0xe1670  @objc HealthExperienceStoreOracle..cxx_destruct <stripped>

	// Swift methods
	0xdfd30  func HealthExperienceStoreOracle.readyHealthExperienceStore.getter // getter 
	0xdfdd0  func HealthExperienceStoreOracle.readyHealthExperienceStore.setter // setter 
	0xdfe70  func HealthExperienceStoreOracle.readyHealthExperienceStore.modify // modifyCoroutine 
	0xdfec0  func HealthExperienceStoreOracle.healthExperienceStore.getter // getter 
	0xdffe0  func HealthExperienceStoreOracle.register(observer:) // method 
	0xe0610  func HealthExperienceStoreOracle.attemptToInitilizeStore(shouldListen:) // method 
	0xe1260  func HealthExperienceStoreOracle.beginListeningToDataAccessChanges() // method 
	0xe1430  func HealthExperienceStoreOracle.handleUnrecoverableError() // method 
	0xe15d0  func HealthExperienceStoreOracle.makeHealthExperienceStore() // method 
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
	0xe2e50  func CompoundSectionedDataSource.childDataSources.getter // getter 
	0xe2e80  func CompoundSectionedDataSource.eventHandler.getter // getter 
	0xe2eb0  func CompoundSectionedDataSource.eventHandler.setter // setter 
	0xe2f00  func CompoundSectionedDataSource.eventHandler.modify // modifyCoroutine 
	0xe3080  func CompoundSectionedDataSource.promise.getter // getter 
	0xe30b0  func CompoundSectionedDataSource.identifier.getter // getter 
	0xe30f0  func CompoundSectionedDataSource.identifier.setter // setter 
	0xe3130  func CompoundSectionedDataSource.identifier.modify // modifyCoroutine 
	0xe3170  func CompoundSectionedDataSource.sectionIdentifiers.getter // getter 
	0xe3550  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0xe35f0  func CompoundSectionedDataSource.determineSectionOffset(for:) // method 
	0xe38f0  func CompoundSectionedDataSource.handle(change:for:) // method 
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
	0xebbf0  class func HKHealthSource.__allocating_init(name:bundleIdentifier:) // init 
 }

 class HealthExperience.HKHealthSourceMatcher : Matcher {

	// Properties
	var objectType : HKObjectType?

	// Swift methods
	0xebf00  func HKHealthSourceMatcher.dataSource(healthStore:) // method 
	0xec010  func HKHealthSourceMatcher.addConstraint(sourcesFor:) // method 
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
	0xec6e0  class func CancellableProgressList.__allocating_init() // init 
	0xec840  func CancellableProgressList.add(_:uuid:) // method 
	0xed1e0  func CancellableProgressList.clearProgress(for:) // method 
	0xedf70  func CancellableProgressList.cancelAll() // method 
 }

 class HealthExperience.DateRangeRelevanceProviderManager : RERelevanceProviderManager /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
	0xf0730  @objc DateRangeRelevanceProviderManager._valueForProvider:context:feature: <stripped>
	0xf07c0  @objc DateRangeRelevanceProviderManager._valueForProvider:feature: <stripped>
	0xf07f0  @objc DateRangeRelevanceProviderManager.initWithQueue: <stripped>
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
	0xf3400  func BundleFeedItemGenerationPluginInfo.bundle.getter // getter 
	0xf3430  func BundleFeedItemGenerationPluginInfo.bundle.setter // setter 
	0xf3470  func BundleFeedItemGenerationPluginInfo.bundle.modify // modifyCoroutine 
	0xf34a0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.getter // getter 
	0xf34e0  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.setter // setter 
	0xf3520  func BundleFeedItemGenerationPluginInfo.bundleIdentifier.modify // modifyCoroutine 
	0xf3550  func BundleFeedItemGenerationPluginInfo.principalClass.getter // getter 
	0xf3750  func BundleFeedItemGenerationPluginInfo.principalClass.setter // setter 
	0xf3760  func BundleFeedItemGenerationPluginInfo.principalClass.modify // modifyCoroutine 
	0xf37b0  func BundleFeedItemGenerationPluginInfo.makeFeedItemGenerator(context:) // method 
	0xf3be0  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthExperience.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xf46d0  @objc Keyword.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 enum HealthExperience.SectionedDataSourceTransaction {

	// Properties
	case open : (pending: [SectionedDataSourceChangeset])
	case closed  
 }

 class HealthExperience.ManagedProfileConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x104b60  class func ManagedProfileConnection.__allocating_init() // init 
	0x104c40  func ManagedProfileConnection.isImproveHealthDataAllowed.getter // getter 
	0x104c60  func ManagedProfileConnection.isImproveWheelchairDataAllowed.getter // getter 
	0x104d30  func ManagedProfileConnection.setImproveHealthData(value:) // method 
	0x104d50  func ManagedProfileConnection.setImproveWheelchairData(value:) // method 
	0x104de0  func ManagedProfileConnection.isAppInstallationAllowed() // method 
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
	0x108870  func HKStepsSample.shortUnitString.getter // getter 
	0x1088b0  func HKStepsSample.shortUnitString.setter // setter 
	0x1088f0  func HKStepsSample.shortUnitString.modify // modifyCoroutine 
	0x108920  func HKStepsSample.longUnitString.getter // getter 
	0x108960  func HKStepsSample.longUnitString.setter // setter 
	0x1089a0  func HKStepsSample.longUnitString.modify // modifyCoroutine 
	0x1089d0  func HKStepsSample.underlyingType.getter // getter 
	0x108a10  func HKStepsSample.underlyingType.setter // setter 
	0x108a50  func HKStepsSample.underlyingType.modify // modifyCoroutine 
	0x1090f0  func HKStepsSample.dateRange.getter // getter 
	0x109140  func HKStepsSample.dateRange.setter // setter 
	0x1091a0  func HKStepsSample.dateRange.modify // modifyCoroutine 
	0x1091e0  class func HKStepsSample.__allocating_init(statistics:) // init 
	0x109250  class func HKStepsSample.__allocating_init(sample:) // init 
 }

 class HealthExperience.HKStepsSampleMatcher {
 class HealthExperience.PopulateFeedFromRelevanceEngineOperation : AsyncOperation {

	// Properties
	let context : NSManagedObjectContext // +0x18 (0x8)
	let feedKind : Feed.Kind // +0x20 (0x1)
	let dateRange : DateInterval // +0x17c000 (0x0)
	var engineCoordinator : RelevanceEngineCoordinator // +0x54534e4f (0x8)

	// ObjC -> Swift bridged methods
	0x10d880  @objc PopulateFeedFromRelevanceEngineOperation.main <stripped>
	0x110a90  @objc PopulateFeedFromRelevanceEngineOperation.init <stripped>
	0x110b50  @objc PopulateFeedFromRelevanceEngineOperation..cxx_destruct <stripped>

	// Swift methods
	0x10cc90  class func PopulateFeedFromRelevanceEngineOperation.__allocating_init(context:engineCoordinator:feedKind:dateRange:) // init 
	0x10d8b0  func <stripped> // method 
	0x10f580  func <stripped> // method 
 }

 struct HealthExperience.ShowAllHighlightsDataSourceItem { }

 class HealthExperience.DataType : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0x11cfd0  @objc DataType.initWithEntity:insertIntoManagedObjectContext: <stripped>
 }

 class HealthExperience.ResumeRelevanceEngineIfNeededOperation : AsynchronousOperation {

	// Properties
	let relevanceEngine : RERelevanceEngine // +0x30 (0x8)
	let timeout : Double // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x11d490  @objc ResumeRelevanceEngineIfNeededOperation.main <stripped>
	0x11d520  @objc ResumeRelevanceEngineIfNeededOperation.init <stripped>
	0x11d5c0  @objc ResumeRelevanceEngineIfNeededOperation..cxx_destruct <stripped>

	// Swift methods
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
	0x123300  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x1235b0  func FeedItemGeneratorManager.run(dateRange:completion:) // method 
	0x124ac0  func FeedItemGeneratorManager.startInteractiveGeneration(plugins:cancellationCompletion:) // method 
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
	0x126d10  func DiskHealthExperienceStore.isRunningInApplicationProcess.getter // getter 
	0x126ec0  func DiskHealthExperienceStore.viewContext.getter // getter 
	0x127090  func DiskHealthExperienceStore.sharedBackgroundContext.getter // getter 
	0x127190  func DiskHealthExperienceStore.sharedBackgroundContext.setter // setter 
	0x1271b0  func DiskHealthExperienceStore.sharedBackgroundContext.modify // modifyCoroutine 
	0x127200  func DiskHealthExperienceStore.allEntities.getter // getter 
	0x127310  func DiskHealthExperienceStore.allEntities.setter // setter 
	0x127330  func DiskHealthExperienceStore.allEntities.modify // modifyCoroutine 
	0x126b70  class func DiskHealthExperienceStore.__allocating_init() // init 
	0x127860  func DiskHealthExperienceStore.makeStoreLocation() // method 
	0x127a60  class func static DiskHealthExperienceStore.storeFileURL.getter // getter 
	0x127ba0  func DiskHealthExperienceStore.persistentStoreDescription.getter // getter 
	0x127e80  func DiskHealthExperienceStore.persistentStoreCoordinator.getter // getter 
	0x127f00  func DiskHealthExperienceStore.initPersistentContainer() // method 
	0x128070  func DiskHealthExperienceStore.persistentContainer.getter // getter 
	0x128250  func DiskHealthExperienceStore.persistentContainer.setter // setter 
	0x128270  func DiskHealthExperienceStore.persistentContainer.modify // modifyCoroutine 
	0x128300  func DiskHealthExperienceStore.destroyStoreIfNeededAndMakePersistentContainer() // method 
	0x128540  func DiskHealthExperienceStore.deleteAllObjects() // method 
	0x128580  func DiskHealthExperienceStore.delete(_:from:) // method 
	0x129130  func DiskHealthExperienceStore.makePersistentContainer(retryOnFailure:) // method 
	0x1291d0  func DiskHealthExperienceStore.updateStoreMetadataWithLatestVersion(_:) // method 
	0x129c00  func DiskHealthExperienceStore.unsafeMakePersistentContainer(retryOnFailure:) // method 
	0x12b860  func DiskHealthExperienceStore.getStoreState() // method 
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
	0x139f50  @objc AsyncOperation.isExecuting <stripped>
	0x139fe0  @objc AsyncOperation.isFinished <stripped>
	0x13a0b0  @objc AsyncOperation.isAsynchronous <stripped>
	0x13a120  @objc AsyncOperation.start <stripped>
	0x13a1a0  @objc AsyncOperation.main <stripped>
	0x13a270  @objc AsyncOperation.init <stripped>
	0x13a2e0  @objc AsyncOperation..cxx_destruct <stripped>

	// Swift methods
	0x139ab0  func AsyncOperation.state.getter // getter 
	0x139b20  func AsyncOperation.state.setter // setter 
	0x139d70  func AsyncOperation.state.modify // modifyCoroutine 
	0x139e20  func AsyncOperation.finish() // method 
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

 protocol HealthPlatformCore.FeedItemSuggestionRelevanceCalculating // 1 requirements
 {
	// getter
 }
 protocol HealthPlatformCore.BookkeepingPublisher // 1 requirements
 {
	// class base protocol
 }
 protocol HealthPlatformCore.CoreSpotlightIndexable // 2 requirements
 {
	// getter
	// method
 }
 protocol HealthPlatformCore.RelevanceFeatureTagKeyPathCorresponding // 2 requirements
 {
	// class base protocol
	// class getter
 }
 protocol HealthPlatformCore.RelevanceFeatureTagDecodable // 3 requirements
 {
	// class base protocol
	// class method
	// class method
 }
 protocol HealthPlatformCore.PredictiveGenerationAnalyticsDateProvider // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol HealthPlatformCore.FeedItemGeneratorOperationClassProviding // 2 requirements
 {
	// class init
	// getter
 }
 protocol HealthPlatformCore.OrchestrationScheduler // 6 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
	// class init
 }
 protocol HealthPlatformCore.HealthExperienceStore // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol HealthPlatformCore.FeedItemGenerationPluginInfo // 6 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol HealthPlatformCore.NSManagedObjectUnique // 2 requirements
 {
	// class method
	// class getter
 }
 protocol HealthPlatformCore.REFeatureCorresponding // 2 requirements
 {
	// class method
	// method
 }
 protocol HealthPlatformCore.RERawFeatureValueExpressible // 3 requirements
 {
	// class base protocol
	// class getter
	// getter
 }

 enum __C._HKDataTypeCode { }

 struct __C.ProgressUserInfoKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 enum __C.HKDisplayCategoryIdentifier { }

 class HealthPlatformCore.DateRangeRelevanceProviderManager : RERelevanceProviderManager /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5e8400024290 (0x68400024290) in binary!
	0x7dd8  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x9bdc00024270 (0x3dc00024270) in binary!
	0x38000000c  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x621400024238 (0x21400024238) in binary!
	0x6210  @objc DateRangeRelevanceProviderManager.(null) <stripped>
 }

 class HealthPlatformCore.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : BasicPluginInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x621400024238 (0x21400024238) in binary!
	0x6210  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61fc00024218 (0x1fc00024218) in binary!
	0x38000000c  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61ec00024658 (0x1ec00024658) in binary!
	0x61e0  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>

	// Swift methods
	0x40e0  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
 }

 class HealthPlatformCore.FeedItemREElementDataSource : REElementDataSource /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
	let store : HealthExperienceStore // +0x8 (0x28)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x61bc000241c8 (0x1bc000241c8) in binary!
	0x6704  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x61a400024200 (0x1a400024200) in binary!
	0x6190  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x18cfff70bf8  @objc FeedItemREElementDataSource.(null) <stripped>
	0x16400024218  @objc FeedItemREElementDataSource.Lçâûˇˇ∫f <stripped>

	// Swift methods
	0xc500  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
 }

 class HealthPlatformCore.GenerationOperationToGeneratorAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var domain : {¥ // +0xfeedfacf (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : ï¥ // +0x3 (0x0)
	let pluginInfo : FeedItemGenerationPluginInfo // +0x7e (0x28)
	let queue : NSOperationQueue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : y∞ // +0x0 (0x8)

	// Swift methods
	0x11770  func <stripped> // getter 
	0x117c0  func <stripped> // setter 
	0x11820  func <stripped> // modifyCoroutine 
	0x11870  func <stripped> // getter 
	0x11a30  class func GenerationOperationToGeneratorAdaptor.__allocating_init(queue:pluginInfo:domain:context:) // init 
 }

 class HealthPlatformCore.Inner {
 struct HealthPlatformCore.Publisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedItemContext : Y≥ // +0x0
	let pluginInfo : FeedItemGenerationPluginInfo // +0x28
	let queue : NSOperationQueue // +0x50
 }

 struct HealthPlatformCore.ModelTrainingScenario {

	// Properties
	let commands : ModelTrainingCommand // +0x0
	let data : ModelTrainingElement // +0x8
 }

 struct HealthPlatformCore.ModelTrainingCommand {

	// Properties
	let type : Kind
	let id : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ;Ø
 }

 enum HealthPlatformCore.Kind {

	// Properties
	case tap  
	case setDate  
 }

 struct HealthPlatformCore.ModelTrainingElement {

	// Properties
	let associatedHKTypesRaw : [Int]?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let contentKind : ª∞
	let completeness : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataVisualizationKind : ∑¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantDateInterval : w¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateSubmitted : Ø
	let keywords : [String]?
	let magnitude : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ≥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : ß≤
	let uniqueIdentifier : String
 }

 enum HealthPlatformCore.CodingKeys {

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

 enum HealthPlatformCore.CodingKeys {

	// Properties
	case type  
	case id  
	case date  
 }

 enum HealthPlatformCore.CodingKeys {

	// Properties
	case commands  
	case data  
 }

 enum HealthPlatformCore.ModelTrainingScenarioError {

	// Properties
	case unsupportedInput : String
	case missingCommandIDs : [String]
 }

 class HealthPlatformCore.CancellableProgressList : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : ô±
	var list : [NSProgress]

	// Swift methods
	0x2bb10  class func CancellableProgressList.__allocating_init() // init 
	0x2bbf0  func <stripped> // method 
	0x2c570  func <stripped> // method 
	0x2d280  func <stripped> // method 
	0x2d9b0  func <stripped> // getter 
 }

 class HealthPlatformCore.HealthExperienceStoreOracle : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let notificationCenter : NSNotificationCenter
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifydObserver : …¥
	var readyHealthExperienceStore : HealthExperienceStore
	var $__lazy_storage_$_healthExperienceStore : HealthExperienceStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ô±

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6184000241e0 (0x184000241e0) in binary!
	0x6170  @objc HealthExperienceStoreOracle.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff718e8  @objc HealthExperienceStoreOracle.(null) <stripped>

	// Swift methods
	0x2e340  func <stripped> // getter 
	0x2e3d0  func <stripped> // setter 
	0x2e470  func <stripped> // modifyCoroutine 
	0x2e4c0  func <stripped> // getter 
	0x2e570  func <stripped> // method 
	0x2eaf0  func <stripped> // method 
	0x2f3d0  func <stripped> // method 
	0x2f5b0  func <stripped> // method 
	0x2f700  func <stripped> // method 
 }

 class HealthPlatformCore.FeedItemSuggestedActionDataSource {
 class HealthPlatformCore.GeneratorPipelineManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _generationState : ã∑ // +0x0 (0x0)
	let store : HealthExperienceStore // +0x65745f5f (0x28)
	var healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var atomicHealthStores : ´≥ // +0x45545f5f (0x8)
	let favoritesProvider : FavoritesProviding // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileIdentifiersPublisher : ı∏ // +0x12 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : «≤ // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stateLogging : A∂ // +0x0 (0x8)
	let orchestrationQueue : OS_dispatch_queue // +0x0 (0x8)
	let orchestrationScheduler : OrchestrationScheduler // +0x0 (0x28)

	// Swift methods
	0x30500  func <stripped> // getter 
	0x30560  func <stripped> // setter 
	0x30640  func <stripped> // modifyCoroutine 
	0x30960  func <stripped> // getter 
	0x309c0  func <stripped> // setter 
	0x30a20  func <stripped> // modifyCoroutine 
	0x30c10  class func GeneratorPipelineManager.__allocating_init(store:healthStore:environment:favoritesProvider:scheduler:) // init 
	0x32be0  func <stripped> // method 
	0x33a90  func <stripped> // method 
	0x34330  func <stripped> // method 
	0x348a0  func <stripped> // method 
	0x35990  func <stripped> // method 
	0x35fc0  func <stripped> // method 
	0x37650  func <stripped> // method 
 }

 struct HealthPlatformCore.GenerationState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var outstandingPipelines :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var outstandingGenerators :  empty-list  // +0x8
 }

 class HealthPlatformCore.ModelTrainingScenarioExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinator : RelevanceEngineCoordinator
	let store : HealthExperienceStore

	// Swift methods
	0x400e0  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x40160  func <stripped> // method 
	0x40180  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b5000024138 (0x35000024138) in binary!
	0x6140  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x613400024118 (0x13400024118) in binary!
	0x6128  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x611c000240f0 (0x11c000240f0) in binary!
	0x9ab8  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c9c00024408 (0x49c00024408) in binary!
	0x60f0  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff94858  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x8cfff94970  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
	0xac00024108  @objc HealthExperienceStoreCoreSpotlightDelegate.HâS(Hã5M¿ <stripped>
WARNING: couldn't find address 0x240b4fff99f00 (0xb4fff99f00) in binary!
	0x48000000c  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>

	// Swift methods
	0x41840  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var healthStore : HKHealthStore // +0x10 (0x8)
	var favoritesProvider : FavoritesProviding // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : «≤ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var boundingRange : W© // +0x45545f5f (0x0)
	let storageContext : NSManagedObjectContext // +0xfc6 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : ô™ // +0xbb3bc (0x28)
	var hasOperationCompleted : Bool? // +0x0 (0x1)

	// Swift methods
	0x42e90  func <stripped> // getter 
	0x42f50  func <stripped> // getter 
	0x42fc0  func <stripped> // getter 
	0x43100  func <stripped> // getter 
	0x42d40  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x43240  func <stripped> // method 
	0x442f0  func <stripped> // method 
	0x46a10  func <stripped> // method 
	0x46e30  func <stripped> // method 
	0x47660  func <stripped> // method 
	0x477b0  func <stripped> // method 
 }

 class HealthPlatformCore.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext?
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext?
	var persistentStoreDescription : NSPersistentStoreDescription
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer?

	// Swift methods
	0x49520  func <stripped> // getter 
	0x495a0  func <stripped> // setter 
	0x495c0  func <stripped> // modifyCoroutine 
	0x49660  func <stripped> // getter 
	0x49730  func <stripped> // setter 
	0x49750  func <stripped> // modifyCoroutine 
	0x494a0  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x49aa0  func <stripped> // getter 
	0x49ad0  func <stripped> // setter 
	0x49b10  func <stripped> // modifyCoroutine 
	0x49b50  func <stripped> // getter 
	0x49b90  func <stripped> // method 
	0x49c10  func <stripped> // getter 
	0x49c90  func <stripped> // setter 
	0x49cb0  func <stripped> // modifyCoroutine 
	0x49d00  func <stripped> // method 
	0x4a0d0  func <stripped> // method 
 }

 enum HealthPlatformCore.RelevanceFeatureTagCoreDataError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case metadataDecodingFailure : ı∑
	case metadataNotFound  
 }

 class HealthPlatformCore.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0x4d3e0  func <stripped> // getter 
	0x4d420  func <stripped> // setter 
	0x4d460  func <stripped> // modifyCoroutine 
	0x4d4a0  class func BasicPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthPlatformCore.FoundationPluginBundleProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthPlatformCore.PluginBundleLoadError {

	// Properties
	case badURLPath : (path: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case notFound : /®
	case noBundleIdentifier : (bundle: NSBundle)
	case notAllowed : (bundleIdentifier: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loadFailed : u∑
 }

 class HealthPlatformCore.PluginBundleProvider {
 class HealthPlatformCore.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c7c00024288 (0x47c00024288) in binary!
	0x28000000c  @objc Keyword.(null) <stripped>
 }

 class HealthPlatformCore.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c6400024270 (0x46400024270) in binary!
	0x60b8  @objc FeedItem.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xb4fff99f00  @objc FeedItem.(null) <stripped>
 }

 class HealthPlatformCore.RelevanceEngineCoordinator : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : NSOperationQueue // +0x8 (0x8)
	let dispatchQueue : OS_dispatch_queue // +0x10 (0x8)
	let engineName : String // +0x18 (0x10)
	var $__lazy_storage_$_primaryFeatures : REFeatureSet? // +0x28 (0x8)
	var $__lazy_storage_$_crossedFeatures : [REFeature]? // +0x30 (0x8)
	var $__lazy_storage_$_relevanceProviderManagerClasses : [RERelevanceProviderManager.Type]? // +0x38 (0x8)
	let modelVersion : UInt // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let modelPath : Û¶ // +0x65706c65 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pretrainedModelURL : Ì¶ // +0x45545f5f (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x60ac00024108 (0xac00024108) in binary!
	0x6098  @objc RelevanceEngineCoordinator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3cfff9ed10  @objc RelevanceEngineCoordinator.(null) <stripped>

	// Swift methods
	0x55120  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelURL:pretrainedModelURL:) // init 
	0x551d0  func <stripped> // method 
	0x55310  func <stripped> // method 
	0x55380  func <stripped> // getter 
	0x553a0  func <stripped> // getter 
	0x55400  func <stripped> // getter 
	0x55510  func <stripped> // getter 
	0x555c0  func <stripped> // setter 
	0x555e0  func <stripped> // modifyCoroutine 
	0x55640  func <stripped> // getter 
	0x556c0  func <stripped> // getter 
	0x557c0  func <stripped> // getter 
	0x55800  func <stripped> // setter 
	0x55840  func <stripped> // modifyCoroutine 
	0x558c0  func <stripped> // method 
	0x55f70  func <stripped> // method 
	0x561e0  func <stripped> // method 
	0x56690  func <stripped> // method 
	0x57380  func <stripped> // method 
	0x57580  func <stripped> // method 
	0x57680  func <stripped> // method 
	0x57a30  func <stripped> // method 
	0x57d10  func <stripped> // method 
 }

 class HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var callback : (_:_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a8200024050 (0x28200024050) in binary!
	0x9a84  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x6074000240d0 (0x74000240d0) in binary!
	0x6060  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa8e18  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x8cfffa8e50  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>

	// Swift methods
	0x5cbc0  func <stripped> // method 
 }

 class HealthPlatformCore.GenerationOperationToPluginDelegateAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let pluginInfo : FeedItemGenerationPluginInfo // +0x10 (0x28)
	var $__lazy_storage_$_queue : NSOperationQueue? // +0x38 (0x8)

	// Swift methods
 }

 enum HealthPlatformCore.Kind {

	// Properties
	case appsForHealth  
	case getMoreFromHealth  
	case highlights  
	case notices  
	case summary  
 }

 struct HealthPlatformCore.NoveltyFeatureTag {

	// Properties
	let value : String // +0x0
 }

 struct HealthPlatformCore.UserProfile {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var uniqueIdentifier : π•
	var profileIdentifier : HKProfileIdentifier
 }

 class HealthPlatformCore.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7bec000241f8 (0x3ec000241f8) in binary!
	0x28000000c  @objc FeedSection.(null) <stripped>
 }

 class HealthPlatformCore.GroupConfigurationLoader : REBundleConfiguration /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99e400023ff0 (0x1e400023ff0) in binary!
	0x6030  @objc GroupConfigurationLoader.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa90b0  @objc GroupConfigurationLoader.(null) <stripped>
 }

 class HealthPlatformCore.Profile : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7bb4000241c0 (0x3b4000241c0) in binary!
	0x18000000c  @objc Profile.(null) <stripped>
 }

 class HealthPlatformCore.AppSessionAnalyticsManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var predictiveGenerationDateProvider : PredictiveGenerationAnalyticsDateProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : ô±
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentObjects :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cancellables :  empty-list 

	// Swift methods
	0x67250  func <stripped> // getter 
	0x672a0  func <stripped> // setter 
	0x67300  func <stripped> // modifyCoroutine 
	0x67340  class func AppSessionAnalyticsManager.__allocating_init() // init 
	0x67590  func <stripped> // method 
	0x67a30  func <stripped> // method 
	0x67cb0  func <stripped> // method 
	0x68620  func <stripped> // method 
	0x68690  func <stripped> // method 
	0x688f0  func <stripped> // method 
	0x68920  func <stripped> // method 
	0x68b10  func <stripped> // method 
	0x6a4d0  func <stripped> // method 
 }

 class HealthPlatformCore.DefaultsPredictiveGenerationAnalyticsDateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PredictiveGenerationAnalyticsDateProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateLastPredictiveGenerationRanForAnalytics : ü´ // +0x0 (0x0)

	// Swift methods
	0x6aaf0  func <stripped> // getter 
	0x6ab30  func <stripped> // setter 
	0x6aba0  func <stripped> // modifyCoroutine 
	0x6ac50  class func AppSessionAnalyticsManager.DefaultsPredictiveGenerationAnalyticsDateProvider.__allocating_init() // init 
 }

 class HealthPlatformCore.EncodedFeatureTag : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b9c000241a8 (0x39c000241a8) in binary!
	0x18000000c  @objc EncodedFeatureTag.(null) <stripped>
 }

 class HealthPlatformCore.CommitRedirectingFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wrappedContext : Y≥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let commitHandler :  empty-list 

	// Swift methods
 }

 class HealthPlatformCore.BundleFeedItemPluginBundleProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthPlatformCore.BundleFeedItemGenerationPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bundle : NSBundle
	var bundleIdentifier : String
	var $__lazy_storage_$_principalClass : Swift.AnyObject.Type??

	// Swift methods
	0x6f700  func <stripped> // getter 
	0x6f730  func <stripped> // setter 
	0x6f770  func <stripped> // modifyCoroutine 
	0x6f840  func <stripped> // getter 
	0x6f880  func <stripped> // setter 
	0x6f8c0  func <stripped> // modifyCoroutine 
	0x6f920  func <stripped> // getter 
	0x6f9a0  func <stripped> // setter 
	0x6f9b0  func <stripped> // modifyCoroutine 
	0x6fa00  func <stripped> // method 
	0x6fe50  func <stripped> // method 
	0x70420  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthPlatformCore.FeedItemGeneratorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let availablePlugins : FeedItemGenerationPluginInfo
	let store : HealthExperienceStore
	let healthStore : HKHealthStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let favoritesProvider : €™

	// Swift methods
	0x712a0  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x713c0  func <stripped> // method 
 }

 class HealthPlatformCore.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b8400024190 (0x38400024190) in binary!
	0x58000000c  @objc Feed.(null) <stripped>
 }

 enum HealthPlatformCore.ForYouSectionKind {

	// Properties
	case highlights  
	case getMoreFromHealth  
	case appsForHealth  
 }

 class HealthPlatformCore.ResumeRelevanceEngineIfNeededOperation {
 class HealthPlatformCore.PopulateFeedFromRelevanceEngineOperation {
 struct HealthPlatformCore.ShowAllHighlightsDataSourceItem { }

 struct HealthPlatformCore.Wrapper {

	// Properties
	let wrapped : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : ô™
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context : ï¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : π•
 }

 struct HealthPlatformCore.HealthPluginDelegateWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wrapped : Á£ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : ô™ // +0x28
 }

 class HealthPlatformCore.DateRangeRelevanceProvider : RERelevanceProvider /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantDateInterval : g® // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5fd400024030 (0x7d400024030) in binary!
	0x5d42  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0xc33c00024878 (0x33c00024878) in binary!
	0x5fb0  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x5f9c00023fb8 (0x79c00023fb8) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7b2400024130 (0x32400024130) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7b0c00024118 (0x30c00024118) in binary!
	0x48000000c  @objc DateRangeRelevanceProvider.(null) <stripped>

	// Swift methods
 }

 class HealthPlatformCore.DispatchQueueOrchestrationScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, OrchestrationScheduler {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : «≤ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentPipelines : 5∫ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentGenerators : 5∫ // +0xbe160 (0x8)
	let workloop : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queuesForQoS :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x85180  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:) // init 
	0x85290  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:maxConcurrentPipelines:maxConcurrentGenerators:) // init 
	0x85f10  func <stripped> // method 
	0x879f0  func <stripped> // method 
	0x86180  func <stripped> // method 
	0x863f0  func <stripped> // method 
	0x86560  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightOperation {
 class HealthPlatformCore.Plugin : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b2400024130 (0x32400024130) in binary!
	0x18000000c  @objc Plugin.(null) <stripped>
 }

 enum HealthPlatformCore.HealthExperienceStoreCreationError {

	// Properties
	case unrecoverableError  
	case recoverableErrorDeviceLocked  
 }

 class HealthPlatformCore.HealthExperienceStoreModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthPlatformCore.AllDataSummarySection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : Ø
	let identifier : Identifier
 }

 enum HealthPlatformCore.Identifier {

	// Properties
	case baseDay  
	case lastWeek  
	case lastMonth  
	case lastYear  
	case older  
	case noDate  
	case noData  
 }

 struct HealthPlatformCore.DateRange {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : Õ°
	let identifier : Identifier
 }

 class HealthPlatformCore.PluginData : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b0c00024118 (0x30c00024118) in binary!
	0x48000000c  @objc PluginData.(null) <stripped>
 }

 class HealthPlatformCore.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f5400023f08 (0x75400023f08) in binary!
	0x5f50  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x5f4400023fa0 (0x74400023fa0) in binary!
	0x5f30  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffea928  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffefaf0  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>

	// Swift methods
	0x97cf0  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
 }

 struct HealthPlatformCore.HostingCellReusePolicy {

	// Properties
	var policy : Policy // +0x0
 }

 enum HealthPlatformCore.Policy {

	// Properties
	case reusable : (class: Swift.AnyObject.Type, hostedViewReuseIdentifier: String)
	case singleUse : (reuseIdentifier: String)
 }

 enum HealthPlatformCore.URLType {

	// Properties
	case pluginURL : PluginURLType
	case researchStudies : String?
	case authorizationManagement : String?
	case browse  
	case dataType  
	case healthProfile  
	case medicalID  
 }

 struct HealthPlatformCore.PluginURLType {

	// Properties
	let rawValue : String // +0x0
 }

 struct HealthPlatformCore.AppURLRouting { }

 enum HealthPlatformCore.FeedItemCreationError {

	// Properties
	case identifierNotFeedItem  
 }

 class HealthPlatformCore.DiskHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diskHealthExperienceStoreVersionKey : String // +0x10 (0x10)
	let diskHealthExperienceStoreLocaleKey : String // +0x20 (0x10)
	var previousMergeFailed : Bool // +0x30 (0x1)
	var fetchLimit : Int // +0x38 (0x8)
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext? // +0x40 (0x8)
	var $__lazy_storage_$_allEntities : [NSEntityDescription]? // +0x48 (0x8)
	var persistentHistoryToken : NSPersistentHistoryToken? // +0x50 (0x8)
	var mergeNotificationQueue : OS_dispatch_queue // +0x58 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_mergeNotificationDebouncer : I¶ // +0x60 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x68 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f1c000248e8 (0x71c000248e8) in binary!
	0x18000000c  @objc DiskHealthExperienceStore.(null) <stripped>

	// Swift methods
	0xa32c0  func <stripped> // getter 
	0xa3440  func <stripped> // getter 
	0xa3600  func <stripped> // getter 
	0xa36d0  func <stripped> // setter 
	0xa36f0  func <stripped> // modifyCoroutine 
	0xa3790  func <stripped> // getter 
	0xa3860  func <stripped> // setter 
	0xa3880  func <stripped> // modifyCoroutine 
	0xa3900  func <stripped> // getter 
	0xa3100  class func DiskHealthExperienceStore.__allocating_init() // init 
	0xa3e50  func <stripped> // method 
	0xa40d0  func <stripped> // getter 
	0xa4300  func <stripped> // getter 
	0xa4340  func <stripped> // method 
	0xa4470  func <stripped> // getter 
	0xa4640  func <stripped> // setter 
	0xa4680  func <stripped> // modifyCoroutine 
	0xa46d0  func <stripped> // method 
	0xa48f0  func <stripped> // method 
	0xa4930  func <stripped> // method 
	0xa5230  func <stripped> // method 
	0xa5790  func <stripped> // method 
	0xa6180  func <stripped> // method 
	0xa7a40  func <stripped> // method 
 }

 enum HealthPlatformCore.State {

	// Properties
	case ready  
	case missing  
	case needsUpgrade  
	case needsDataWipe  
 }

 struct HealthPlatformCore.ModelTrainingEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedItemURL : Û¶
	let eventKind : EventKind
	let isPositive : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : Ø
 }

 enum HealthPlatformCore.EventKind {

	// Properties
	case tap  
	case dwell  
 }

 enum HealthPlatformCore.CodingKeys {

	// Properties
	case feedItemURL  
	case eventKind  
	case isPositive  
	case date  
 }

 class HealthPlatformCore.DataType : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7aa4000240b0 (0x2a4000240b0) in binary!
	0x0  @objc DataType.(null) <stripped>
 }

 struct HealthPlatformCore.AppSessionAnalyticsEvent { }

 struct HealthPlatformCore.ModelAnalytics {

	// Properties
	let averageModelPrediction : NSNumber? // +0x0
	let averageModelEntropy : NSNumber? // +0x8
	let cumulativeAverageProbabilityOfPositiveInteraction : NSNumber? // +0x10
	let modelTotalTrainingEvents : NSNumber? // +0x18
	let normalizedAverageModelEntropy : NSNumber? // +0x20
 }

 struct HealthPlatformCore.HighlightsFeedPresentationAnalytics {

	// Properties
	let ageOfFeed : NSNumber? // +0x0
	let feedItemsGeneratedCount : NSNumber // +0x8
	var feedItemsGeneratedTypes : NSString // +0x10
	let feedItemsShownCount : NSNumber // +0x18
	let feedItemsShownTypes : NSString // +0x20
	let feedType : NSString // +0x28
	let minutesElapsed : NSNumber? // +0x30
	let spinnerDisplayed : NSNumber // +0x38
 }

 class HealthPlatformCore.GeneratedFeedItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dataTypes : _HKDataTypeCode // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataVisualizationKind : ∑¥ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : ß≤ // +0x7079745f (0x0)

	// Swift methods
	0xaf430  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:) // init 
	0xae130  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(feedItem:) // init 
	0xaf540  func <stripped> // getter 
 }

 class HealthPlatformCore.ShownFeedItem : AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem {

	// Properties
	let rank : Int // +0x45545f5f (0x8)
	let magnitude : Double? // +0x0 (0x9)
	let completeness : Double? // +0xccd9e (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ≥ // +0x15e9 (0x0)

	// Swift methods
	0xafac0  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.ShownFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:rank:magnitude:completeness:prominence:) // init 
 }

 struct HealthPlatformCore.HighlightsFeedInteractionAnalytics {

	// Properties
	var averageProbabilityOfPositiveInteractionForThisSession : NSNumber? // +0x0
	var feedItemsInteractionKind : NSString // +0x8
 }

 class HealthPlatformCore.InteractedFeedItem : AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem {

	// Properties
	let modelTrainingEvent : ModelTrainingEvent
	let rank : Int

	// Swift methods
	0xaebc0  class func AppSessionAnalyticsEvent.HighlightsFeedInteractionAnalytics.InteractedFeedItem.__allocating_init(feedItem:modelTrainingEvent:) // init 
 }

 struct HealthPlatformCore.DemographicAnalytics {

	// Properties
	var hasPairedWatch : NSNumber // +0x0
 }

 enum HealthPlatformCore.Failure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingError : ı¨
	case missing  
	case timedOut  
 }

 class HealthPlatformCore.FeedPopulationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthExperienceStore : HealthExperienceStore
	let healthStore : HKHealthStore
	let childOperationQueue : NSOperationQueue
	let requestCoalesceQueue : OS_dispatch_queue
	let queue : NSOperationQueue
	var relevanceEngineCoordinator : RelevanceEngineCoordinator
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trainingAnalyticsCache : [§

	// Swift methods
	0xb2420  func <stripped> // method 
	0xb2780  func <stripped> // getter 
	0xb27b0  func <stripped> // setter 
	0xb27f0  func <stripped> // modifyCoroutine 
	0xb2830  class func FeedPopulationManager.__allocating_init(healthExperienceStore:healthStore:) // init 
	0xb2a90  func <stripped> // method 
	0xb3b50  func <stripped> // method 
	0xb4800  func <stripped> // method 
	0xb4e80  func <stripped> // method 
	0xb55a0  func <stripped> // method 
 }

 class HealthPlatformCore.PopulationOperation {
 class HealthPlatformCore.InteractiveGeneratorToPipelineAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : {¥ // +0xccd9e (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context : ï¥ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ˇ¶ // +0x0 (0x8)
	let queue : NSOperationQueue // +0x0 (0x8)
	let adaptor : GenerationOperationToGeneratorAdaptor // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : y∞ // +0x0 (0x8)

	// Swift methods
	0xba180  func <stripped> // getter 
	0xba1c0  func <stripped> // setter 
	0xba210  func <stripped> // modifyCoroutine 
	0xba030  class func InteractiveGeneratorToPipelineAdaptor.__allocating_init(queue:pluginInfo:domain:context:commitImmediately:) // init 
 }

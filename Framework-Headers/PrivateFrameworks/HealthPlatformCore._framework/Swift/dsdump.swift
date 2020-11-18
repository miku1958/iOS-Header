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
WARNING: couldn't find address 0x5e8400024230 (0x68400024230) in binary!
	0x7dd8  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x9bdc00024210 (0x3dc00024210) in binary!
	0x38000000c  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x6214000241d8 (0x214000241d8) in binary!
	0x6210  @objc DateRangeRelevanceProviderManager.(null) <stripped>
 }

 class HealthPlatformCore.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : BasicPluginInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6214000241d8 (0x214000241d8) in binary!
	0x6210  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61fc000241b8 (0x1fc000241b8) in binary!
	0x38000000c  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61ec000245f8 (0x1ec000245f8) in binary!
	0x61e0  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>

	// Swift methods
	0x31b0  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
 }

 class HealthPlatformCore.FeedItemREElementDataSource : REElementDataSource /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
	let store : HealthExperienceStore // +0x8 (0x28)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x61bc00024168 (0x1bc00024168) in binary!
	0x6704  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x61a4000241a0 (0x1a4000241a0) in binary!
	0x6190  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x12cfff70c68  @objc FeedItemREElementDataSource.(null) <stripped>
	0x164000241b8  @objc FeedItemREElementDataSource.â_ Hç[HâùhˇˇˇLã5ÉØ <stripped>

	// Swift methods
	0xb5d0  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
 }

 class HealthPlatformCore.GenerationOperationToGeneratorAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var domain : s¥ // +0xfeedfacf (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : ç¥ // +0x3 (0x0)
	let pluginInfo : FeedItemGenerationPluginInfo // +0x7e (0x28)
	let queue : NSOperationQueue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : y∞ // +0x0 (0x8)

	// Swift methods
	0x10840  func <stripped> // getter 
	0x10890  func <stripped> // setter 
	0x108f0  func <stripped> // modifyCoroutine 
	0x10940  func <stripped> // getter 
	0x10b00  class func GenerationOperationToGeneratorAdaptor.__allocating_init(queue:pluginInfo:domain:context:) // init 
 }

 class HealthPlatformCore.Inner {
 struct HealthPlatformCore.Publisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedItemContext : Q≥ // +0x0
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
	let dataVisualizationKind : Ø¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantDateInterval : o¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateSubmitted : Ø
	let keywords : [String]?
	let magnitude : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ≥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : ü≤
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
	0x2abe0  class func CancellableProgressList.__allocating_init() // init 
	0x2acc0  func <stripped> // method 
	0x2b640  func <stripped> // method 
	0x2c350  func <stripped> // method 
	0x2ca80  func <stripped> // getter 
 }

 class HealthPlatformCore.HealthExperienceStoreOracle : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let notificationCenter : NSNotificationCenter
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifydObserver : ¡¥
	var readyHealthExperienceStore : HealthExperienceStore
	var $__lazy_storage_$_healthExperienceStore : HealthExperienceStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ô±

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x618400024180 (0x18400024180) in binary!
	0x6170  @objc HealthExperienceStoreOracle.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff71958  @objc HealthExperienceStoreOracle.(null) <stripped>

	// Swift methods
	0x2d410  func <stripped> // getter 
	0x2d4a0  func <stripped> // setter 
	0x2d540  func <stripped> // modifyCoroutine 
	0x2d590  func <stripped> // getter 
	0x2d640  func <stripped> // method 
	0x2dbc0  func <stripped> // method 
	0x2e4a0  func <stripped> // method 
	0x2e680  func <stripped> // method 
	0x2e7d0  func <stripped> // method 
 }

 class HealthPlatformCore.FeedItemSuggestedActionDataSource {
 class HealthPlatformCore.GeneratorPipelineManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _generationState : É∑ // +0x0 (0x0)
	let store : HealthExperienceStore // +0x65745f5f (0x28)
	var healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var atomicHealthStores : £≥ // +0x45545f5f (0x8)
	let favoritesProvider : FavoritesProviding // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileIdentifiersPublisher : Ì∏ // +0x12 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : ø≤ // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stateLogging : 9∂ // +0x0 (0x8)
	let orchestrationQueue : OS_dispatch_queue // +0x0 (0x8)
	let orchestrationScheduler : OrchestrationScheduler // +0x0 (0x28)

	// Swift methods
	0x2f5d0  func <stripped> // getter 
	0x2f630  func <stripped> // setter 
	0x2f710  func <stripped> // modifyCoroutine 
	0x2fa30  func <stripped> // getter 
	0x2fa90  func <stripped> // setter 
	0x2faf0  func <stripped> // modifyCoroutine 
	0x2fce0  class func GeneratorPipelineManager.__allocating_init(store:healthStore:environment:favoritesProvider:scheduler:) // init 
	0x31cb0  func <stripped> // method 
	0x32b60  func <stripped> // method 
	0x33400  func <stripped> // method 
	0x33970  func <stripped> // method 
	0x34a60  func <stripped> // method 
	0x35090  func <stripped> // method 
	0x36720  func <stripped> // method 
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
	0x3f1b0  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x3f230  func <stripped> // method 
	0x3f250  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b50000240d8 (0x350000240d8) in binary!
	0x6140  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x6134000240b8 (0x134000240b8) in binary!
	0x6128  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x611c00024090 (0x11c00024090) in binary!
	0x9ab8  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c9c000243a8 (0x49c000243a8) in binary!
	0x60f0  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff948c8  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2cfff949e0  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
	0xac000240a8  @objc HealthExperienceStoreCoreSpotlightDelegate.H!¡HâMàLâÔæ <stripped>
WARNING: couldn't find address 0x24054fff99f80 (0x54fff99f80) in binary!
	0x48000000c  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>

	// Swift methods
	0x40910  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var healthStore : HKHealthStore // +0x10 (0x8)
	var favoritesProvider : FavoritesProviding // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : ø≤ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var boundingRange : W© // +0x45545f5f (0x0)
	let storageContext : NSManagedObjectContext // +0xfc6 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : ô™ // +0xba41c (0x28)
	var hasOperationCompleted : Bool? // +0x0 (0x1)

	// Swift methods
	0x41f60  func <stripped> // getter 
	0x42020  func <stripped> // getter 
	0x42090  func <stripped> // getter 
	0x421d0  func <stripped> // getter 
	0x41e10  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x42310  func <stripped> // method 
	0x433c0  func <stripped> // method 
	0x45ae0  func <stripped> // method 
	0x45f00  func <stripped> // method 
	0x46730  func <stripped> // method 
	0x46880  func <stripped> // method 
 }

 class HealthPlatformCore.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext?
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext?
	var persistentStoreDescription : NSPersistentStoreDescription
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer?

	// Swift methods
	0x485f0  func <stripped> // getter 
	0x48670  func <stripped> // setter 
	0x48690  func <stripped> // modifyCoroutine 
	0x48730  func <stripped> // getter 
	0x48800  func <stripped> // setter 
	0x48820  func <stripped> // modifyCoroutine 
	0x48570  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x48b70  func <stripped> // getter 
	0x48ba0  func <stripped> // setter 
	0x48be0  func <stripped> // modifyCoroutine 
	0x48c20  func <stripped> // getter 
	0x48c60  func <stripped> // method 
	0x48ce0  func <stripped> // getter 
	0x48d60  func <stripped> // setter 
	0x48d80  func <stripped> // modifyCoroutine 
	0x48dd0  func <stripped> // method 
	0x491a0  func <stripped> // method 
 }

 enum HealthPlatformCore.RelevanceFeatureTagCoreDataError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case metadataDecodingFailure : Ì∑
	case metadataNotFound  
 }

 class HealthPlatformCore.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0x4c4b0  func <stripped> // getter 
	0x4c4f0  func <stripped> // setter 
	0x4c530  func <stripped> // modifyCoroutine 
	0x4c570  class func BasicPluginInfo.__allocating_init(bundle:) // init 
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
	case loadFailed : m∑
 }

 class HealthPlatformCore.PluginBundleProvider {
 class HealthPlatformCore.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c7c00024228 (0x47c00024228) in binary!
	0x28000000c  @objc Keyword.(null) <stripped>
 }

 class HealthPlatformCore.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c6400024210 (0x46400024210) in binary!
	0x60b8  @objc FeedItem.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x54fff99f80  @objc FeedItem.(null) <stripped>
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
WARNING: couldn't find address 0x60ac000240a8 (0xac000240a8) in binary!
	0x6098  @objc RelevanceEngineCoordinator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7dcfff9ed90  @objc RelevanceEngineCoordinator.(null) <stripped>

	// Swift methods
	0x54200  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelURL:pretrainedModelURL:) // init 
	0x542b0  func <stripped> // method 
	0x543f0  func <stripped> // method 
	0x54460  func <stripped> // getter 
	0x54480  func <stripped> // getter 
	0x544e0  func <stripped> // getter 
	0x545f0  func <stripped> // getter 
	0x546a0  func <stripped> // setter 
	0x546c0  func <stripped> // modifyCoroutine 
	0x54720  func <stripped> // getter 
	0x547a0  func <stripped> // getter 
	0x548a0  func <stripped> // getter 
	0x548e0  func <stripped> // setter 
	0x54920  func <stripped> // modifyCoroutine 
	0x549a0  func <stripped> // method 
	0x55050  func <stripped> // method 
	0x552c0  func <stripped> // method 
	0x55770  func <stripped> // method 
	0x56460  func <stripped> // method 
	0x56660  func <stripped> // method 
	0x56760  func <stripped> // method 
	0x56b10  func <stripped> // method 
	0x56df0  func <stripped> // method 
 }

 class HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var callback : (_:_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a8200023ff0 (0x28200023ff0) in binary!
	0x9a84  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x607400024070 (0x7400024070) in binary!
	0x6060  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa8e98  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2cfffa8ed0  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>

	// Swift methods
	0x5bca0  func <stripped> // method 
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
WARNING: couldn't find address 0x7bec00024198 (0x3ec00024198) in binary!
	0x28000000c  @objc FeedSection.(null) <stripped>
 }

 class HealthPlatformCore.GroupConfigurationLoader : REBundleConfiguration /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99e400023f90 (0x1e400023f90) in binary!
	0x6030  @objc GroupConfigurationLoader.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa9130  @objc GroupConfigurationLoader.(null) <stripped>
 }

 class HealthPlatformCore.Profile : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7bb400024160 (0x3b400024160) in binary!
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
	0x66330  func <stripped> // getter 
	0x66380  func <stripped> // setter 
	0x663e0  func <stripped> // modifyCoroutine 
	0x66420  class func AppSessionAnalyticsManager.__allocating_init() // init 
	0x66670  func <stripped> // method 
	0x66b10  func <stripped> // method 
	0x66d90  func <stripped> // method 
	0x67700  func <stripped> // method 
	0x67770  func <stripped> // method 
	0x679d0  func <stripped> // method 
	0x67a00  func <stripped> // method 
	0x67bf0  func <stripped> // method 
	0x695b0  func <stripped> // method 
 }

 class HealthPlatformCore.DefaultsPredictiveGenerationAnalyticsDateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PredictiveGenerationAnalyticsDateProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateLastPredictiveGenerationRanForAnalytics : ó´ // +0x0 (0x0)

	// Swift methods
	0x69bd0  func <stripped> // getter 
	0x69c10  func <stripped> // setter 
	0x69c80  func <stripped> // modifyCoroutine 
	0x69d30  class func AppSessionAnalyticsManager.DefaultsPredictiveGenerationAnalyticsDateProvider.__allocating_init() // init 
 }

 class HealthPlatformCore.EncodedFeatureTag : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b9c00024148 (0x39c00024148) in binary!
	0x18000000c  @objc EncodedFeatureTag.(null) <stripped>
 }

 class HealthPlatformCore.CommitRedirectingFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wrappedContext : Q≥
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
	0x6e7e0  func <stripped> // getter 
	0x6e810  func <stripped> // setter 
	0x6e850  func <stripped> // modifyCoroutine 
	0x6e920  func <stripped> // getter 
	0x6e960  func <stripped> // setter 
	0x6e9a0  func <stripped> // modifyCoroutine 
	0x6ea00  func <stripped> // getter 
	0x6ea80  func <stripped> // setter 
	0x6ea90  func <stripped> // modifyCoroutine 
	0x6eae0  func <stripped> // method 
	0x6ef30  func <stripped> // method 
	0x6f500  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthPlatformCore.FeedItemGeneratorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let availablePlugins : FeedItemGenerationPluginInfo
	let store : HealthExperienceStore
	let healthStore : HKHealthStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let favoritesProvider : ”™

	// Swift methods
	0x70380  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x704a0  func <stripped> // method 
 }

 class HealthPlatformCore.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b8400024130 (0x38400024130) in binary!
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
	let context : ç¥
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
	let relevantDateInterval : _® // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5fd400023fd0 (0x7d400023fd0) in binary!
	0x5d42  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0xc2dc00024818 (0x2dc00024818) in binary!
	0x5fb0  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x5f9c00023f58 (0x79c00023f58) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7b24000240d0 (0x324000240d0) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7b0c000240b8 (0x30c000240b8) in binary!
	0x48000000c  @objc DateRangeRelevanceProvider.(null) <stripped>

	// Swift methods
 }

 class HealthPlatformCore.DispatchQueueOrchestrationScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, OrchestrationScheduler {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : ø≤ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentPipelines : -∫ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentGenerators : -∫ // +0xbd1c0 (0x8)
	let workloop : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queuesForQoS :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x841e0  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:) // init 
	0x842f0  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:maxConcurrentPipelines:maxConcurrentGenerators:) // init 
	0x84f70  func <stripped> // method 
	0x86a50  func <stripped> // method 
	0x851e0  func <stripped> // method 
	0x85450  func <stripped> // method 
	0x855c0  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightOperation {
 class HealthPlatformCore.Plugin : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b24000240d0 (0x324000240d0) in binary!
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
WARNING: couldn't find address 0x7b0c000240b8 (0x30c000240b8) in binary!
	0x48000000c  @objc PluginData.(null) <stripped>
 }

 class HealthPlatformCore.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f5400023ea8 (0x75400023ea8) in binary!
	0x5f50  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x5f4400023f40 (0x74400023f40) in binary!
	0x5f30  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffea928  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffefaf0  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>

	// Swift methods
	0x96d50  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
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
	var $__lazy_storage_$_mergeNotificationDebouncer : A¶ // +0x60 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x68 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f1c00024888 (0x71c00024888) in binary!
	0x18000000c  @objc DiskHealthExperienceStore.(null) <stripped>

	// Swift methods
	0xa2320  func <stripped> // getter 
	0xa24a0  func <stripped> // getter 
	0xa2660  func <stripped> // getter 
	0xa2730  func <stripped> // setter 
	0xa2750  func <stripped> // modifyCoroutine 
	0xa27f0  func <stripped> // getter 
	0xa28c0  func <stripped> // setter 
	0xa28e0  func <stripped> // modifyCoroutine 
	0xa2960  func <stripped> // getter 
	0xa2160  class func DiskHealthExperienceStore.__allocating_init() // init 
	0xa2eb0  func <stripped> // method 
	0xa3130  func <stripped> // getter 
	0xa3360  func <stripped> // getter 
	0xa33a0  func <stripped> // method 
	0xa34d0  func <stripped> // getter 
	0xa36a0  func <stripped> // setter 
	0xa36e0  func <stripped> // modifyCoroutine 
	0xa3730  func <stripped> // method 
	0xa3950  func <stripped> // method 
	0xa3990  func <stripped> // method 
	0xa4290  func <stripped> // method 
	0xa47f0  func <stripped> // method 
	0xa51e0  func <stripped> // method 
	0xa6aa0  func <stripped> // method 
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
WARNING: couldn't find address 0x7aa400024050 (0x2a400024050) in binary!
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
	let dataVisualizationKind : Ø¥ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : ü≤ // +0x7079745f (0x0)

	// Swift methods
	0xae490  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:) // init 
	0xad190  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(feedItem:) // init 
	0xae5a0  func <stripped> // getter 
 }

 class HealthPlatformCore.ShownFeedItem : AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem {

	// Properties
	let rank : Int // +0x45545f5f (0x8)
	let magnitude : Double? // +0x0 (0x9)
	let completeness : Double? // +0xcbd9e (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ≥ // +0x15e9 (0x0)

	// Swift methods
	0xaeb20  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.ShownFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:rank:magnitude:completeness:prominence:) // init 
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
	0xadc20  class func AppSessionAnalyticsEvent.HighlightsFeedInteractionAnalytics.InteractedFeedItem.__allocating_init(feedItem:modelTrainingEvent:) // init 
 }

 struct HealthPlatformCore.DemographicAnalytics {

	// Properties
	var hasPairedWatch : NSNumber // +0x0
 }

 enum HealthPlatformCore.Failure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingError : Ì¨
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
	var trainingAnalyticsCache : S§

	// Swift methods
	0xb1480  func <stripped> // method 
	0xb17e0  func <stripped> // getter 
	0xb1810  func <stripped> // setter 
	0xb1850  func <stripped> // modifyCoroutine 
	0xb1890  class func FeedPopulationManager.__allocating_init(healthExperienceStore:healthStore:) // init 
	0xb1af0  func <stripped> // method 
	0xb2bb0  func <stripped> // method 
	0xb3860  func <stripped> // method 
	0xb3ee0  func <stripped> // method 
	0xb4600  func <stripped> // method 
 }

 class HealthPlatformCore.PopulationOperation {
 class HealthPlatformCore.InteractiveGeneratorToPipelineAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : s¥ // +0xcbd9e (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context : ç¥ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ˜¶ // +0x0 (0x8)
	let queue : NSOperationQueue // +0x0 (0x8)
	let adaptor : GenerationOperationToGeneratorAdaptor // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : y∞ // +0x0 (0x8)

	// Swift methods
	0xb91e0  func <stripped> // getter 
	0xb9220  func <stripped> // setter 
	0xb9270  func <stripped> // modifyCoroutine 
	0xb9090  class func InteractiveGeneratorToPipelineAdaptor.__allocating_init(queue:pluginInfo:domain:context:commitImmediately:) // init 
 }

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
WARNING: couldn't find address 0x5e8400025ca0 (0x68400025ca0) in binary!
	0x7dc8  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x9bcc00025c80 (0x3cc00025c80) in binary!
	0x38000000c  @objc DateRangeRelevanceProviderManager.(null) <stripped>
WARNING: couldn't find address 0x621400025c48 (0x21400025c48) in binary!
	0x6210  @objc DateRangeRelevanceProviderManager.(null) <stripped>
 }

 class HealthPlatformCore.PluginBundleProviderPrecacheOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let pluginsToCache : BasicPluginInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x621400025c48 (0x21400025c48) in binary!
	0x6210  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61fc00025c28 (0x1fc00025c28) in binary!
	0x38000000c  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>
WARNING: couldn't find address 0x61ec00026068 (0x1ec00026068) in binary!
	0x61e0  @objc PluginBundleProviderPrecacheOperation.(null) <stripped>

	// Swift methods
	0x3980  class func PluginBundleProviderPrecacheOperation.__allocating_init(pluginsToCache:) // init 
 }

 class HealthPlatformCore.FeedItemREElementDataSource : REElementDataSource /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
	let store : HealthExperienceStore // +0x8 (0x28)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x61bc00025bd8 (0x1bc00025bd8) in binary!
	0x6704  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x61a400025c10 (0x1a400025c10) in binary!
	0x6190  @objc FeedItemREElementDataSource.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x39cfff70e78  @objc FeedItemREElementDataSource.(null) <stripped>
	0x16400025c28  @objc FeedItemREElementDataSource.H!ÿLã`IÉ¸è† <stripped>

	// Swift methods
	0xbda0  class func FeedItemREElementDataSource.__allocating_init(store:) // init 
 }

 class HealthPlatformCore.GenerationOperationToGeneratorAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var domain : Ûæ // +0xfeedfacf (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : ø // +0x3 (0x0)
	let pluginInfo : FeedItemGenerationPluginInfo // +0x7e (0x28)
	let queue : NSOperationQueue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : ˘∫ // +0x0 (0x8)

	// Swift methods
	0x10f60  func <stripped> // getter 
	0x10fb0  func <stripped> // setter 
	0x11010  func <stripped> // modifyCoroutine 
	0x11060  func <stripped> // getter 
	0x11220  class func GenerationOperationToGeneratorAdaptor.__allocating_init(queue:pluginInfo:domain:context:) // init 
 }

 class HealthPlatformCore.Inner {
 struct HealthPlatformCore.Publisher {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedItemContext : ◊Ω // +0x0
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
	let date : ¡π
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
	let contentKind : Aª
	let completeness : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataVisualizationKind : %ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantDateInterval : Âæ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateSubmitted : çπ
	let keywords : [String]?
	let magnitude : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ùΩ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : %Ω
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
	let lock : º
	var list : [NSProgress]

	// Swift methods
	0x2b3a0  class func CancellableProgressList.__allocating_init() // init 
	0x2b480  func <stripped> // method 
	0x2be00  func <stripped> // method 
	0x2cb10  func <stripped> // method 
	0x2d240  func <stripped> // getter 
 }

 class HealthPlatformCore.HealthExperienceStoreOracle : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let notificationCenter : NSNotificationCenter
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifydObserver : 7ø
	var readyHealthExperienceStore : HealthExperienceStore
	var $__lazy_storage_$_healthExperienceStore : HealthExperienceStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : º

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x618400025bf0 (0x18400025bf0) in binary!
	0x6170  @objc HealthExperienceStoreOracle.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff71b68  @objc HealthExperienceStoreOracle.(null) <stripped>

	// Swift methods
	0x2dbb0  func <stripped> // getter 
	0x2dc40  func <stripped> // setter 
	0x2dce0  func <stripped> // modifyCoroutine 
	0x2dd30  func <stripped> // getter 
	0x2dde0  func <stripped> // method 
	0x2e360  func <stripped> // method 
	0x2ec40  func <stripped> // method 
	0x2ee20  func <stripped> // method 
	0x2ef70  func <stripped> // method 
 }

 class HealthPlatformCore.FeedItemSuggestedActionDataSource {
 class HealthPlatformCore.GeneratorPipelineManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _generationState : ˘¡ // +0x0 (0x0)
	let store : HealthExperienceStore // +0x65745f5f (0x28)
	var healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var atomicHealthStores : æ // +0x45545f5f (0x8)
	let favoritesProvider : FavoritesProviding // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileIdentifiersPublisher : c√ // +0x12 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : 5Ω // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stateLogging : Ø¿ // +0x0 (0x8)
	let orchestrationQueue : OS_dispatch_queue // +0x0 (0x8)
	let orchestrationScheduler : OrchestrationScheduler // +0x0 (0x28)

	// Swift methods
	0x2fd70  func <stripped> // getter 
	0x2fdd0  func <stripped> // setter 
	0x2feb0  func <stripped> // modifyCoroutine 
	0x301d0  func <stripped> // getter 
	0x30230  func <stripped> // setter 
	0x30290  func <stripped> // modifyCoroutine 
	0x30480  class func GeneratorPipelineManager.__allocating_init(store:healthStore:environment:favoritesProvider:scheduler:) // init 
	0x32450  func <stripped> // method 
	0x33300  func <stripped> // method 
	0x33ba0  func <stripped> // method 
	0x34110  func <stripped> // method 
	0x35200  func <stripped> // method 
	0x35830  func <stripped> // method 
	0x36ec0  func <stripped> // method 
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
	0x3f8f0  class func ModelTrainingScenarioExecutor.__allocating_init(coordinator:store:) // init 
	0x3f970  func <stripped> // method 
	0x3f990  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b4000025b48 (0x34000025b48) in binary!
	0x6140  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x613400025b28 (0x13400025b28) in binary!
	0x6128  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x611c00025b00 (0x11c00025b00) in binary!
	0x9aa8  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c8c00025e18 (0x48c00025e18) in binary!
	0x60f0  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff949a8  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x29cfff94ac0  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>
	0xac00025b18  @objc HealthExperienceStoreCoreSpotlightDelegate.HâE†Hã@¯HâE∞Hã@@Hâ·HÉ¿HÉ‡H)¡HâM®HâÃHã=§⁄ <stripped>
WARNING: couldn't find address 0x25ac4fff9a060 (0x2c4fff9a060) in binary!
	0x48000000c  @objc HealthExperienceStoreCoreSpotlightDelegate.(null) <stripped>

	// Swift methods
	0x41050  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var healthStore : HKHealthStore // +0x10 (0x8)
	var favoritesProvider : FavoritesProviding // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : 5Ω // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var boundingRange : ›≥ // +0x45545f5f (0x0)
	let storageContext : NSManagedObjectContext // +0xfb4 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : µ // +0xba9dc (0x28)
	var hasOperationCompleted : Bool? // +0x0 (0x1)

	// Swift methods
	0x42680  func <stripped> // getter 
	0x42740  func <stripped> // getter 
	0x427b0  func <stripped> // getter 
	0x428f0  func <stripped> // getter 
	0x42530  class func HealthExperienceStoreFeedItemContext.__allocating_init(storageContext:pluginInfo:healthStore:environment:favoritesProvider:dateRange:) // init 
	0x42a30  func <stripped> // method 
	0x43ae0  func <stripped> // method 
	0x46200  func <stripped> // method 
	0x46620  func <stripped> // method 
	0x46e50  func <stripped> // method 
	0x46fa0  func <stripped> // method 
 }

 class HealthPlatformCore.MemoryHealthExperienceStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_viewContext : NSManagedObjectContext?
	var $__lazy_storage_$_sharedBackgroundContext : NSManagedObjectContext?
	var persistentStoreDescription : NSPersistentStoreDescription
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer?

	// Swift methods
	0x48cf0  func <stripped> // getter 
	0x48d70  func <stripped> // setter 
	0x48d90  func <stripped> // modifyCoroutine 
	0x48e30  func <stripped> // getter 
	0x48f00  func <stripped> // setter 
	0x48f20  func <stripped> // modifyCoroutine 
	0x48c70  class func MemoryHealthExperienceStore.__allocating_init() // init 
	0x49270  func <stripped> // getter 
	0x492a0  func <stripped> // setter 
	0x492e0  func <stripped> // modifyCoroutine 
	0x49320  func <stripped> // getter 
	0x49360  func <stripped> // method 
	0x493e0  func <stripped> // getter 
	0x49460  func <stripped> // setter 
	0x49480  func <stripped> // modifyCoroutine 
	0x494d0  func <stripped> // method 
	0x498a0  func <stripped> // method 
 }

 enum HealthPlatformCore.RelevanceFeatureTagCoreDataError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case metadataDecodingFailure : c¬
	case metadataNotFound  
 }

 class HealthPlatformCore.BasicPluginInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundle : NSBundle
	var bundleIdentifier : String

	// Swift methods
	0x4cbb0  func <stripped> // getter 
	0x4cbf0  func <stripped> // setter 
	0x4cc30  func <stripped> // modifyCoroutine 
	0x4cc70  class func BasicPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthPlatformCore.FoundationPluginBundleProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthPlatformCore.PluginBundleLoadError {

	// Properties
	case badURLPath : (path: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case notFound : µ≤
	case noBundleIdentifier : (bundle: NSBundle)
	case notAllowed : (bundleIdentifier: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loadFailed : „¡
 }

 class HealthPlatformCore.PluginBundleProvider {
 class HealthPlatformCore.Keyword : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c6c00025c98 (0x46c00025c98) in binary!
	0x28000000c  @objc Keyword.(null) <stripped>
 }

 class HealthPlatformCore.FeedItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c5400025c80 (0x45400025c80) in binary!
	0x60b8  @objc FeedItem.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2c4fff9a060  @objc FeedItem.(null) <stripped>
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
	let modelPath : y± // +0x65706c65 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pretrainedModelURL : s± // +0x45545f5f (0x0)
	let dataSources : [REElementDataSource] // +0x0 (0x8)
	var $__lazy_storage_$_trainingContext : RETrainingContext? // +0x0 (0x8)
	var $__lazy_storage_$_metricsRecorder : RelevanceEngineMetricsBlockRecorder // +0x0 (0x8)
	var $__lazy_storage_$_relevanceEngine : RERelevanceEngine? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x60ac00025b18 (0xac00025b18) in binary!
	0x6098  @objc RelevanceEngineCoordinator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x24cfff9ee40  @objc RelevanceEngineCoordinator.(null) <stripped>

	// Swift methods
	0x54870  class func RelevanceEngineCoordinator.__allocating_init(dataSources:engineName:modelURL:pretrainedModelURL:) // init 
	0x54920  func <stripped> // method 
	0x54a60  func <stripped> // method 
	0x54ad0  func <stripped> // getter 
	0x54af0  func <stripped> // getter 
	0x54b50  func <stripped> // getter 
	0x54c60  func <stripped> // getter 
	0x54d10  func <stripped> // setter 
	0x54d30  func <stripped> // modifyCoroutine 
	0x54d90  func <stripped> // getter 
	0x54e10  func <stripped> // getter 
	0x54f10  func <stripped> // getter 
	0x54f50  func <stripped> // setter 
	0x54f90  func <stripped> // modifyCoroutine 
	0x55010  func <stripped> // method 
	0x556c0  func <stripped> // method 
	0x55930  func <stripped> // method 
	0x55de0  func <stripped> // method 
	0x56ad0  func <stripped> // method 
	0x56cd0  func <stripped> // method 
	0x56dd0  func <stripped> // method 
	0x57180  func <stripped> // method 
	0x57460  func <stripped> // method 
 }

 class HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var callback : (_:_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a7200025a60 (0x27200025a60) in binary!
	0x9a74  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x607400025ae0 (0x7400025ae0) in binary!
	0x6060  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa8f38  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x29cfffa8f70  @objc RelevanceEngineMetricsBlockRecorder.(null) <stripped>

	// Swift methods
	0x5c2e0  func <stripped> // method 
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
	var uniqueIdentifier : ?∞
	var profileIdentifier : HKProfileIdentifier
 }

 class HealthPlatformCore.FeedSection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7bdc00025c08 (0x3dc00025c08) in binary!
	0x28000000c  @objc FeedSection.(null) <stripped>
 }

 class HealthPlatformCore.GroupConfigurationLoader : REBundleConfiguration /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99d400025a00 (0x1d400025a00) in binary!
	0x6030  @objc GroupConfigurationLoader.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa91d0  @objc GroupConfigurationLoader.(null) <stripped>
 }

 class HealthPlatformCore.Profile : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ba400025bd0 (0x3a400025bd0) in binary!
	0x18000000c  @objc Profile.(null) <stripped>
 }

 class HealthPlatformCore.AppSessionAnalyticsManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var predictiveGenerationDateProvider : PredictiveGenerationAnalyticsDateProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : º
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentObjects :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cancellables :  empty-list 

	// Swift methods
	0x66960  func <stripped> // getter 
	0x669b0  func <stripped> // setter 
	0x66a10  func <stripped> // modifyCoroutine 
	0x66a50  class func AppSessionAnalyticsManager.__allocating_init() // init 
	0x66ca0  func <stripped> // method 
	0x67140  func <stripped> // method 
	0x673c0  func <stripped> // method 
	0x67d30  func <stripped> // method 
	0x67da0  func <stripped> // method 
	0x68000  func <stripped> // method 
	0x68030  func <stripped> // method 
	0x68220  func <stripped> // method 
	0x69be0  func <stripped> // method 
 }

 class HealthPlatformCore.DefaultsPredictiveGenerationAnalyticsDateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PredictiveGenerationAnalyticsDateProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateLastPredictiveGenerationRanForAnalytics : ∂ // +0x0 (0x0)

	// Swift methods
	0x6a200  func <stripped> // getter 
	0x6a240  func <stripped> // setter 
	0x6a2b0  func <stripped> // modifyCoroutine 
	0x6a360  class func AppSessionAnalyticsManager.DefaultsPredictiveGenerationAnalyticsDateProvider.__allocating_init() // init 
 }

 class HealthPlatformCore.EncodedFeatureTag : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b8c00025bb8 (0x38c00025bb8) in binary!
	0x18000000c  @objc EncodedFeatureTag.(null) <stripped>
 }

 class HealthPlatformCore.CommitRedirectingFeedItemContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wrappedContext : ◊Ω
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
	0x6ee10  func <stripped> // getter 
	0x6ee40  func <stripped> // setter 
	0x6ee80  func <stripped> // modifyCoroutine 
	0x6ef50  func <stripped> // getter 
	0x6ef90  func <stripped> // setter 
	0x6efd0  func <stripped> // modifyCoroutine 
	0x6f030  func <stripped> // getter 
	0x6f0b0  func <stripped> // setter 
	0x6f0c0  func <stripped> // modifyCoroutine 
	0x6f110  func <stripped> // method 
	0x6f560  func <stripped> // method 
	0x6fb30  class func BundleFeedItemGenerationPluginInfo.__allocating_init(bundle:) // init 
 }

 class HealthPlatformCore.FeedItemGeneratorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let availablePlugins : FeedItemGenerationPluginInfo
	let store : HealthExperienceStore
	let healthStore : HKHealthStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let favoritesProvider : Iµ

	// Swift methods
	0x709b0  class func FeedItemGeneratorManager.__allocating_init(availablePlugins:store:healthStore:) // init 
	0x70ad0  func <stripped> // method 
 }

 class HealthPlatformCore.Feed : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b7400025ba0 (0x37400025ba0) in binary!
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
	let pluginInfo : µ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context : ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ?∞
 }

 struct HealthPlatformCore.HealthPluginDelegateWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wrapped : mÆ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginInfo : µ // +0x28
 }

 class HealthPlatformCore.DateRangeRelevanceProvider : RERelevanceProvider /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantDateInterval : ’≤ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5fd400025a40 (0x7d400025a40) in binary!
	0x5d42  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0xc2cc00026288 (0x2cc00026288) in binary!
	0x5fb0  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x5f9c000259c8 (0x79c000259c8) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7b1400025b40 (0x31400025b40) in binary!
	0x18000000c  @objc DateRangeRelevanceProvider.(null) <stripped>
WARNING: couldn't find address 0x7afc00025b28 (0x2fc00025b28) in binary!
	0x48000000c  @objc DateRangeRelevanceProvider.(null) <stripped>

	// Swift methods
 }

 class HealthPlatformCore.DispatchQueueOrchestrationScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, OrchestrationScheduler {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environment : 5Ω // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentPipelines : £ƒ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxConcurrentGenerators : £ƒ // +0xbd750 (0x8)
	let workloop : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queuesForQoS :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x847d0  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:) // init 
	0x848e0  class func GeneratorPipelineManager.DispatchQueueOrchestrationScheduler.__allocating_init(environment:maxConcurrentPipelines:maxConcurrentGenerators:) // init 
	0x85560  func <stripped> // method 
	0x87040  func <stripped> // method 
	0x857d0  func <stripped> // method 
	0x85a40  func <stripped> // method 
	0x85bb0  func <stripped> // method 
 }

 class HealthPlatformCore.HealthExperienceStoreCoreSpotlightOperation {
 class HealthPlatformCore.Plugin : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b1400025b40 (0x31400025b40) in binary!
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
	let date : çπ
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
	let interval : S¨
	let identifier : Identifier
 }

 class HealthPlatformCore.PluginData : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7afc00025b28 (0x2fc00025b28) in binary!
	0x48000000c  @objc PluginData.(null) <stripped>
 }

 class HealthPlatformCore.HealthExperienceStoreCleanupOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let context : NSManagedObjectContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f5400025918 (0x75400025918) in binary!
	0x5f50  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x5f44000259b0 (0x744000259b0) in binary!
	0x5f30  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffea938  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffefb50  @objc HealthExperienceStoreCleanupOperation.(null) <stripped>

	// Swift methods
	0x97310  class func HealthExperienceStoreCleanupOperation.__allocating_init(context:) // init 
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
	var $__lazy_storage_$_mergeNotificationDebouncer : ∑∞ // +0x60 (0x8)
	var $__lazy_storage_$_persistentContainer : NSPersistentContainer? // +0x68 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f1c000262f8 (0x71c000262f8) in binary!
	0x18000000c  @objc DiskHealthExperienceStore.(null) <stripped>

	// Swift methods
	0xa28c0  func <stripped> // getter 
	0xa2a40  func <stripped> // getter 
	0xa2c00  func <stripped> // getter 
	0xa2cd0  func <stripped> // setter 
	0xa2cf0  func <stripped> // modifyCoroutine 
	0xa2d90  func <stripped> // getter 
	0xa2e60  func <stripped> // setter 
	0xa2e80  func <stripped> // modifyCoroutine 
	0xa2f00  func <stripped> // getter 
	0xa2700  class func DiskHealthExperienceStore.__allocating_init() // init 
	0xa3450  func <stripped> // method 
	0xa36d0  func <stripped> // getter 
	0xa3900  func <stripped> // getter 
	0xa3940  func <stripped> // method 
	0xa3a70  func <stripped> // getter 
	0xa3c40  func <stripped> // setter 
	0xa3c80  func <stripped> // modifyCoroutine 
	0xa3cd0  func <stripped> // method 
	0xa3ef0  func <stripped> // method 
	0xa3f30  func <stripped> // method 
	0xa4830  func <stripped> // method 
	0xa4d90  func <stripped> // method 
	0xa5780  func <stripped> // method 
	0xa7040  func <stripped> // method 
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
	let feedItemURL : y±
	let eventKind : EventKind
	let isPositive : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : çπ
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
WARNING: couldn't find address 0x7a9400025ac0 (0x29400025ac0) in binary!
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
	let dataVisualizationKind : %ø // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeScope : %Ω // +0x7079745f (0x0)

	// Swift methods
	0xaea80  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:) // init 
	0xad780  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem.__allocating_init(feedItem:) // init 
	0xaeb90  func <stripped> // getter 
 }

 class HealthPlatformCore.ShownFeedItem : AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.GeneratedFeedItem {

	// Properties
	let rank : Int // +0x45545f5f (0x8)
	let magnitude : Double? // +0x0 (0x9)
	let completeness : Double? // +0xcc31e (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prominence : ùΩ // +0x15e3 (0x0)

	// Swift methods
	0xaf110  class func AppSessionAnalyticsEvent.HighlightsFeedPresentationAnalytics.ShownFeedItem.__allocating_init(dataTypes:dataVisualizationKind:timeScope:rank:magnitude:completeness:prominence:) // init 
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
	0xae210  class func AppSessionAnalyticsEvent.HighlightsFeedInteractionAnalytics.InteractedFeedItem.__allocating_init(feedItem:modelTrainingEvent:) // init 
 }

 struct HealthPlatformCore.DemographicAnalytics {

	// Properties
	var hasPairedWatch : NSNumber // +0x0
 }

 enum HealthPlatformCore.Failure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingError : c∑
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
	var trainingAnalyticsCache : …Æ

	// Swift methods
	0xb1a50  func <stripped> // method 
	0xb1db0  func <stripped> // getter 
	0xb1de0  func <stripped> // setter 
	0xb1e20  func <stripped> // modifyCoroutine 
	0xb1e60  class func FeedPopulationManager.__allocating_init(healthExperienceStore:healthStore:) // init 
	0xb20c0  func <stripped> // method 
	0xb3180  func <stripped> // method 
	0xb3e30  func <stripped> // method 
	0xb44b0  func <stripped> // method 
	0xb4bd0  func <stripped> // method 
 }

 class HealthPlatformCore.PopulationOperation {
 class HealthPlatformCore.InteractiveGeneratorToPipelineAdaptor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : Ûæ // +0xcc31e (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context : ø // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : m± // +0x0 (0x8)
	let queue : NSOperationQueue // +0x0 (0x8)
	let adaptor : GenerationOperationToGeneratorAdaptor // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishObservation : ˘∫ // +0x0 (0x8)

	// Swift methods
	0xb97a0  func <stripped> // getter 
	0xb97e0  func <stripped> // setter 
	0xb9830  func <stripped> // modifyCoroutine 
	0xb9650  class func InteractiveGeneratorToPipelineAdaptor.__allocating_init(queue:pluginInfo:domain:context:commitImmediately:) // init 
 }

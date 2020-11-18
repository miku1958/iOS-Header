 protocol HealthPlatform.HealthPluginDelegate // 2 requirements
 {
	// class init
	// method
 }
 protocol HealthPlatform.ProxyPublisherDelegate // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
	// method
 }
 protocol HealthPlatform.RelevanceFeatureTag // 4 requirements
 {
	// class associated type access function
	// class getter
	// getter
	// class init
 }
 protocol HealthPlatform.RelevanceFeatureTagEncodable // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol HealthPlatform.FeedItemGenerator // 2 requirements
 {
	// getter
	// class init
 }
 protocol HealthPlatform.SummarySingleDaySubmitting // 0 requirements
 {
 }
 protocol HealthPlatform.GeneratorPipeline // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol HealthPlatform.Generator // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthPlatform.PendingValuesInner // 19 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// setter
	// modify coroutine
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
 protocol HealthPlatform.PluginInfo // 3 requirements
 {
	// getter
	// getter
	// class init
 }
 protocol HealthPlatform.FeedItemContext // 12 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol HealthPlatform.LockProviding // 2 requirements
 {
	// method
	// method
 }

 struct __C.os_unfair_recursive_lock_s {

	// Properties
	var ourl_lock : os_unfair_lock_s
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ourl_count : UE
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : UE
 }

 struct HealthPlatform.ContentMagnitudeFeatureTag {

	// Properties
	let value : Double // +0x0
 }

 struct HealthPlatform.ContentKindFeatureTag {

	// Properties
	let value : ContentKind // +0x0
 }

 struct HealthPlatform.PluginStorage {

	// Properties
	var uniqueIdentifier : String // +0x0
	var sourceProfile : SourceProfile // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data : =A // +0x18
	var pluginIdentifier : String // +0x28
 }

 class HealthPlatform.Atomic {
 struct HealthPlatform.Proxy {

	// Properties
	var delegate : weak C?
 }

 class HealthPlatform.Inner {
 struct HealthPlatform.PluginFeedItem {

	// Properties
	var uniqueIdentifier : String
	var userInterface : UserInterface
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userData : =A
	var relevantDateInterval : RelevantDateInterval
	var contentKind : ContentKind
	var associatedHKTypes : Set<HKObjectType>
WARNING: couldn't find address 0x0 (0x0) in binary!
	var featureTags : String
	var keywords : Set<String>
	var sourceProfile : SourceProfile
	var localizedTitle : String?
	var localizedDescription : String?
	var sortHint : Int
	var searchSectionHint : SearchSection
	var indexForSearch : Bool
	var hideInDiscover : Bool?
	var isFavorite : Bool?
 }

 enum HealthPlatform.UserInterface {

	// Properties
	case storyboardIdentifier : String
	case viewControllerClassName : String
 }

 enum HealthPlatform.LogCategory {

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
	case hearing  
	case heart  
	case healthRecords  
	case sleep  
	case respiratory  
 }

 struct HealthPlatform.Log {

	// Properties
	let categories : LogCategory // +0x0
 }

 struct HealthPlatform.LogCategoryWrapper {

	// Properties
	let handle : OS_os_log // +0x0
 }

 struct HealthPlatform.ContentCompletenessFeatureTag {

	// Properties
	let value : Double // +0x0
 }

 struct HealthPlatform.GeneratorContext {

	// Properties
	var sourceProfile : SourceProfile // +0x0
	var feedItemContext : FeedItemContext // +0x8
 }

 struct HealthPlatform.GeneratorDomain {

	// Properties
	var sourceProfile : SourceProfile // +0x0
	var contentKinds : ContentKind // +0x8
	var hkTypes : Set<HKSampleType> // +0x10
	var complexity : Complexity // +0x18
 }

 enum HealthPlatform.Complexity {

	// Properties
	case low  
	case medium  
	case high  
 }

 enum HealthPlatform.DataVisualizationKind {

	// Properties
	case averageReport  
	case baselineDifference  
	case consistencySummary  
	case distribution  
	case dotPlot  
	case eventOverview  
	case lineChart  
	case route  
	case twoBarComparison  
 }

 struct HealthPlatform.DataVisualizationKindFeatureTag {

	// Properties
	let value : DataVisualizationKind // +0x0
 }

 struct HealthPlatform.BasicGeneratorPipeline {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ≈> // +0x0
	var domain : GeneratorDomain // +0x8
	var requiresSerializedGenerators : Bool // +0x21
 }

 struct HealthPlatform.BasicGenerator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ´> // +0x0
	let domain : GeneratorDomain // +0x8
 }

 class HealthPlatform.RecursiveUnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : os_unfair_recursive_lock_s

	// Swift methods
	0x13010  class func RecursiveUnfairLock.__allocating_init() // init 
	0x130e0  func <stripped> // method 
	0x130f0  func <stripped> // method 
	0x13100  func <stripped> // method 
	0x13110  func <stripped> // method 
 }

 struct HealthPlatform.MutualExclusionGroupFeatureTag {

	// Properties
	let value : String // +0x0
 }

 enum HealthPlatform.DailyRoutineKind {

	// Properties
	case morning  
	case evening  
 }

 struct HealthPlatform.DailyRoutineFeatureTag {

	// Properties
	let value : DailyRoutineKind // +0x0
 }

 enum HealthPlatform.ContentKind {

	// Properties
	case acknowledgedAlert  
	case alert  
	case app  
	case article  
	case category  
	case data  
	case featureStatus  
	case highlight  
	case highlightSearch  
	case navigation  
	case noData  
	case platformAlert  
	case promotion  
	case prompt  
	case profile  
	case update  
 }

 struct HealthPlatform.Group {

	// Properties
	let identifier : String // +0x0
	let elements : ContentKind // +0x10
 }

 enum HealthPlatform.SourceProfile {

	// Properties
	case single : HKProfileIdentifier
	case agnostic  
 }

 struct HealthPlatform.ValueJSONWrapper {

	// Properties
	var value : A
 }

 enum HealthPlatform.CodingKeys {

	// Properties
	case value  
 }

 enum HealthPlatform.FeedItemContextEnvironment {

	// Properties
	case background  
	case launch  
	case userInteractive  
 }

 enum HealthPlatform.FeedItemContextChange {

	// Properties
	case updateOrCreate : PluginFeedItem
	case delete : (feedItems: [String])
	case updateOrCreatePluginStorage : PluginStorage
	case deletePluginStorage : [String]
	case deleteAllFeedItems  
	case deleteAllPluginStorage  
 }

 enum HealthPlatform.FeedItemContextChangeError {

	// Properties
	case duplicateUniqueIdentifiers : PluginFeedItem
	case profileInvalid : SourceProfile
	case unableToSave  
 }

 struct HealthPlatform.KeywordFeatureTag {

	// Properties
	var value : Set<String> // +0x0
 }

 struct HealthPlatform.CommonIdentifier { }

 struct HealthPlatform.FeatureStatusIdentifier { }

 struct HealthPlatform.FilterIdentifier { }

 struct HealthPlatform.TimeScopeIdentifier { }

 struct HealthPlatform.AppInstallationStateIdentifier { }

 enum HealthPlatform.PreservedValue {

	// Properties
	case setValue : (newValue: A)
	case preserveExistingValue  
 }

 enum HealthPlatform.SearchMode {

	// Properties
	case browse  
	case search  
 }

 enum HealthPlatform.SearchSection {

	// Properties
	case data  
	case sharedProfiles  
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

 class HealthPlatform.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var underlyingLock : os_unfair_lock_s

	// Swift methods
	0x22310  class func UnfairLock.__allocating_init() // init 
	0x223d0  func <stripped> // method 
	0x223e0  func <stripped> // method 
	0x223f0  func <stripped> // method 
	0x22400  func <stripped> // method 
 }

 struct HealthPlatform.HKTypesFeatureTag {

	// Properties
	var value : Set<HKObjectType> // +0x0
 }

 enum HealthPlatform.FeedItemProminence {

	// Properties
	case low  
	case normal  
	case high  
 }

 struct HealthPlatform.ProminenceFeatureTag {

	// Properties
	let value : FeedItemProminence // +0x0
 }

 enum HealthPlatform.FeedItemTimeScope {

	// Properties
	case hour  
	case day  
	case week  
	case month  
	case year  
 }

 struct HealthPlatform.TimeScopeFeatureTag {

	// Properties
	let value : FeedItemTimeScope // +0x0
 }

 struct HealthPlatform.RelevantDateInterval {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : ç:
	let rampUpTime : Double
	let rampDownTime : Double
 }

 enum HealthPlatform.CodingKeys {

	// Properties
	case interval  
	case rampUpTime  
	case rampDownTime  
 }

 struct HealthPlatform.DateRangeFeatureTag {

	// Properties
	let value : RelevantDateInterval
 }

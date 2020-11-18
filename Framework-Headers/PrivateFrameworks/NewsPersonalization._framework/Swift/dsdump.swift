 protocol NewsPersonalization.ScoringServiceType // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsPersonalization.GroupingServiceType // 1 requirements
 {
	// method
 }
 protocol NewsPersonalization.PersonalizationEventTranslatorType // 1 requirements
 {
	// method
 }
 protocol NewsPersonalization.XavierActionTranslatorType // 1 requirements
 {
	// method
 }

 enum __C.FCPersonalizationAction { }

 enum __C.COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort_Type { }

 class NewsPersonalization.ServiceAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3cd400011970 (0x4d400011970) in binary!
	0x18000000c  @objc ServiceAssembly.(null) <stripped>
 }

 class NewsPersonalization.ScoringService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ScoringServiceType {

	// Properties
	let cloudContext : FCCloudContext
	let aggregateContext : FCPersonalizationData
	let feedPersonalizer : FCFeedPersonalizing
	let subscriptionController : FCSubscriptionController
	let translationProvider : FCTranslationProvider?
	let readingHistory : FCReadingHistory
	let bundleSubscription : FCBundleSubscription
	let purchaseController : FCPurchaseController
	let personalizationTreatment : FCPersonalizationTreatment
	let xavierEnabled : Bool

	// Swift methods
	0x2d30  class func ScoringService.__allocating_init(cloudContext:) // init 
 }

 struct NewsPersonalization.PersonalizationAggregate {

	// Properties
	let aggregate : NTPBPersonalizationAggregate // +0x0
 }

 class NewsPersonalization.ArticleSaveEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.FactoryAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3ca400011940 (0x4a400011940) in binary!
	0x18000000c  @objc FactoryAssembly.(null) <stripped>
 }

 class NewsPersonalization.SubscriptionResultEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.UnfollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.NewsPersonalizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let feedPersonalizer : FCFeedPersonalizing // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trainer : ç4 // +0x0 (0x0)
	let context : FCPersonalizationData // +0x0 (0x8)
	let queue : OS_dispatch_queue // +0x0 (0x8)
	let xavierEnabled : Bool // +0x0 (0x1)

	// Swift methods
	0x127e0  class func NewsPersonalizer.__allocating_init(context:feedPersonalizer:xavierEnabled:) // init 
 }

 class NewsPersonalization.SubscriptionWebAuthenticationEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.GroupingService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GroupingServiceType {

	// Properties
	let cloudContext : FCCloudContext
	let personalizationTreatment : FCPersonalizationTreatment
	let feedPersonalizer : FCFeedPersonalizing
	let xavierEnabled : Bool
	let todayFeedEnabled : Bool

	// Swift methods
	0x15620  class func GroupingService.__allocating_init(cloudContext:) // init 
 }

 class NewsPersonalization.NewsPersonalizationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let groupingService : GroupingServiceType
	let scoringService : ScoringServiceType

	// Swift methods
 }

 class NewsPersonalization.ArticleShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleSeenEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var exposedHeadlines : Set<String>

	// Swift methods
 }

 class NewsPersonalization.XavierEventProcessor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let personalizer : NewsPersonalizer
	let actionTranslators : XavierActionTranslatorType
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : §1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuration : i9

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3c7400011910 (0x47400011910) in binary!
	0x3c70  @objc XavierEventProcessor.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffeb440  @objc XavierEventProcessor.(null) <stripped>

	// Swift methods
 }

 class NewsPersonalization.BlockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3c3c000118c0 (0x43c000118c0) in binary!
	0x3c30  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x3c2c000118b0 (0x42c000118b0) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x3c0c000118a8 (0x40c000118a8) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
 }

 class NewsPersonalization.LikeActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleSeenActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var exposedHeadlines : Set<String>

	// Swift methods
 }

 class NewsPersonalization.UnblockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.MediaEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.DislikeActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.PersonalizationEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let personalizer : NewsPersonalizer // +0x10 (0x8)
	let featureFactory : PersonalizationFeatureFactory // +0x18 (0x8)
	let eventTranslators : PersonalizationEventTranslatorType // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ã8 // +0x28 (0x8)

	// Swift methods
 }

 struct NewsPersonalization.PersonalizationAction {

	// Properties
	let action : FCPersonalizationAction
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ÿ3
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : 7
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : /4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let displayRank : /:
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupRank : /:
	let groupType : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : i8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : !7
 }

 enum NewsPersonalization.PersonalizationActionType {

	// Properties
	case headline : PersonalizationAction
	case issue : PersonalizationAction
	case tag : PersonalizationAction
 }

 class NewsPersonalization.AnalyticsAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3c0c000118a8 (0x40c000118a8) in binary!
	0x18000000c  @objc AnalyticsAssembly.(null) <stripped>
 }

 class NewsPersonalization.ArticleDislikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleVisitedActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var visitedHeadlines : Set<String>

	// Swift methods
 }

 class NewsPersonalization.ArticleLikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.PersonalizationFeatureFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ShareActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.PDFPageViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.FollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleReadActionTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

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

 class NewsPersonalization.ServiceAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3524000117e0 (0x524000117e0) in binary!
	0x18000000c  @objc ServiceAssembly.(null) <stripped>
 }

 class NewsPersonalization.ScoringService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ScoringServiceType {

	// Properties
	let cloudContext : FCCloudContext
	let aggregateContext : FCPersonalizationData
	let feedPersonalizer : FCFeedPersonalizing
	let subscriptionController : FCSubscriptionController
	let translationProvider : FCTranslationProvider?
	let personalizationTreatment : FCPersonalizationTreatment
	let xavierEnabled : Bool

	// Swift methods
	0x3050  class func ScoringService.__allocating_init(cloudContext:) // init 
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
WARNING: couldn't find address 0x34f4000117b0 (0x4f4000117b0) in binary!
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
	let trainer : û) // +0x0 (0x0)
	let context : FCPersonalizationData // +0x0 (0x8)
	let queue : OS_dispatch_queue // +0x0 (0x8)
	let xavierEnabled : Bool // +0x0 (0x1)

	// Swift methods
	0xf5a0  class func NewsPersonalizer.__allocating_init(context:feedPersonalizer:xavierEnabled:) // init 
 }

 class NewsPersonalization.SubscriptionWebAuthenticationEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.GroupingService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GroupingServiceType {

	// Properties
	let feedPersonalizer : FCFeedPersonalizing
	let xavierEnabled : Bool

	// Swift methods
	0x11a50  class func GroupingService.__allocating_init(feedPersonalizer:xavierEnabled:) // init 
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

 class NewsPersonalization.XavierEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let personalizer : NewsPersonalizer // +0x10 (0x8)
	let actionTranslators : XavierActionTranslatorType // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : ƒ' // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let configuration : ½( // +0x0 (0x0)

	// Swift methods
 }

 class NewsPersonalization.BlockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x34c400011770 (0x4c400011770) in binary!
	0x34b8  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x371700011750 (0x71700011750) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x349400011750 (0x49400011750) in binary!
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
	let jsonDecoder : ¯- // +0x28 (0x8)

	// Swift methods
 }

 struct NewsPersonalization.PersonalizationAction {

	// Properties
	let action : FCPersonalizationAction
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : )
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : ó+
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : #)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let displayRank : [/
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupRank : [/
	let groupType : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : U-
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ,
 }

 enum NewsPersonalization.PersonalizationActionType {

	// Properties
	case headline : PersonalizationAction
	case issue : PersonalizationAction
	case tag : PersonalizationAction
 }

 class NewsPersonalization.AnalyticsAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x349400011750 (0x49400011750) in binary!
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

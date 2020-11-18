 protocol NewsPersonalization.PersonalizationEventTranslatorType // 1 requirements
 {
	// method
 }

 enum __C.FCPersonalizationAction { }

 class NewsPersonalization.ArticleSaveEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.FactoryAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x26d0  @objc FactoryAssembly.init <stripped>
 }

 class NewsPersonalization.UnfollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.NewsPersonalizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let context : FCPersonalizationData // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
 }

 class NewsPersonalization.SubscriptionWebAuthenticationEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleSeenEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var exposedHeadlines : Set<String> // +0x10 (0x8)

	// Swift methods
 }

 class NewsPersonalization.BlockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x7a00  @objc Assembly.assemblies <stripped>
	0x7be0  @objc Assembly.init <stripped>
	0x7ad0  @objc Assembly..cxx_destruct <stripped>
 }

 class NewsPersonalization.UnblockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.MediaEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.PersonalizationEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let personalizer : NewsPersonalizer // +0x10 (0x8)
	let featureFactory : PersonalizationFeatureFactory // +0x18 (0x8)
	let eventTranslators : PersonalizationEventTranslatorType // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : µ+ // +0x28 (0x8)

	// Swift methods
 }

 struct NewsPersonalization.PersonalizationAction {

	// Properties
	let identifier : String // +0x0
	let action : FCPersonalizationAction // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let displayRank : ;. // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupRank : ;. // +0x1c
	let groupType : Int // +0x20
 }

 enum NewsPersonalization.PersonalizationActionType {

	// Properties
	case headline : PersonalizationAction
	case issue : PersonalizationAction
	case tag : PersonalizationAction
 }

 struct NewsPersonalization.ScoringConfiguration {

	// Properties
	let baselineRatePrior : Double // +0x0
	let decayFactor : Double // +0x8
	let democratizationFactor : Double // +0x10
	let halfLifeCoefficient : Double // +0x18
	let subscribedChannelScoreCoefficient : Double // +0x20
	let mutedVoteCoefficient : Double // +0x28
	let personalizationCoefficient : Double // +0x30
	let publisherAggregateWeight : Double // +0x38
	let articleLengthAggregateWeight : Double // +0x40
	let globalScoreCoefficient : Double // +0x48
	let globalScoreCoefficientHalfLife : Double // +0x50
	let globalScoreCoefficientInitialMultiplier : Double // +0x58
	let cohortMembershipFavoritedBoost : Double // +0x60
	let cohortMembershipGlobalWeight : Double // +0x68
	let cohortMembershipUserBaseline : Double // +0x70
	let cohortMembershipPreBaselineCurvature : Double // +0x78
	let cohortMembershipPostBaselineCurvature : Double // +0x80
	let cohortMembershipDilutionFactor : Double // +0x88
	let cohortMembershipPaddingFactor : Double // +0x90
	let subscribedTopicsScoreCoefficient : Double // +0x98
	let ctrWithSubscribedChannel : Double // +0xa0
	let ctrWithZeroSubscribed : Double // +0xa8
	let ctrWithOneSubscribed : Double // +0xb0
	let ctrWithTwoSubscribed : Double // +0xb8
	let ctrWithThreeSubscribed : Double // +0xc0
	let autofavoritedVoteCoefficient : Double // +0xc8
	let ctrWithZeroAutofavorited : Double // +0xd0
	let ctrWithOneAutofavorited : Double // +0xd8
	let ctrWithTwoAutofavorited : Double // +0xe0
	let ctrWithThreeAutofavorited : Double // +0xe8
	let diversificationInitialPenalty : Double // +0xf0
	let diversificationPenalty : Double // +0xf8
	let diversificationPenaltyHalfLife : Double // +0x100
	let channelTopicDiversificationInitialPenalty : Double // +0x108
	let channelTopicDiversificationPenalty : Double // +0x110
	let channelTopicDiversificationPenaltyHalfLife : Double // +0x118
	let firstPassHalfLifeCoefficient : Double // +0x120
	let firstPassDiversificationPenalty : Double // +0x128
	let firstPassArticleFilter : Double // +0x130
	let bundlePaidMultiplierForFreeUsers : Double // +0x138
	let bundlePaidMultiplierForTrialUsers : Double // +0x140
	let bundlePaidMultiplierForPaidUsers : Double // +0x148
	let bundleFreeMultiplierForFreeUsers : Double // +0x150
	let bundleFreeMultiplierForTrialUsers : Double // +0x158
	let bundleFreeMultiplierForPaidUsers : Double // +0x160
	let featuredMultiplierForFreeUsers : Double // +0x168
	let featuredMultiplierForTrialUsers : Double // +0x170
	let featuredMultiplierForPaidUsers : Double // +0x178
	let audioMultiplierForFreeUsers : Double // +0x180
	let audioMultiplierForTrialUsers : Double // +0x188
	let audioMultiplierForPaidUsers : Double // +0x190
	let headlineSeenPenalty : Double // +0x198
	let articleReadPenalty : Double // +0x1a0
 }

 enum NewsPersonalization.CodingKeys {

	// Properties
	case baselineRatePrior  
	case decayFactor  
	case democratizationFactor  
	case halfLifeCoefficient  
	case subscribedChannelScoreCoefficient  
	case mutedVoteCoefficient  
	case personalizationCoefficient  
	case publisherAggregateWeight  
	case articleLengthAggregateWeight  
	case globalScoreCoefficient  
	case globalScoreCoefficientHalfLife  
	case globalScoreCoefficientInitialMultiplier  
	case cohortMembershipFavoritedBoost  
	case cohortMembershipGlobalWeight  
	case cohortMembershipUserBaseline  
	case cohortMembershipPreBaselineCurvature  
	case cohortMembershipPostBaselineCurvature  
	case cohortMembershipDilutionFactor  
	case cohortMembershipPaddingFactor  
	case subscribedTopicsScoreCoefficient  
	case ctrWithSubscribedChannel  
	case ctrWithZeroSubscribed  
	case ctrWithOneSubscribed  
	case ctrWithTwoSubscribed  
	case ctrWithThreeSubscribed  
	case autofavoritedVoteCoefficient  
	case ctrWithZeroAutofavorited  
	case ctrWithOneAutofavorited  
	case ctrWithTwoAutofavorited  
	case ctrWithThreeAutofavorited  
	case diversificationInitialPenalty  
	case diversificationPenalty  
	case diversificationPenaltyHalfLife  
	case channelTopicDiversificationInitialPenalty  
	case channelTopicDiversificationPenalty  
	case channelTopicDiversificationPenaltyHalfLife  
	case firstPassHalfLifeCoefficient  
	case firstPassDiversificationPenalty  
	case firstPassArticleFilter  
	case bundlePaidMultiplierForFreeUsers  
	case bundlePaidMultiplierForTrialUsers  
	case bundlePaidMultiplierForPaidUsers  
	case bundleFreeMultiplierForFreeUsers  
	case bundleFreeMultiplierForTrialUsers  
	case bundleFreeMultiplierForPaidUsers  
	case featuredMultiplierForFreeUsers  
	case featuredMultiplierForTrialUsers  
	case featuredMultiplierForPaidUsers  
	case audioMultiplierForFreeUsers  
	case audioMultiplierForTrialUsers  
	case audioMultiplierForPaidUsers  
	case headlineSeenPenalty  
	case articleReadPenalty  
 }

 class NewsPersonalization.AnalyticsAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xdd20  @objc AnalyticsAssembly.init <stripped>

	// Swift methods
 }

 class NewsPersonalization.ArticleDislikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.ArticleLikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsPersonalization.PersonalizationFeatureFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headlineService : c/ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueService : . // +0x38 (0x28)

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

 class NewsPersonalization.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

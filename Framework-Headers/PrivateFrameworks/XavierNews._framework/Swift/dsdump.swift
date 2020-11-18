 protocol XavierNews.AggregateType // 9 requirements
 {
	// class base protocol
	// setter
	// modify coroutine
	// setter
	// modify coroutine
	// setter
	// modify coroutine
	// setter
	// modify coroutine
 }
 protocol XavierNews.ReadonlyAggregateType // 5 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol XavierNews.ClassicGroupTypeProviding // 1 requirements
 {
	// getter
 }
 protocol XavierNews.AggregateContextType // 6 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
	// method
 }
 protocol XavierNews.UserContextType // 9 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol XavierNews.ClassicArticleDataType // 10 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol XavierNews.ClassicAggregateContextType // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol XavierNews.ClassicEventDataType // 6 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
 }

 struct XavierNews.GroupableTopic {

	// Properties
	let identifier : String // +0x0
	let score : Double // +0x10
	let optionalAutofavorite : Bool // +0x18
	let subscribed : Bool // +0x19
	let autofavorited : Bool // +0x1a
	let groupable : Bool // +0x1b
 }

 struct XavierNews.ReadonlyAggregate: ReadonlyAggregateType {

	// Properties
	let identifier : String
	let clicks : Double
	let impressions : Double
	let eventCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updatedAt : !h
 }

 struct XavierNews.Aggregate: AggregateType,  ReadonlyAggregateType {

	// Properties
	let identifier : String
	var clicks : Double
	var impressions : Double
	var eventCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updatedAt : !h
 }

 enum XavierNews.CodingKeys {

	// Properties
	case identifier  
	case clicks  
	case impressions  
	case eventCount  
	case updatedAt  
 }

 enum XavierNews.GroupType {

	// Properties
	case topStories  
	case trending  
	case other  
 }

 struct XavierNews.HeadlineClusteringResult {

	// Properties
	let clusters : [String : [String]] // +0x0
	let moreForYou : [String] // +0x8
 }

 enum XavierNews.AggregateContextOption {

	// Properties
	case createIfAbsent : (creationBlock: (_:))
	case none  
 }

 class XavierNews.AggregateContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AggregateContextType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updatedAt : !h // +0xfeedfacf (0x0)
	var aggregates : ReadonlyAggregate // +0x3 (0x8)

	// Swift methods
	0x5000  class func AggregateContext.__allocating_init(aggregates:updatedAt:) // init 
	0x57e0  class func AggregateContext.__allocating_init(from:) // init 
 }

 enum XavierNews.CodingKeys {

	// Properties
	case updatedAt  
	case aggregates  
 }

 struct XavierNews.ClassicArticleTrainingData {

	// Properties
	let adCategories : [String]? // +0x0
	let articleID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleLength : Kh // +0x18
	let hasVideo : Bool // +0x21
	let isANF : Bool? // +0x22
	let isPaid : Bool // +0x23
	let publisherID : String // +0x28
	let topicIDs : [String] // +0x38
 }

 enum XavierNews.CodingKeys {

	// Properties
	case adCategories  
	case articleID  
	case articleLength  
	case hasVideo  
	case isANF  
	case isPaid  
	case publisherID  
	case topicIDs  
 }

 enum XavierNews.PremiumSubscriptionState {

	// Properties
	case unknown  
	case free  
	case paid  
	case trial  
 }

 class XavierNews.UserContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UserContextType {

	// Properties
	let subscribed : [String]
	let autofavorited : [String]
	let muted : [String]
	let groupable : [String]
	let subscriptionState : PremiumSubscriptionState
	let bundled : Set<String>
	let purchased : Set<String>
	let read : Set<String>
	let seen : Set<String>

	// Swift methods
	0x12930  class func UserContext.__allocating_init(subscribed:autofavorited:muted:groupable:subscriptionState:bundled:purchased:read:seen:) // init 
 }

 enum XavierNews.Action {

	// Properties
	case mute : String
	case unmute : String
	case subscribe : String
	case unsubscribe : String
	case feedView : String
	case articleSeen : ClassicArticleDataType
	case articleVisited : ClassicArticleDataType
	case articleRead : ClassicArticleDataType
	case like : ClassicArticleDataType
	case dislike : ClassicArticleDataType
	case share : ClassicArticleDataType
 }

 struct XavierNews.ClassicArticleData: ClassicArticleDataType {

	// Properties
	let adCategories : [String]?
	let articleID : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleLength : Kh
	let halfLife : Double
	let hasVideo : Bool
	let isANF : Bool?
	let isPaid : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publishDate : ýd
	let publisherID : String
	let sourceFeedID : String?
	let topicIDs : [String]
	let cohorts : ClassicHeadlineCohortType
	let conversionData : ClassicHeadlineCohortData
	let isAudio : Bool
	let featured : Bool
	let isEvergreen : Bool
 }

 enum XavierNews.ClassicHeadlineCohortType {

	// Properties
	case free  
	case paid  
 }

 struct XavierNews.ClassicHeadlineCohortData {

	// Properties
	let clicks : Double // +0x0
	let impressions : Double // +0x8
 }

 enum XavierNews.CodingKeys {

	// Properties
	case clicks  
	case impressions  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case adCategories  
	case articleID  
	case articleLength  
	case halfLife  
	case hasVideo  
	case isANF  
	case isPaid  
	case publishDate  
	case publisherID  
	case sourceFeedID  
	case topicIDs  
	case cohorts  
	case conversionData  
	case isAudio  
	case featured  
	case isEvergreen  
 }

 struct XavierNews.GroupableHeadline {

	// Properties
	let identifier : String // +0x0
	let publisherID : String // +0x10
	let topicIDs : [String] // +0x20
	let score : Double // +0x28
	let accessible : Bool // +0x30
	let evergreen : Bool // +0x31
 }

 struct XavierNews.Classic { }

 struct XavierNews.TagEvaluator { }

 struct XavierNews.Configuration {

	// Properties
	let actionConfiguration : ActionConfiguration // +0x0
	let clusteringConfiguration : ClusteringConfiguration // +0x8
	let evaluationConfiguration : EvaluationConfiguration // +0x68
	let featureConfiguration : FeatureConfiguration // +0x280
	let trainingConfiguration : TrainingConfiguration // +0x2c8
 }

 struct XavierNews.ActionConfiguration {

	// Properties
	let articleRead : ArticleReadActionConfiguration // +0x0
 }

 struct XavierNews.AggregateModificationConfiguration {

	// Properties
	let aggregateModificationData : AggregateModificationData // +0x0
	let baselineModificationData : AggregateModificationData // +0x10
 }

 struct XavierNews.AggregateModificationData {

	// Properties
	let clicks : Double // +0x0
	let impressions : Double // +0x8
 }

 struct XavierNews.ArticleReadActionConfiguration {

	// Properties
	let duration : Double // +0x0
 }

 struct XavierNews.ClusteringConfiguration {

	// Properties
	let maxClusterSize : Int // +0x0
	let maxInaccessibleHeadlines : Int // +0x8
	let maxMoreForYouSize : Int // +0x10
	let maxPublisherOccurrences : Int // +0x18
	let minClusterSize : Int // +0x20
	let minMoreForYouSize : Int // +0x28
	let topicAutofavoritedMultiplier : Double // +0x30
	let topicFavoritedMultiplier : Double // +0x38
	let topicGroupSizeMultiplier : Double // +0x40
	let topicGroupableMultiplier : Double // +0x48
	let topicScoreWeight : Double // +0x50
	let topicSpecificityMultiplier : Double // +0x58
 }

 struct XavierNews.EvaluationConfiguration {

	// Properties
	let autofavoritedScoreCoefficient : Double // +0x0
	let autofavoritedScoreConfiguration : SubscribedCountScoreConfiguration // +0x8
	let channelTopicDiversificationInitialPenalty : Double // +0x28
	let channelTopicDiversificationPenalty : Double // +0x30
	let channelTopicDiversificationPenaltyHalfLife : Double // +0x38
	let clientScoreCoefficient : Double // +0x40
	let conversionScoreConfiguration : UserFeedbackScoreConfiguration // +0x48
	let ctrWithSubscribedChannel : Double // +0x80
	let democratizationFactor : Double // +0x88
	let diversificationInitialPenalty : Double // +0x90
	let diversificationPenalty : Double // +0x98
	let diversificationPenaltyHalfLife : Double // +0xa0
	let firstPassArticleFilter : Double // +0xa8
	let firstPassDiversificationPenalty : Double // +0xb0
	let firstPassHalfLifeCoefficient : Double // +0xb8
	let firstPassEvergreenHalfLifeCoefficient : Double // +0xc0
	let freePremiumSubscriptionConfiguration : PremiumSubscriptionConfiguration // +0xc8
	let halfLifeCoefficient : Double // +0x100
	let evergreenHalfLifeCoefficient : Double // +0x108
	let mutedVoteDampener : Double // +0x110
	let paidPremiumSubscriptionConfiguration : PremiumSubscriptionConfiguration // +0x118
	let readPenalty : Double // +0x150
	let seenPenalty : Double // +0x158
	let serverScoreCoefficientHalfLife : Double // +0x160
	let serverScoreCoefficientInitialMultiplier : Double // +0x168
	let sparseTagsPenalty : Double // +0x170
	let subscribedChannelScoreCoefficent : Double // +0x178
	let subscribedTopicScoreCoefficient : Double // +0x180
	let subscribedTopicScoreConfiguration : SubscribedCountScoreConfiguration // +0x188
	let trialPremiumSubscriptionConfiguration : PremiumSubscriptionConfiguration // +0x1a8
	let userFeedbackScoreConfiguration : UserFeedbackScoreConfiguration // +0x1e0
 }

 struct XavierNews.FeatureConfiguration {

	// Properties
	let articleLengthAggregateWeight : Double // +0x0
	let articleLengthMediumThreshold : Double // +0x8
	let articleLengthLongThreshold : Double // +0x10
	let priors : FeaturePriors // +0x18
	let publisherAggregateWeight : Double // +0x38
	let publisherTopicMinimumEventCount : Int // +0x40
 }

 struct XavierNews.FeaturePrior {

	// Properties
	let clicks : Double // +0x0
	let impressions : Double // +0x8
 }

 struct XavierNews.FeaturePriors {

	// Properties
	let baseline : FeaturePrior // +0x0
	let general : FeaturePrior // +0x10
 }

 struct XavierNews.GeneralConfiguration {

	// Properties
	let decayRate : Double // +0x0
	let topStoriesGroupAggregateBias : Double // +0x8
	let trendingGroupAggregateBias : Double // +0x10
 }

 struct XavierNews.PremiumSubscriptionConfiguration {

	// Properties
	let audioMultiplier : Double // +0x0
	let bundleFreeMultiplier : Double // +0x8
	let bundlePaidMultiplier : Double // +0x10
	let conversionCoefficient : Double // +0x18
	let featuredMultiplier : Double // +0x20
	let evergreenMultiplier : Double // +0x28
	let serverScoreCoefficient : Double // +0x30
 }

 struct XavierNews.SubscribedCountScoreConfiguration {

	// Properties
	let ctrWithOneSubscribed : Double // +0x0
	let ctrWithThreeSubscribed : Double // +0x8
	let ctrWithTwoSubscribed : Double // +0x10
	let ctrWithZeroSubscribed : Double // +0x18
 }

 struct XavierNews.TrainerConfigurations {

	// Properties
	let articleRead : AggregateModificationConfiguration // +0x0
	let articleSeen : AggregateModificationConfiguration // +0x20
	let articleVisited : AggregateModificationConfiguration // +0x40
	let dislike : AggregateModificationConfiguration // +0x60
	let feedView : AggregateModificationConfiguration // +0x80
	let like : AggregateModificationConfiguration // +0xa0
	let mute : AggregateModificationConfiguration // +0xc0
	let share : AggregateModificationConfiguration // +0xe0
	let subscribe : AggregateModificationConfiguration // +0x100
	let unmute : AggregateModificationConfiguration // +0x120
	let unsubscribe : AggregateModificationConfiguration // +0x140
 }

 struct XavierNews.TrainingConfiguration {

	// Properties
	let generalConfiguration : GeneralConfiguration // +0x0
	let trainerConfigurations : TrainerConfigurations // +0x18
 }

 struct XavierNews.UserFeedbackScoreConfiguration {

	// Properties
	let baselineMembership : Double // +0x0
	let dilutionFactor : Double // +0x8
	let globalWeight : Double // +0x10
	let paddingFactor : Double // +0x18
	let postBaselineCurvature : Double // +0x20
	let preBaselineCurvature : Double // +0x28
	let subscribedBoost : Double // +0x30
 }

 enum XavierNews.CodingKeys {

	// Properties
	case baselineMembership  
	case dilutionFactor  
	case globalWeight  
	case paddingFactor  
	case postBaselineCurvature  
	case preBaselineCurvature  
	case subscribedBoost  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case generalConfiguration  
	case trainerConfigurations  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case articleRead  
	case articleSeen  
	case articleVisited  
	case dislike  
	case feedView  
	case like  
	case mute  
	case share  
	case subscribe  
	case unmute  
	case unsubscribe  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case ctrWithOneSubscribed  
	case ctrWithThreeSubscribed  
	case ctrWithTwoSubscribed  
	case ctrWithZeroSubscribed  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case audioMultiplier  
	case bundleFreeMultiplier  
	case bundlePaidMultiplier  
	case conversionCoefficient  
	case featuredMultiplier  
	case evergreenMultiplier  
	case serverScoreCoefficient  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case decayRate  
	case topStoriesGroupAggregateBias  
	case trendingGroupAggregateBias  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case baseline  
	case general  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case clicks  
	case impressions  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case articleLengthAggregateWeight  
	case articleLengthMediumThreshold  
	case articleLengthLongThreshold  
	case priors  
	case publisherAggregateWeight  
	case publisherTopicMinimumEventCount  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case autofavoritedScoreCoefficient  
	case autofavoritedScoreConfiguration  
	case channelTopicDiversificationInitialPenalty  
	case channelTopicDiversificationPenalty  
	case channelTopicDiversificationPenaltyHalfLife  
	case clientScoreCoefficient  
	case conversionScoreConfiguration  
	case ctrWithSubscribedChannel  
	case democratizationFactor  
	case diversificationInitialPenalty  
	case diversificationPenalty  
	case diversificationPenaltyHalfLife  
	case firstPassArticleFilter  
	case firstPassDiversificationPenalty  
	case firstPassHalfLifeCoefficient  
	case firstPassEvergreenHalfLifeCoefficient  
	case freePremiumSubscriptionConfiguration  
	case halfLifeCoefficient  
	case evergreenHalfLifeCoefficient  
	case mutedVoteDampener  
	case paidPremiumSubscriptionConfiguration  
	case readPenalty  
	case seenPenalty  
	case serverScoreCoefficientHalfLife  
	case serverScoreCoefficientInitialMultiplier  
	case sparseTagsPenalty  
	case subscribedChannelScoreCoefficent  
	case subscribedTopicScoreCoefficient  
	case subscribedTopicScoreConfiguration  
	case trialPremiumSubscriptionConfiguration  
	case userFeedbackScoreConfiguration  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case maxClusterSize  
	case maxInaccessibleHeadlines  
	case maxMoreForYouSize  
	case maxPublisherOccurrences  
	case minClusterSize  
	case minMoreForYouSize  
	case topicAutofavoritedMultiplier  
	case topicFavoritedMultiplier  
	case topicGroupSizeMultiplier  
	case topicGroupableMultiplier  
	case topicScoreWeight  
	case topicSpecificityMultiplier  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case duration  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case clicks  
	case impressions  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case aggregateModificationData  
	case baselineModificationData  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case articleRead  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case actionConfiguration  
	case clusteringConfiguration  
	case evaluationConfiguration  
	case featureConfiguration  
	case trainingConfiguration  
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.Errors {

	// Properties
	case propertyFailedValidation : (propertyName: String, message: String)
 }

 enum XavierNews.HeadlineClusteringError {

	// Properties
	case reachedMaxInaccessibleHeadlines  
	case reachedMaxPublisherOccurrences  
	case reachedTopicDiversityThreshold  
	case reachedMaxEvergreenHeadlines  
 }

 enum XavierNews.HeadlineClusteringRule {

	// Properties
	case accessibility : (maxInaccessibleHeadlines: Int)
	case evergreenLimit : (maxEvergreenHeadlines: Int)
	case publisherDiversity : (maxPublisherOccurrences: Int)
	case topicDiversity : (threshold: Double, windowSize: Int, whitelistedTopicIDs: Set<String>)
 }

 struct XavierNews.HeadlineClusterer { }

 struct XavierNews.CandidateTopicGroup {

	// Properties
	let identifier : String // +0x0
	let headlines : GroupableHeadline // +0x10
	let score : Double // +0x18
 }

 struct XavierNews.HeadlineEvaluator { }

 struct XavierNews.HeadlineScoreProfile {

	// Properties
	let articleCohorts : ClassicHeadlineCohortData // +0x0
	let audioMultiplier : Double // +0x8
	let autofavoritedScore : Double // +0x10
	let bundleFreeMultiplier : Double // +0x18
	let bundlePaidMultiplier : Double // +0x20
	let clientScore : Double // +0x28
	let conversionCohorts : ClassicHeadlineCohortData // +0x30
	var diversifiedScore : Double // +0x38
	let evergreenMultiplier : Double // +0x40
	let featuredMultiplier : Double // +0x48
	var firstPassScore : Double // +0x50
	let personalizedScore : Double // +0x58
	let readPenalty : Double // +0x60
	let seenPenalty : Double // +0x68
	let serverScore : Double // +0x70
	let serverScoreCoefficient : Double // +0x78
	let sparseTagsPenalty : Double // +0x80
	let subscribedChannelScore : Double // +0x88
	let subscribedTopicScore : Double // +0x90
	var timeDecayedScore : Double // +0x98
	let userCohortMemberships : [String : Double] // +0xa0
 }

 struct XavierNews.ClassicEventData: ClassicEventDataType {

	// Properties
	let articleData : A
	let groupType : GroupType
 }

 enum XavierNews.CodingKeys {

	// Properties
	case articleData  
	case groupType  
 }

 enum XavierNews.ArticleLengthType {

	// Properties
	case short  
	case medium  
	case long  
 }

 enum XavierNews.Feature {

	// Properties
	case adCategory : String
	case articleLength : ArticleLengthType
	case premiumPublisher : (publisher: String)
	case publisherTopic : (publisher: String, topic: String)
	case tag : String
	case videoPublisher : (publisher: String)
	case baseline  
	case flint  
	case nonFlint  
	case video  
 }

 struct XavierNews.WhitelistTag {

	// Properties
	let identifier : String // +0x0
	let score : Double // +0x10
 }

 struct XavierNews.Whitelist {

	// Properties
	let defaultTags : WhitelistTag // +0x0
	let optionalTags : WhitelistTag // +0x8
 }

 struct XavierNews.ArticleTrainer { }

 struct XavierNews.Trainer {

	// Properties
	let reducer : Action
	let configuration : Configuration
 }

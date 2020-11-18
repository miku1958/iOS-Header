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
 protocol XavierNews.ClassicArticleTrainingDataType // 6 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// getter
	// getter
	// getter
 }
 protocol XavierNews.UserContextType // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol XavierNews.ClassicArticleDataType // 7 requirements
 {
	// class base protocol
	// class base protocol
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
	let updatedAt : ÃT
 }

 struct XavierNews.Aggregate: AggregateType,  ReadonlyAggregateType {

	// Properties
	let identifier : String
	var clicks : Double
	var impressions : Double
	var eventCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updatedAt : ÃT
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
	var updatedAt : ÃT // +0xfeedfacf (0x0)
	var aggregates : ReadonlyAggregate // +0x3 (0x8)

	// Swift methods
	0x52b0  class func AggregateContext.__allocating_init(aggregates:updatedAt:) // init 
	0x5a20  class func AggregateContext.__allocating_init(from:) // init 
 }

 enum XavierNews.CodingKeys {

	// Properties
	case updatedAt  
	case aggregates  
 }

 struct XavierNews.ClassicArticleTrainingData: ClassicArticleTrainingDataType {

	// Properties
	let articleID : String // +0x0
	let publisherID : String // +0x10
	let topicIDs : [String] // +0x20
	let extraAggregateIdentifiers : Set<String> // +0x28
 }

 enum XavierNews.CodingKeys {

	// Properties
	case articleID  
	case publisherID  
	case topicIDs  
	case extraAggregateIdentifiers  
 }

 class XavierNews.UserContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib, UserContextType {

	// Properties
	let subscribed : [String]
	let autofavorited : [String]
	let muted : [String]

	// Swift methods
	0x121f0  class func UserContext.__allocating_init(subscribed:autofavorited:muted:) // init 
 }

 enum XavierNews.Action {

	// Properties
	case mute : String
	case unmute : String
	case subscribe : String
	case unsubscribe : String
	case feedView : String
	case articleSeen : ClassicArticleTrainingDataType
	case articleVisited : ClassicArticleTrainingDataType
	case articleRead : ClassicArticleTrainingDataType
	case like : ClassicArticleTrainingDataType
	case dislike : ClassicArticleTrainingDataType
	case share : ClassicArticleTrainingDataType
 }

 struct XavierNews.ClassicArticleData: ClassicArticleDataType {

	// Properties
	let articleID : String // +0x0
	let publisherID : String // +0x10
	let topicIDs : [String] // +0x20
	let cohorts : ClassicHeadlineCohortData // +0x28
	let extraAggregateIdentifiers : Set<String> // +0x30
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
	case articleID  
	case publisherID  
	case topicIDs  
	case cohorts  
	case extraAggregateIdentifiers  
 }

 struct XavierNews.GroupableHeadline {

	// Properties
	let identifier : String // +0x0
	let publisherID : String // +0x10
	let topicIDs : [String] // +0x20
	let score : Double // +0x28
	let accessible : Bool // +0x30
 }

 struct XavierNews.Classic { }

 struct XavierNews.Configuration {

	// Properties
	let actionConfiguration : ActionConfiguration // +0x0
	let clusteringConfiguration : ClusteringConfiguration // +0x8
	let evaluationConfiguration : EvaluationConfiguration // +0x68
	let featureConfiguration : FeatureConfiguration // +0x140
	let trainingConfiguration : TrainingConfiguration // +0x168
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
	let clientScoreCoefficient : Double // +0x28
	let ctrWithSubscribedChannel : Double // +0x30
	let democratizationFactor : Double // +0x38
	let halfLifeCoefficient : Double // +0x40
	let publisherAggregateWeight : Double // +0x48
	let serverScoreCoefficient : Double // +0x50
	let subscribedChannelScoreCoefficent : Double // +0x58
	let subscribedTopicScoreCoefficient : Double // +0x60
	let subscribedTopicScoreConfiguration : SubscribedCountScoreConfiguration // +0x68
	let userFeedbackScoreConfiguration : UserFeedbackScoreConfiguration // +0x88
 }

 struct XavierNews.FeatureConfiguration {

	// Properties
	let priors : FeaturePriors // +0x0
	let publisherTopicMinimumEventCount : Int // +0x20
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
	let ctrCeiling : Double // +0x8
	let curvature : Double // +0x10
	let dilutionFactor : Double // +0x18
	let globalWeight : Double // +0x20
	let minWeightedImpressions : Double // +0x28
	let paddingFactor : Double // +0x30
	let postBaselineCurvature : Double // +0x38
	let preBaselineCurvature : Double // +0x40
	let subscribedBoost : Double // +0x48
 }

 enum XavierNews.CodingKeys {

	// Properties
	case baselineMembership  
	case ctrCeiling  
	case curvature  
	case dilutionFactor  
	case globalWeight  
	case minWeightedImpressions  
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
	case priors  
	case publisherTopicMinimumEventCount  
 }

 enum XavierNews.CodingKeys {

	// Properties
	case autofavoritedScoreCoefficient  
	case autofavoritedScoreConfiguration  
	case clientScoreCoefficient  
	case ctrWithSubscribedChannel  
	case democratizationFactor  
	case halfLifeCoefficient  
	case publisherAggregateWeight  
	case serverScoreCoefficient  
	case subscribedChannelScoreCoefficent  
	case subscribedTopicScoreCoefficient  
	case subscribedTopicScoreConfiguration  
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
	let clientScore : Double // +0x0
	let serverScore : Double // +0x8
	let subscribedChannelScore : Double // +0x10
	let subscribedTopicScore : Double // +0x18
	let autofavoritedScore : Double // +0x20
	let personalizedScore : Double // +0x28
	let timeDecayedScore : Double // +0x30
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

 enum XavierNews.Feature {

	// Properties
	case tag : String
	case publisherTopic : (publisher: String, topic: String)
	case baseline  
 }

 struct XavierNews.ArticleTrainer { }

 struct XavierNews.Trainer {

	// Properties
	let reducer : Action
	let configuration : Configuration
 }

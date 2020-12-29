 protocol NewsAnalytics.ExternalAnalyticsQueryItemsGeneratorType // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.TrackerConfigurationType // 1 requirements
 {
	// getter
 }
 protocol NewsAnalytics.PersonalizationEventProcessorType // 1 requirements
 {
	// class base protocol
 }
 protocol NewsAnalytics.FeldsparEventTranslatorType // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.BlockLocationEventTranslator // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.ExternalAnalyticsFeatureAvailabilityType // 1 requirements
 {
	// getter
 }
 protocol NewsAnalytics.XavierEventProcessorType // 1 requirements
 {
	// class base protocol
 }
 protocol NewsAnalytics.ArticleLikeLocationEventTranslator // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.ExternalAnalyticsURLProviderType // 1 requirements
 {
	// method
 }

 enum __C.FCEndpointEnvironment { }

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.FCNewsletterSubscription { }

 struct __C.UIBackgroundTaskIdentifier {

	// Properties
	let rawValue : Int
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.FCSubscriptionOrigin { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Ωﬁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ωﬁ
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : Ωﬁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : Ωﬁ
 }

 struct NewsAnalytics.StartMethodData {

	// Properties
	let sessionStartSource : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sessionStartSource  
 }

 enum NewsAnalytics.CacheState {

	// Properties
	case unknown  
	case hit  
	case miss  
 }

 struct NewsAnalytics.ReferralData {

	// Properties
	let referringApplication : String // +0x0
	let referringUrl : String // +0x10
	let userActivityType : String? // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case referringApplication  
	case referringUrl  
	case userActivityType  
 }

 struct NewsAnalytics.UserData {

	// Properties
	let userID : String // +0x0
	let userType : UserType // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userStartDate : ôÊ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ageBracket : sÊ // +0x20
	let ageBracketConfidenceLevel : Float // +0x24
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gender : sÊ // +0x28
	let genderConfidenceLevel : Float // +0x2c
	let userStorefrontID : String // +0x30
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userID  
	case userType  
	case userStartDate  
	case ageBracket  
	case ageBracketConfidenceLevel  
	case gender  
	case genderConfidenceLevel  
	case userStorefrontID  
 }

 enum NewsAnalytics.ICloudAccountState {

	// Properties
	case unknown  
	case loggenIn  
	case loggedOut  
 }

 struct NewsAnalytics.ReplicaAdvertisementViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : Á€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let orientationData : OrientationData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureContextData : IssueExposureContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let issueViewContextData : IssueViewContextData
	let feedData : FeedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case viewData  
	case articleScienceData  
	case userChannelContextData  
	case orientationData  
	case issueData  
	case issueViewData  
	case issueExposureContextData  
	case userBundleSubscriptionContextData  
	case channelData  
	case issueViewContextData  
	case feedData  
 }

 struct NewsAnalytics.ArticleLoadEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultActionData : E€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let feedData : FeedData
	let articleData : ArticleData
	let resultActionData : ResultActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case feedData  
	case articleData  
	case resultActionData  
 }

 struct NewsAnalytics.ReferringArticleData {

	// Properties
	let articleID : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisherArticleVersion : ôÊ // +0x10
	let role : Role // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleID  
	case publisherArticleVersion  
	case role  
 }

 enum NewsAnalytics.ResultAction {

	// Properties
	case unknown  
	case abandoned  
	case loaded  
	case appBackgrounded  
 }

 enum NewsAnalytics.FeedbackType {

	// Properties
	case unknown  
	case true  
	case false  
	case maybe  
 }

 struct NewsAnalytics.MediaEngageEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : £⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementData : ï⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : á⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let mediaData : MediaData
	let mediaEngagementData : MediaEngagementData
	let viewData : ViewData
	let anfComponentData : ANFComponentData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let orientationData : OrientationData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case mediaData  
	case mediaEngagementData  
	case viewData  
	case anfComponentData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case orientationData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.WebEmbedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : ⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let webEmbedData : WebEmbedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case webEmbedData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.ActionMethod {

	// Properties
	case unknown  
	case sharrow  
	case contextMenu  
	case swipeAction  
	case toolbar  
	case menubar  
	case view  
	case keyCommand  
 }

 struct NewsAnalytics.SubscriptionResultData {

	// Properties
	let resultType : SubscriptionResultType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case resultType  
 }

 struct NewsAnalytics.AudioEngagementData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timePlayed : ôÊ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deltaTimePlayed : ôÊ // +0x8
	let userAction : MediaUserAction // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0x14
	let engagementID : String // +0x18
	let playMethod : MediaPlayMethod // +0x28
	let listeningSource : ListeningSource // +0x29
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case timePlayed  
	case deltaTimePlayed  
	case userAction  
	case position  
	case engagementID  
	case playMethod  
	case listeningSource  
 }

 struct NewsAnalytics.AdData {

	// Properties
	let opportunityIdentifier : String // +0x0
	let placementIdentifier : String // +0x10
	let isFilled : Bool // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case opportunityIdentifier  
	case placementIdentifier  
	case isFilled  
 }

 struct NewsAnalytics.ArticleLikeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let userChannelContextData : UserChannelContextData
	let viewData : ViewData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
	case userChannelContextData  
	case viewData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.WidgetData {

	// Properties
	let webEmbedData : WebEmbedData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case webEmbedData  
 }

 enum NewsAnalytics.PurchaseType {

	// Properties
	case unknown  
	case alaCarte  
	case bundle  
	case sBundle  
 }

 enum NewsAnalytics.QueryItemsGeneratorError {

	// Properties
	case mismatchedEventAndQueryItemsGenerator  
 }

 struct NewsAnalytics.GroupExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : +ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let groupData : GroupData
	let feedData : FeedData
	let viewData : ViewData
	let tagData : TagData
	let sectionData : GroupSectionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case groupData  
	case feedData  
	case viewData  
	case tagData  
	case sectionData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.WebEmbedExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ReplicaAdvertisementViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.NotificationUnsubscribedEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.SubscribeButtonLocation {

	// Properties
	case unknown  
	case article  
	case channelFeed  
	case landingPage  
	case magazineFeed  
	case issueTOC  
	case subscriptionOffers  
	case audioFeed  
 }

 struct NewsAnalytics.FollowingData {

	// Properties
	let followingType : FollowingType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case followingType  
 }

 class NewsAnalytics.AudioEngagementCompletedEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.MediaViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : £⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : á⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : w◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData
	let galleryData : GalleryData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case mediaData  
	case viewData  
	case anfComponentData  
	case galleryData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
 }

 struct NewsAnalytics.ErrorData {

	// Properties
	let errorCode : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case errorCode  
 }

 struct NewsAnalytics.SearchResultsData {

	// Properties
	let topicIDs : [String] // +0x0
	let channelIDs : [String] // +0x8
	let articleIDs : [String] // +0x10
	let topResultTagID : String? // +0x18
	let topResultArticleID : String? // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let totalResults : sÊ // +0x38
	let completedString : String? // +0x40
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case topicIDs  
	case channelIDs  
	case articleIDs  
	case topResultTagID  
	case topResultArticleID  
	case totalResults  
	case completedString  
 }

 struct NewsAnalytics.WidgetExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let exposureData : «÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupDataList : π÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalizationFeatureCTRDataList : ´÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let exposureData : WidgetExposureData
	let groupDataList : GroupDataList
	let personalizationFeatureCTRDataList : PersonalizationFeatureCTRDataList
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case exposureData  
	case groupDataList  
	case personalizationFeatureCTRDataList  
	case viewData  
	case timedData  
 }

 struct NewsAnalytics.AppData {

	// Properties
	let appVersion : String // +0x0
	let appBuildNumber : String // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case appVersion  
	case appBuildNumber  
 }

 class NewsAnalytics.FeedViewEventQueryItemsGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.GroupLoadEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultActionData : E€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let feedData : FeedData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let groupData : GroupData
	let resultActionData : ResultActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case feedData  
	case timedData  
	case groupData  
	case resultActionData  
 }

 class NewsAnalytics.NotificationIgnoreSubscribeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.TagExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let tagData : TagData
	let feedPositionData : FeedPositionData
	let viewData : ViewData
	let sectionData : SectionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let articleData : ArticleData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case tagData  
	case feedPositionData  
	case viewData  
	case sectionData  
	case userBundleSubscriptionContextData  
	case articleData  
 }

 enum NewsAnalytics.ViewAction {

	// Properties
	case unknown  
	case appLaunch  
	case swipe  
	case headlineTap  
	case issueTap  
	case deeplink  
	case affordanceTap  
	case returnFromArticle  
	case userNavigation  
	case openModalToc  
	case tocArticleTap  
	case notification  
 }

 class NewsAnalytics.ArticleFeedbackEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.UnfollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.DownloadData {

	// Properties
	let type : DownloadType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 struct NewsAnalytics.SubscribeButtonExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : ’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let paywallData : PaywallData
	let issueData : IssueData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let sectionData : SectionData
	let viewData : ViewData
	let subscribeButtonContextData : SubscribeButtonContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case paywallData  
	case issueData  
	case purchaseData  
	case purchaseSessionData  
	case sectionData  
	case viewData  
	case subscribeButtonContextData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.GalleryType {

	// Properties
	case unknown  
	case mosaic  
	case strip  
 }

 struct NewsAnalytics.AppleIdSignInEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : ß‘
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let resultData : ResultData
	let paywallData : PaywallData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case resultData  
	case paywallData  
	case purchaseData  
	case purchaseSessionData  
	case userBundleSubscriptionContextData  
 }

 struct NewsAnalytics.ListenSheetEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let listenSheetActionData : Y‘
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let listenSheetActionData : ListenSheetActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case listenSheetActionData  
 }

 struct NewsAnalytics.NewsletterSubscriptionData {

	// Properties
	let newsletterSubscription : NewsletterSubscriptionType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case newsletterSubscription  
 }

 struct NewsAnalytics.NewsDESSession {

	// Properties
	let eventCount : Int // +0x0
	let clickCount : Int // +0x8
	let impressionCount : Int // +0x10
	let startTimestamp : Double // +0x18
	let duration : Int // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventCount  
	case clickCount  
	case impressionCount  
	case startTimestamp  
	case duration  
 }

 struct NewsAnalytics.OrientationData {

	// Properties
	let deviceOrientation : DeviceOrientation // +0x0
	let interfaceOrientation : InterfaceOrientation // +0x1
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case deviceOrientation  
	case interfaceOrientation  
 }

 struct NewsAnalytics.BannerAdPlacementData {

	// Properties
	let type : BannerAdPlacementType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 enum NewsAnalytics.IssueViewContext {

	// Properties
	case unknown  
	case disaggregated  
	case issue  
 }

 struct NewsAnalytics.NotificationSubscribeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : )”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let campaignData : CampaignData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let userChannelContextData : UserChannelContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case campaignData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
	case userChannelContextData  
 }

 enum NewsAnalytics.TrackVariant {

	// Properties
	case unknown  
	case sample  
	case full  
 }

 struct NewsAnalytics.NativeAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
 }

 struct NewsAnalytics.Model {

	// Properties
	let adUserData : AdUserData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let feedData : FeedData
	let adPlacementData : AdPlacementData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case adUserData  
	case eventData  
	case timedData  
	case userBundleSubscriptionContextData  
	case feedData  
	case adPlacementData  
 }

 struct NewsAnalytics.ActionData {

	// Properties
	let actionMethod : ActionMethod // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case actionMethod  
 }

 struct NewsAnalytics.NewsDESRecord {

	// Properties
	let session : NewsDESSession // +0x0
	let events : [[String : Any]]? // +0x28
	let personalizingItems : [FCFeedPersonalizingItem]? // +0x30
	let userProfile : FCPersonalizationUserProfile? // +0x38
	let treatment : FCPersonalizationTreatment? // +0x40
	let translatedTagIDs : [String : String] // +0x48
	let whitelist : FCPersonalizationWhitelist? // +0x50
	let profile : FCPersonalizationData // +0x58
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case session  
	case events  
	case personalizingItems  
	case userProfile  
	case treatment  
	case translatedTagIDs  
	case whitelist  
	case profileData  
 }

 struct NewsAnalytics.EmailShareResultData {

	// Properties
	let resultType : EmailShareResultType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case resultType  
 }

 struct NewsAnalytics.GalleryData {

	// Properties
	let galleryType : GalleryType // +0x0
	let galleryID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryImageCount : sÊ // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case galleryType  
	case galleryID  
	case galleryImageCount  
 }

 struct NewsAnalytics.ArticleUnsaveEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let issueData : IssueData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case feedData  
	case groupData  
	case viewData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
	case channelData  
	case issueData  
 }

 class NewsAnalytics.ArticleShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.NotificationUnsubscribeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : )”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let campaignData : CampaignData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let userChannelContextData : UserChannelContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case campaignData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
	case userChannelContextData  
 }

 class NewsAnalytics.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a11c000793e8 (0x11c000793e8) in binary!
	0x2a110  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x2e41c000793c8 (0x41c000793c8) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x2a0ec000793d8 (0xec000793d8) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
 }

 struct NewsAnalytics.NotificationSubscribedData {

	// Properties
	let type : NotificationSubscribedType // +0x0
	let action : NotificationSubscribedAction // +0x1
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
	case action  
 }

 struct NewsAnalytics.AdUserData {

	// Properties
	let userID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userID  
 }

 class NewsAnalytics.NewsDESEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var clickCount : Int // +0x10 (0x8)
	var impressionCount : Int // +0x18 (0x8)
	var events : [[String : Any]] // +0x20 (0x8)
	var articleIDs : Set<String> // +0x28 (0x8)
	let desRecordStore : DESRecordStore? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : ÎŒ // +0x0 (0x0)
	let dateFormatter : NSISO8601DateFormatter // +0x0 (0x8)
	let cloudContext : FCCloudContext // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonEncoder : mŒ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ô’ // +0x0 (0x8)

	// Swift methods
 }

 enum NewsAnalytics.SelectedResultType {

	// Properties
	case unknown  
	case article  
	case tag  
 }

 struct NewsAnalytics.CustomItemExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let customItemData : Qœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : Cœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let viewData : ViewData
	let customItemData : CustomItemData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let feedData : FeedData
	let groupData : GroupData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case viewData  
	case customItemData  
	case feedPositionData  
	case inGroupPositionData  
	case feedData  
	case groupData  
 }

 struct NewsAnalytics.AppConfigPaywallData {

	// Properties
	let paywallConfigOfferType : PaywallConfigOfferType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case paywallConfigOfferType  
 }

 struct NewsAnalytics.ViewEndData {

	// Properties
	let endReason : EndReason // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case endReason  
 }

 class NewsAnalytics.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.TrackerConfiguration : _SwiftObject /usr/lib/swift/libswiftCore.dylib, TrackerConfigurationType {

	// Properties
	let appConfigurationManager : FCNewsAppConfigurationManager

	// Swift methods
 }

 struct NewsAnalytics.MobileData {

	// Properties
	let carrier : String // +0x0
	let countryCode : String // +0x10
	let networkCode : String // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case carrier  
	case countryCode  
	case networkCode  
 }

 struct NewsAnalytics.InGroupPositionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case position  
 }

 struct NewsAnalytics.Analytics { }

 struct NewsAnalytics.Debugging { }

 struct NewsAnalytics.External { }

 struct NewsAnalytics.Instrumentation { }

 enum NewsAnalytics.StoreKitError {

	// Properties
	case unknown  
	case clientInvalid  
	case paymentCancelled  
	case paymentInvalid  
	case paymentNotAllowed  
	case storeProductNotAvailable  
	case cloudServicePermissionDenied  
	case cloudServiceNetworkConnectionFailed  
	case cloudServiceRevoked  
	case privacyAcknowlegementRequired  
	case unauthorizedRequestData  
	case invalidOfferIdentifier  
	case invalidOfferPrice  
	case invalidSignature  
	case missingOfferParams  
	case privacyAcknowledgementRequired  
	case ineligibleForOffer  
	case overlayCancelled  
	case overlayInvalidConfiguration  
	case overlayTimeout  
 }

 struct NewsAnalytics.ArticleLinkTapEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let urlData : ëÕ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let urlData : URLData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case viewData  
	case userBundleSubscriptionContextData  
	case urlData  
 }

 enum NewsAnalytics.GroupFormationReason {

	// Properties
	case unknown  
	case auto  
	case hardFollow  
	case curated  
	case algo  
 }

 struct NewsAnalytics.SessionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let utcOffset : sÊ // +0x0
	let languageCode : String? // +0x8
	let countryCode : String? // +0x18
	let iCloudAccountState : ICloudAccountState // +0x28
	let productType : String // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userSegmentationTreatmentIDs :  empty-list  // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userSegmentationSegmentSetIDs :  empty-list  // +0x48
	let regionIDs : [String]? // +0x50
	let isStoreDemoUser : Bool // +0x58
	let isLocationAccessEnabled : Bool // +0x59
	let isDiagnosticsEnabled : Bool // +0x5a
	let isSystemNotificationsEnabled : Bool // +0x5b
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case utcOffset  
	case languageCode  
	case countryCode  
	case iCloudAccountState  
	case productType  
	case userSegmentationTreatmentIDs  
	case userSegmentationSegmentSetIDs  
	case regionIDs  
	case isStoreDemoUser  
	case isLocationAccessEnabled  
	case isDiagnosticsEnabled  
	case isSystemNotificationsEnabled  
 }

 struct NewsAnalytics.StoreKitErrorData {

	// Properties
	let storeKitError : StoreKitError // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case storeKitError  
 }

 struct NewsAnalytics.GroupDataList {

	// Properties
	let groups : GroupData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case groups  
 }

 struct NewsAnalytics.FeedData {

	// Properties
	let feedType : FeedType // +0x0
	let feedID : String? // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case feedType  
	case feedID  
 }

 enum NewsAnalytics.DownloadState {

	// Properties
	case unknown  
	case start  
	case cancel  
 }

 enum NewsAnalytics.DownloadType {

	// Properties
	case unknown  
	case manual  
	case auto  
 }

 struct NewsAnalytics.ArticleDislikeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let userChannelContextData : UserChannelContextData
	let viewData : ViewData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
	case userChannelContextData  
	case viewData  
	case articleExposureContextData  
 }

 class NewsAnalytics.TrackerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a0ec000793d8 (0xec000793d8) in binary!
	0x18000000c  @objc TrackerAssembly.(null) <stripped>
 }

 struct NewsAnalytics.SubscribedTagListData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
 }

 class NewsAnalytics.SessionAccess : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let accessorQueue : OS_dispatch_queue // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a0bc00079850 (0xbc00079850) in binary!
	0x18000000c  @objc SessionAccess.(null) <stripped>

	// Swift methods
 }

 enum NewsAnalytics.EmailShareUserActionType {

	// Properties
	case unknown  
	case share  
	case cancel  
 }

 struct NewsAnalytics.SectionData {

	// Properties
	let sectionID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sectionID  
 }

 enum NewsAnalytics.FollowingType {

	// Properties
	case unknown  
	case following  
	case followingNotifications  
	case followingDisliked  
	case followingBrowse  
 }

 class NewsAnalytics.ReplicaAdvertisementEngagementEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.UserType {

	// Properties
	case unknown  
	case new  
	case returning  
 }

 class NewsAnalytics.NotificationSubscribedEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.ArticleFeedbackData {

	// Properties
	let feedbackType : FeedbackType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case feedbackType  
 }

 enum NewsAnalytics.SessionStartSource {

	// Properties
	case unknown  
	case todayWidget  
	case externalLink  
	case notification  
 }

 struct NewsAnalytics.IssueViewData {

	// Properties
	let issueViewingSessionID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case issueViewingSessionID  
 }

 struct NewsAnalytics.AMSErrorData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let code : sÊ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case code  
 }

 class NewsAnalytics.FactoryAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a0a400079390 (0xa400079390) in binary!
	0x18000000c  @objc FactoryAssembly.(null) <stripped>
 }

 struct NewsAnalytics.AdPlacementData {

	// Properties
	let placementID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case placementID  
 }

 struct NewsAnalytics.UserBundleSubscriptionContextData {

	// Properties
	let bundleSubscriptionStatus : BundleSubscriptionStatus // +0x0
	let bundleSubscriptionPurchaseID : String? // +0x8
	let isBundleSubscriptionPurchaser : Bool // +0x18
	let isAmplifyUser : Bool // +0x19
	let sBundlePurchaseID : String? // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case bundleSubscriptionStatus  
	case bundleSubscriptionPurchaseID  
	case isBundleSubscriptionPurchaser  
	case isAmplifyUser  
	case sBundlePurchaseID  
 }

 class NewsAnalytics.SubscribeButtonTapEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.AdJournalEntryEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adCreativeData : √…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adJournalEntryData : µ…
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let adUserData : AdUserData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let feedData : FeedData
	let channelData : ChannelData
	let adCreativeData : AdCreativeData
	let adPlacementData : AdPlacementData
	let adJournalEntryData : AdJournalEntryData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case adUserData  
	case userBundleSubscriptionContextData  
	case feedData  
	case channelData  
	case adCreativeData  
	case adPlacementData  
	case adJournalEntryData  
 }

 struct NewsAnalytics.EmailSignupEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userActionData : q…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let newsletterSubscriptionData : c…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let userActionData : EmailSignupUserActionData
	let newsletterSubscriptionData : NewsletterSubscriptionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userActionData  
	case newsletterSubscriptionData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.DevicePlatform {

	// Properties
	case unknown  
	case iOS  
	case macOS  
 }

 struct NewsAnalytics.AppSessionEndEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : 	…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSettingsData : ˚»
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : Ì»
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewEndData : ﬂ»
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscriptionData : SubscriptionData
	let notificationData : NotificationData
	let notificationSettingsData : NotificationSettingsData
	let autoSubscribedData : AutoSubscribedData
	let viewEndData : ViewEndData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userBundleSubscriptionContextData  
	case subscriptionData  
	case notificationData  
	case notificationSettingsData  
	case autoSubscribedData  
	case viewEndData  
 }

 enum NewsAnalytics.AudioEngagementStatus {

	// Properties
	case unknown  
	case engaged  
	case notEngaged  
 }

 struct NewsAnalytics.SearchSelectionData {

	// Properties
	let selectedResult : String // +0x0
	let selectedResultType : SelectedResultType // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case selectedResult  
	case selectedResultType  
 }

 struct NewsAnalytics.EOAFeedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : K»
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewEndData : ﬂ»
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let viewData : ViewData
	let feedData : FeedData
	let orientationData : OrientationData
	let hostArticleViewData : ArticleViewData
	let hostArticleNewsArticleData : ArticleData
	let hostArticleChannelData : ChannelData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let viewEndData : ViewEndData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case viewData  
	case feedData  
	case orientationData  
	case hostArticleViewData  
	case hostArticleNewsArticleData  
	case hostArticleChannelData  
	case userBundleSubscriptionContextData  
	case viewEndData  
 }

 struct NewsAnalytics.EmailSignupUserActionData {

	// Properties
	let userAction : EmailSignupUserActionType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userAction  
 }

 class NewsAnalytics.FeldsparAudioEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let configurationManager : FCConfigurationManager // +0x10 (0x8)
	let eventStreamObserver : NYNewsAudioPBEventStreamObserver? // +0x18 (0x8)
	let eventTranslators : FeldsparEventTranslatorType // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ô’ // +0x28 (0x8)
	var session : Session // +0x30 (0x140)
	var eventQueue : [NTPBEvent] // +0x170 (0x8)

	// Swift methods
 }

 struct NewsAnalytics.ScrollStartData {

	// Properties
	let scrollYPosition : Float // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case scrollYPosition  
 }

 struct NewsAnalytics.UnfollowTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let feedData : FeedData
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let actionData : ActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case feedData  
	case viewData  
	case userBundleSubscriptionContextData  
	case actionData  
 }

 struct NewsAnalytics.PDFPageContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pageIndices :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pageCount : sÊ // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case pageIndices  
	case pageCount  
 }

 enum NewsAnalytics.AdState {

	// Properties
	case initial  
	case pending  
	case failed  
	case fulfilled  
 }

 struct NewsAnalytics.PurchaseRestoreListData {

	// Properties
	let purchaseRestoreData : PurchaseRestoreData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case purchaseRestoreData  
 }

 struct NewsAnalytics.CustomItemData {

	// Properties
	let identifier : String // +0x0
	let name : String // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case name  
 }

 struct NewsAnalytics.AdStateData {

	// Properties
	let state : AdState // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case state  
 }

 struct NewsAnalytics.TelemetryEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let networkEventData : π≈
 }

 struct NewsAnalytics.Model {

	// Properties
	let networkEventData : NetworkEventData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case networkEventData  
 }

 struct NewsAnalytics.UnblockTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let tagData : TagData
	let feedData : FeedData
	let articleData : ArticleData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let actionData : ActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case tagData  
	case feedData  
	case articleData  
	case userBundleSubscriptionContextData  
	case actionData  
 }

 struct NewsAnalytics.WidgetEngagementData {

	// Properties
	let identifier : String // +0x0
	let engagementType : WidgetEngagementType // +0x10
	let webEmbedData : WebEmbedData // +0x18
	let articleData : ArticleData // +0x28
	let groupData : GroupData // +0x98
	let tagData : TagData // +0x110
WARNING: couldn't find address 0x0 (0x0) in binary!
	let contentFetchDate : ôÊ // +0x120
	let displayMode : DisplayModeData // +0x128
	let topicTag : String? // +0x130
	let userID : String // +0x140
	let engagementURL : String // +0x150
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case engagementType  
	case webEmbedData  
	case articleData  
	case groupData  
	case tagData  
	case contentFetchDate  
	case displayMode  
	case topicTag  
	case userID  
	case engagementURL  
 }

 enum NewsAnalytics.DownloadLocation {

	// Properties
	case unknown  
	case magazine  
	case forYou  
	case channel  
	case background  
 }

 struct NewsAnalytics.FeedLoadEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let feedData : FeedData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case feedData  
	case timedData  
	case viewData  
 }

 enum NewsAnalytics.NotificationSubscribedType {

	// Properties
	case unknown  
	case channel  
	case newIssue  
	case marketing  
	case dailyBriefingNotes  
 }

 class NewsAnalytics.FlushAnalyticsBatchesStartupTask : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var flushManager : iƒ

	// Swift methods
	0xc9420  func <stripped> // method 
 }

 class NewsAnalytics.DownloadIssueEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueTocViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let channelData : ChannelData
	let issueData : IssueData
	let issueViewData : IssueViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let feedData : FeedData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
	case issueData  
	case issueViewData  
	case timedData  
	case feedData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.FollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ValidationEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ô’

	// Swift methods
	0xce020  class func ValidationEventProcessor.__allocating_init() // init 
 }

 struct NewsAnalytics.DownloadStateData {

	// Properties
	let state : DownloadState // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case state  
 }

 struct NewsAnalytics.PersonalizationFeatureCTRData {

	// Properties
	let personalizationFeatureID : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ctr : ôÊ // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case personalizationFeatureID  
	case ctr  
 }

 struct NewsAnalytics.FollowingViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let followingData : ƒ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
	let viewData : ViewData
	let followingData : FollowingData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewData  
	case followingData  
	case eventData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.IssueExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueExposureContextData {

	// Properties
	let surfacedByChannelID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case surfacedByChannelID  
 }

 struct NewsAnalytics.URLData {

	// Properties
	let url : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case url  
 }

 struct NewsAnalytics.MagazineCategoryExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let magazineCategoryData : q√
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let magazineCategoryData : MagazineCategoryData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case magazineCategoryData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.PaywallLocation {

	// Properties
	case unknown  
	case article  
	case channelFeed  
	case magazineFeed  
 }

 struct NewsAnalytics.PurchaseOffersData {

	// Properties
	let offerIDs : PurchaseData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case offerIDs  
 }

 struct NewsAnalytics.GroupSectionData {

	// Properties
	let sectionIDs : [String]? // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sectionIDs  
 }

 struct NewsAnalytics.ArticleShareEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : ≥¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : •¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let adData : AdData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case feedData  
	case groupData  
	case viewData  
	case userChannelContextData  
	case shareContextData  
	case issueData  
	case userBundleSubscriptionContextData  
	case channelData  
	case adData  
	case articleExposureContextData  
 }

 class NewsAnalytics.AppSessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let appSessionManager : ﬂ¡

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a07400079360 (0x7400079360) in binary!
	0x2e380  @objc AppSessionObserver.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x29cffeacd58  @objc AppSessionObserver.(null) <stripped>

	// Swift methods
	0xe0300  class func AppSessionObserver.__allocating_init(appSessionManager:) // init 
 }

 class NewsAnalytics.BlockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, BlockLocationEventTranslator {
	// Swift methods
 }

 enum NewsAnalytics.BundleSubscriptionStatus {

	// Properties
	case unknown  
	case trial  
	case subscribed  
	case notSubscribed  
 }

 struct NewsAnalytics.MediaExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : £⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : á⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : w◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData
	let galleryData : GalleryData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case mediaData  
	case viewData  
	case anfComponentData  
	case galleryData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
 }

 class NewsAnalytics.PDFPageViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.AdReferralData {

	// Properties
	let qToken : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case qToken  
 }

 struct NewsAnalytics.ResultActionData {

	// Properties
	let action : ResultAction // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case action  
 }

 struct NewsAnalytics.ReplicaAdvertisementEngagementEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let articleData : ArticleData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let feedData : FeedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case articleData  
	case channelData  
	case userChannelContextData  
	case issueData  
	case issueViewData  
	case feedData  
 }

 struct NewsAnalytics.ArticleData {

	// Properties
	let alternateHeadlineData : AlternateHeadlineData // +0x0
	let articleAccessType : ArticleAccessType // +0x8
	let articleID : String // +0x10
	let articleType : ArticleType // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let backendArticleVersion : ôÊ // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bodyTextLength : À // +0x30
	let hasVideo : Bool // +0x39
	let iAdCategories : [String]? // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisherArticleVersion : ôÊ // +0x48
	let referencedArticleID : String? // +0x50
	let role : Role // +0x60
	let topicIDs : [String] // +0x68
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case alternateHeadlineData  
	case articleAccessType  
	case articleID  
	case articleType  
	case backendArticleVersion  
	case bodyTextLength  
	case hasVideo  
	case iAdCategories  
	case publisherArticleVersion  
	case referencedArticleID  
	case role  
	case topicIDs  
 }

 struct NewsAnalytics.CampaignData {

	// Properties
	let campaignId : String // +0x0
	let campaignType : String? // +0x10
	let creativeId : String? // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case campaignId  
	case campaignType  
	case creativeId  
 }

 struct NewsAnalytics.MagazineCategoryData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : sÊ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case position  
 }

 struct NewsAnalytics.SearchResultsReturnedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : ≠¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchResultsData : ü¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let searchData : SearchData
	let searchResultsData : SearchResultsData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case searchData  
	case searchResultsData  
	case userBundleSubscriptionContextData  
	case viewData  
 }

 enum NewsAnalytics.ArticleType {

	// Properties
	case unknown  
	case anf  
	case web  
 }

 struct NewsAnalytics.ArticleFeedbackEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedbackData : Y¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let tagData : TagData
	let issueData : IssueData
	let feedbackData : ArticleFeedbackData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case tagData  
	case issueData  
	case feedbackData  
	case userBundleSubscriptionContextData  
 }

 struct NewsAnalytics.SubscriptionWebAuthenticationEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : ß‘
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorData : !¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let resultData : ResultData
	let campaignData : CampaignData
	let errorData : ErrorData
	let sectionData : SectionData
	let viewData : ViewData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let paywallData : PaywallData
	let issueData : IssueData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case resultData  
	case campaignData  
	case errorData  
	case sectionData  
	case viewData  
	case purchaseData  
	case purchaseSessionData  
	case paywallData  
	case issueData  
	case articleExposureContextData  
 }

 class NewsAnalytics.DebugAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a03400079320 (0x3400079320) in binary!
	0x18000000c  @objc DebugAssembly.(null) <stripped>
 }

 struct NewsAnalytics.NewspaperData {

	// Properties
	let sectionIDs : [String]? // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sectionIDs  
 }

 struct NewsAnalytics.AppSessionResumeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let orientationData : OrientationData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userBundleSubscriptionContextData  
	case orientationData  
 }

 struct NewsAnalytics.FeldsparEvent {

	// Properties
	let event : NTPBEvent // +0x0
 }

 struct NewsAnalytics.WidgetExposureData {

	// Properties
	let identifier : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleCount : ôÊ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureCount : ôÊ // +0x18
	let appearanceType : WidgetAppearanceType // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let contentFetchDate : ôÊ // +0x28
	let stackKind : WidgetAppearanceStackKind // +0x30
	let stackLocation : WidgetAppearanceStackLocation // +0x31
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case articleCount  
	case articleExposureCount  
	case appearanceType  
	case contentFetchDate  
	case stackKind  
	case stackLocation  
 }

 enum NewsAnalytics.WidgetAppearanceStackKind {

	// Properties
	case unknown  
	case pinnedWidget  
	case smartStack  
	case nonSmartStack  
 }

 class NewsAnalytics.ANFComponentExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.PDFPageViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pdfPageContext : ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : 	…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˝æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let issueData : IssueData
	let issueViewData : IssueViewData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let feedData : FeedData
	let groupData : GroupData
	let pdfPageContext : PDFPageContext
	let campaignData : CampaignData
	let notificationData : NotificationData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let referralData : ReferralData
	let paywallData : PaywallData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case issueData  
	case issueViewData  
	case channelData  
	case userChannelContextData  
	case timedData  
	case feedData  
	case groupData  
	case pdfPageContext  
	case campaignData  
	case notificationData  
	case userBundleSubscriptionContextData  
	case referralData  
	case paywallData  
	case viewData  
 }

 struct NewsAnalytics.ArticleEngagementEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let articleData : ArticleData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case articleData  
	case channelData  
	case userChannelContextData  
	case issueData  
	case issueViewData  
 }

 struct NewsAnalytics.TrackData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackDuration : sÊ // +0x0
	let trackVariant : TrackVariant // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case trackDuration  
	case trackVariant  
 }

 class NewsAnalytics.PortraitEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ô’
	let topicStore : PPTopicStore?
	let kPortraitTopicStoreClientIdentifier : String
	let kPortraitFeedbackMappingID : String

	// Swift methods
 }

 class NewsAnalytics.IssueShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.VideoAdEngagementType {

	// Properties
	case play  
	case pause  
	case resume  
	case watchComplete  
	case skip  
	case learnMore  
 }

 struct NewsAnalytics.ArticleUndislikeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let userChannelContextData : UserChannelContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
	case userChannelContextData  
	case viewData  
 }

 struct NewsAnalytics.AdEngagementData {

	// Properties
	let type : AdEngagementType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 enum NewsAnalytics.SessionObserverKind {

	// Properties
	case app  
	case audio  
	case telemetry  
 }

 class NewsAnalytics.SessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionManager : πΩ
	let cloudContext : FCCloudContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	let client : Kæ
	let kind : SessionObserverKind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tracker : mæ
	var window : UIWindow?
	var sceneSessionIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2feec00079290 (0x6ec00079290) in binary!
	0x2f594  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2f4d300079270 (0x4d300079270) in binary!
	0x2f57c  @objc SessionObserver.(null) <stripped>
	0x2e2b0  MediaViewEvent.feedData.getter
WARNING: couldn't find address 0x2e42400079990 (0x42400079990) in binary!
	0x2e298  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2e28c00079218 (0x28c00079218) in binary!
	0x2f534  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2f528000791f0 (0x528000791f0) in binary!
	0x2ea98  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2e25c000794e0 (0x25c000794e0) in binary!
	0x29f38  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2f4f8000791a8 (0x4f8000791a8) in binary!
	0x29f20  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2e22c000791d8 (0x22c000791d8) in binary!
	0x38000000c  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x29efc00079170 (0x6fc00079170) in binary!
	0x29ef0  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x29ee400079150 (0x6e400079150) in binary!
	0x25029232840  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x7377654e3a4d4152 (0x54e3a4d4152) in binary!
	0x75250202073  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2d7377654e3a5443 (0x7654e3a5443) in binary!
	0x0  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x0  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x74654d7472617453 (0x57472617453) in binary!
	0x65c00000051  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xffdce824ffffffe8 (0x0) in binary!
	0x75f00000002  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x646e454346  @objc SessionObserver.(null) <stripped>

	// Swift methods
	0x11cf50  class func SessionObserver.__allocating_init(sessionManager:cloudContext:client:kind:) // init 
 }

 struct NewsAnalytics.NotificationData {

	// Properties
	let notificationID : String? // +0x0
	let viewFromNotification : Bool // +0x10
	let senderChannelID : String? // +0x18
	let sourceChannelID : String? // +0x28
	let notificationArticleID : String? // +0x38
	let notificationType : NotificationType // +0x48
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case notificationID  
	case viewFromNotification  
	case senderChannelID  
	case sourceChannelID  
	case notificationArticleID  
	case notificationType  
 }

 struct NewsAnalytics.EOAGroupExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : K»
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let groupData : GroupData
	let feedData : FeedData
	let hostArticleViewData : ArticleViewData
	let hostArticleNewsArticleData : ArticleData
	let hostArticleChannelData : ChannelData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case groupData  
	case feedData  
	case hostArticleViewData  
	case hostArticleNewsArticleData  
	case hostArticleChannelData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.ArticleScrollEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.UserSubscriptionContextData {

	// Properties
	let isPurchaser : Bool // +0x0
	let purchaseSources : PurchaseSource // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case isPurchaser  
	case purchaseSources  
 }

 class NewsAnalytics.ChannelDataFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundleSubscriptionManager : FCBundleSubscriptionManagerType
	let purchaseController : FCPurchaseController
	let subscriptionController : FCSubscriptionController

	// Swift methods
 }

 struct NewsAnalytics.ArticleViewResignEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let orientationData : OrientationData
	let articleData : ArticleData
	let channelData : ChannelData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case userBundleSubscriptionContextData  
	case orientationData  
	case articleData  
	case channelData  
 }

 enum NewsAnalytics.CellularRadioAccessTechnology {

	// Properties
	case unknown  
	case wifi  
	case wwan  
	case notReachable  
 }

 class NewsAnalytics.ArticleDislikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.SearchExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userBundleSubscriptionContextData  
	case viewData  
 }

 struct NewsAnalytics.MediaEngageCompleteEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : £⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : á⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementCompletedData : œª
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData
	let mediaEngagementCompletedData : MediaEngagementCompletedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let orientationData : OrientationData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case mediaData  
	case viewData  
	case anfComponentData  
	case mediaEngagementCompletedData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case orientationData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.HeadlineExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : •¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : Cœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleViewData : K»
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let feedData : FeedData
	let groupData : GroupData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let channelData : ChannelData
	let articleExposureContextData : ArticleExposureContextData
	let articleViewData : ArticleViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case adData  
	case timedData  
	case articleData  
	case feedPositionData  
	case inGroupPositionData  
	case feedData  
	case groupData  
	case articleScienceData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
	case issueData  
	case channelData  
	case articleExposureContextData  
	case articleViewData  
 }

 struct NewsAnalytics.ContentEnvironmentData {

	// Properties
	let type : ContentEnvironmentType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 struct NewsAnalytics.Session {

	// Properties
	let sessionData : SessionData // +0x0
	let userData : UserData // +0x60
	let orientationData : OrientationData // +0xa0
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData // +0xa8
	let userSubscriptionContextData : UserSubscriptionContextData // +0xd8
	let windowData : WindowData // +0xe8
	let appData : AppData // +0xf8
	let deviceData : DeviceData // +0x118
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sessionData  
	case userData  
	case orientationData  
	case userBundleSubscriptionContextData  
	case userSubscriptionContextData  
	case windowData  
	case appData  
	case deviceData  
 }

 struct NewsAnalytics.AppSessionStartEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˝æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : 	…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSettingsData : ˚»
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetEngagementData : …∫
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : Ì»
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscriptionData : SubscriptionData
	let referralData : ReferralData
	let campaignData : CampaignData
	let notificationData : NotificationData
	let notificationSettingsData : NotificationSettingsData
	let widgetEngagementData : WidgetEngagementData
	let autoSubscribedData : AutoSubscribedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userBundleSubscriptionContextData  
	case subscriptionData  
	case referralData  
	case campaignData  
	case notificationData  
	case notificationSettingsData  
	case widgetEngagementData  
	case autoSubscribedData  
 }

 class NewsAnalytics.WebEmbedViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.ScrollEndData {

	// Properties
	let scrollYPosition : Float // +0x0
	let scrollVelocity : Float // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case scrollYPosition  
	case scrollVelocity  
 }

 struct NewsAnalytics.WidgetHeadlineExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetData : O∫
WARNING: couldn't find address 0x0 (0x0) in binary!
	let alternateHeadlineData : A∫
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : Cœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let widgetData : WidgetData
	let alternateHeadlineData : AlternateHeadlineData
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let groupData : GroupData
	let tagData : TagData
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case widgetData  
	case alternateHeadlineData  
	case articleData  
	case feedPositionData  
	case inGroupPositionData  
	case groupData  
	case tagData  
	case viewData  
	case timedData  
 }

 enum NewsAnalytics.ContentEnvironmentType {

	// Properties
	case unknown  
	case production  
	case staging  
	case qa  
	case test  
 }

 class NewsAnalytics.MediaViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.MediaUserAction {

	// Properties
	case unknown  
	case tapToPlay  
	case play  
	case pause  
	case resume  
	case failed  
	case speedChange  
	case nextTrack  
	case skipBack  
 }

 class NewsAnalytics.UnblockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.MediaData {

	// Properties
	let mediaType : MediaType // +0x0
	let mediaID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaDuration : }√ // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaType  
	case mediaID  
	case mediaDuration  
 }

 struct NewsAnalytics.DebugData {

	// Properties
	let name : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case name  
 }

 enum NewsAnalytics.EventPath {

	// Properties
	case alert  
	case article  
	case articleRecirculation  
	case articleViewer  
	case articleTableOfContents  
	case breakingNews  
	case bridgedPaywallFactory  
	case campaignLandingPage  
	case channelIssues  
	case emailSignup  
	case feed  
	case feedViewer  
	case following  
	case followingDisliked  
	case followingNotifications  
	case forYouFeed  
	case forYouMagazines  
	case forYouMoreVideos  
	case forYouTopVideos  
	case hardPaywall  
	case history  
	case issue  
	case magazineCategories  
	case magazineFeed  
	case magazineFeedPaywall  
	case magazineGrid  
	case myMagazines  
	case pickYourFavorites  
	case pdfReplica  
	case pdfReplicaViewer  
	case pdfReplicaTableOfContents  
	case referringArticle  
	case reportConcern  
	case root  
	case saved  
	case search  
	case searchSeeMore  
	case softPaywall  
	case subscriptionsFound  
	case specialEvents  
	case tagFeed  
	case videoPlayer  
	case webEmbed  
	case welcome  
	case endOfArticle  
	case subscriptionOffers  
	case audioFeed  
	case purchaseTransaction  
 }

 struct NewsAnalytics.AudioEngagementOriginationData {

	// Properties
	let audioEngagementOrigin : AudioEngagementOrigin // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case audioEngagementOrigin  
 }

 struct NewsAnalytics.UserChannelContextData {

	// Properties
	let isFollowing : Bool // +0x0
	let paidSubscriptionStatus : SubscriptionStatus // +0x1
	let paidSubscriptionOrigin : SubscriptionOrigin // +0x2
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case isFollowing  
	case paidSubscriptionStatus  
	case paidSubscriptionOrigin  
 }

 class NewsAnalytics.AppSessionStartEventQueryItemsGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.VideoAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdData : Ì∏
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
 }

 struct NewsAnalytics.Model {

	// Properties
	let adUserData : AdUserData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let feedData : FeedData
	let videoAdData : VideoAdData
	let adPlacementData : AdPlacementData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case adUserData  
	case eventData  
	case userBundleSubscriptionContextData  
	case channelData  
	case feedData  
	case videoAdData  
	case adPlacementData  
 }

 struct NewsAnalytics.ArticleViewResumeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let orientationData : OrientationData
	let articleData : ArticleData
	let channelData : ChannelData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case userBundleSubscriptionContextData  
	case orientationData  
	case articleData  
	case channelData  
 }

 struct NewsAnalytics.DownloadLocationData {

	// Properties
	let location : DownloadLocation // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case location  
 }

 enum NewsAnalytics.DeviceOrientation {

	// Properties
	case unknown  
	case portrait  
	case portraitUpsideDown  
	case landscapeLeft  
	case landscapeRight  
	case faceUp  
	case faceDown  
 }

 enum NewsAnalytics.PaywallType {

	// Properties
	case unknown  
	case soft  
	case hard  
 }

 struct NewsAnalytics.IssueViewContextData {

	// Properties
	let issueViewContext : IssueViewContext // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case issueViewContext  
 }

 struct NewsAnalytics.ArticleViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : •¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : Cœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˝æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : 	…
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : Á€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let engagementData : Ÿ∑
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetEngagementData : …∫
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referringArticleData : À∑
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : ≠¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseOffersData : Ω∑
WARNING: couldn't find address 0x0 (0x0) in binary!
	let stateRestoreData : Ø∑
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let orientationData : OrientationData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureContextData : IssueExposureContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let referralData : ReferralData
	let paywallData : PaywallData
	let campaignData : CampaignData
	let notificationData : NotificationData
	let issueViewContextData : IssueViewContextData
	let engagementData : EngagementData
	let articleExposureContextData : ArticleExposureContextData
	let widgetEngagementData : WidgetEngagementData
	let referringArticleData : ReferringArticleData
	let searchData : SearchData
	let purchaseOffersData : PurchaseOffersData
	let stateRestoreData : AppStateRestoreData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case adData  
	case timedData  
	case articleData  
	case feedPositionData  
	case inGroupPositionData  
	case feedData  
	case groupData  
	case viewData  
	case articleScienceData  
	case userChannelContextData  
	case orientationData  
	case issueData  
	case issueViewData  
	case issueExposureContextData  
	case userBundleSubscriptionContextData  
	case channelData  
	case referralData  
	case paywallData  
	case campaignData  
	case notificationData  
	case issueViewContextData  
	case engagementData  
	case articleExposureContextData  
	case widgetEngagementData  
	case referringArticleData  
	case searchData  
	case purchaseOffersData  
	case stateRestoreData  
 }

 enum NewsAnalytics.BannerAdPlacementType {

	// Properties
	case unknown  
	case article  
	case feed  
 }

 class NewsAnalytics.ArticleViewResignEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.StartMethod {

	// Properties
	case unknown  
	case todayWidget  
	case externalLink  
	case homeScreenIconTap  
	case siriPrediction  
	case siriVoiceShortcut  
	case homeScreenIconForceTouchShortcut  
	case spotlight  
	case handoff  
	case notification  
	case parsec  
	case safariSearch  
 }

 struct NewsAnalytics.ArticleExposureContextData {

	// Properties
	let surfacedByTopicID : String? // +0x0
	let surfacedByChannelID : String? // +0x10
	let surfacedByArticleListID : String? // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case surfacedByTopicID  
	case surfacedByChannelID  
	case surfacedByArticleListID  
 }

 struct NewsAnalytics.WindowData {

	// Properties
	let frame : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case frame  
 }

 struct NewsAnalytics.MediaEngagementCompletedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaTimePlayed : ôÊ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
 }

 class NewsAnalytics.HeadlineExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.EmailShareUserActionData {

	// Properties
	let userAction : EmailShareUserActionType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userAction  
 }

 enum NewsAnalytics.SubscriptionOrigin {

	// Properties
	case unknown  
	case news  
	case appstore  
	case web  
 }

 class NewsAnalytics.ArticleViewEventQueryItemsGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.ANFComponentData {

	// Properties
	let metadata : String // +0x0
	let type : String // +0x10
	let id : String // +0x20
	let role : String // +0x30
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case metadata  
	case type  
	case id  
	case role  
 }

 struct NewsAnalytics.InterstitialAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let adUserData : AdUserData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let adPlacementData : AdPlacementData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case adUserData  
	case userBundleSubscriptionContextData  
	case adPlacementData  
 }

 enum NewsAnalytics.NewsletterSubscriptionType {

	// Properties
	case unknown  
	case none  
	case newsletter  
	case personalizedNewsletter  
 }

 class NewsAnalytics.SubscriptionOffersExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let issueData : IssueData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let feedData : FeedData
	let groupData : GroupData
	let issueScienceData : ScienceData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueExposureContextData : IssueExposureContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let feedPositionData : FeedPositionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case issueData  
	case timedData  
	case feedData  
	case groupData  
	case issueScienceData  
	case channelData  
	case userChannelContextData  
	case issueExposureContextData  
	case userBundleSubscriptionContextData  
	case feedPositionData  
 }

 struct NewsAnalytics.PurchaseRestoreData {

	// Properties
	let purchaseID : String // +0x0
	let isNewsAppPurchase : Bool // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case purchaseID  
	case isNewsAppPurchase  
 }

 struct NewsAnalytics.NotificationSettingsData {

	// Properties
	let tagIDs : [String] // +0x0
	let isNewIssueNotificationEnabled : Bool // +0x8
	let isMarketingNotificationEnabled : Bool // +0x9
	let isDailyBriefingNotificationEnabled : Bool // +0xa
	let isEmailNewsletterSwitchEnabled : Bool // +0xb
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
	case isNewIssueNotificationEnabled  
	case isMarketingNotificationEnabled  
	case isDailyBriefingNotificationEnabled  
	case isEmailNewsletterSwitchEnabled  
 }

 struct NewsAnalytics.SearchData {

	// Properties
	let searchString : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case searchString  
 }

 class NewsAnalytics.EOAGroupExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.TagData {

	// Properties
	let tagID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagID  
 }

 struct NewsAnalytics.AppStateRestoreData {

	// Properties
	let isFromStateRestoration : Bool // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case isFromStateRestoration  
 }

 struct NewsAnalytics.AutoSubscribedTagListData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
 }

 class NewsAnalytics.GroupExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueShareEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : ≥¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : •¬
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let adData : AdData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case actionData  
	case feedData  
	case groupData  
	case userChannelContextData  
	case shareContextData  
	case issueData  
	case issueViewData  
	case userBundleSubscriptionContextData  
	case channelData  
	case adData  
 }

 enum NewsAnalytics.ViewType {

	// Properties
	case unknown  
	case feed  
	case article  
	case pdf  
	case following  
	case widget  
	case search  
 }

 class NewsAnalytics.FeedViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleLikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArticleLikeLocationEventTranslator {
	// Swift methods
 }

 struct NewsAnalytics.RestoreSubscriptionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseRestoreListData : ¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let purchaseRestoreListData : PurchaseRestoreListData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case purchaseRestoreListData  
	case userBundleSubscriptionContextData  
 }

 struct NewsAnalytics.SubscriptionAdLocationData {

	// Properties
	let location : SubscriptionAdLocation // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case location  
 }

 class NewsAnalytics.MediaEngageEventQueryItemsGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.BannerAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adStateData : è≥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let adUserData : AdUserData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let feedData : FeedData
	let adStateData : AdStateData
	let adPlacementData : AdPlacementData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case adUserData  
	case userBundleSubscriptionContextData  
	case channelData  
	case feedData  
	case adStateData  
	case adPlacementData  
 }

 enum NewsAnalytics.SubscriptionStatus {

	// Properties
	case unknown  
	case subscribed  
	case notSubscribed  
 }

 class NewsAnalytics.AudioEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.MediaPlayMethod {

	// Properties
	case unknown  
	case autoplay  
	case playButtonPress  
 }

 struct NewsAnalytics.SearchEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : ≠¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let searchData : SearchData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case searchData  
	case userBundleSubscriptionContextData  
	case viewData  
 }

 struct NewsAnalytics.SubscribeButtonTapEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : ’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let sectionData : SectionData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let paywallData : PaywallData
	let issueData : IssueData
	let subscribeButtonContextData : SubscribeButtonContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case viewData  
	case sectionData  
	case purchaseData  
	case purchaseSessionData  
	case paywallData  
	case issueData  
	case subscribeButtonContextData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.AdEngagementType {

	// Properties
	case unknown  
	case bannerTap  
	case videoPlay  
	case videoPause  
	case videoWatchComplete  
	case videoSkip  
	case interstitialTap  
 }

 struct NewsAnalytics.SubscriptionResultEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionResultData : ﬂ≤
WARNING: couldn't find address 0x0 (0x0) in binary!
	let storeKitErrorData : —≤
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adReferralData : √≤
WARNING: couldn't find address 0x0 (0x0) in binary!
	let amsErrorData : µ≤
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let feedData : FeedData
	let groupData : GroupData
	let sectionData : SectionData
	let campaignData : CampaignData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let issueData : IssueData
	let subscriptionResultData : SubscriptionResultData
	let storeKitErrorData : StoreKitErrorData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let adReferralData : AdReferralData
	let amsErrorData : AMSErrorData
	let articleExposureContextData : ArticleExposureContextData
	let tagData : TagData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case feedData  
	case groupData  
	case sectionData  
	case campaignData  
	case purchaseData  
	case purchaseSessionData  
	case issueData  
	case subscriptionResultData  
	case storeKitErrorData  
	case userBundleSubscriptionContextData  
	case adReferralData  
	case amsErrorData  
	case articleExposureContextData  
	case tagData  
 }

 class NewsAnalytics.EmailSignupEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.NotificationTagData { }

 enum NewsAnalytics.CodingKeys { }

 enum NewsAnalytics.PurchaseSource {

	// Properties
	case unknown  
	case appStore  
	case news  
	case web  
 }

 enum NewsAnalytics.NotificationSubscribedAction {

	// Properties
	case unknown  
	case auto  
	case explicit  
 }

 enum NewsAnalytics.NetworkEventType {

	// Properties
	case unknown  
	case cdn  
	case cvws  
	case ckPublicDB  
	case ckPrivateDB  
	case newsEdgeSearch  
 }

 enum NewsAnalytics.GroupType {

	// Properties
	case unknown  
	case curated  
	case newspaper  
	case localNews  
	case trending  
	case myMagazines  
	case featuredIssue  
	case issues  
	case topic  
	case featuredArticle  
	case featuredIssueArticle  
	case recommendedIssues  
	case newIssue  
	case spotlight  
	case breakingNews  
	case specialEvents  
	case articleList  
	case orderedArticleList  
	case bestOfBundle  
	case channel  
	case topStories  
	case moreFrom  
	case related  
	case forYou  
	case paidSubscription  
	case autoFavorite  
	case dailyBriefings  
	case audioDailyBriefing  
	case audioUpNext  
	case audioForYou  
	case audioRecentlyPlayed  
	case moreForYou  
	case newFollow  
	case latestStories  
	case ad  
	case seenContentMark  
	case missedStories  
 }

 struct NewsAnalytics.ResultData {

	// Properties
	let result : ResultType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case result  
 }

 enum NewsAnalytics.WidgetEngagementType {

	// Properties
	case unknown  
	case article  
	case noStories  
	case sectionName  
	case webEmbed  
	case background  
	case wholeWidget  
 }

 struct NewsAnalytics.ViewData {

	// Properties
	let viewSessionID : String // +0x0
	let viewType : ViewType // +0x10
	let viewAction : ViewAction // +0x11
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewSessionID  
	case viewType  
	case viewAction  
 }

 enum NewsAnalytics.OsInstallVariant {

	// Properties
	case unknown  
	case internal  
	case external  
 }

 struct NewsAnalytics.ShareContextData {

	// Properties
	let activityType : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case activityType  
 }

 struct NewsAnalytics.AlternateHeadlineData {

	// Properties
	let articleHeadlineTreatmentState : AlternateHeadlineTreatmentStateData // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleHeadlineTreatmentId : sÊ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleHeadlineTreatmentState  
	case articleHeadlineTreatmentId  
 }

 struct NewsAnalytics.ArticleSaveEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : y⁄
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let issueData : IssueData
	let articleExposureContextData : ArticleExposureContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case feedData  
	case groupData  
	case viewData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
	case channelData  
	case issueData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.FollowTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let feedData : FeedData
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let actionData : ActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case feedData  
	case viewData  
	case userBundleSubscriptionContextData  
	case actionData  
 }

 struct NewsAnalytics.AudioEngagementCompletedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : ”∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : ≈∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : ∑∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let trackData : TrackData
	let viewData : ViewData
	let audioEngagementData : AudioEngagementData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let playbackData : PlaybackData
	let userChannelContextData : UserChannelContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case trackData  
	case viewData  
	case audioEngagementData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case playbackData  
	case userChannelContextData  
 }

 struct NewsAnalytics.BlockTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let viewData : ViewData
	let tagData : TagData
	let feedData : FeedData
	let articleData : ArticleData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let actionData : ActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case tagData  
	case feedData  
	case articleData  
	case userBundleSubscriptionContextData  
	case actionData  
 }

 struct NewsAnalytics.IssueData {

	// Properties
	let issueID : String // +0x0
	let isBundlePaid : Bool // +0x10
	let issueType : IssueType // +0x11
	let topicIDs : [String] // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case issueID  
	case isBundlePaid  
	case issueType  
	case topicIDs  
 }

 class NewsAnalytics.FollowingViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.ResultType {

	// Properties
	case unknown  
	case success  
	case fail  
 }

 struct NewsAnalytics.FractionalCohortMembershipDetails {

	// Properties
	let tagID : String // +0x0
	let score : Double // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagID  
	case score  
 }

 struct NewsAnalytics.EngagementData {

	// Properties
	let audioEngagementStatus : AudioEngagementStatus // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case audioEngagementStatus  
 }

 struct NewsAnalytics.PersonalizationFeatureCTRDataList {

	// Properties
	let personalizationFeatureIDs : PersonalizationFeatureCTRData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case personalizationFeatureIDs  
 }

 enum NewsAnalytics.AdCreativeType {

	// Properties
	case unknown  
	case banner  
	case preRollVideo  
	case nativeAd  
	case interstitial  
 }

 struct NewsAnalytics.PaywallData {

	// Properties
	let type : PaywallType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 struct NewsAnalytics.AudioEngageEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : ”∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : ≈∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : ∑∞
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementOriginationData : 1Ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let trackData : TrackData
	let audioEngagementData : AudioEngagementData
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let playbackData : PlaybackData
	let audioEngagementOriginationData : AudioEngagementOriginationData
	let userChannelContextData : UserChannelContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case trackData  
	case audioEngagementData  
	case viewData  
	case articleScienceData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case playbackData  
	case audioEngagementOriginationData  
	case userChannelContextData  
 }

 struct NewsAnalytics.ReferralCampaignData {

	// Properties
	let referralCampaignData : CampaignData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case referralCampaignData  
 }

 struct NewsAnalytics.WebAccessTagListData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
 }

 enum NewsAnalytics.PaywallConfigOfferType {

	// Properties
	case unknown  
	case newsPlus  
	case bOffer  
	case sBundle  
	case pDelta  
 }

 class NewsAnalytics.ExternalAnalyticsEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appConfigurationManager : FCNewsAppConfigurationManager
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uploader : ˘≠
	let urlProvider : ExternalAnalyticsURLProviderType
	let featureAvailability : ExternalAnalyticsFeatureAvailabilityType

	// Swift methods
	0x1c9c60  class func ExternalAnalyticsEventProcessor.__allocating_init(appConfigurationManager:uploader:urlProvider:featureAvailability:) // init 
 }

 struct NewsAnalytics.PaidSubscribedTagListData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
 }

 struct NewsAnalytics.WebEmbedLinkTapEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let urlData : ëÕ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let urlData : URLData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case viewData  
	case userBundleSubscriptionContextData  
	case urlData  
 }

 class NewsAnalytics.IssueTocViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.EmailSignupUserActionType {

	// Properties
	case unknown  
	case signup  
	case notnow  
 }

 struct NewsAnalytics.VideoAdEngagementData {

	// Properties
	let type : VideoAdEngagementType // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
	case position  
 }

 struct NewsAnalytics.URLReferralData {

	// Properties
	let referralData : ReferralData // +0x0
	let campaignData : CampaignData // +0x30
	let adReferralData : AdReferralData // +0x60
	let notificationData : NotificationData // +0x70
	let widgetEngagementData : WidgetEngagementData // +0xc0
 }

 struct NewsAnalytics.PurchaseSessionData {

	// Properties
	let purchaseSessionID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case purchaseSessionID  
 }

 enum NewsAnalytics.ArticleAccessType {

	// Properties
	case unknown  
	case free  
	case paid  
 }

 struct NewsAnalytics.PurchaseData {

	// Properties
	let purchaseID : String // +0x0
	let purchaseType : PurchaseType // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case purchaseID  
	case purchaseType  
 }

 enum NewsAnalytics.InterfaceOrientation {

	// Properties
	case unknown  
	case portrait  
	case portraitUpsideDown  
	case landscapeLeft  
	case landscapeRight  
 }

 struct NewsAnalytics.ArticleViewData {

	// Properties
	let viewSessionID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewSessionID  
 }

 struct NewsAnalytics.AppSessionResignEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let orientationData : OrientationData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userBundleSubscriptionContextData  
	case orientationData  
 }

 class NewsAnalytics.ExternalAnalyticsURLProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExternalAnalyticsURLProviderType {

	// Properties
	let queryItemsGenerators : ExternalAnalyticsQueryItemsGeneratorType

	// Swift methods
	0x1d6910  class func ExternalAnalyticsURLProvider.__allocating_init(queryItemsGenerators:) // init 
 }

 enum NewsAnalytics.URLProviderError {

	// Properties
	case missingAnalyticsID  
	case invalidEvent  
	case invalidConfiguration  
 }

 enum NewsAnalytics.SubscribeButtonTargetType {

	// Properties
	case unknown  
	case purchaseSheet  
	case landingPage  
	case link  
	case ampPage  
 }

 struct NewsAnalytics.ChannelData {

	// Properties
	let channelID : String // +0x0
	let adSupportedChannel : Bool // +0x10
	let isBundleChannel : Bool // +0x11
	let language : String // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case channelID  
	case adSupportedChannel  
	case isBundleChannel  
	case language  
 }

 enum NewsAnalytics.IssueType {

	// Properties
	case unknown  
	case anf  
	case pdf  
 }

 class NewsAnalytics.ArticleViewResumeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.MediaExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ScienceDataFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalizationService : ´≥

	// Swift methods
 }

 struct NewsAnalytics.GroupData {

	// Properties
	let groupLocation : GroupLocation // +0x0
	let groupType : GroupType // +0x1
	let groupID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupCount : sÊ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupPosition : sÊ // +0x1c
	let groupedArticleIDs : [String]? // +0x20
	let groupedIssueIDs : [String]? // +0x28
	let curatedSubtype : String? // +0x30
	let layoutIDs : [String]? // +0x40
	let formationReason : GroupFormationReason // +0x48
	let groupBackingTagId : String? // +0x50
	let personalizationScore : Double? // +0x60
	let competingGroups : CompetingGroupPersonalizationListData // +0x70
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case groupLocation  
	case groupType  
	case groupID  
	case groupCount  
	case groupPosition  
	case groupedArticleIDs  
	case groupedIssueIDs  
	case curatedSubtype  
	case layoutIDs  
	case formationReason  
	case groupBackingTagId  
	case personalizationScore  
	case competingGroups  
 }

 struct NewsAnalytics.AMSMarketingItemData {

	// Properties
	let amsPurchaseID : String? // +0x0
	let campaignId : String? // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case amsPurchaseID  
	case campaignId  
 }

 enum NewsAnalytics.NotificationType {

	// Properties
	case unknown  
	case marketing  
	case editorial  
	case newIssue  
	case article  
	case endOfAudioTrack  
	case publisherEnabledNotifications  
 }

 class NewsAnalytics.ArticleEngagementEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.AdJournalEntryError {

	// Properties
	case other  
	case failedToCreateContext  
	case failedToRender  
	case requestFailed  
 }

 struct NewsAnalytics.PlaybackData {

	// Properties
	let playbackSpeed : Float // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case playbackSpeed  
 }

 class NewsAnalytics.ArticleSaveEventEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.GroupLocation {

	// Properties
	case unknown  
	case article  
	case feed  
	case endOfArticle  
 }

 enum NewsAnalytics.ListenSheetActionData {

	// Properties
	case unknown  
	case listenNow  
	case listenNext  
	case listenLater  
	case cancel  
 }

 struct NewsAnalytics.SearchResultSelectEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : ≠¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchSelectionData : ]´
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchResultsData : ü¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let searchData : SearchData
	let searchSelectionData : SearchSelectionData
	let searchResultsData : SearchResultsData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case searchData  
	case searchSelectionData  
	case searchResultsData  
	case userBundleSubscriptionContextData  
	case viewData  
 }

 enum NewsAnalytics.AlternateHeadlineTreatmentStateData {

	// Properties
	case unknown  
	case default  
	case control  
	case test  
	case winnerArticle  
	case winnerDefault  
	case winnerAlternate  
 }

 struct NewsAnalytics.AdJournalEntryData {

	// Properties
	let status : AdJournalEntryStatus // +0x0
	let error : AdJournalEntryError // +0x1
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case status  
	case error  
 }

 class NewsAnalytics.MediaEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedPositionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case position  
 }

 enum NewsAnalytics.FeedType {

	// Properties
	case unknown  
	case forYou  
	case magazine  
	case magazineCategory  
	case channel  
	case topic  
	case myMagazines  
	case eoa  
	case audio  
	case saved  
	case history  
	case search  
 }

 struct NewsAnalytics.WebAccessEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userActionData : •™
WARNING: couldn't find address 0x0 (0x0) in binary!
	let emailShareResultData : ó™
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let userActionData : EmailShareUserActionData
	let emailShareResultData : EmailShareResultData
	let tagData : TagData
	let sectionData : SectionData
	let articleData : ArticleData
	let feedData : FeedData
	let purchaseSessionData : PurchaseSessionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userActionData  
	case emailShareResultData  
	case tagData  
	case sectionData  
	case articleData  
	case feedData  
	case purchaseSessionData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.TagExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.SubscriptionResultType {

	// Properties
	case unknown  
	case success  
	case failure  
	case cancel  
	case deferredForPermission  
 }

 struct NewsAnalytics.DeviceData {

	// Properties
	let deviceModel : String // +0x0
	let devicePlatform : DevicePlatform // +0x10
	let osInstallVariant : OsInstallVariant // +0x11
	let osVersion : String // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case deviceModel  
	case devicePlatform  
	case osInstallVariant  
	case osVersion  
 }

 struct NewsAnalytics.ANFComponentExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : á⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let anfComponentData : ANFComponentData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let viewData : ViewData
	let articleScienceData : ScienceData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case anfComponentData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
	case viewData  
	case articleScienceData  
 }

 enum NewsAnalytics.AudioEngagementOrigin {

	// Properties
	case unknown  
	case playlist  
	case playNow  
	case nextTrack  
	case dailyBriefing  
	case hero  
	case siri  
	case todayFeedArticle  
	case todayFeedDailyBriefing  
 }

 struct NewsAnalytics.SubscriptionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelCount : sÊ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topicCount : sÊ // +0x4
	let subscribedTagList : SubscribedTagListData // +0x8
	let autoSubscribedTagList : AutoSubscribedTagListData // +0x10
	let paidSubscribedTagList : PaidSubscribedTagListData // +0x18
	let webAccessTagList : WebAccessTagListData // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case channelCount  
	case topicCount  
	case subscribedTagList  
	case autoSubscribedTagList  
	case paidSubscribedTagList  
	case webAccessTagList  
 }

 enum NewsAnalytics.MediaType {

	// Properties
	case unknown  
	case video  
	case image  
	case gallery  
	case audio  
	case map  
 }

 class NewsAnalytics.FeldsparEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventStreamObserver : NSSNewsAnalyticsPBEventStreamObserver?
	let eventTranslators : FeldsparEventTranslatorType
	let configurationManager : FCConfigurationManager
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : Ô’
	var session : Session

	// Swift methods
 }

 struct NewsAnalytics.ViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
	let viewData : ViewData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewData  
 }

 enum NewsAnalytics.EmailShareResultType {

	// Properties
	case unknown  
	case success  
	case failure  
 }

 struct NewsAnalytics.PaywallExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : A’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : 3’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : È’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let paywallData : PaywallData
	let issueData : IssueData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let sectionData : SectionData
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case paywallData  
	case issueData  
	case purchaseData  
	case purchaseSessionData  
	case sectionData  
	case viewData  
	case userBundleSubscriptionContextData  
 }

 struct NewsAnalytics.ScienceData {

	// Properties
	let agedPersonalizationScore : Double // +0x0
	let autoSubscribeCtr : Double // +0x8
	let computedGlobalScoreCoefficient : Double // +0x10
	let diversifiedPersonalizationScore : Double // +0x18
	let featureCtr : Double // +0x20
	let paidNonPaidSubscriptionCtr : Double // +0x28
	let personalizationScore : Double // +0x30
	let subscribedChannelCtr : Double // +0x38
	let userFeedbackScore : Double // +0x40
	let fractionalCohortMembership : FractionalCohortMembershipDetails // +0x48
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case agedPersonalizationScore  
	case autoSubscribeCtr  
	case computedGlobalScoreCoefficient  
	case diversifiedPersonalizationScore  
	case featureCtr  
	case paidNonPaidSubscriptionCtr  
	case personalizationScore  
	case subscribedChannelCtr  
	case userFeedbackScore  
	case fractionalCohortMembership  
 }

 struct NewsAnalytics.SubscribeButtonContextData {

	// Properties
	let location : SubscribeButtonLocation // +0x0
	let targetType : SubscribeButtonTargetType // +0x1
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case location  
	case targetType  
 }

 struct NewsAnalytics.IssueExposureData {

	// Properties
	let issueSessionID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case issueSessionID  
 }

 struct NewsAnalytics.NotificationIgnoreSubscribeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : )”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let userChannelContextData : UserChannelContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
	case userChannelContextData  
 }

 struct NewsAnalytics.ArticleUnlikeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let articleData : ArticleData
	let actionData : ActionData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let userChannelContextData : UserChannelContextData
	let viewData : ViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case actionData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
	case userChannelContextData  
	case viewData  
 }

 struct NewsAnalytics.NetworkEventData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startTime : ôÊ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dnsDuration : ôÊ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let connectDuration : ôÊ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestDuration : ôÊ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let responseDuration : ôÊ // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let responseSize : ôÊ // +0x28
	let cacheState : CacheState // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statusCode : ôÊ // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorCode : ôÊ // +0x40
	let eventType : NetworkEventType // +0x48
	let wifiReachabilityStatus : Bool // +0x49
	let cellularRadioAccessTechnology : CellularRadioAccessTechnology // +0x4a
	let respondingPop : String // +0x50
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case startTime  
	case dnsDuration  
	case connectDuration  
	case requestDuration  
	case responseDuration  
	case responseSize  
	case cacheState  
	case statusCode  
	case errorCode  
	case eventType  
	case wifiReachabilityStatus  
	case cellularRadioAccessTechnology  
	case respondingPop  
 }

 enum NewsAnalytics.WidgetAppearanceType {

	// Properties
	case unknown  
	case storiesExposed  
	case noStories  
	case error  
	case offline  
 }

 struct NewsAnalytics.TagEmailSignupEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : 9ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userActionData : •™
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let tagData : TagData
	let userActionData : EmailShareUserActionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case userActionData  
 }

 enum NewsAnalytics.WidgetAppearanceStackLocation {

	// Properties
	case unknown  
	case todayPage  
	case homeScreenPageOne  
	case homeScreenPageTwo  
	case homeScreenPageThree  
	case homeScreenOtherPages  
 }

 enum NewsAnalytics.Role {

	// Properties
	case unknown  
	case article  
	case cover  
	case replicaAdvertisement  
	case campaignLandingPage  
	case spotlight  
	case feature  
	case endOfIssue  
	case audioDailyBriefing  
 }

 class NewsAnalytics.MediaEngageCompletedEventQueryItemsGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.DynamicEndpoint : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appConfigurationManager : FCNewsAppConfigurationManager
	let environment : FCEndpointEnvironment

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x29efc00079170 (0x6fc00079170) in binary!
	0x29ef0  @objc DynamicEndpoint.(null) <stripped>
WARNING: couldn't find address 0x29ee400079150 (0x6e400079150) in binary!
	0x25029232840  @objc DynamicEndpoint.(null) <stripped>
WARNING: couldn't find address 0x7377654e3a4d4152 (0x54e3a4d4152) in binary!
	0x75250202073  @objc DynamicEndpoint.(null) <stripped>

	// Swift methods
	0x20dcb0  class func DynamicEndpoint.__allocating_init(appConfigurationManager:) // init 
 }

 struct NewsAnalytics.MediaEngagementData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaTimePlayed : ôÊ // +0x0
	let mediaUserAction : MediaUserAction // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : sÊ // +0xc
	let mediaPlayMethod : MediaPlayMethod // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
	case mediaUserAction  
	case position  
	case mediaPlayMethod  
 }

 enum NewsAnalytics.DisplayModeData {

	// Properties
	case unknown  
	case twoByTwo  
	case twoByFour  
	case fourByFour  
	case sixByFour  
 }

 enum NewsAnalytics.AdJournalEntryStatus {

	// Properties
	case created  
	case failed  
	case pending  
	case discarded  
	case fulfilled  
	case presented  
 }

 struct NewsAnalytics.ArticleScrollEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : s‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollStartData : gß
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollEndData : Yß
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : W‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : I‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let scrollStartData : ScrollStartData
	let scrollEndData : ScrollEndData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case viewData  
	case scrollStartData  
	case scrollEndData  
	case articleScienceData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
	case issueData  
	case issueViewData  
 }

 class NewsAnalytics.SubscriptionWebAuthenticationEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.SubscriptionAdLocation {

	// Properties
	case feed  
	case article  
	case unknown  
 }

 struct NewsAnalytics.DownloadIssueEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : -‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadLocationData : ß
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadStateData : ˝¶
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadData : Ô¶
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let issueData : IssueData
	let downloadLocationData : DownloadLocationData
	let downloadStateData : DownloadStateData
	let downloadData : DownloadData
	let channelData : ChannelData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case issueData  
	case downloadLocationData  
	case downloadStateData  
	case downloadData  
	case channelData  
	case userBundleSubscriptionContextData  
 }

 struct NewsAnalytics.AdCreativeData {

	// Properties
	let type : AdCreativeType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 struct NewsAnalytics.SubscriptionOffersExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adReferralData : √≤
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseOffersData : Ω∑
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : %’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : ’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionAdLocationData : â¶
 }

 struct NewsAnalytics.Model {

	// Properties
	let adReferralData : AdReferralData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let channelData : ChannelData
	let campaignData : CampaignData
	let purchaseOffersData : PurchaseOffersData
	let purchaseSessionData : PurchaseSessionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscribeButtonContextData : SubscribeButtonContextData
	let subscriptionAdLocationData : SubscriptionAdLocationData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case adReferralData  
	case eventData  
	case timedData  
	case channelData  
	case campaignData  
	case purchaseOffersData  
	case purchaseSessionData  
	case userBundleSubscriptionContextData  
	case subscribeButtonContextData  
	case subscriptionAdLocationData  
 }

 class NewsAnalytics.PaywallExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : e‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ;‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : 7”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˝æ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : ≠¿
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewEndData : ﬂ»
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let feedData : FeedData
	let viewData : ViewData
	let orientationData : OrientationData
	let campaignData : CampaignData
	let referralData : ReferralData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let searchData : SearchData
	let viewEndData : ViewEndData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case feedData  
	case viewData  
	case orientationData  
	case campaignData  
	case referralData  
	case userBundleSubscriptionContextData  
	case searchData  
	case viewEndData  
 }

 struct NewsAnalytics.AutoSubscribedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let potraitCount : sÊ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let safariCount : sÊ // +0x4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let appsAutoSubscribedCount : sÊ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let internalAutoSubscribedCount : sÊ // +0xc
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case potraitCount  
	case safariCount  
	case appsAutoSubscribedCount  
	case internalAutoSubscribedCount  
 }

 struct NewsAnalytics.WebEmbedData {

	// Properties
	let embedUrl : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case embedUrl  
 }

 struct NewsAnalytics.VideoAdEngagementEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adUserData : Õ“
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : ı€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdData : Ì∏
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdEngagementData : µ•
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ø“
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
	let adUserData : AdUserData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let feedData : FeedData
	let videoAdData : VideoAdData
	let videoAdEngagementData : VideoAdEngagementData
	let adPlacementData : AdPlacementData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case adUserData  
	case userBundleSubscriptionContextData  
	case channelData  
	case feedData  
	case videoAdData  
	case videoAdEngagementData  
	case adPlacementData  
 }

 struct NewsAnalytics.WebEmbedExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : è‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Å‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : ±⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : Ÿ€
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ˜’
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : Cœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : ⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : ‹
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : Õ‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ›
	let groupData : GroupData
	let feedData : FeedData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let webEmbedData : WebEmbedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case groupData  
	case feedData  
	case feedPositionData  
	case inGroupPositionData  
	case webEmbedData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.EndReason {

	// Properties
	case unknown  
	case appBackground  
	case sceneBackground  
	case readingHistoryCleared  
	case forceQuit  
	case feldsparIDReset  
	case userNavigation  
 }

 enum NewsAnalytics.ListeningSource {

	// Properties
	case unknown  
	case inApp  
	case external  
	case carPlay  
 }

 struct NewsAnalytics.VideoAdData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let duration : sÊ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case duration  
 }

 struct NewsAnalytics.CompetingGroupPersonalizationListData {

	// Properties
	let name : String // +0x0
	let personalizationScore : Double // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case name  
	case personalizationScore  
 }

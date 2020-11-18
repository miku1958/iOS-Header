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
 protocol NewsAnalytics.XavierEventProcessorType // 1 requirements
 {
	// class base protocol
 }
 protocol NewsAnalytics.ArticleLikeLocationEventTranslator // 1 requirements
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
	var width : §
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : §
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : §
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : §
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
	let userStartDate : 5´ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ageBracket : ´ // +0x20
	let ageBracketConfidenceLevel : Float // +0x24
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gender : ´ // +0x28
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

 struct NewsAnalytics.ReplicaAdvertisementViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : s°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let articleData : ArticleData
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let orientationData : OrientationData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
	case issueViewData  
	case issueExposureContextData  
	case userBundleSubscriptionContextData  
	case channelData  
	case issueViewContextData  
	case feedData  
 }

 enum NewsAnalytics.ICloudAccountState {

	// Properties
	case unknown  
	case loggenIn  
	case loggedOut  
 }

 struct NewsAnalytics.ReferringArticleData {

	// Properties
	let articleID : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisherArticleVersion : 5´ // +0x10
	let role : Role // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleID  
	case publisherArticleVersion  
	case role  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : g†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementData : Y†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : K†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
	case orientationData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.WebEmbedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : …ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let timePlayed : 5´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deltaTimePlayed : 5´ // +0x8
	let userAction : MediaUserAction // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : ´ // +0x14
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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

 struct NewsAnalytics.GroupExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : -û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : g†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : K†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : yù
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let totalResults : ´ // +0x38
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case topicIDs  
	case channelIDs  
	case articleIDs  
	case topResultTagID  
	case topResultArticleID  
	case totalResults  
 }

 struct NewsAnalytics.WidgetExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let exposureData : …ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupDataList : ªú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalizationFeatureCTRDataList : ≠ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let exposureData : WidgetExposureData
	let groupDataList : GroupDataList
	let personalizationFeatureCTRDataList : PersonalizationFeatureCTRDataList
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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

 class NewsAnalytics.NotificationIgnoreSubscribeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.TagExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Iõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : Ÿö
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let listenSheetActionData : ãö
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : [ô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let articleData : ArticleData
	let groupData : GroupData
	let feedData : FeedData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case timedData  
	case userBundleSubscriptionContextData  
	case articleData  
	case groupData  
	case feedData  
	case adPlacementData  
	case adContentData  
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

 struct NewsAnalytics.GalleryData {

	// Properties
	let galleryType : GalleryType // +0x0
	let galleryID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryImageCount : ´ // +0x18
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : [ô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
WARNING: couldn't find address 0x2855400076898 (0x55400076898) in binary!
	0x28548  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x266ab00076878 (0x6ab00076878) in binary!
	0x18000000c  @objc Assembly.(null) <stripped>
WARNING: couldn't find address 0x2852400076888 (0x52400076888) in binary!
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

 class NewsAnalytics.NewsDESEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var clickCount : Int // +0x10 (0x8)
	var impressionCount : Int // +0x18 (0x8)
	var events : [[String : Any]] // +0x20 (0x8)
	var articleIDs : Set<String> // +0x28 (0x8)
	let desRecordStore : DESRecordStore? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : ›ï // +0x0 (0x0)
	let dateFormatter : NSISO8601DateFormatter // +0x0 (0x8)
	let cloudContext : FCCloudContext // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonEncoder : oï // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : ·õ // +0x0 (0x8)

	// Swift methods
 }

 enum NewsAnalytics.SelectedResultType {

	// Properties
	case unknown  
	case article  
	case tag  
 }

 struct NewsAnalytics.AppConfigPaywallData {

	// Properties
	let paywallConfigOfferType : PaywallConfigOfferType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case paywallConfigOfferType  
 }

 class NewsAnalytics.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
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
	let position : ´ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case position  
 }

 struct NewsAnalytics.Analytics { }

 struct NewsAnalytics.Debugging { }

 struct NewsAnalytics.External { }

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
 }

 struct NewsAnalytics.ArticleLinkTapEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let urlData : ï
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let utcOffset : ´ // +0x0
	let languageCode : String? // +0x8
	let countryCode : String? // +0x18
	let iCloudAccountState : ICloudAccountState // +0x28
	let productType : String // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userSegmentationTreatmentIDs :  empty-list  // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userSegmentationSegmentSetIDs :  empty-list  // +0x48
	let regionIDs : [String]? // +0x50
	let startMethod : StartMethod // +0x58
	let isStoreDemoUser : Bool // +0x59
	let isLocationAccessEnabled : Bool // +0x5a
	let isDiagnosticsEnabled : Bool // +0x5b
	let isSystemNotificationsEnabled : Bool // +0x5c
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
	case startMethod  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
WARNING: couldn't find address 0x2852400076888 (0x52400076888) in binary!
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
WARNING: couldn't find address 0x284f400076c88 (0x4f400076c88) in binary!
	0x18000000c  @objc SessionAccess.(null) <stripped>

	// Swift methods
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
	let code : ´ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case code  
 }

 class NewsAnalytics.FactoryAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x284dc00076840 (0x4dc00076840) in binary!
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adCreativeData : [ë
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adJournalEntryData : Më
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let feedData : FeedData
	let articleData : ArticleData
	let channelData : ChannelData
	let adCreativeData : AdCreativeData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
	let adJournalEntryData : AdJournalEntryData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userBundleSubscriptionContextData  
	case feedData  
	case articleData  
	case channelData  
	case adCreativeData  
	case adPlacementData  
	case adContentData  
	case adJournalEntryData  
 }

 struct NewsAnalytics.EmailSignupEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userActionData : ë
WARNING: couldn't find address 0x0 (0x0) in binary!
	let newsletterSubscriptionData : Ûê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : ßê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : ôê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationTagData : ãê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : }ê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endReason : oê
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscriptionData : SubscriptionData
	let notificationData : NotificationData
	let notificationTagData : NotificationTagData
	let autoSubscribedData : AutoSubscribedData
	let endReason : EndReason
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userBundleSubscriptionContextData  
	case subscriptionData  
	case notificationData  
	case notificationTagData  
	case autoSubscribedData  
	case endReason  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : ›è
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let viewData : ViewData
	let feedData : FeedData
	let orientationData : OrientationData
	let hostArticleViewData : ArticleViewData
	let hostArticleNewsArticleData : ArticleData
	let hostArticleChannelData : ChannelData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
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
	let jsonDecoder : ·õ // +0x28 (0x8)
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let pageCount : ´ // +0x8
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
	let networkEventData : yç
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let engagementType : WidgetEngagementType // +0x0
	let webEmbedData : WebEmbedData // +0x8
	let articleData : ArticleData // +0x18
	let groupData : GroupData // +0x80
	let tagData : TagData // +0xd0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case engagementType  
	case webEmbedData  
	case articleData  
	case groupData  
	case tagData  
 }

 enum NewsAnalytics.DownloadLocation {

	// Properties
	case unknown  
	case magazine  
	case forYou  
	case channel  
	case background  
 }

 enum NewsAnalytics.NotificationSubscribedType {

	// Properties
	case unknown  
	case channel  
	case newIssue  
	case marketing  
	case dailyBriefingNotes  
 }

 class NewsAnalytics.DownloadIssueEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueTocViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let channelData : ChannelData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let feedData : FeedData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
	case issueData  
	case issueExposureData  
	case issueViewData  
	case timedData  
	case feedData  
	case userChannelContextData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.FollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
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
	let ctr : 5´ // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case personalizationFeatureID  
	case ctr  
 }

 struct NewsAnalytics.FollowingViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let followingData : å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
	let viewData : ViewData
	let followingData : FollowingData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let magazineCategoryData : {ã
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : Ωä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Øä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let viewData : ViewData
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
	case userBundleSubscriptionContextData  
	case channelData  
	case adData  
	case articleExposureContextData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : g†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : K†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : yù
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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

 struct NewsAnalytics.ReplicaAdvertisementEngagementEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let backendArticleVersion : 5´ // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bodyTextLength : Wí // +0x30
	let hasVideo : Bool // +0x39
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisherArticleVersion : 5´ // +0x40
	let referencedArticleID : String? // +0x48
	let role : Role // +0x58
	let topicIDs : [String] // +0x60
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
	let identifier : ´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : ´ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case position  
 }

 struct NewsAnalytics.SearchResultsReturnedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : Òà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchResultsData : „à
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedbackData : ùà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : Ÿö
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorData : eà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
WARNING: couldn't find address 0x284ac00076810 (0x4ac00076810) in binary!
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let articleCount : 5´ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureCount : 5´ // +0x18
	let appearanceType : WidgetAppearanceType // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let contentFetchDate : 5´ // +0x28
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case articleCount  
	case articleExposureCount  
	case appearanceType  
	case contentFetchDate  
 }

 class NewsAnalytics.ANFComponentExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.PDFPageViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pdfPageContext : má
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : ôê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : _á
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	case issueExposureData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let trackDuration : ´ // +0x0
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
	let jsonDecoder : ·õ
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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

 class NewsAnalytics.SessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionManager : YÜ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tracker : ÛÜ
	let cloudContext : FCCloudContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	let client : ≈Ü
	var window : UIWindow?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2ae6c00076790 (0x66c00076790) in binary!
	0x2a77f  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2a82800076768 (0x2800076768) in binary!
	0x265a7  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2659b00076fe8 (0x59b00076fe8) in binary!
	0x29850  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2658300076fe8 (0x58300076fe8) in binary!
	0x26577  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x2a7e000076710 (0x7e000076710) in binary!
	0x2a7d4  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x28244000766e8 (0x244000766e8) in binary!
	0x26547  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x283cc00076730 (0x3cc00076730) in binary!
	0x2652f  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x694fffdb118  @objc SessionObserver.(null) <stripped>
	0xfffdb370  @objc SessionObserver.›Lãe∞Ë¢S <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x54e3a4d4152  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x636974796c616e41 (0x4796c616e41) in binary!
	0x7654e3a5443  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0xa31 (0xa31) in binary!
	0x0  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x36568636143  @objc SessionObserver.(null) <stripped>
WARNING: couldn't find address 0x5200006574 (0x5200006574) in binary!
	0x3b0ffe03ef8  @objc SessionObserver.(null) <stripped>

	// Swift methods
	0xff280  class func SessionObserver.__allocating_init(sessionManager:cloudContext:client:) // init 
 }

 struct NewsAnalytics.NotificationData {

	// Properties
	let notificationID : String // +0x0
	let viewFromNotification : Bool // +0x10
	let senderChannelID : String? // +0x18
	let sourceChannelID : String? // +0x28
	let notificationArticleID : String? // +0x38
	let notificationType : NotificationType // +0x48
	let isNewIssueNotificationEnabled : Bool? // +0x49
	let isMarketingNotificationEnabled : Bool? // +0x4a
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case notificationID  
	case viewFromNotification  
	case senderChannelID  
	case sourceChannelID  
	case notificationArticleID  
	case notificationType  
	case isNewIssueNotificationEnabled  
	case isMarketingNotificationEnabled  
 }

 struct NewsAnalytics.EOAGroupExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : ›è
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : g†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : K†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementCompletedData : Ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
	case orientationData  
	case articleExposureContextData  
 }

 struct NewsAnalytics.HeadlineExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Øä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : AÑ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleViewData : ›è
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let feedData : FeedData
	let groupData : GroupData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : ßê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : _á
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : ôê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationTagData : ãê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetEngagementData : ]É
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : }ê
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscriptionData : SubscriptionData
	let referralData : ReferralData
	let campaignData : CampaignData
	let notificationData : NotificationData
	let notificationTagData : NotificationTagData
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
	case notificationTagData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetData : ÎÇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let alternateHeadlineData : ›Ç
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : AÑ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let widgetData : WidgetData
	let alternateHeadlineData : AlternateHeadlineData
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let groupData : GroupData
	let tagData : TagData
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let mediaDuration : )ã // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaType  
	case mediaID  
	case mediaDuration  
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

 struct NewsAnalytics.VideoAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdData : √Å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let videoAdData : VideoAdData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case userBundleSubscriptionContextData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case videoAdData  
	case adPlacementData  
	case adContentData  
 }

 struct NewsAnalytics.ArticleViewResumeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Øä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : AÑ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : _á
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : ôê
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : s°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let engagementData : ØÄ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetEngagementData : ]É
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referringArticleData : °Ä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : Òà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseOffersData : ìÄ
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case surfacedByTopicID  
	case surfacedByChannelID  
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
	let mediaTimePlayed : 5´ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
 }

 class NewsAnalytics.HeadlineExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.SubscriptionOrigin {

	// Properties
	case unknown  
	case news  
	case appstore  
	case web  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userBundleSubscriptionContextData  
	case adPlacementData  
	case adContentData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let issueData : IssueData
	let issueExposureData : IssueExposureData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	case issueExposureData  
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

 struct NewsAnalytics.SearchData {

	// Properties
	let searchString : String // +0x0
	let completedString : String? // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case searchString  
	case completedString  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : Ωä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Øä
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let actionData : ActionData
	let feedData : FeedData
	let groupData : GroupData
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseRestoreListData : ï}
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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

 struct NewsAnalytics.BannerAdImpressionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adStateData : #}
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let viewData : ViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData
	let feedData : FeedData
	let adStateData : AdStateData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case timedData  
	case userBundleSubscriptionContextData  
	case articleData  
	case channelData  
	case groupData  
	case feedData  
	case adStateData  
	case adPlacementData  
	case adContentData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : Òà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Iõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionResultData : s|
WARNING: couldn't find address 0x0 (0x0) in binary!
	let storeKitErrorData : e|
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adReferralData : W|
WARNING: couldn't find address 0x0 (0x0) in binary!
	let amsErrorData : I|
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let articleData : ArticleData
	let channelData : ChannelData
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
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case articleData  
	case channelData  
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
 }

 class NewsAnalytics.EmailSignupEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.NotificationTagData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
 }

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
	let articleHeadlineTreatmentId : ´ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleHeadlineTreatmentState  
	case articleHeadlineTreatmentId  
 }

 struct NewsAnalytics.ArticleSaveEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : =†
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : ez
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : Wz
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : Iz
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : ez
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : Wz
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : Iz
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementOriginationData : √x
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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

 enum NewsAnalytics.PaywallConfigOfferType {

	// Properties
	case unknown  
	case newsPlus  
	case bOffer  
	case sBundle  
	case pDelta  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let urlData : ï
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let position : ´ // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
	case position  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let orientationData : OrientationData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case userBundleSubscriptionContextData  
	case orientationData  
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
	let personalizationService : +}

	// Swift methods
 }

 struct NewsAnalytics.GroupData {

	// Properties
	let groupLocation : GroupLocation // +0x0
	let groupType : GroupType // +0x1
	let groupID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupCount : ´ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupPosition : ´ // +0x1c
	let groupedArticleIDs : [String]? // +0x20
	let groupedIssueIDs : [String]? // +0x28
	let curatedSubtype : String? // +0x30
	let layoutIDs : [String]? // +0x40
	let formationReason : GroupFormationReason // +0x48
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : Òà
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchSelectionData : ∑u
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchResultsData : „à
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let errorDescription : String? // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case status  
	case error  
	case errorDescription  
 }

 class NewsAnalytics.MediaEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedPositionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : ´ // +0x0
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : K†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let articleData : ArticleData
	let channelData : ChannelData
	let anfComponentData : ANFComponentData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let channelCount : ´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topicCount : ´ // +0x4
	let subscribedTagList : SubscribedTagListData // +0x8
	let autoSubscribedTagList : AutoSubscribedTagListData // +0x10
	let paidSubscribedTagList : PaidSubscribedTagListData // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case channelCount  
	case topicCount  
	case subscribedTagList  
	case autoSubscribedTagList  
	case paidSubscribedTagList  
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
	let jsonDecoder : ·õ
	var session : Session

	// Swift methods
 }

 struct NewsAnalytics.ViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
	let viewData : ViewData // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewData  
 }

 struct NewsAnalytics.PaywallExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : sõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : eõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ;û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : [ô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : √û
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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
	let startTime : 5´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dnsDuration : 5´ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let connectDuration : 5´ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestDuration : 5´ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let responseDuration : 5´ // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let responseSize : 5´ // +0x28
	let cacheState : CacheState // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statusCode : 5´ // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorCode : 5´ // +0x40
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

 class NewsAnalytics.DynamicEndpoint : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appConfigurationManager : FCNewsAppConfigurationManager
	let environment : FCEndpointEnvironment

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x283ac000766a8 (0x3ac000766a8) in binary!
	0x283a0  @objc DynamicEndpoint.(null) <stripped>
WARNING: couldn't find address 0x2839400076680 (0x39400076680) in binary!
	0x0  @objc DynamicEndpoint.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x4796c616e41  @objc DynamicEndpoint.(null) <stripped>

	// Swift methods
	0x1d99f0  class func DynamicEndpoint.__allocating_init(appConfigurationManager:) // init 
 }

 struct NewsAnalytics.MediaEngagementData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaTimePlayed : 5´ // +0x0
	let mediaUserAction : MediaUserAction // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : ´ // +0xc
	let mediaPlayMethod : MediaPlayMethod // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
	case mediaUserAction  
	case position  
	case mediaPlayMethod  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollStartData : 7r
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollEndData : )r
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : Ò°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : „°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : ´°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : π°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let issueExposureData : IssueExposureData
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
	case issueExposureData  
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : «°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadLocationData : €q
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadStateData : Õq
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadData : øq
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
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

 struct NewsAnalytics.AdContentData {

	// Properties
	let contentID : String // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case contentID  
 }

 struct NewsAnalytics.SubscriptionOffersExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adReferralData : W|
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseOffersData : ìÄ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Wõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Iõ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionAdLocationData : +q
 }

 struct NewsAnalytics.Model {

	// Properties
	let adReferralData : AdReferralData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : ’°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : iô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : _á
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let searchData : Òà
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
	let feedData : FeedData
	let viewData : ViewData
	let orientationData : OrientationData
	let campaignData : CampaignData
	let referralData : ReferralData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let searchData : SearchData
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
 }

 struct NewsAnalytics.AutoSubscribedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let potraitCount : ´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let safariCount : ´ // +0x4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let appsAutoSubscribedCount : ´ // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let internalAutoSubscribedCount : ´ // +0xc
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
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ˇ°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : Å°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdData : √Å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAdEngagementData : Wp
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adPlacementData : ˇò
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adContentData : Òò
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
	let viewData : ViewData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let videoAdData : VideoAdData
	let videoAdEngagementData : VideoAdEngagementData
	let adPlacementData : AdPlacementData
	let adContentData : AdContentData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case viewData  
	case userBundleSubscriptionContextData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case videoAdData  
	case videoAdEngagementData  
	case adPlacementData  
	case adContentData  
 }

 struct NewsAnalytics.WebEmbedExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : )¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : u†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : e°
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : )ú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : AÑ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : …ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : è°
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : 1¢
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : [¢
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
	case readingHistoryCleared  
	case forceQuit  
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
	let duration : ´ // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case duration  
 }

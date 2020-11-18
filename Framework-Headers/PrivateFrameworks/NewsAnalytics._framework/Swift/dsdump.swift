 protocol NewsAnalytics.PersonalizationEventProcessorType // 1 requirements
 {
	// class base protocol
 }
 protocol NewsAnalytics.FeldsparEventTranslatorType // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.FollowLocationEventTranslator // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.BlockLocationEventTranslator // 1 requirements
 {
	// method
 }
 protocol NewsAnalytics.ArticleLikeLocationEventTranslator // 1 requirements
 {
	// method
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userStartDate : 'w // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ageBracket : 	w // +0x18
	let ageBracketConfidenceLevel : Float // +0x1c
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gender : 	w // +0x20
	let genderConfidenceLevel : Float // +0x24
	let userStorefrontID : String // +0x28
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userID  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : Go
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
 }

 enum NewsAnalytics.ICloudAccountState {

	// Properties
	case unknown  
	case loggenIn  
	case loggedOut  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : Ûn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementData : Ân
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : ◊n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
 }

 struct NewsAnalytics.WebEmbedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : …n
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let webEmbedData : WebEmbedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case webEmbedData  
 }

 enum NewsAnalytics.ActionMethod {

	// Properties
	case unknown  
	case sharrow  
	case contextMenu  
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
	let timePlayed : 'w // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deltaTimePlayed : 'w // +0x8
	let userAction : MediaUserAction // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 	w // +0x14
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
	let iadCampaign : String // +0x0
	let iadLine : String // +0x10
	let iadAd : String // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case iadCampaign  
	case iadLine  
	case iadAd  
 }

 struct NewsAnalytics.ArticleLikeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
 }

 enum NewsAnalytics.PurchaseType {

	// Properties
	case unknown  
	case alaCarte  
	case bundle  
 }

 struct NewsAnalytics.GroupExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : ≠n
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let groupData : GroupData
	let feedData : FeedData
	let viewData : ViewData
	let tagData : TagData
	let sectionData : GroupSectionData
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : Ûn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : ◊n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : ün
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ën
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let feedPositionData : FeedPositionData
	let viewData : ViewData
	let sectionData : SectionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case feedPositionData  
	case viewData  
	case sectionData  
	case userBundleSubscriptionContextData  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Kn
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : =n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let resultData : ResultData
	let paywallData : PaywallData
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case resultData  
	case paywallData  
	case purchaseData  
	case purchaseSessionData  
 }

 struct NewsAnalytics.ListenSheetEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let listenSheetActionData : /n
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 enum NewsAnalytics.IssueViewContext {

	// Properties
	case unknown  
	case disaggregated  
	case issue  
 }

 struct NewsAnalytics.NotificationSubscribeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let campaignData : CampaignData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case campaignData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
 }

 enum NewsAnalytics.TrackVariant {

	// Properties
	case unknown  
	case sample  
	case full  
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
	let galleryImageCount : 	w // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case galleryType  
	case galleryID  
	case galleryImageCount  
 }

 class NewsAnalytics.ArticleShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.NotificationUnsubscribeEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let campaignData : CampaignData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case campaignData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
 }

 class NewsAnalytics.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x4ea00  @objc Assembly.assemblies <stripped>
	0x4ebc0  @objc Assembly.init <stripped>
	0x4eaa0  @objc Assembly..cxx_destruct <stripped>
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

 class NewsAnalytics.EOAGroupExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.NewsDESEventProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var clickCount : Int // +0x10 (0x8)
	var impressionCount : Int // +0x18 (0x8)
	var events : [[String : Any]] // +0x20 (0x8)
	var articleIDs : Set<String> // +0x28 (0x8)
	let desRecordStore : DESRecordStore? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDate : …] // +0x0 (0x0)
	let dateFormatter : NSISO8601DateFormatter // +0x0 (0x8)
	let cloudContext : FCCloudContext // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonEncoder : [] // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : E] // +0x0 (0x8)

	// Swift methods
 }

 class NewsAnalytics.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.InGroupPositionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 	w // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case position  
 }

 struct NewsAnalytics.Analytics { }

 struct NewsAnalytics.Debugging { }

 struct NewsAnalytics.External { }

 struct NewsAnalytics.Personalization { }

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

 struct NewsAnalytics.SessionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let utcOffset : 	w // +0x0
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
 }

 struct NewsAnalytics.StoreKitErrorData {

	// Properties
	let storeKitError : StoreKitError // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case storeKitError  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData
	let groupData : GroupData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case feedData  
	case groupData  
	case userBundleSubscriptionContextData  
	case issueData  
 }

 class NewsAnalytics.TrackerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x62620  @objc TrackerAssembly.init <stripped>
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
	0x65300  @objc SessionAccess.accessorQueue <stripped>

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

 struct NewsAnalytics.UserBundleSubscriptionContextData {

	// Properties
	let bundleSubscriptionStatus : BundleSubscriptionStatus // +0x0
	let bundleSubscriptionPurchaseID : String? // +0x8
	let isBundleSubscriptionPurchaser : Bool // +0x18
	let isAmplifyUser : Bool // +0x19
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case bundleSubscriptionStatus  
	case bundleSubscriptionPurchaseID  
	case isBundleSubscriptionPurchaser  
	case isAmplifyUser  
 }

 class NewsAnalytics.SubscribeButtonTapEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.EmailSignupEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userActionData : Ìm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let newsletterSubscriptionData : ﬂm
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let userActionData : EmailSignupUserActionData
	let newsletterSubscriptionData : NewsletterSubscriptionData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case userActionData  
	case newsletterSubscriptionData  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : —m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : √m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationTagData : µm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : ßm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endReason : ôm
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 struct NewsAnalytics.EOAFeedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : ãm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : +o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let viewData : ViewData
	let feedData : FeedData
	let orientationData : OrientationData
	let hostArticleViewData : ArticleViewData
	let hostArticleNewsArticleData : ArticleData
	let hostArticleChannelData : ChannelData
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
	let jsonDecoder : E] // +0x28 (0x8)
	var session : Session // +0x30 (0x128)
	var eventQueue : [NTPBEvent] // +0x158 (0x8)

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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let groupData : GroupData
	let feedData : FeedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case groupData  
	case feedData  
 }

 struct NewsAnalytics.PDFPageContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pageIndices :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pageCount : 	w // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case pageIndices  
	case pageCount  
 }

 struct NewsAnalytics.UnblockTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let groupData : GroupData
	let feedData : FeedData
	let articleData : ArticleData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case groupData  
	case feedData  
	case articleData  
 }

 struct NewsAnalytics.WidgetEngagementData {

	// Properties
	let widgetArticleID : String // +0x0
	let widgetSourceChannelID : String // +0x10
	let widgetSectionID : String // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetSectionDisplayRank : 'w // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetArticleRankInSection : 'w // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetArticleRank : 'w // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetArticleCount : 'w // +0x48
	let widgetEngagementType : WidgetEngagementType // +0x50
	let webEmbedData : WebEmbedData // +0x58
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case widgetArticleID  
	case widgetSourceChannelID  
	case widgetSectionID  
	case widgetSectionDisplayRank  
	case widgetArticleRankInSection  
	case widgetArticleRank  
	case widgetArticleCount  
	case widgetEngagementType  
	case webEmbedData  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let channelData : ChannelData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 class NewsAnalytics.FollowTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FollowLocationEventTranslator {
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

 struct NewsAnalytics.FollowingViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let followingData : }m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
 }

 struct NewsAnalytics.Model {

	// Properties
	let viewData : ViewData
	let followingData : FollowingData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case viewData  
	case followingData  
	case eventData  
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

 struct NewsAnalytics.MagazineCategoryExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let magazineCategoryData : om
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let magazineCategoryData : MagazineCategoryData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case magazineCategoryData  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : am
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : Sm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Em
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : Ûn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : ◊n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let galleryData : ün
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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

 struct NewsAnalytics.ArticleData {

	// Properties
	let alternateHeadlineData : AlternateHeadlineData // +0x0
	let articleID : String // +0x8
	let articleAccessType : ArticleAccessType // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let backendArticleVersion : 'w // +0x20
	let hasVideo : Bool // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisherArticleVersion : 'w // +0x30
	let articleType : ArticleType // +0x38
	let role : Role // +0x39
	let referencedArticleID : String? // +0x40
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case alternateHeadlineData  
	case articleID  
	case articleAccessType  
	case backendArticleVersion  
	case hasVideo  
	case publisherArticleVersion  
	case articleType  
	case role  
	case referencedArticleID  
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
	let identifier : 	w // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 	w // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case identifier  
	case position  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionData : 7m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedbackData : )m
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let articleData : ArticleData
	let channelData : ChannelData
	let tagData : TagData
	let sessionData : SessionData
	let issueData : IssueData
	let feedbackData : ArticleFeedbackData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case articleData  
	case channelData  
	case tagData  
	case sessionData  
	case issueData  
	case feedbackData  
 }

 struct NewsAnalytics.SubscriptionWebAuthenticationEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultData : =n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let errorData : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
 }

 class NewsAnalytics.DebugAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xaff20  @objc DebugAssembly.init <stripped>
 }

 struct NewsAnalytics.FeldsparEvent {

	// Properties
	let event : NTPBEvent // +0x0
 }

 class NewsAnalytics.ANFComponentExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.PDFPageViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pdfPageContext : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : √m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˇl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
	let trackDuration : 	w // +0x0
	let trackVariant : TrackVariant // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case trackDuration  
	case trackVariant  
 }

 class NewsAnalytics.IssueShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.SessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionManager : ÂK // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tracker : oL // +0x10 (0x8)
	let cloudContext : FCCloudContext // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let client : QL // +0x20 (0x8)
	var window : UIWindow? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0xbe360  @objc SessionObserver.dealloc <stripped>
	0xbe5d0  @objc SessionObserver.init <stripped>
	0xbe380  @objc SessionObserver..cxx_destruct <stripped>

	// Swift methods
	0xbe080  class func SessionObserver.__allocating_init(sessionManager:cloudContext:client:) // init 
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleViewData : ãm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleNewsArticleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hostArticleChannelData : +o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let groupData : GroupData
	let feedData : FeedData
	let hostArticleViewData : ArticleViewData
	let hostArticleNewsArticleData : ArticleData
	let hostArticleChannelData : ChannelData
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

 class NewsAnalytics.ArticleDislikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.MediaEngageCompleteEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaData : Ûn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : ◊n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaEngagementCompletedData : Òl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
 }

 struct NewsAnalytics.HeadlineExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Em
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ën
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : „l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : ’l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleViewData : ãm
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 struct NewsAnalytics.Session {

	// Properties
	let sessionData : SessionData // +0x0
	let userData : UserData // +0x60
	let orientationData : OrientationData // +0x98
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData // +0xa0
	let userSubscriptionContextData : UserSubscriptionContextData // +0xc0
	let windowData : WindowData // +0xd0
	let appData : AppData // +0xe0
	let deviceData : DeviceData // +0x100
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionData : —m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˇl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : √m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationTagData : µm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetEngagementData : «l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let autoSubscribedData : ßm
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
	let mediaDuration : ØT // +0x18
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Em
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ën
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : „l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : Go
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˇl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationData : √m
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewContextData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let engagementData : πl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleExposureContextData : ’l
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let adData : AdData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let mediaTimePlayed : 'w // +0x0
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
	let id : String // +0x10
	let role : String // +0x20
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case metadata  
	case id  
	case role  
 }

 enum NewsAnalytics.NewsletterSubscriptionType {

	// Properties
	case unknown  
	case none  
	case newsletter  
	case personalizedNewsletter  
 }

 struct NewsAnalytics.IssueExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureContextData : Go
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ën
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let issueData : IssueData
	let issueExposureData : IssueExposureData
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : am
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareContextData : Sm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adData : Em
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
 }

 class NewsAnalytics.FeedViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleLikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArticleLikeLocationEventTranslator {
	// Swift methods
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

 struct NewsAnalytics.SubscribeButtonTapEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Kn
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
 }

 struct NewsAnalytics.SubscriptionResultEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionResultData : ´l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let storeKitErrorData : ùl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let adReferralData : èl
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
	let articleHeadlineTreatmentId : 	w // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleHeadlineTreatmentState  
	case articleHeadlineTreatmentId  
 }

 struct NewsAnalytics.ArticleSaveEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionData : am
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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

 struct NewsAnalytics.FollowTagEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let groupData : GroupData
	let feedData : FeedData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case groupData  
	case feedData  
 }

 struct NewsAnalytics.AudioEngagementCompletedEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : Ål
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : sl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : el
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let groupData : GroupData
	let feedData : FeedData
	let articleData : ArticleData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case groupData  
	case feedData  
	case articleData  
 }

 struct NewsAnalytics.IssueData {

	// Properties
	let issueID : String // +0x0
	let isBundlePaid : Bool // +0x10
	let issueType : IssueType // +0x11
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case issueID  
	case isBundlePaid  
	case issueType  
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trackData : Ål
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementData : sl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackData : el
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioEngagementOriginationData : Wl
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 struct NewsAnalytics.PaidSubscribedTagListData {

	// Properties
	let tagIDs : [String] // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case tagIDs  
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

 enum NewsAnalytics.SubscribeButtonTargetType {

	// Properties
	case unknown  
	case purchaseSheet  
	case landingPage  
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

 class NewsAnalytics.MediaExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.GroupData {

	// Properties
	let groupLocation : GroupLocation // +0x0
	let groupType : GroupType // +0x1
	let groupID : String // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupCount : 	w // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupPosition : 	w // +0x1c
	let groupedArticleIDs : [String]? // +0x20
	let groupedIssueIDs : [String]? // +0x28
	let curatedSubtype : String? // +0x30
	let layoutIDs : [String]? // +0x40
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

 class NewsAnalytics.MediaEngageEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedPositionData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 	w // +0x0
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anfComponentData : ◊n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let channelCount : 	w // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topicCount : 	w // +0x4
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
	let eventStreamObserver : NSSNewsAnalyticsPBEventStreamObserver? // +0x10 (0x8)
	let eventTranslators : FeldsparEventTranslatorType // +0x18 (0x8)
	let configurationManager : FCConfigurationManager // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let jsonDecoder : E] // +0x28 (0x8)
	var session : Session // +0x30 (0x128)

	// Swift methods
 }

 struct NewsAnalytics.ViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let paywallData : un
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseData : gn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sectionData : Én
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tagData : ªn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationSubscribedData : n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
	let tagData : TagData
	let notificationSubscribedData : NotificationSubscribedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case tagData  
	case notificationSubscribedData  
	case userBundleSubscriptionContextData  
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
	let appConfigurationManager : FCNewsAppConfigurationManager // +0x10 (0x8)
	let environment : FCEndpointEnvironment // +0x18 (0x8)

	// Swift methods
	0x156e80  class func DynamicEndpoint.__allocating_init(appConfigurationManager:) // init 
 }

 struct NewsAnalytics.MediaEngagementData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaTimePlayed : 'w // +0x0
	let mediaUserAction : MediaUserAction // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let position : 	w // +0xc
	let mediaPlayMethod : MediaPlayMethod // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
	case mediaUserAction  
	case position  
	case mediaPlayMethod  
 }

 struct NewsAnalytics.ArticleScrollEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleData : ∑o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollStartData : Il
WARNING: couldn't find address 0x0 (0x0) in binary!
	let scrollEndData : ;l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let articleScienceData : õo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userChannelContextData : ço
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueViewData : Uo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueExposureData : co
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
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

 struct NewsAnalytics.DownloadIssueEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let issueData : qo
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadLocationData : -l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadStateData : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadData : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
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

 struct NewsAnalytics.SubscriptionOffersExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let channelData : +o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseOffersData : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let purchaseSessionData : Yn
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userBundleSubscriptionContextData : 9o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscribeButtonContextData : Kn
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let channelData : ChannelData
	let campaignData : CampaignData
	let purchaseOffersData : PurchaseOffersData
	let purchaseSessionData : PurchaseSessionData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let subscribeButtonContextData : SubscribeButtonContextData
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case channelData  
	case campaignData  
	case purchaseOffersData  
	case purchaseSessionData  
	case userBundleSubscriptionContextData  
	case subscribeButtonContextData  
 }

 class NewsAnalytics.PaywallExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedViewEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let viewData : ©o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let orientationData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let campaignData : !n
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referralData : ˇl
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let feedData : FeedData
	let viewData : ViewData
	let orientationData : OrientationData
	let campaignData : CampaignData
	let referralData : ReferralData
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
 }

 struct NewsAnalytics.AutoSubscribedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let potraitCount : 	w // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let safariCount : 	w // +0x4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let appsAutoSubscribedCount : 	w // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let internalAutoSubscribedCount : 	w // +0xc
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

 struct NewsAnalytics.WebEmbedExposureEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : ”o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : ≈o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedData : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedPositionData : ën
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inGroupPositionData : „l
WARNING: couldn't find address 0x0 (0x0) in binary!
	let webEmbedData : …n
 }

 struct NewsAnalytics.Model {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : k
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timedData : Ek
	let groupData : GroupData
	let feedData : FeedData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData
	let webEmbedData : WebEmbedData
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
	var width : il
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : il
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : il
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : il
 }

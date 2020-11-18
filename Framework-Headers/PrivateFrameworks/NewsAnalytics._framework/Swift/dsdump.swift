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

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
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
	let userStartDate : Int64 // +0x10
	let userStorefrontID : String // +0x18
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case userID  
	case userStartDate  
	case userStorefrontID  
 }

 struct NewsAnalytics.ReplicaAdvertisementViewEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let viewData : EventProperty<ViewData>
	let articleScienceData : EventProperty<ScienceData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let orientationData : EventProperty<OrientationData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureContextData : EventProperty<IssueExposureContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let channelData : EventProperty<ChannelData>
	let issueViewContextData : EventProperty<IssueViewContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let orientationData : OrientationData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData?
	let issueExposureContextData : IssueExposureContextData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let issueViewContextData : IssueViewContextData?
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let mediaData : EventProperty<MediaData>
	let mediaEngagementData : EventProperty<MediaEngagementData>
	let viewData : EventProperty<ViewData>
	let anfComponentData : EventProperty<ANFComponentData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let mediaData : MediaData
	let mediaEngagementData : MediaEngagementData
	let viewData : ViewData
	let anfComponentData : ANFComponentData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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

 enum NewsAnalytics.ActionMethod {

	// Properties
	case unknown  
	case sharrow  
	case contextMenu  
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData?
	let groupData : GroupData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let viewData : EventProperty<ViewData>
	let tagData : EventProperty<TagData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let groupData : GroupData
	let feedData : FeedData
	let viewData : ViewData
	let tagData : TagData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case timedData  
	case groupData  
	case feedData  
	case viewData  
	case tagData  
 }

 class NewsAnalytics.ReplicaAdvertisementViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
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
 }

 struct NewsAnalytics.MediaViewEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let mediaData : EventProperty<MediaData>
	let viewData : EventProperty<ViewData>
	let anfComponentData : EventProperty<ANFComponentData>
	let galleryData : EventProperty<GalleryData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData?
	let galleryData : GalleryData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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
	let appBuild : Int32 // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case appVersion  
	case appBuild  
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let paywallData : EventProperty<PaywallData>
	let issueData : EventProperty<IssueData>
	let purchaseData : EventProperty<PurchaseData>
	let purchaseSessionData : EventProperty<PurchaseSessionData>
	let sectionData : EventProperty<SectionData>
	let viewData : EventProperty<ViewData>
	let subscribeButtonContextData : EventProperty<SubscribeButtonContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData?
	let channelData : ChannelData?
	let feedData : FeedData?
	let groupData : GroupData?
	let paywallData : PaywallData?
	let issueData : IssueData?
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let sectionData : SectionData?
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
	let eventData : EventProperty<EventData>
	let resultData : EventProperty<ResultData>
	let paywallData : EventProperty<PaywallData>
	let purchaseData : EventProperty<PurchaseData>
	let purchaseSessionData : EventProperty<PurchaseSessionData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let resultData : ResultData
	let paywallData : PaywallData?
	let purchaseData : PurchaseData?
	let purchaseSessionData : PurchaseSessionData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case resultData  
	case paywallData  
	case purchaseData  
	case purchaseSessionData  
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

 struct NewsAnalytics.ActionData {

	// Properties
	let actionMethod : ActionMethod // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case actionMethod  
 }

 struct NewsAnalytics.GalleryData {

	// Properties
	let galleryType : GalleryType // +0x0
	let galleryID : String // +0x8
	let galleryImageCount : Int32 // +0x18
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

 class NewsAnalytics.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x48bb0  @objc Assembly.assemblies <stripped>
	0x48db0  @objc Assembly.init <stripped>
	0x48f20  @objc Assembly..cxx_destruct <stripped>
 }

 class NewsAnalytics.MediaEngageCompleteEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.InGroupPositionData {

	// Properties
	let position : Int32 // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case position  
 }

 struct NewsAnalytics.Analytics { }

 struct NewsAnalytics.Debugging { }

 struct NewsAnalytics.External { }

 struct NewsAnalytics.SessionData {

	// Properties
	let utcOffset : Int32 // +0x0
	let languageCode : String? // +0x8
	let countryCode : String? // +0x18
	let iCloudAccountState : ICloudAccountState // +0x28
	let productType : String // +0x30
	let userSegmentationTreatmentIDs : [Int64] // +0x40
	let userSegmentationSegmentSetIDs : [Int32] // +0x48
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData?
	let groupData : GroupData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
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
	0x54e90  @objc TrackerAssembly.init <stripped>
 }

 class NewsAnalytics.SessionAccess : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let accessorQueue : OS_dispatch_queue // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x567e0  @objc SessionAccess.accessorQueue <stripped>

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

 class NewsAnalytics.ReplicaAdvertisementEngagementEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.UserType {

	// Properties
	case unknown  
	case new  
	case returning  
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

 enum NewsAnalytics.DevicePlatform {

	// Properties
	case unknown  
	case iOS  
	case macOS  
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
	let eventData : EventProperty<EventData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
	case groupData  
	case feedData  
 }

 struct NewsAnalytics.PDFPageContext {

	// Properties
	let pageIndices : [Int32] // +0x0
	let pageCount : Int32 // +0x8
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case pageIndices  
	case pageCount  
 }

 struct NewsAnalytics.UnblockTagEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let articleData : EventProperty<ArticleData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let articleData : ArticleData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
	case groupData  
	case feedData  
	case articleData  
 }

 enum NewsAnalytics.DownloadLocation {

	// Properties
	case unknown  
	case magazine  
	case forYou  
	case channel  
	case background  
 }

 class NewsAnalytics.DownloadIssueEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueTocViewEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let channelData : EventProperty<ChannelData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let issueViewData : EventProperty<IssueViewData>
	let timedData : EventProperty<TimedData>
	let feedData : EventProperty<FeedData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let channelData : ChannelData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
	let timedData : TimedData
	let feedData : FeedData?
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let magazineCategoryData : EventProperty<MagazineCategoryData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
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

 struct NewsAnalytics.ArticleShareEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let articleData : EventProperty<ArticleData>
	let actionData : EventProperty<ActionData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let viewData : EventProperty<ViewData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let shareContextData : EventProperty<ShareContextData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let channelData : EventProperty<ChannelData>
	let adData : EventProperty<AdData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData?
	let groupData : GroupData?
	let viewData : ViewData?
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData?
	let issueExposureData : IssueExposureData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let adData : AdData?
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let mediaData : EventProperty<MediaData>
	let viewData : EventProperty<ViewData>
	let anfComponentData : EventProperty<ANFComponentData>
	let galleryData : EventProperty<GalleryData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData?
	let galleryData : GalleryData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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

 struct NewsAnalytics.ReplicaAdvertisementEngagementEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let viewData : EventProperty<ViewData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let viewData : ViewData
	let articleData : ArticleData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueData : IssueData
	let issueViewData : IssueViewData?
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
	let articleID : String // +0x0
	let articleAccessType : ArticleAccessType // +0x10
	let publisherArticleVersion : Int64 // +0x18
	let articleType : ArticleType // +0x20
	let role : Role // +0x21
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleID  
	case articleAccessType  
	case publisherArticleVersion  
	case articleType  
	case role  
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
	let identifier : Int32 // +0x0
	let position : Int32 // +0x4
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let tagData : EventProperty<TagData>
	let sessionData : EventProperty<SessionData>
	let issueData : EventProperty<IssueData>
	let feedbackData : EventProperty<ArticleFeedbackData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let tagData : TagData
	let sessionData : SessionData?
	let issueData : IssueData?
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
	let eventData : EventProperty<EventData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let resultData : EventProperty<ResultData>
	let campaignData : EventProperty<CampaignData>
	let errorData : EventProperty<ErrorData>
	let sectionData : EventProperty<SectionData>
	let viewData : EventProperty<ViewData>
	let purchaseData : EventProperty<PurchaseData>
	let purchaseSessionData : EventProperty<PurchaseSessionData>
	let paywallData : EventProperty<PaywallData>
	let issueData : EventProperty<IssueData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let articleData : ArticleData?
	let channelData : ChannelData
	let feedData : FeedData?
	let groupData : GroupData?
	let resultData : ResultData
	let campaignData : CampaignData?
	let errorData : ErrorData?
	let sectionData : SectionData?
	let viewData : ViewData?
	let purchaseData : PurchaseData?
	let purchaseSessionData : PurchaseSessionData
	let paywallData : PaywallData
	let issueData : IssueData?
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
	0x9ef60  @objc DebugAssembly.init <stripped>
 }

 class NewsAnalytics.ANFComponentExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.PDFPageViewEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let issueViewData : EventProperty<IssueViewData>
	let channelData : EventProperty<ChannelData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let timedData : EventProperty<TimedData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let pdfPageContext : EventProperty<PDFPageContext>
	let campaignData : EventProperty<CampaignData>
	let notificationData : EventProperty<NotificationData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let referralData : EventProperty<ReferralData>
	let paywallData : EventProperty<PaywallData>
	let viewData : EventProperty<ViewData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let issueViewData : IssueViewData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let timedData : TimedData
	let feedData : FeedData?
	let groupData : GroupData?
	let pdfPageContext : PDFPageContext
	let campaignData : CampaignData?
	let notificationData : NotificationData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let referralData : ReferralData?
	let paywallData : PaywallData?
	let viewData : ViewData?
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
	let eventData : EventProperty<EventData>
	let viewData : EventProperty<ViewData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let viewData : ViewData
	let articleData : ArticleData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
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

 class NewsAnalytics.IssueShareEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.SessionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let sessionManager : SessionManager // +0x8 (0x8)
	let cloudContext : FCCloudContext // +0x10 (0x8)
	var window : UIWindow? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xf4e20  @objc SessionObserver.userInfoDidChangeFeldsparID:fromCloud: <stripped>
	0xf4090  @objc SessionObserver.pushSessionData <stripped>
	0xf1c80  @objc SessionObserver.pushUserSubscriptionContextData <stripped>
	0x7a740  @objc SessionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x604a0  @objc SessionObserver.pushOrientationData <stripped>
	0x1d320  @objc SessionObserver.bundleSubscriptionDidExpire: <stripped>
	0x1d320  @objc SessionObserver.bundleSubscriptionDidSubscribe: <stripped>
	0xb3000  @objc SessionObserver.dealloc <stripped>
	0xb3330  @objc SessionObserver.init <stripped>
	0xb3020  @objc SessionObserver..cxx_destruct <stripped>

	// Swift methods
 }

 struct NewsAnalytics.NotificationData {

	// Properties
	let notificationID : String // +0x0
	let viewFromNotification : Bool // +0x10
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case notificationID  
	case viewFromNotification  
 }

 class NewsAnalytics.ArticleScrollEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.UserSubscriptionContextData {

	// Properties
	let isPurchaser : Bool // +0x0
	let purchaseSources : [PurchaseSource] // +0x8
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
	let eventData : EventProperty<EventData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let mediaData : EventProperty<MediaData>
	let viewData : EventProperty<ViewData>
	let anfComponentData : EventProperty<ANFComponentData>
	let mediaEngagementCompletedData : EventProperty<MediaEngagementCompletedData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let articleData : ArticleData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let mediaData : MediaData
	let viewData : ViewData
	let anfComponentData : ANFComponentData?
	let mediaEngagementCompletedData : MediaEngagementCompletedData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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
	let eventData : EventProperty<EventData>
	let adData : EventProperty<AdData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let feedPositionData : EventProperty<FeedPositionData>
	let inGroupPositionData : EventProperty<InGroupPositionData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let articleScienceData : EventProperty<ScienceData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let channelData : EventProperty<ChannelData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let adData : AdData?
	let timedData : TimedData
	let articleData : ArticleData
	let feedPositionData : FeedPositionData
	let inGroupPositionData : InGroupPositionData?
	let feedData : FeedData
	let groupData : GroupData?
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueExposureData : IssueExposureData?
	let channelData : ChannelData
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
 }

 struct NewsAnalytics.Session {

	// Properties
	let sessionData : SessionData? // +0x0
	let userData : UserData? // +0x50
	let orientationData : OrientationData? // +0x78
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData? // +0x80
	let userSubscriptionContextData : UserSubscriptionContextData? // +0xa0
	let windowData : WindowData? // +0xb0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case sessionData  
	case userData  
	case orientationData  
	case userBundleSubscriptionContextData  
	case userSubscriptionContextData  
	case windowData  
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
 }

 class NewsAnalytics.UnblockTagEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.MediaData {

	// Properties
	let mediaType : MediaType // +0x0
	let mediaID : String // +0x8
	let mediaDuration : Int32? // +0x18
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
	case root  
	case saved  
	case search  
	case searchSeeMore  
	case softPaywall  
	case subscriptionsFound  
	case specialEvents  
	case videoPlayer  
	case welcome  
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
	let eventData : EventProperty<EventData>
	let adData : EventProperty<AdData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let feedPositionData : EventProperty<FeedPositionData>
	let inGroupPositionData : EventProperty<InGroupPositionData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let viewData : EventProperty<ViewData>
	let articleScienceData : EventProperty<ScienceData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let orientationData : EventProperty<OrientationData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureContextData : EventProperty<IssueExposureContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let channelData : EventProperty<ChannelData>
	let referralData : EventProperty<ReferralData>
	let paywallData : EventProperty<PaywallData>
	let campaignData : EventProperty<CampaignData>
	let notificationData : EventProperty<NotificationData>
	let issueViewContextData : EventProperty<IssueViewContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let adData : AdData?
	let timedData : TimedData
	let articleData : ArticleData
	let feedPositionData : FeedPositionData?
	let inGroupPositionData : InGroupPositionData?
	let feedData : FeedData?
	let groupData : GroupData?
	let viewData : ViewData
	let articleScienceData : ScienceData
	let userChannelContextData : UserChannelContextData
	let orientationData : OrientationData
	let issueData : IssueData?
	let issueExposureData : IssueExposureData?
	let issueViewData : IssueViewData?
	let issueExposureContextData : IssueExposureContextData?
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let referralData : ReferralData?
	let paywallData : PaywallData?
	let campaignData : CampaignData?
	let notificationData : NotificationData?
	let issueViewContextData : IssueViewContextData?
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
	let mediaTimePlayed : Int64 // +0x0
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

 struct NewsAnalytics.IssueExposureEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let issueData : EventProperty<IssueData>
	let issueExposureData : EventProperty<IssueExposureData>
	let timedData : EventProperty<TimedData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let issueScienceData : EventProperty<ScienceData>
	let channelData : EventProperty<ChannelData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let issueExposureContextData : EventProperty<IssueExposureContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let feedPositionData : EventProperty<FeedPositionData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let issueData : IssueData
	let issueExposureData : IssueExposureData
	let timedData : TimedData
	let feedData : FeedData?
	let groupData : GroupData?
	let issueScienceData : ScienceData
	let channelData : ChannelData
	let userChannelContextData : UserChannelContextData
	let issueExposureContextData : IssueExposureContextData?
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

 class NewsAnalytics.GroupExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.IssueShareEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let actionData : EventProperty<ActionData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let shareContextData : EventProperty<ShareContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let channelData : EventProperty<ChannelData>
	let adData : EventProperty<AdData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let actionData : ActionData
	let feedData : FeedData?
	let groupData : GroupData?
	let userChannelContextData : UserChannelContextData
	let shareContextData : ShareContextData
	let issueData : IssueData
	let issueViewData : IssueViewData
	let issueExposureData : IssueExposureData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let adData : AdData?
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
 }

 class NewsAnalytics.FeedViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleLikeEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum NewsAnalytics.SubscriptionStatus {

	// Properties
	case unknown  
	case subscribed  
	case notSubscribed  
 }

 struct NewsAnalytics.SubscribeButtonTapEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let viewData : EventProperty<ViewData>
	let sectionData : EventProperty<SectionData>
	let purchaseData : EventProperty<PurchaseData>
	let purchaseSessionData : EventProperty<PurchaseSessionData>
	let paywallData : EventProperty<PaywallData>
	let issueData : EventProperty<IssueData>
	let subscribeButtonContextData : EventProperty<SubscribeButtonContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let articleData : ArticleData?
	let channelData : ChannelData?
	let feedData : FeedData?
	let groupData : GroupData?
	let viewData : ViewData?
	let sectionData : SectionData?
	let purchaseData : PurchaseData?
	let purchaseSessionData : PurchaseSessionData?
	let paywallData : PaywallData?
	let issueData : IssueData?
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

 enum NewsAnalytics.PurchaseSource {

	// Properties
	case unknown  
	case appStore  
	case news  
	case web  
 }

 enum NewsAnalytics.GroupType {

	// Properties
	case unknown  
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
 }

 struct NewsAnalytics.ResultData {

	// Properties
	let result : ResultType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case result  
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
	let articleHeadlineTreatmentId : Int32 // +0x4
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case articleHeadlineTreatmentState  
	case articleHeadlineTreatmentId  
 }

 struct NewsAnalytics.ArticleSaveEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let articleData : EventProperty<ArticleData>
	let actionData : EventProperty<ActionData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let viewData : EventProperty<ViewData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let channelData : EventProperty<ChannelData>
	let issueData : EventProperty<IssueData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let articleData : ArticleData
	let actionData : ActionData
	let feedData : FeedData?
	let groupData : GroupData?
	let viewData : ViewData?
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let channelData : ChannelData
	let issueData : IssueData?
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
	let eventData : EventProperty<EventData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
	case groupData  
	case feedData  
 }

 struct NewsAnalytics.BlockTagEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let channelData : EventProperty<ChannelData>
	let groupData : EventProperty<GroupData>
	let feedData : EventProperty<FeedData>
	let articleData : EventProperty<ArticleData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let channelData : ChannelData
	let groupData : GroupData?
	let feedData : FeedData?
	let articleData : ArticleData?
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case eventData  
	case channelData  
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

 struct NewsAnalytics.PaywallData {

	// Properties
	let type : PaywallType // +0x0
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case type  
 }

 class NewsAnalytics.IssueTocViewEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
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
	let groupType : GroupType // +0x0
	let groupID : String // +0x8
	let groupCount : Int32 // +0x18
	let groupPosition : Int32 // +0x1c
	let groupedArticleIDs : [String]? // +0x20
	let groupedIssueIDs : [String]? // +0x28
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case groupType  
	case groupID  
	case groupCount  
	case groupPosition  
	case groupedArticleIDs  
	case groupedIssueIDs  
 }

 class NewsAnalytics.ArticleEngagementEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class NewsAnalytics.ArticleSaveEventEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
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
	let position : Int32 // +0x0
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let anfComponentData : EventProperty<ANFComponentData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
	let viewData : EventProperty<ViewData>
	let articleScienceData : EventProperty<ScienceData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let anfComponentData : ANFComponentData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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
	let eventTranslators : [FeldsparEventTranslatorType] // +0x18 (0x8)
	let configurationManager : FCConfigurationManager // +0x20 (0x8)
	let jsonDecoder : JSONDecoder // +0x28 (0x8)
	var session : Session? // +0x30 (0xc0)

	// Swift methods
 }

 struct NewsAnalytics.ViewEvent {

	// Properties
	let viewData : EventProperty<ViewData>
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
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let paywallData : EventProperty<PaywallData>
	let issueData : EventProperty<IssueData>
	let purchaseData : EventProperty<PurchaseData>
	let purchaseSessionData : EventProperty<PurchaseSessionData>
	let sectionData : EventProperty<SectionData>
	let viewData : EventProperty<ViewData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData?
	let channelData : ChannelData?
	let feedData : FeedData?
	let groupData : GroupData?
	let paywallData : PaywallData
	let issueData : IssueData?
	let purchaseData : PurchaseData
	let purchaseSessionData : PurchaseSessionData
	let sectionData : SectionData?
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
	let agedUserFeedbackScore : Double // +0x8
	let autoSubscribeCtr : Double // +0x10
	let computedGlobalScoreCoefficient : Double // +0x18
	let diversifiedPersonalizationScore : Double // +0x20
	let featureCtr : Double // +0x28
	let globalScore : Double // +0x30
	let paidNonPaidSubscriptionCtr : Double // +0x38
	let personalizationScore : Double // +0x40
	let subscribedChannelCtr : Double // +0x48
	let userFeedbackScore : Double // +0x50
	let fractionalCohortMembership : [FractionalCohortMembershipDetails] // +0x58
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case agedPersonalizationScore  
	case agedUserFeedbackScore  
	case autoSubscribeCtr  
	case computedGlobalScoreCoefficient  
	case diversifiedPersonalizationScore  
	case featureCtr  
	case globalScore  
	case paidNonPaidSubscriptionCtr  
	case personalizationScore  
	case subscribedChannelCtr  
	case userFeedbackScore  
	case fractionalCohortMembership  
 }

 struct NewsAnalytics.SubscribeButtonContextData {

	// Properties
	let location : SubscribeButtonLocation // +0x0
	let targetType : SubscribeButtonTargetType? // +0x1
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

 enum NewsAnalytics.Role {

	// Properties
	case unknown  
	case article  
	case cover  
	case replicaAdvertisement  
	case campaignLandingPage  
	case spotlight  
	case feature  
 }

 struct NewsAnalytics.MediaEngagementData {

	// Properties
	let mediaTimePlayed : Int64 // +0x0
	let mediaUserAction : MediaUserAction // +0x8
	let position : Int32 // +0xc
 }

 enum NewsAnalytics.CodingKeys {

	// Properties
	case mediaTimePlayed  
	case mediaUserAction  
	case position  
 }

 struct NewsAnalytics.ArticleScrollEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let articleData : EventProperty<ArticleData>
	let channelData : EventProperty<ChannelData>
	let feedData : EventProperty<FeedData>
	let groupData : EventProperty<GroupData>
	let viewData : EventProperty<ViewData>
	let scrollStartData : EventProperty<ScrollStartData>
	let scrollEndData : EventProperty<ScrollEndData>
	let articleScienceData : EventProperty<ScienceData>
	let userChannelContextData : EventProperty<UserChannelContextData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
	let issueData : EventProperty<IssueData>
	let issueViewData : EventProperty<IssueViewData>
	let issueExposureData : EventProperty<IssueExposureData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let articleData : ArticleData
	let channelData : ChannelData
	let feedData : FeedData?
	let groupData : GroupData?
	let viewData : ViewData
	let scrollStartData : ScrollStartData
	let scrollEndData : ScrollEndData
	let articleScienceData : ScienceData?
	let userChannelContextData : UserChannelContextData
	let userBundleSubscriptionContextData : UserBundleSubscriptionContextData
	let issueData : IssueData?
	let issueViewData : IssueViewData?
	let issueExposureData : IssueExposureData?
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
	let eventData : EventProperty<EventData>
	let issueData : EventProperty<IssueData>
	let downloadLocationData : EventProperty<DownloadLocationData>
	let downloadStateData : EventProperty<DownloadStateData>
	let downloadData : EventProperty<DownloadData>
	let channelData : EventProperty<ChannelData>
	let userBundleSubscriptionContextData : EventProperty<UserBundleSubscriptionContextData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
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

 class NewsAnalytics.PaywallExposureEventTranslator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsAnalytics.FeedViewEvent {

	// Properties
	let eventData : EventProperty<EventData>
	let timedData : EventProperty<TimedData>
	let feedData : EventProperty<FeedData>
	let viewData : EventProperty<ViewData>
	let orientationData : EventProperty<OrientationData>
	let campaignData : EventProperty<CampaignData>
	let referralData : EventProperty<ReferralData>
 }

 struct NewsAnalytics.Model {

	// Properties
	let eventData : EventData
	let timedData : TimedData
	let feedData : FeedData
	let viewData : ViewData
	let orientationData : OrientationData
	let campaignData : CampaignData?
	let referralData : ReferralData?
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

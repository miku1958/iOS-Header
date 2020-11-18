 protocol NewsSubscription.PurchasePresenterType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PurchasingSpinnerViewStylerType // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol NewsSubscription.FamilySharingStatusManagerDelegate // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.FamilySharingStatusManagerType // 6 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
 }
 protocol NewsSubscription.BaseStylerType // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol NewsSubscription.SubscriptionsRouterType // 2 requirements
 {
	// method
	// method
 }
 protocol NewsSubscription.PurchaseManagerType // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.PurchaseTransactionObserver // 3 requirements
 {
	// class base protocol
	// method
	// method
 }
 protocol NewsSubscription.PurchaseStarterType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PurchaseContextEntriesManagerType // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.SoftPaywallLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.FamilySharingLandingPageLauncherType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.SoftPaywallRendererType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.AccountPageViewControllerFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PaywallCoordinatorType // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.ArticleSoftPaywallMeterType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.WebAccessAuthenticatorFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PaywallInteractorType // 11 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.PaywallInteractorTypeDelegate // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.PaywallDelegate // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PaywallDataManagerType // 0 requirements
 {
 }
 protocol NewsSubscription.PurchasingSpinnerViewControllerFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.SoftPaywallStylerType // 12 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.ManageSubscriptionsURLProviderType // 2 requirements
 {
	// method
	// method
 }
 protocol NewsSubscription.PurchasingSpinnerViewLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.HardPaywallStylerType // 15 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.DeferredHardPaywallLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PurchasingSpinnerViewRendererType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.DeferredHardPaywallStylerType // 15 requirements
 {
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.DeferredHardPaywallRendererType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.ArticlePaywallTypeProviderType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.BundlePurchasePrewarmerType // 2 requirements
 {
	// getter
	// method
 }
 protocol NewsSubscription.HardPaywallRendererType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.PaywallFactoryType // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol NewsSubscription.PaywallEventHandlerType // 11 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.PaywallEventHandlerTypeDelegate // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.HardPaywallLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol NewsSubscription.WebAccessAuthenticatorType // 2 requirements
 {
	// method
	// method
 }
 protocol NewsSubscription.ColorPaletteProviding // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol NewsSubscription.PaywallRouterType // 2 requirements
 {
	// method
	// method
 }
 protocol NewsSubscription.PurchaseObserver // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol NewsSubscription.PurchaseOriginatorIdentifier // 2 requirements
 {
	// getter
	// getter
 }

 struct __C_Synthesized.ASWebAuthenticationSessionError {

	// Properties
	let _nsError : NSError
 }

 struct __C_Synthesized.SKError {

	// Properties
	let _nsError : NSError
 }

 enum __C.UIUserInterfaceStyle { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.FCFeedType { }

 struct __C.CGSize {

	// Properties
	var width : CGFloat // +0x0
	var height : CGFloat // +0x0
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 enum __C.Code { }

 enum __C.Code { }

 enum NewsSubscription.PurchaseTraits {

	// Properties
	case article : (articleID: String)
	case issue : (issueID: String)
	case feed : (feedType: FCFeedType, sectionID: String?)
	case ad : (qToken: String, fromSubscriptionAd: Bool)
	case referral : (campaignID: String, campaignType: String?, creativeID: String?)
 }

 struct NewsSubscription.ArticleAssociatedValues {

	// Properties
	let articleID : String // +0x0
 }

 struct NewsSubscription.IssueAssociatedValues {

	// Properties
	let issueID : String // +0x0
 }

 struct NewsSubscription.FeedAssociatedValues {

	// Properties
	let feedType : Int // +0x0
	let sectionID : String? // +0x8
 }

 struct NewsSubscription.AdAssociatedValues {

	// Properties
	let qToken : String // +0x0
	let fromSubscriptionAd : Bool // +0x10
 }

 struct NewsSubscription.ReferralAssociatedValues {

	// Properties
	let campaignID : String // +0x0
	let campaignType : String? // +0x10
	let creativeID : String? // +0x20
 }

 enum NewsSubscription.Base {

	// Properties
	case article  
	case issue  
	case feed  
	case ad  
	case referral  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case base  
	case articleAssociatedValues  
	case issueAssociatedValues  
	case feedAssociatedValues  
	case adAssociatedValues  
	case referralAssociatedValues  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case articleID  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case issueID  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case feedType  
	case sectionID  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case qToken  
	case fromSubscriptionAd  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case campaignID  
	case campaignType  
	case creativeID  
 }

 class NewsSubscription.PurchasePresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchasePresenterType {

	// Properties
	let purchaseStarter : PurchaseStarterType // +0x10 (0x28)
	let familySharingLandingPageLauncher : FamilySharingLandingPageLauncherType // +0x38 (0x28)
	let purchasingSpinnerViewControllerFactory : PurchasingSpinnerViewControllerFactoryType // +0x60 (0x28)
	var $__lazy_storage_$_spinnerViewController : PurchasingSpinnerViewController? // +0x88 (0x8)

	// Swift methods
 }

 struct NewsSubscription.PurchaseDisabledAlert { }

 class NewsSubscription.BridgedPaywall : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let paywallType : PaywallType // +0x8 (0x8)
	let softPaywallHeightProvider : BridgedSoftPaywallHeightProvider? // +0x10 (0x8)
	let deferredHardPaywallHeightProvider : BridgedDeferredHardPaywallHeightProvider? // +0x18 (0x8)
	let softPaywallViewController : SoftPaywallViewController? // +0x20 (0x8)
	let hardPaywallViewController : HardPaywallViewController? // +0x28 (0x8)
	let deferredHardPaywallViewController : DeferredHardPaywallViewController? // +0x30 (0x8)
	var delegate : weak NPPaywallDelegate? // +0x38 (0x8)
	var internalDelegate : PaywallDelegate? // +0x40 (0x10)

	// ObjC -> Swift bridged methods
	0xb550  @objc BridgedPaywall.paywallType <stripped>
	0xb590  @objc BridgedPaywall.softPaywallHeightProvider <stripped>
	0xb5f0  @objc BridgedPaywall.deferredHardPaywallHeightProvider <stripped>
	0xb650  @objc BridgedPaywall.paywallViewController <stripped>
	0xb730  @objc BridgedPaywall.delegate <stripped>
	0xb7b0  @objc BridgedPaywall.setDelegate: <stripped>
	0xbad0  @objc BridgedPaywall.init <stripped>
	0xbee0  @objc BridgedPaywall..cxx_destruct <stripped>

	// Swift methods
	0xb690  func <stripped> // getter 
	0xb770  func <stripped> // getter 
	0xb7f0  func <stripped> // setter 
	0xb8c0  func <stripped> // modifyCoroutine 
	0xbaf0  class func BridgedPaywall.__allocating_init(softPaywallViewController:softPaywallHeightProvider:) // init 
	0xbc50  class func BridgedPaywall.__allocating_init(hardPaywallViewController:) // init 
	0xbce0  class func BridgedPaywall.__allocating_init(deferredHardPaywallViewController:deferredHardPaywallHeightProvider:) // init 
 }

 class NewsSubscription.PurchasingSpinnerViewStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchasingSpinnerViewStylerType {
	// Swift methods
 }

 struct NewsSubscription.PurchasingSpinnerViewLayoutAttributes {

	// Properties
	let viewFrame : CGRect // +0x0
	let titleFrame : CGRect // +0x20
	let spinnerFrame : CGRect // +0x40
	let purchasingSpinnerViewFrame : CGRect // +0x60
	let purchasingScrimFrame : CGRect // +0x80
 }

 class NewsSubscription.FamilySharingStatusManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FamilySharingStatusManagerType {

	// Properties
	var delegate : FamilySharingStatusManagerDelegate // +0x10 (0x10)
	let cachedFamilyStatus : SyncValue<FamilyStatus?> // +0x20 (0x8)
	let lazyStore : StoreDescriptor // +0x28 (0x8)
	let familyStatusStoreKey : String // +0x30 (0x10)
	let familyEigibilityProvider : NPFamilyEligibilityProviderType // +0x40 (0x8)

	// Swift methods
	0xd1b0  func <stripped> // getter 
	0xd1e0  func <stripped> // setter 
	0xd250  func <stripped> // modifyCoroutine 
	0xd5d0  func <stripped> // method 
	0xd6b0  func <stripped> // method 
	0xe530  func <stripped> // method 
 }

 struct NewsSubscription.StoreDescriptor { }

 class NewsSubscription.BaseStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, BaseStylerType {

	// Properties
	var colorPaletteProvider : ColorPaletteProviding // +0x10 (0x28)

	// Swift methods
 }

 class NewsSubscription.PurchaseManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchaseManagerType {

	// Properties
	var purchaseObservers : DisposablePurchaseObserver
	var transactionObservers : DisposableTransactionObserver
	let internalPurchaseManager : FCPurchaseManagerType
	let purchaseController : FCPurchaseController
	let purchaseContextEntriesManager : PurchaseContextEntriesManagerType

	// Swift methods
 }

 class NewsSubscription.DisposableTransactionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observer : weak PurchaseTransactionObserver?
	var keepAliveObject : weak Swift.AnyObject?

	// Swift methods
 }

 class NewsSubscription.DisposablePurchaseObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observer : weak PurchaseObserver?
	var keepAliveObject : weak Swift.AnyObject?

	// Swift methods
 }

 class NewsSubscription.PurchasingSpinnerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)
	let purchasingSpinnerView : UIView // +0x18 (0x8)
	let purchasingScrim : UIImageView // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x16450  @objc PurchasingSpinnerView.init <stripped>
	0x16500  @objc PurchasingSpinnerView.initWithCoder: <stripped>
	0x16600  @objc PurchasingSpinnerView.initWithFrame: <stripped>
	0x166b0  @objc PurchasingSpinnerView..cxx_destruct <stripped>
 }

 enum NewsSubscription.SubscribeButtonLocation {

	// Properties
	case unknown  
	case article  
	case channelFeed  
	case landingPage  
	case magazineFeed  
	case issueTOC  
 }

 class NewsSubscription.UtilityAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x185e0  @objc UtilityAssembly.init <stripped>

	// Swift methods
 }

 enum NewsSubscription.SubscriptionType {

	// Properties
	case alaCarte : (purchaseID: String, purchaseModel: FCPurchase?)
	case bundle  
 }

 enum NewsSubscription.PurchaseError {

	// Properties
	case invalidReceipt  
	case ongoingPurchaseExists  
	case alreadyPurchased  
	case purchaseDisabled  
	case authenticationFailed  
	case missingConfiguration  
 }

 class NewsSubscription.PurchaseStarter : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchaseStarterType {

	// Properties
	let configurationManager : FCCoreConfigurationManager // +0x10 (0x8)
	let purchaseManager : PurchaseManagerType // +0x18 (0x10)
	let bundlePurchasePrewarmer : BundlePurchasePrewarmerType // +0x28 (0x10)
	var deferredPromise : DeferredPromise<()>? // +0x0 (0x0)
	var purchaseContext : PurchaseContext? // +0x0 (0x40)

	// Swift methods
 }

 class NewsSubscription.PurchaseContextEntriesManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchaseContextEntriesManagerType {

	// Properties
	let store : StoreDescriptor // +0x10 (0x8)
	var purchaseContexts : [String : PurchaseContext] // +0x18 (0x8)
	var accessLock : UnfairLock // +0x20 (0x8)

	// Swift methods
 }

 struct NewsSubscription.StoreDescriptor { }

 class NewsSubscription.Images : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x20310  @objc Images.init <stripped>
	0x203b0  @objc Images..cxx_destruct <stripped>
 }

 class NewsSubscription.SoftPaywallLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SoftPaywallLayoutAttributesFactoryType {

	// Properties
	let styler : SoftPaywallStylerType // +0x10 (0x28)
	let smallMarginWidth : CGFloat // +0x38 (0x8)
	let largeMarginWidth : CGFloat // +0x40 (0x8)
	let smallHeaderImageHeight : CGFloat // +0x48 (0x8)
	let largeHeaderImageHeight : CGFloat // +0x50 (0x8)
	let maxHeaderImageViewWidth : CGFloat // +0x58 (0x8)
	let compactBadgeImageWidth : CGFloat // +0x60 (0x8)
	let regularBadgeImageWidth : CGFloat // +0x68 (0x8)
	let compactBadgeImageHeight : CGFloat // +0x70 (0x8)
	let regularBadgeImageHeight : CGFloat // +0x78 (0x8)
	let smallSubscribeButtonSize : CGSize // +0x80 (0x10)
	let largeSubscribeButtonSize : CGSize // +0x90 (0x10)
	let smallButtonCapMarginWidth : CGFloat // +0xa0 (0x8)
	let largeButtonCapMarginWidth : CGFloat // +0xa8 (0x8)

	// Swift methods
 }

 class NewsSubscription.StylerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x21b10  @objc StylerAssembly.init <stripped>

	// Swift methods
 }

 struct NewsSubscription.PaywallModel {

	// Properties
	let tag : FCTagProviding? // +0x0
	let purchaseID : String // +0x8
	let purchaseType : PurchaseType // +0x18
	let paywallHostType : PaywallHostType // +0x19
 }

 class NewsSubscription.FamilySharingLandingPageLauncher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FamilySharingLandingPageLauncherType {

	// Properties
	let configurationManager : FCCoreConfigurationManager // +0x10 (0x8)
	let familyEligibilityProvider : NPFamilyEligibilityProviderType // +0x18 (0x8)
	let router : SubscriptionsRouterType // +0x20 (0x28)

	// Swift methods
	0x22280  class func FamilySharingLandingPageLauncher.__allocating_init(configurationManager:familyEligibilityProvider:router:) // init 
 }

 class NewsSubscription.SoftPaywallRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SoftPaywallRendererType {

	// Properties
	let styler : SoftPaywallStylerType // +0x10 (0x28)
	let assetManager : FCAssetManager // +0x38 (0x8)
	let headerImageCache : TSImageCacheType // +0x40 (0x8)

	// Swift methods
 }

 class NewsSubscription.AccountPageViewControllerFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AccountPageViewControllerFactoryType {

	// Properties
	let accountPageViewControllerFactory : BridgedAccountPageViewControllerFactory // +0x10 (0x8)

	// Swift methods
	0x23940  class func AccountPageViewControllerFactory.__allocating_init(accountPageViewControllerFactory:) // init 
 }

 class NewsSubscription.BridgedPurchaseManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let purchaseManager : PurchaseManagerType
	var transactionObservers : ContainerPurchaseTransactionObserver
	var purchaseObservers : ContainerPurchaseObserver

	// ObjC -> Swift bridged methods
	0x24010  @objc BridgedPurchaseManager.addPurchaseObserver: <stripped>
	0x24400  @objc BridgedPurchaseManager.removePurchaseObserver: <stripped>
	0x246c0  @objc BridgedPurchaseManager.addTransactionObserver: <stripped>
	0x24ab0  @objc BridgedPurchaseManager.removeTransactionObserver: <stripped>
	0x24e40  @objc BridgedPurchaseManager.purchaseMetadataWithPurchaseID:restorePurchase: <stripped>
	0x25010  @objc BridgedPurchaseManager.startPurchaseWithPurchaseModel:purchaseContext:error: <stripped>
	0x25190  @objc BridgedPurchaseManager.startBundlePurchaseWithPurchaseModel:purchaseContext:error: <stripped>
	0x252f0  @objc BridgedPurchaseManager.init <stripped>
	0x25370  @objc BridgedPurchaseManager..cxx_destruct <stripped>

	// Swift methods
	0x23b80  class func BridgedPurchaseManager.__allocating_init(purchaseManager:) // init 
 }

 class NewsSubscription.ContainerPurchaseTransactionObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bridgedPurchaseTransactionObserver : weak NPPurchaseTransactionObserver?

	// Swift methods
 }

 class NewsSubscription.ContainerPurchaseObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bridgedPurchaseObserver : weak NPPurchaseObserver?

	// Swift methods
 }

 class NewsSubscription.HardPaywallModule : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let resolver : ResolverType // +0x8 (0x28)
	let tracker : Tracker // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x27030  @objc HardPaywallModule.createViewController <stripped>
	0x27140  @objc HardPaywallModule.init <stripped>
	0x271f0  @objc HardPaywallModule..cxx_destruct <stripped>

	// Swift methods
 }

 struct NewsSubscription.OngoingPurchaseTransactionAlert {

	// Properties
	var tag : FCTagProviding? // +0x0
 }

 class NewsSubscription.Localized : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct NewsSubscription.PurchasingSpinnerViewLayoutOptions {

	// Properties
	let size : CGSize // +0x0
	let traitCollection : UITraitCollection // +0x10
 }

 class NewsSubscription.ArticleSoftPaywallMeter : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArticleSoftPaywallMeterType {

	// Properties
	let articlesSoftPaywallCount : String // +0x10 (0x10)
	var articlesWithNoPaywallCount : Int // +0x20 (0x8)
	var minimumArticlesBeforeArticleSoftPaywall : Int // +0x28 (0x8)

	// Swift methods
 }

 class NewsSubscription.WebAccessAuthenticatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WebAccessAuthenticatorFactoryType {

	// Properties
	let purchaseController : FCPurchaseController // +0x10 (0x8)
	let paywallCoordinator : PaywallCoordinatorType? // +0x18 (0x28)

	// Swift methods
 }

 class NewsSubscription.SoftPaywallDocumentSectionItemHeightProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let heightProvider : SoftPaywallHeightProvider // +0x10 (0x8)

	// Swift methods
	0x2c1a0  class func SoftPaywallDocumentSectionItemHeightProvider.__allocating_init(heightProvider:) // init 
 }

 class NewsSubscription.SoftPaywallAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x2d8d0  @objc SoftPaywallAssembly.init <stripped>
 }

 class NewsSubscription.PaywallInteractor : NSObject /usr/lib/libobjc.A.dylib, PaywallInteractorType {

	// Properties
	var delegate : PaywallInteractorTypeDelegate // +0x8 (0x10)
	var coordinator : PaywallCoordinatorType? // +0x18 (0x28)
	let paywallModel : PaywallModel // +0x40 (0x1a)
	var purchaseSessionID : String // +0x60 (0x10)
	let dataManager : PaywallDataManagerType // +0x70 (0x10)
	let webAccessAuthenticatorFactory : WebAccessAuthenticatorFactoryType // +0x80 (0x28)
	var webAccessAuthenticator : WebAccessAuthenticatorType? // +0xa8 (0x28)
	var purchaseConversionLocation : PurchaseConversionLocation // +0xd0 (0x1)
	let paywallType : PaywallType // +0xd8 (0x8)

	// ObjC -> Swift bridged methods
	0x2e070  @objc PaywallInteractor.init <stripped>
	0x2e0f0  @objc PaywallInteractor..cxx_destruct <stripped>

	// Swift methods
 }

 class NewsSubscription.PurchasingSpinnerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x2f870  @objc PurchasingSpinnerAssembly.init <stripped>

	// Swift methods
 }

 struct NewsSubscription.WebAuthenticationErrorAlert { }

 struct NewsSubscription.WebAuthenticationSubscribedAlert {

	// Properties
	let tag : FCTagProviding? // +0x0
 }

 class NewsSubscription.PaywallEventHandlerDelegate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let purchasingSpinnerViewControllerFactory : PurchasingSpinnerViewControllerFactoryType // +0x10 (0x28)
	var $__lazy_storage_$_verificationSpinner : PurchasingSpinnerViewController? // +0x38 (0x8)
	let tag : FCTagProviding? // +0x40 (0x8)
	var delegate : weak PaywallDelegate? // +0x48 (0x10)
	var presentationViewController : weak UIViewController? // +0x58 (0x8)
	let purchasePresenter : PurchasePresenterType // +0x60 (0x28)

	// Swift methods
	0x30650  func <stripped> // getter 
 }

 class NewsSubscription.BridgedPurchaseContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var conversionLocation : String // +0x8 (0x10)
	var sourceChannelID : String // +0x18 (0x10)
	var productID : String // +0x28 (0x10)
	var purchaseID : String // +0x38 (0x10)
	var articleID : String? // +0x48 (0x10)
	var issueID : String? // +0x58 (0x10)
	var sectionID : String? // +0x68 (0x10)
	var qToken : String? // +0x78 (0x10)
	var purchaseSessionID : String // +0x88 (0x10)
	var parentFeedType : FCFeedType // +0x98 (0x8)
	var arrivedFromAd : Bool // +0xa0 (0x1)
	var webAccessOptIn : Bool // +0xa1 (0x1)
	var creativeID : String? // +0xa8 (0x10)
	var campaignID : String? // +0xb8 (0x10)
	var campaignType : String? // +0xc8 (0x10)

	// ObjC -> Swift bridged methods
	0x31760  @objc BridgedPurchaseContext.conversionLocation <stripped>
	0x317a0  @objc BridgedPurchaseContext.setConversionLocation: <stripped>
	0x31820  @objc BridgedPurchaseContext.sourceChannelID <stripped>
	0x31860  @objc BridgedPurchaseContext.setSourceChannelID: <stripped>
	0x318e0  @objc BridgedPurchaseContext.productID <stripped>
	0x31920  @objc BridgedPurchaseContext.setProductID: <stripped>
	0x319a0  @objc BridgedPurchaseContext.purchaseID <stripped>
	0x319e0  @objc BridgedPurchaseContext.setPurchaseID: <stripped>
	0x31a60  @objc BridgedPurchaseContext.articleID <stripped>
	0x31aa0  @objc BridgedPurchaseContext.setArticleID: <stripped>
	0x31b20  @objc BridgedPurchaseContext.issueID <stripped>
	0x31b60  @objc BridgedPurchaseContext.setIssueID: <stripped>
	0x31be0  @objc BridgedPurchaseContext.sectionID <stripped>
	0x31c20  @objc BridgedPurchaseContext.setSectionID: <stripped>
	0x31ca0  @objc BridgedPurchaseContext.qToken <stripped>
	0x31ce0  @objc BridgedPurchaseContext.setQToken: <stripped>
	0x31d60  @objc BridgedPurchaseContext.purchaseSessionID <stripped>
	0x31e50  @objc BridgedPurchaseContext.setPurchaseSessionID: <stripped>
	0x31f80  @objc BridgedPurchaseContext.parentFeedType <stripped>
	0x31ff0  @objc BridgedPurchaseContext.setParentFeedType: <stripped>
	0x320b0  @objc BridgedPurchaseContext.arrivedFromAd <stripped>
	0x320f0  @objc BridgedPurchaseContext.setArrivedFromAd: <stripped>
	0x32170  @objc BridgedPurchaseContext.webAccessOptIn <stripped>
	0x32220  @objc BridgedPurchaseContext.setWebAccessOptIn: <stripped>
	0x32340  @objc BridgedPurchaseContext.creativeID <stripped>
	0x32380  @objc BridgedPurchaseContext.setCreativeID: <stripped>
	0x32400  @objc BridgedPurchaseContext.campaignID <stripped>
	0x32440  @objc BridgedPurchaseContext.setCampaignID: <stripped>
	0x324d0  @objc BridgedPurchaseContext.campaignType <stripped>
	0x325d0  @objc BridgedPurchaseContext.setCampaignType: <stripped>
	0x32da0  @objc BridgedPurchaseContext.initWithProductID:purchaseID:sourceChannelID:purchaseSessionID:conversionLocation:articleID:issueID:parentFeedType:sectionID:webAccessOptIn:arrivedFromAd:qToken:creativeID:campaignID:campaignType: <stripped>
	0x33160  @objc BridgedPurchaseContext.init <stripped>
	0x331e0  @objc BridgedPurchaseContext..cxx_destruct <stripped>

	// Swift methods
	0x32720  class func BridgedPurchaseContext.__allocating_init(productID:purchaseID:sourceChannelID:purchaseSessionID:conversionLocation:articleID:issueID:parentFeedType:sectionID:webAccessOptIn:arrivedFromAd:qToken:creativeID:campaignID:campaignType:) // init 
 }

 enum NewsSubscription.WebAuthenticationResult {

	// Properties
	case success : (subscribed: Bool)
	case fail : (errorCode: String)
 }

 class NewsSubscription.PaywallImageProcessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x34100  @objc PaywallImageProcessor.process: <stripped>

	// Swift methods
	0x34070  class func PaywallImageProcessor.__allocating_init() // init 
 }

 class NewsSubscription.FactoryAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x34a40  @objc FactoryAssembly.init <stripped>
 }

 enum NewsSubscription.PaywallType { }

 class NewsSubscription.HardPaywallView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let gradientView : GradientView // +0x10 (0x8)
	let contentView : UIView // +0x18 (0x8)
	let contentBackgroundView : UIView // +0x20 (0x8)
	let badgeImageView : ImageView // +0x28 (0x8)
	let titleTextView : UITextView // +0x30 (0x8)
	let descriptionTextView : UnselectableLinkEnabledTextView // +0x38 (0x8)
	let subscribeButton : PillButton // +0x40 (0x8)
	let webAuthButton : PillButton // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x35320  @objc HardPaywallView.initWithFrame: <stripped>
	0x35350  @objc HardPaywallView.initWithCoder: <stripped>
	0x35370  @objc HardPaywallView.accessibilityFrame <stripped>
	0x353b0  @objc HardPaywallView.setAccessibilityFrame: <stripped>
	0x35410  @objc HardPaywallView..cxx_destruct <stripped>
 }

 class NewsSubscription.PaywallDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PaywallDataManagerType {
	// Swift methods
 }

 class NewsSubscription.PurchasingSpinnerViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let viewStyler : PurchasingSpinnerViewStylerType // +0x8 (0x28)
	let viewLayoutAttributesFactory : PurchasingSpinnerViewLayoutAttributesFactoryType // +0x30 (0x28)
	let viewRenderer : PurchasingSpinnerViewRendererType // +0x58 (0x28)
	let spinner : PurchasingSpinner // +0x80 (0x1)
	let spinnerView : PurchasingSpinnerView // +0x88 (0x8)

	// ObjC -> Swift bridged methods
	0x35bc0  @objc PurchasingSpinnerViewController.initWithCoder: <stripped>
	0x35f20  @objc PurchasingSpinnerViewController.viewDidAppear: <stripped>
	0x361a0  @objc PurchasingSpinnerViewController.viewWillLayoutSubviews <stripped>
	0x36270  @objc PurchasingSpinnerViewController.initWithNibName:bundle: <stripped>
	0x362f0  @objc PurchasingSpinnerViewController..cxx_destruct <stripped>

	// Swift methods
	0x35c60  class func PurchasingSpinnerViewController.__allocating_init(spinner:viewStyler:viewLayoutAttributesFactory:viewRenderer:) // init 
 }

 enum NewsSubscription.FamilyStatus {

	// Properties
	case none : (familyEligibility: Bool)
	case member : FamilyMember
 }

 enum NewsSubscription.Base {

	// Properties
	case none  
	case member  
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case base  
	case familyMember  
	case familyEligibility  
 }

 class NewsSubscription.PurchasingSpinnerViewControllerFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchasingSpinnerViewControllerFactoryType {

	// Properties
	let viewStyler : PurchasingSpinnerViewStylerType // +0x10 (0x28)
	let viewLayoutAttributesFactory : PurchasingSpinnerViewLayoutAttributesFactoryType // +0x38 (0x28)
	let viewRenderer : PurchasingSpinnerViewRendererType // +0x60 (0x28)

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x38ba0  @objc DeferredHardPaywallAssembly.init <stripped>
 }

 class NewsSubscription.SoftPaywallStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SoftPaywallStylerType {

	// Properties
	let colorPaletteProvider : ColorPaletteProviding // +0x10 (0x28)
	let titleMaxLines : Int // +0x38 (0x8)
	let descriptionMaxLines : Int // +0x40 (0x8)

	// Swift methods
 }

 class NewsSubscription.ManageSubscriptionsURLProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ManageSubscriptionsURLProviderType {

	// Properties
	var defaultManageSubscriptionsUrl : String // +0x10 (0x10)
	var subscriptionsURL : URL? // +0x0 (0x0)

	// Swift methods
	0x3a920  class func ManageSubscriptionsURLProvider.__allocating_init(defaultUrl:) // init 
 }

 class NewsSubscription.PurchasingSpinnerViewLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchasingSpinnerViewLayoutAttributesFactoryType {

	// Properties
	let styler : PurchasingSpinnerViewStylerType // +0x10 (0x28)

	// Swift methods
 }

 enum NewsSubscription.FamilySharingError {

	// Properties
	case invalidFamilyCircle  
 }

 class NewsSubscription.SoftPaywallView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let contentView : UIView // +0x8 (0x8)
	let headerImageView : ImageView // +0x10 (0x8)
	let badgeImageView : ImageView // +0x18 (0x8)
	let titleTextView : UITextView // +0x20 (0x8)
	let descriptionTextView : UnselectableLinkEnabledTextView // +0x28 (0x8)
	let subscribeButton : PillButton // +0x30 (0x8)
	let webAuthButton : PillButton // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x3bd50  @objc SoftPaywallView.initWithFrame: <stripped>
	0x3bd80  @objc SoftPaywallView.initWithCoder: <stripped>
	0x3bdf0  @objc SoftPaywallView..cxx_destruct <stripped>
 }

 class NewsSubscription.HardPaywallAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x3d220  @objc HardPaywallAssembly.init <stripped>

	// Swift methods
 }

 enum NewsSubscription.WebAccessAuthenticationErrors {

	// Properties
	case invalidURL  
	case missingAccessToken  
 }

 class NewsSubscription.HardPaywallStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, HardPaywallStylerType {

	// Properties
	let colorPaletteProvider : ColorPaletteProviding // +0x10 (0x28)
	let viewModel : PaywallViewModel // +0x0 (0x0)
	let titleMaxLines : Int // +0x0 (0x8)
	let descriptionMaxLines : Int // +0x0 (0x8)

	// Swift methods
 }

 class NewsSubscription.SoftPaywallHeightProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let paywallViewModel : PaywallViewModel // +0x0 (0x0)
	let softPaywallLayoutAttributesFactory : SoftPaywallLayoutAttributesFactoryType // +0x0 (0x28)

	// Swift methods
 }

 class NewsSubscription.HardPaywallViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let styler : HardPaywallStylerType // +0x8 (0x28)
	let eventHandler : PaywallEventHandlerType // +0x30 (0x10)
	let viewModel : PaywallViewModel // +0x0 (0x0)
	let paywallModel : PaywallModel // +0x0 (0x1a)
	let hardPaywallView : HardPaywallView // +0x0 (0x8)
	let renderer : HardPaywallRendererType // +0x0 (0x28)
	let layoutAttributesFactory : HardPaywallLayoutAttributesFactory // +0x0 (0x8)
	let purchasingSpinnerViewControllerFactory : PurchasingSpinnerViewControllerFactoryType // +0x0 (0x28)
	var $__lazy_storage_$_verifyingSpinnerViewController : PurchasingSpinnerViewController? // +0x0 (0x8)
	let paywallApplicationStateMonitor : PaywallApplicationStateMonitor // +0x0 (0x8)
	let eventHandlerDelegate : PaywallEventHandlerDelegate // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x40510  @objc HardPaywallViewController.initWithCoder: <stripped>
	0x40680  @objc HardPaywallViewController.initWithNibName:bundle: <stripped>
	0x40720  @objc HardPaywallViewController..cxx_destruct <stripped>

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DeferredHardPaywallLayoutAttributesFactoryType {

	// Properties
	let styler : DeferredHardPaywallStylerType // +0x10 (0x28)
	let maxTopOffset : CGFloat // +0x38 (0x8)
	let minContentViewHeight : CGFloat // +0x40 (0x8)
	let maxContentViewWidth : CGFloat // +0x48 (0x8)
	let smallMarginWidth : CGFloat // +0x50 (0x8)
	let largeMarginWidth : CGFloat // +0x58 (0x8)
	let compactBadgeImageWidth : CGFloat // +0x60 (0x8)
	let regularBadgeImageWidth : CGFloat // +0x68 (0x8)
	let compactBadgeImageHeight : CGFloat // +0x70 (0x8)
	let regularBadgeImageHeight : CGFloat // +0x78 (0x8)
	let smallSubscribeButtonSize : CGSize // +0x80 (0x10)
	let largeSubscribeButtonSize : CGSize // +0x90 (0x10)
	let smallButtonCapMarginWidth : CGFloat // +0xa0 (0x8)
	let largeButtonCapMarginWidth : CGFloat // +0xa8 (0x8)
	let viewableAreaMaxHeight : CGFloat // +0xb0 (0x8)
	let contentViewRegularWidthHeightFactor : CGFloat // +0xb8 (0x8)
	let contentViewCompactWidthHeightFactor : CGFloat // +0xc0 (0x8)
	let largeGradientHeight : CGFloat // +0xc8 (0x8)
	let mediumGradientHeight : CGFloat // +0xd0 (0x8)
	let smallGradientHeight : CGFloat // +0xd8 (0x8)
	let footerImageExtraHeight : CGFloat // +0xe0 (0x8)
	let minimumBaseFooterImageHeight : CGFloat // +0xe8 (0x8)

	// Swift methods
 }

 enum NewsSubscription.PaywallSource {

	// Properties
	case feed : FCTagProviding
	case article : (FCHeadlineProviding, tag: FCTagProviding)
	case issue : FCIssue
 }

 class NewsSubscription.PurchasingSpinnerViewRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PurchasingSpinnerViewRendererType {

	// Properties
	let styler : PurchasingSpinnerViewStylerType // +0x10 (0x28)

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DeferredHardPaywallStylerType {

	// Properties
	let colorPaletteProvider : ColorPaletteProviding // +0x10 (0x28)
	let titleMaxLines : Int // +0x38 (0x8)
	let descriptionMaxLines : Int // +0x40 (0x8)

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DeferredHardPaywallRendererType {

	// Properties
	let styler : DeferredHardPaywallStylerType // +0x10 (0x28)
	let assetManager : FCAssetManager // +0x38 (0x8)
	let footerImageCache : TSImageCacheType // +0x40 (0x8)

	// Swift methods
 }

 class NewsSubscription.ArticlePaywallTypeProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArticlePaywallTypeProviderType {

	// Properties
	let configurationManager : FCCoreConfigurationManager // +0x10 (0x8)
	let bundleSubscriptionManager : FCBundleSubscriptionManagerType // +0x18 (0x8)
	let subscriptionAccessMeter : NPSubscriptionAccessMeterType // +0x20 (0x8)
	let paidAccessChecker : FCPaidAccessCheckerType // +0x28 (0x8)
	let articleSoftPaywallMeter : ArticleSoftPaywallMeterType // +0x30 (0x10)

	// Swift methods
 }

 class NewsSubscription.SoftPaywallModule : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let resolver : ResolverType // +0x8 (0x28)
	let tracker : Tracker // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x47c40  @objc SoftPaywallModule.createViewController <stripped>
	0x47d50  @objc SoftPaywallModule.init <stripped>
	0x47e00  @objc SoftPaywallModule..cxx_destruct <stripped>

	// Swift methods
 }

 class NewsSubscription.BundlePurchasePrewarmer : NSObject /usr/lib/libobjc.A.dylib, BundlePurchasePrewarmerType {

	// Properties
	let configurationManager : FCCoreConfigurationManager // +0x8 (0x8)
	let networkReachability : FCNetworkReachabilityType // +0x10 (0x8)
	let bundleSubscriptionManager : FCBundleSubscriptionManagerType // +0x18 (0x8)
	let purchaseManager : PurchaseManagerType // +0x20 (0x10)
	var cachedPurchaseModel : FCPurchase? // +0x30 (0x8)
	var accessLock : UnfairLock // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x480d0  @objc BundlePurchasePrewarmer.init <stripped>
	0x48150  @objc BundlePurchasePrewarmer..cxx_destruct <stripped>

	// Swift methods
 }

 enum NewsSubscription.PurchasingSpinner {

	// Properties
	case purchasing  
	case verifying  
 }

 class NewsSubscription.HardPaywallRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, HardPaywallRendererType {

	// Properties
	let styler : HardPaywallStylerType // +0x10 (0x28)

	// Swift methods
 }

 struct NewsSubscription.MissingConfigurationAlert { }

 class NewsSubscription.SubscriptionAccessMeter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let userInfo : FCUserInfo // +0x10 (0x8)
	let readingHistory : FCReadingHistory // +0x18 (0x8)
	let purchaseProvider : FCPurchaseProviderType // +0x20 (0x8)
	let bundleSubscriptionManager : FCBundleSubscriptionManagerType // +0x28 (0x8)
	var offeredBundlePurchaseIDs : [String] // +0x30 (0x8)
	var aLaCarteSubscriptionMeteredCountMaxLimit : Int // +0x38 (0x8)
	var bundleSubscriptionMeteredCountMaxLimit : Int // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x4c4d0  @objc SubscriptionAccessMeter.canAccessArticleWithHeadline:articleAccess: <stripped>
	0x4cf60  @objc SubscriptionAccessMeter.incrementCountForHeadline: <stripped>

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallModule : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let resolver : ResolverType // +0x8 (0x28)
	let tracker : Tracker // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x4d700  @objc DeferredHardPaywallModule.createViewController <stripped>
	0x4d810  @objc DeferredHardPaywallModule.init <stripped>
	0x4d8c0  @objc DeferredHardPaywallModule..cxx_destruct <stripped>

	// Swift methods
 }

 class NewsSubscription.FinanceURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let patterns : [URLHandlerPattern]
	let router : SubscriptionsRouterType
	var baseHostName : String

	// Swift methods
	0x4db60  class func FinanceURLHandler.__allocating_init(patterns:router:) // init 
 }

 class NewsSubscription.Contract : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bag : AMSBag

	// Swift methods
 }

 class NewsSubscription.RendererAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x4ec60  @objc RendererAssembly.init <stripped>
 }

 enum NewsSubscription.Paywall {

	// Properties
	case hard : (module: NPHardPaywallModuleType)
	case deferredHard : (module: NUDeferredHardPaywallModuleType, heightProvider: DeferredHardPaywallHeightProvider)
	case soft : (module: NPSoftPaywallModuleType, heightProvider: SoftPaywallHeightProvider)
	case none  
 }

 enum NewsSubscription.PaywallSubType {

	// Properties
	case standard  
	case shared  
 }

 enum NewsSubscription.PaywallType {

	// Properties
	case articleHard : PaywallSubType
	case articleDeferredHard : PaywallSubType
	case articleSoft : PaywallSubType
	case none  
 }

 class NewsSubscription.PaywallFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PaywallFactoryType {

	// Properties
	let resolver : ResolverType // +0x10 (0x28)
	let purchaseProvider : FCPurchaseProviderType // +0x38 (0x8)
	let paywallTypeProvider : ArticlePaywallTypeProviderType // +0x40 (0x28)
	let bundleSubscriptionManager : FCBundleSubscriptionManagerType // +0x68 (0x8)
	let configurationManager : FCCoreConfigurationManager // +0x70 (0x8)
	let deferredHardPaywallLayoutAttributesFactory : DeferredHardPaywallLayoutAttributesFactoryType // +0x78 (0x28)
	let softPaywallLayoutAttributesFactory : SoftPaywallLayoutAttributesFactoryType // +0xa0 (0x28)
	let bundlePurchasePrewarmer : BundlePurchasePrewarmerType // +0xc8 (0x10)
	let tracker : Tracker // +0xd8 (0x8)

	// Swift methods
 }

 class NewsSubscription.PaywallEventHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PaywallEventHandlerType {

	// Properties
	var delegate : PaywallEventHandlerTypeDelegate // +0x10 (0x10)
	let interactor : PaywallInteractorType // +0x20 (0x10)
	let router : PaywallRouterType // +0x30 (0x28)

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallHeightProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let paywallViewModel : PaywallViewModel // +0x0 (0x0)
	let layoutAttributesFactory : DeferredHardPaywallLayoutAttributesFactoryType // +0x0 (0x28)

	// Swift methods
 }

 enum NewsSubscription.SubscribeButtonTargetType {

	// Properties
	case unknown  
	case purchaseSheet  
	case landingPage  
 }

 struct NewsSubscription.WebAuthenticationNotSubscribedAlert { }

 class NewsSubscription.PaywallImageProcessorRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var assetHandles : [String : TSAssetHandleType] // +0x10 (0x8)
	let size : CGSize // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x524e0  @objc PaywallImageProcessorRequest.assetHandles <stripped>
	0x525b0  @objc PaywallImageProcessorRequest.setAssetHandles: <stripped>
	0x526c0  @objc PaywallImageProcessorRequest.cacheIdentifier <stripped>

	// Swift methods
	0x52330  class func PaywallImageProcessorRequest.__allocating_init(assetHandle:size:) // init 
 }

 class NewsSubscription.HardPaywallLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, HardPaywallLayoutAttributesFactoryType {

	// Properties
	let styler : HardPaywallStylerType // +0x10 (0x28)
	let maxContentViewWidth : CGFloat // +0x38 (0x8)
	let smallMarginWidth : CGFloat // +0x40 (0x8)
	let largeMarginWidth : CGFloat // +0x48 (0x8)
	let compactBadgeImageWidth : CGFloat // +0x50 (0x8)
	let regularBadgeImageWidth : CGFloat // +0x58 (0x8)
	let compactBadgeImageHeight : CGFloat // +0x60 (0x8)
	let regularBadgeImageHeight : CGFloat // +0x68 (0x8)
	let smallSubscribeButtonSize : CGSize // +0x70 (0x10)
	let largeSubscribeButtonSize : CGSize // +0x80 (0x10)
	let smallButtonCapMarginWidth : CGFloat // +0x90 (0x8)
	let largeButtonCapMarginWidth : CGFloat // +0x98 (0x8)
	let viewableAreaMinHeightFactor : CGFloat // +0xa0 (0x8)
	let viewableAreaMaxHeight : CGFloat // +0xa8 (0x8)

	// Swift methods
 }

 enum NewsSubscription.PurchaseType {

	// Properties
	case bundle  
	case individual  
 }

 struct NewsSubscription.PaywallColorPalette {

	// Properties
	let scrollViewBackgroundColor : UIColor // +0x0
	let contentViewBackgroundColor : UIColor // +0x8
	let titleColor : UIColor // +0x10
	let descriptionColor : UIColor // +0x18
	let buttonBackgroundColor : UIColor // +0x20
	let linkTextColor : UIColor // +0x28
	let altLinkTextColor : UIColor // +0x30
	let buttonTitleColor : UIColor // +0x38
 }

 struct NewsSubscription.PaywallViewModel {

	// Properties
	let imageURL : URL?
	let darkStyleImageURL : URL?
	let backgroundColor : UIColor?
	let darkStyleBackgroundColor : UIColor?
	let title : String
	let description : String
	let learnMore : String
	let learnMoreURL : URL?
	let subscribeButtonTitle : String
	let subscribeButtonDestination : SubscribeButtonDestination
	let webAuthButtonTitle : String
	let topOffsetConfiguration : PaywallTopOffsetConfiguration?
 }

 enum NewsSubscription.SubscribeButtonDestination {

	// Properties
	case osloSheet : (paywallSource: PaywallSource)
	case campaignLandingPage : (articleID: String, paywallSource: PaywallSource)
 }

 class NewsSubscription.DeferredHardPaywallDocumentSectionItemHeightProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let heightProvider : DeferredHardPaywallHeightProvider // +0x10 (0x8)

	// Swift methods
	0x565c0  class func DeferredHardPaywallDocumentSectionItemHeightProvider.__allocating_init(heightProvider:) // init 
 }

 class NewsSubscription.DeferredHardPaywallViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let styler : DeferredHardPaywallStylerType // +0x8 (0x28)
	let eventHandler : PaywallEventHandlerType // +0x30 (0x10)
	let viewModel : PaywallViewModel // +0x0 (0x0)
	let paywallModel : PaywallModel // +0x0 (0x1a)
	let deferredHardPaywallView : DeferredHardPaywallView // +0x0 (0x8)
	let renderer : DeferredHardPaywallRendererType // +0x0 (0x28)
	let layoutAttributesFactory : DeferredHardPaywallLayoutAttributesFactoryType // +0x0 (0x28)
	let purchasingSpinnerViewControllerFactory : PurchasingSpinnerViewControllerFactoryType // +0x0 (0x28)
	let paywallApplicationStateMonitor : PaywallApplicationStateMonitor // +0x0 (0x8)
	let eventHandlerDelegate : PaywallEventHandlerDelegate // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x56d40  @objc DeferredHardPaywallViewController.initWithCoder: <stripped>
	0x56ea0  @objc DeferredHardPaywallViewController.initWithNibName:bundle: <stripped>
	0x56f40  @objc DeferredHardPaywallViewController..cxx_destruct <stripped>

	// Swift methods
 }

 enum NewsSubscription.WebAccessSubscriptionStatus {

	// Properties
	case subscribed  
	case notSubscribed  
 }

 class NewsSubscription.WebAccessAuthenticator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WebAccessAuthenticatorType {

	// Properties
	let purchaseController : FCPurchaseController // +0x10 (0x8)
	let paywallCoordinator : PaywallCoordinatorType? // +0x18 (0x28)
	let authenticationURL : URL? // +0x0 (0x0)
	let tagID : String // +0x0 (0x10)
	var session : BridgedWebAuthenticationSession? // +0x0 (0x8)

	// Swift methods
 }

 class NewsSubscription.SoftPaywallViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let styler : SoftPaywallStylerType // +0x8 (0x28)
	let eventHandler : PaywallEventHandlerType // +0x30 (0x10)
	let viewModel : PaywallViewModel // +0x0 (0x0)
	let paywallModel : PaywallModel // +0x0 (0x1a)
	let softPaywallView : SoftPaywallView // +0x0 (0x8)
	let renderer : SoftPaywallRendererType // +0x0 (0x28)
	let layoutAttributesFactory : SoftPaywallLayoutAttributesFactoryType // +0x0 (0x28)
	let purchasingSpinnerViewControllerFactory : PurchasingSpinnerViewControllerFactoryType // +0x0 (0x28)
	var $__lazy_storage_$_verifyingSpinnerViewController : PurchasingSpinnerViewController? // +0x0 (0x8)
	let paywallApplicationStateMonitor : PaywallApplicationStateMonitor // +0x0 (0x8)
	let eventHandlerDelegate : PaywallEventHandlerDelegate // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x59fd0  @objc SoftPaywallViewController.initWithCoder: <stripped>
	0x5a140  @objc SoftPaywallViewController.initWithNibName:bundle: <stripped>
	0x5a1e0  @objc SoftPaywallViewController..cxx_destruct <stripped>

	// Swift methods
 }

 class NewsSubscription.ColorPalette : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColorPaletteProviding {

	// Properties
	let userInterfaceStyle : UIUserInterfaceStyle // +0x10 (0x8)

	// Swift methods
 }

 class NewsSubscription.PaywallApplicationStateMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventHandler : PaywallEventHandlerType // +0x10 (0x10)

	// Swift methods
 }

 class NewsSubscription.DeferredHardPaywallView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let backgroundCoverView : UIView // +0x10 (0x8)
	let contentView : UIView // +0x18 (0x8)
	let badgeImageView : ImageView // +0x20 (0x8)
	let footerImageView : ImageView // +0x28 (0x8)
	let titleLabel : UILabel // +0x30 (0x8)
	let descriptionTextView : UITextView // +0x38 (0x8)
	let subscribeButton : PillButton // +0x40 (0x8)
	let webAuthButton : PillButton // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x5be10  @objc DeferredHardPaywallView.initWithFrame: <stripped>
	0x5be40  @objc DeferredHardPaywallView.initWithCoder: <stripped>
	0x5beb0  @objc DeferredHardPaywallView..cxx_destruct <stripped>
 }

 struct NewsSubscription.BundleSubscriptions { }

 class NewsSubscription.BridgedFamilyStatusManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let familyStatusManager : FamilySharingStatusManagerType // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x5ca80  @objc BridgedFamilyStatusManager.refreshFamilyStatus <stripped>
	0x5cd90  @objc BridgedFamilyStatusManager.syncFamilyStatus <stripped>
	0x5cf00  @objc BridgedFamilyStatusManager.init <stripped>
	0x5cf80  @objc BridgedFamilyStatusManager..cxx_destruct <stripped>

	// Swift methods
	0x5c630  class func BridgedFamilyStatusManager.__allocating_init(familyStatusManager:) // init 
 }

 class NewsSubscription.BridgedSoftPaywallHeightProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let heightProvider : SoftPaywallHeightProvider // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x5d430  @objc BridgedSoftPaywallHeightProvider.init <stripped>
	0x5d4b0  @objc BridgedSoftPaywallHeightProvider..cxx_destruct <stripped>

	// Swift methods
	0x5d2e0  class func BridgedSoftPaywallHeightProvider.__allocating_init(heightProvider:) // init 
 }

 struct NewsSubscription.FamilyMember {

	// Properties
	let isOrganizer : Bool // +0x0
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case isOrganizer  
 }

 enum NewsSubscription.SettingsArticleAccess {

	// Properties
	case default  
	case restricted  
	case metered  
 }

 struct NewsSubscription.PurchaseFlow { }

 struct NewsSubscription.Entitlements { }

 struct NewsSubscription.Subscriptions { }

 struct NewsSubscription.BundleSubscriptions { }

 struct NewsSubscription.ALaCarteSubscriptions { }

 struct NewsSubscription.WebAccess { }

 struct NewsSubscription.PaywallTopOffsetConfiguration {

	// Properties
	let compactPortraitTopOffsetRatio : CGFloat // +0x0
	let compactLandscapeTopOffsetRatio : CGFloat // +0x8
	let regularPortraitTopOffsetRatio : CGFloat // +0x10
	let regularLandscapeTopOffsetRatio : CGFloat // +0x18
 }

 class NewsSubscription.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x602c0  @objc Assembly.assemblies <stripped>
	0x605d0  @objc Assembly.init <stripped>
	0x60640  @objc Assembly..cxx_destruct <stripped>
 }

 enum NewsSubscription.ArticleAccess { }

 class NewsSubscription.CampaignClickRecorder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let patterns : [URLHandlerPattern] // +0x10 (0x8)
	let bridgedCampaignClickRecorder : BridgedCampaignClickRecorder // +0x18 (0x8)

	// Swift methods
	0x60970  class func CampaignClickRecorder.__allocating_init(patterns:) // init 
 }

 struct NewsSubscription.ProcessRedirectValue {

	// Properties
	var endpoint : String // +0x0
	var whitelistedQueryParams : [String] // +0x10
 }

 enum NewsSubscription.CampaignLinkRecordingError {

	// Properties
	case missingProcessRedirectValue  
	case missingXpciRegisterUrl  
	case affiliateTokensNotAvailable  
	case unableToEncodeUrl  
	case unableToCreateURL  
	case missingURLRequest  
	case missingURLResult  
 }

 class NewsSubscription.ManagerAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x65410  @objc ManagerAssembly.init <stripped>

	// Swift methods
 }

 enum NewsSubscription.PaywallHostType {

	// Properties
	case article  
	case channelFeed  
	case magazineFeed  
 }

 class NewsSubscription.BridgedDeferredHardPaywallHeightProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let heightProvider : DeferredHardPaywallHeightProvider // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x65c90  @objc BridgedDeferredHardPaywallHeightProvider.init <stripped>
	0x65d10  @objc BridgedDeferredHardPaywallHeightProvider..cxx_destruct <stripped>

	// Swift methods
	0x65b40  class func BridgedDeferredHardPaywallHeightProvider.__allocating_init(heightProvider:) // init 
 }

 enum NewsSubscription.PurchaseConversionLocation {

	// Properties
	case unknown  
	case topOfArticle  
	case topOfChannel  
	case hardPaywall  
	case interstitialAd  
	case inArticleAd  
	case inFeedAd  
	case issueTableOfContents  
	case subscriptionRenewal  
	case landingPage  
	case magazineFeed  
 }

 enum NewsSubscription.PurchaseUserAction {

	// Properties
	case unknown  
	case deepLink  
	case swipingBetweenArticles  
	case tappedArticleFromFeed  
	case tappedArticleFromArticle  
 }

 struct NewsSubscription.ArticleAccessMap {

	// Properties
	var map : [String : ArticleAccess] // +0x0
 }

 class NewsSubscription.DatabaseAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x67890  @objc DatabaseAssembly.init <stripped>

	// Swift methods
 }

 struct NewsSubscription.PurchaseContext {

	// Properties
	var purchaseID : String // +0x0
	var purchaseSessionID : String // +0x10
	var sourceChannelID : String // +0x20
	var webAccessOptIn : Bool // +0x30
	var conversionLocation : PurchaseConversionLocation // +0x31
	var userAction : PurchaseUserAction // +0x32
	var traits : [PurchaseTraits] // +0x38
 }

 enum NewsSubscription.CodingKeys {

	// Properties
	case purchaseID  
	case purchaseSessionID  
	case sourceChannelID  
	case webAccessOptIn  
	case conversionLocation  
	case userAction  
	case traits  
 }

 class NewsSubscription.UnselectableLinkEnabledTextView : UITextView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x69ab0  @objc UnselectableLinkEnabledTextView.initWithFrame:textContainer: <stripped>
	0x69b40  @objc UnselectableLinkEnabledTextView.initWithCoder: <stripped>
 }

 enum NewsSubscription.PurchaseErrorAlert {

	// Properties
	case none  
	case ongoingPurchase  
	case purchaseDisabled  
	case missingConfiguration  
 }

 enum NewsSubscription.PurchaseLookupError {

	// Properties
	case lookupFailure  
 }
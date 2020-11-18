 protocol HealthExposureNotificationUI.AuthorizationFooterViewDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol HealthExposureNotificationUI.IconTextViewDelegate // 1 requirements
 {
	// method
 }
 protocol HealthExposureNotificationUI.AuthorizationDisplayable // 8 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// class init
 }
 protocol HealthExposureNotificationUI.Onboarding // 1 requirements
 {
	// getter
 }
 protocol HealthExposureNotificationUI.OnboardingFlow // 13 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }

 struct __C_Synthesized.ENError {

	// Properties
	let _nsError : NSError
 }

 struct __C_Synthesized.ENTestResultError {

	// Properties
	let _nsError : NSError
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : q…
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : q…
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : q…
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : q…
 }

 enum __C.ENDiagnosisReportType { }

 enum __C.ENRegionConsent { }

 enum __C.ENStatus { }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.Code { }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.Code { }

 struct __C.TraitKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : =Œ
 }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : q…
 }

 class HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	var hasSymptoms : Bool? // +0x18 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var symptomOnsetDate : ≥… // +0x0 (0x0)
	var isShowingDatePicker : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : À // +0x0 (0x8)
	var primaryButton : OBBoldTrayButton // +0x0 (0x8)
	var secondaryButton : OBLinkTrayButton // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x5e20  @objc VerificationSymptomDateEntryViewController.viewDidLoad <stripped>
	0x6ae0  @objc VerificationSymptomDateEntryViewController.datePickerValueChanged: <stripped>
	0x6c20  @objc VerificationSymptomDateEntryViewController.viewDidLayoutSubviews <stripped>
	0x6c60  @objc VerificationSymptomDateEntryViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x7020  @objc VerificationSymptomDateEntryViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x70f0  @objc VerificationSymptomDateEntryViewController.tableView:heightForHeaderInSection: <stripped>
	0x7170  @objc VerificationSymptomDateEntryViewController.tableView:heightForFooterInSection: <stripped>
	0x7340  @objc VerificationSymptomDateEntryViewController.didTapPrimaryButton <stripped>
	0x7370  @objc VerificationSymptomDateEntryViewController.didTapSecondaryButton <stripped>
	0x73a0  @objc VerificationSymptomDateEntryViewController.didTapCancel <stripped>
	0x7530  @objc VerificationSymptomDateEntryViewController.initWithTitle:detailText:icon: <stripped>
	0x7680  @objc VerificationSymptomDateEntryViewController.initWithTitle:detailText:symbolName: <stripped>
	0x73e0  @objc VerificationSymptomDateEntryViewController..cxx_destruct <stripped>

	// Swift methods
	0x4900  class func VerificationSymptomDateEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.SymptomOnsetDateCell : VerificationCell {
	// ObjC -> Swift bridged methods
	0x76d0  @objc SymptomOnsetDateCell.initWithStyle:reuseIdentifier: <stripped>
	0x7720  @objc SymptomOnsetDateCell.initWithCoder: <stripped>
 }

 class HealthExposureNotificationUI.DatePickerCell : VerificationCell {

	// Properties
	let datePicker : UIDatePicker

	// ObjC -> Swift bridged methods
	0x7780  @objc DatePickerCell.initWithStyle:reuseIdentifier: <stripped>
	0x77e0  @objc DatePickerCell.initWithCoder: <stripped>
	0x78e0  @objc DatePickerCell..cxx_destruct <stripped>
 }

 enum HealthExposureNotificationUI.Item {

	// Properties
	case authorityText  
	case symptoms  
	case symptomsDate  
	case symptomsDatePicker  
	case noSymptoms  
 }

 enum HealthExposureNotificationUI.Section {

	// Properties
	case authorityText  
	case symptoms  
	case noSymptoms  
 }

 class HealthExposureNotificationUI.LoadingStatusView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let spinnerView : UIActivityIndicatorView // +0x8 (0x8)
	let statusLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xb960  @objc LoadingStatusView.initWithCoder: <stripped>
	0xc000  @objc LoadingStatusView.initWithFrame: <stripped>
	0xbf10  @objc LoadingStatusView..cxx_destruct <stripped>

	// Swift methods
	0xb8f0  class func LoadingStatusView.__allocating_init(with:) // init 
	0xba40  func <stripped> // method 
	0xbe60  func LoadingStatusView.startAnimating() // method 
	0xbe80  func LoadingStatusView.stopAnimating() // method 
 }

 struct HealthExposureNotificationUI.PreApprovalDialogue {

	// Properties
	var icon : UIImage // +0x0
	var title : String // +0x8
	var detailText : String // +0x18
	var detailTextTemplate : String // +0x28
	var explainers : [(String, String)] // +0x38
	var primaryButtonTitle : String // +0x40
	var secondaryButtonTitle : String // +0x50
 }

 class HealthExposureNotificationUI.PreApprovalViewController {
 class HealthExposureNotificationUI.OnboardingSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0xd7a0  @objc OnboardingSummaryViewController.viewDidLoad <stripped>
	0xd840  @objc OnboardingSummaryViewController.didTapPrimaryButton <stripped>
	0xd8b0  @objc OnboardingSummaryViewController.didTapCancel <stripped>
	0xda80  @objc OnboardingSummaryViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0xd950  @objc OnboardingSummaryViewController..cxx_destruct <stripped>

	// Swift methods
	0xd490  class func OnboardingSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.ENUIPublicHealthHeaderStyle { }

 class HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let subtitle : String
	let backgroundColor : UIColor
	let textColor : UIColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logoURL : ô√
	let style : ENUIPublicHealthHeaderStyle

	// ObjC -> Swift bridged methods
	0xe570  @objc ENUIPublicHealthHeader.title <stripped>
	0xe5b0  @objc ENUIPublicHealthHeader.subtitle <stripped>
	0xe5f0  @objc ENUIPublicHealthHeader.backgroundColor <stripped>
	0xe630  @objc ENUIPublicHealthHeader.textColor <stripped>
	0xe670  @objc ENUIPublicHealthHeader.logoURL <stripped>
	0xe730  @objc ENUIPublicHealthHeader.style <stripped>
	0xe970  @objc ENUIPublicHealthHeader.initWithTitle:subtitle:backgroundColor:textColor:logoURL:style: <stripped>
	0xeb80  @objc ENUIPublicHealthHeader.init <stripped>
	0xeae0  @objc ENUIPublicHealthHeader..cxx_destruct <stripped>

	// Swift methods
	0xe770  class func ENUIPublicHealthHeader.__allocating_init(title:subtitle:backgroundColor:textColor:logoURL:style:) // init 
 }

 class HealthExposureNotificationUI.ENUIPublicHealthLegalDocument : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let text : String // +0x8 (0x10)
	let version : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xebb0  @objc ENUIPublicHealthLegalDocument.text <stripped>
	0xebf0  @objc ENUIPublicHealthLegalDocument.version <stripped>
	0xed20  @objc ENUIPublicHealthLegalDocument.initWithText:version: <stripped>
	0xee60  @objc ENUIPublicHealthLegalDocument.init <stripped>
	0xedf0  @objc ENUIPublicHealthLegalDocument..cxx_destruct <stripped>

	// Swift methods
	0xec30  class func ENUIPublicHealthLegalDocument.__allocating_init(text:version:) // init 
 }

 class HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let textConsented : String
	let versionConsented : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateConsented : ù√

	// ObjC -> Swift bridged methods
	0xee90  @objc ENUIUserConsentStatus.textConsented <stripped>
	0xeed0  @objc ENUIUserConsentStatus.versionConsented <stripped>
	0xef10  @objc ENUIUserConsentStatus.dateConsented <stripped>
	0xf0f0  @objc ENUIUserConsentStatus.initWithTextConsented:versionConsented:dateConsented: <stripped>
	0xf270  @objc ENUIUserConsentStatus.init <stripped>
	0xf1f0  @objc ENUIUserConsentStatus..cxx_destruct <stripped>

	// Swift methods
	0xefb0  class func ENUIUserConsentStatus.__allocating_init(textConsented:versionConsented:dateConsented:) // init 
 }

 class HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let region : ENRegion
	let name : String
	let appBundleId : String?
	let introductoryText : String
	let header : ENUIPublicHealthHeader
	let legalese : ENUIPublicHealthLegalDocument
	let consentStatus : ENUIUserConsentStatus
	let isAuthorized : Bool
	let regionVersion : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let regionWebsiteURL : ô√
	let verificationIntroductoryText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let verificationCodeHelpURL : ô√
	let verificationSymptomOnsetText : String
	let verificationTravelStatusText : String

	// ObjC -> Swift bridged methods
	0xf2a0  @objc ENUIPublicHealthAgencyModel.region <stripped>
	0xf2e0  @objc ENUIPublicHealthAgencyModel.name <stripped>
	0xf320  @objc ENUIPublicHealthAgencyModel.appBundleId <stripped>
	0xf3d0  @objc ENUIPublicHealthAgencyModel.introductoryText <stripped>
	0xf410  @objc ENUIPublicHealthAgencyModel.header <stripped>
	0xf450  @objc ENUIPublicHealthAgencyModel.legalese <stripped>
	0xf4b0  @objc ENUIPublicHealthAgencyModel.consentStatus <stripped>
	0xf510  @objc ENUIPublicHealthAgencyModel.isAuthorized <stripped>
	0xf540  @objc ENUIPublicHealthAgencyModel.regionVersion <stripped>
	0xf580  @objc ENUIPublicHealthAgencyModel.regionWebsiteURL <stripped>
	0xf5c0  @objc ENUIPublicHealthAgencyModel.verificationIntroductoryText <stripped>
	0xf600  @objc ENUIPublicHealthAgencyModel.verificationCodeHelpURL <stripped>
	0xf6e0  @objc ENUIPublicHealthAgencyModel.verificationSymptomOnsetText <stripped>
	0xf720  @objc ENUIPublicHealthAgencyModel.verificationTravelStatusText <stripped>
	0xf7d0  @objc ENUIPublicHealthAgencyModel.isSymptomOnsetNeeded <stripped>
	0xf810  @objc ENUIPublicHealthAgencyModel.isTravelStatusNeeded <stripped>
	0xfbd0  @objc ENUIPublicHealthAgencyModel.initWithRegion:name:appBundleId:introductoryText:header:legalese:consentStatus:isAuthorized:regionVersion:regionWebsiteURL:verificationIntroductoryText:verificationCodeHelpURL:verificationSymptomOnsetText:verificationTravelStatusText: <stripped>
	0xfe20  @objc ENUIPublicHealthAgencyModel.isAppInstalled <stripped>
	0xff50  @objc ENUIPublicHealthAgencyModel.installedAppName <stripped>
	0x10190  @objc ENUIPublicHealthAgencyModel.installedAppIcon <stripped>
	0x10420  @objc ENUIPublicHealthAgencyModel.regionIsPlaceholder <stripped>
	0x10c90  @objc ENUIPublicHealthAgencyModel.init <stripped>
	0x10b60  @objc ENUIPublicHealthAgencyModel..cxx_destruct <stripped>

	// Swift methods
	0xf7f0  func ENUIPublicHealthAgencyModel.isSymptomOnsetNeeded.getter // getter 
	0xf870  func ENUIPublicHealthAgencyModel.isTravelStatusNeeded.getter // getter 
	0xf8d0  class func ENUIPublicHealthAgencyModel.__allocating_init(region:name:appBundleId:introductoryText:header:legalese:consentStatus:isAuthorized:regionVersion:regionWebsiteURL:verificationIntroductoryText:verificationCodeHelpURL:verificationSymptomOnsetText:verificationTravelStatusText:) // init 
	0xfe60  func ENUIPublicHealthAgencyModel.isAppInstalled.getter // getter 
	0xffb0  func ENUIPublicHealthAgencyModel.installedAppName.getter // getter 
	0x101d0  func ENUIPublicHealthAgencyModel.installedAppIcon.getter // getter 
	0x104e0  func ENUIPublicHealthAgencyModel.regionIsPlaceholder.getter // getter 
 }

 class HealthExposureNotificationUI.AuthorizationFooterView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var delegate : AuthorizationFooterViewDelegate // +0x8 (0x10)
	let primaryButton : OBBoldTrayButton // +0x18 (0x8)
	let secondaryButton : OBBoldTrayButton // +0x20 (0x8)
	let visualEffectView : UIVisualEffectView // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x15ae0  @objc AuthorizationFooterView.initWithFrame: <stripped>
	0x15b10  @objc AuthorizationFooterView.initWithCoder: <stripped>
	0x16330  @objc AuthorizationFooterView.didTapPrimaryButton <stripped>
	0x163c0  @objc AuthorizationFooterView.didTapSecondaryButton <stripped>
	0x16480  @objc AuthorizationFooterView..cxx_destruct <stripped>

	// Swift methods
	0x15b50  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionChangeSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x16960  @objc OnboardingRegionChangeSummaryViewController.viewDidLoad <stripped>
	0x16a00  @objc OnboardingRegionChangeSummaryViewController.didTapPrimaryButton <stripped>
	0x16bd0  @objc OnboardingRegionChangeSummaryViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x16aa0  @objc OnboardingRegionChangeSummaryViewController..cxx_destruct <stripped>

	// Swift methods
	0x16650  class func OnboardingRegionChangeSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.StandardOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying
	let isFromAvailabilityAlert : Bool

	// Swift methods
	0x177e0  func StandardOnboardingFlow.completionHandler.getter // getter 
	0x17820  func StandardOnboardingFlow.completionHandler.setter // setter 
	0x17860  func StandardOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x178a0  func StandardOnboardingFlow.healthAgencyModel.getter // getter 
	0x178e0  func StandardOnboardingFlow.healthAgencyModel.setter // setter 
	0x17920  func StandardOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x17950  func StandardOnboardingFlow.currentSelectedRegion.getter // getter 
	0x179e0  func StandardOnboardingFlow.currentSelectedRegion.setter // setter 
	0x17ac0  func StandardOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x17b00  class func StandardOnboardingFlow.__allocating_init(agencyModel:exposureManager:isFromAvailabilityAlert:completion:) // init 
	0x17ce0  func StandardOnboardingFlow.initialViewController.getter // getter 
	0x17d30  func StandardOnboardingFlow.didTapNext(from:) // method 
	0x17d60  func StandardOnboardingFlow.didTapCancel(from:) // method 
	0x18610  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.SymptomOnset {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case date : ù√
	case noSymptoms  
 }

 class HealthExposureNotificationUI.AddRegionOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying

	// Swift methods
	0x21210  func AddRegionOnboardingFlow.completionHandler.getter // getter 
	0x21350  func AddRegionOnboardingFlow.completionHandler.setter // setter 
	0x19020  func AddRegionOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x211c0  func AddRegionOnboardingFlow.healthAgencyModel.getter // getter 
	0x214d0  func AddRegionOnboardingFlow.healthAgencyModel.setter // setter 
	0x19050  func AddRegionOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x212f0  func AddRegionOnboardingFlow.currentSelectedRegion.getter // getter 
	0x214c0  func AddRegionOnboardingFlow.currentSelectedRegion.setter // setter 
	0x19080  func AddRegionOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x190b0  class func AddRegionOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x19270  func AddRegionOnboardingFlow.initialViewController.getter // getter 
	0x19300  func AddRegionOnboardingFlow.didTapNext(from:) // method 
	0x196a0  func AddRegionOnboardingFlow.didTapCancel(from:) // method 
	0x19a90  func <stripped> // method 
 }

 class HealthExposureNotificationUI.VerificationOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sessionIdentifier : ç¬
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	let nonNilAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying
	var symptomOnset : SymptomOnset
	var hasTraveled : Bool?

	// Swift methods
	0x21220  func VerificationOnboardingFlow.completionHandler.getter // getter 
	0x21360  func VerificationOnboardingFlow.completionHandler.setter // setter 
	0x1a280  func VerificationOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x1a2b0  func VerificationOnboardingFlow.sessionIdentifier.getter // getter 
	0x1a2d0  func VerificationOnboardingFlow.sessionIdentifier.setter // setter 
	0x1a2f0  func VerificationOnboardingFlow.sessionIdentifier.modify // modifyCoroutine 
	0x1a330  func VerificationOnboardingFlow.healthAgencyModel.getter // getter 
	0x1a370  func VerificationOnboardingFlow.healthAgencyModel.setter // setter 
	0x1a3c0  func VerificationOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x1a400  func VerificationOnboardingFlow.currentSelectedRegion.getter // getter 
	0x1a470  func VerificationOnboardingFlow.currentSelectedRegion.setter // setter 
	0x1a530  func VerificationOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x1a590  func VerificationOnboardingFlow.symptomOnset.getter // getter 
	0x1a5f0  func VerificationOnboardingFlow.symptomOnset.setter // setter 
	0x1a660  func VerificationOnboardingFlow.symptomOnset.modify // modifyCoroutine 
	0x1a6a0  func VerificationOnboardingFlow.hasTraveled.getter // getter 
	0x1a6d0  func VerificationOnboardingFlow.hasTraveled.setter // setter 
	0x1a710  func VerificationOnboardingFlow.hasTraveled.modify // modifyCoroutine 
	0x1a750  class func VerificationOnboardingFlow.__allocating_init(sessionIdentifier:agencyModel:exposureManager:completion:) // init 
	0x1a9d0  func VerificationOnboardingFlow.initialViewController.getter // getter 
	0x1aa40  func VerificationOnboardingFlow.didTapNext(from:) // method 
	0x1aa70  func VerificationOnboardingFlow.didTapCancel(from:) // method 
	0x1b0f0  func VerificationOnboardingFlow.fetchTestMetadata(_:completionHandler:) // method 
 }

 class HealthExposureNotificationUI.IconTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let icon : UIImage? // +0x8 (0x8)
	let title : String? // +0x10 (0x10)
	let details : String // +0x20 (0x10)
	let footer : String? // +0x30 (0x10)
	let highlightedText : String? // +0x40 (0x10)
	var delegate : IconTextViewDelegate // +0x50 (0x10)
	let textStack : UIStackView // +0x60 (0x8)
	let iconView : UIImageView // +0x68 (0x8)

	// ObjC -> Swift bridged methods
	0x22150  @objc IconTextView.initWithCoder: <stripped>
	0x22570  @objc IconTextView.didTapText: <stripped>
	0x22600  @objc IconTextView.intrinsicContentSize <stripped>
	0x22640  @objc IconTextView.tintColor <stripped>
	0x22680  @objc IconTextView.setTintColor: <stripped>
	0x22840  @objc IconTextView.initWithFrame: <stripped>
	0x227a0  @objc IconTextView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.OnboardingInfoViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x251b0  @objc OnboardingInfoViewController.viewDidLoad <stripped>
	0x25270  @objc OnboardingInfoViewController.viewDidDisappear: <stripped>
	0x25420  @objc OnboardingInfoViewController.initWithNibName:bundle: <stripped>
	0x25580  @objc OnboardingInfoViewController.initWithCoder: <stripped>
	0x25350  @objc OnboardingInfoViewController..cxx_destruct <stripped>
 }

 class HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : StandardOnboardingFlow // +0x8 (0x8)
	let notificationPreview : NotificationPreviewView // +0x10 (0x8)
	let primaryButton : OBBoldTrayButton // +0x18 (0x8)
	let secondaryButton : OBLinkTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x25c70  @objc OnboardingWelcomeViewController.initWithCoder: <stripped>
	0x280d0  @objc OnboardingWelcomeViewController.viewDidLoad <stripped>
	0x282d0  @objc OnboardingWelcomeViewController.viewWillAppear: <stripped>
	0x28360  @objc OnboardingWelcomeViewController.viewDidDisappear: <stripped>
	0x28f20  @objc OnboardingWelcomeViewController.didTapHowExposureNotificationsWork <stripped>
	0x29210  @objc OnboardingWelcomeViewController.didTapFooterLabel <stripped>
	0x29240  @objc OnboardingWelcomeViewController.didTapPrimaryButton <stripped>
	0x29260  @objc OnboardingWelcomeViewController.didTapSecondaryButton <stripped>
	0x292c0  @objc OnboardingWelcomeViewController.didTapDone <stripped>
	0x29380  @objc OnboardingWelcomeViewController.initWithNibName:bundle: <stripped>
	0x293e0  @objc OnboardingWelcomeViewController..cxx_destruct <stripped>

	// Swift methods
	0x25c00  class func OnboardingWelcomeViewController.__allocating_init(flow:) // init 
 }

 enum HealthExposureNotificationUI.SelectionType {

	// Properties
	case countrySelection  
	case stateSelection  
 }

 class HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let selectionType : SelectionType // +0x18 (0x1)
	let statusView : LoadingStatusView // +0x20 (0x8)
	let iconView : UIImageView // +0x28 (0x8)
	let regionTableView : UITableView // +0x30 (0x8)
	let regionsProvider : RegionsProvider // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var canceller : π¡ // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x29c00  @objc OnboardingRegionSelectionViewController.initWithCoder: <stripped>
	0x29c90  @objc OnboardingRegionSelectionViewController.dealloc <stripped>
	0x2af90  @objc OnboardingRegionSelectionViewController.viewDidLoad <stripped>
	0x2b070  @objc OnboardingRegionSelectionViewController.viewWillAppear: <stripped>
	0x2b130  @objc OnboardingRegionSelectionViewController.didTapDone <stripped>
	0x2b150  @objc OnboardingRegionSelectionViewController.didTapCancel <stripped>
	0x2b1f0  @objc OnboardingRegionSelectionViewController.tableView:numberOfRowsInSection: <stripped>
	0x2b680  @objc OnboardingRegionSelectionViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x2bae0  @objc OnboardingRegionSelectionViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x2c4d0  @objc OnboardingRegionSelectionViewController.initWithNibName:bundle: <stripped>
	0x29d10  @objc OnboardingRegionSelectionViewController..cxx_destruct <stripped>

	// Swift methods
	0x29740  class func OnboardingRegionSelectionViewController.__allocating_init(flow:type:) // init 
 }

 class HealthExposureNotificationUI.VerificationSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	let primaryButton : OBBoldTrayButton // +0x18 (0x8)
	let secondaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x2e5d0  @objc VerificationSummaryViewController.viewDidLoad <stripped>
	0x2e630  @objc VerificationSummaryViewController.didTapLearnMoreButton <stripped>
	0x2f580  @objc VerificationSummaryViewController.didTapPrimaryButton <stripped>
	0x308e0  @objc VerificationSummaryViewController.didTapSecondaryButton <stripped>
	0x309f0  @objc VerificationSummaryViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x30a60  @objc VerificationSummaryViewController..cxx_destruct <stripped>

	// Swift methods
	0x2da40  class func VerificationSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.AuthorizationViewController {
 class HealthExposureNotificationUI.OnboardingRegionNotAvailableViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let region : RegionNameAndCode // +0x18 (0x20)
	let primaryButton : OBBoldTrayButton // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x351c0  @objc OnboardingRegionNotAvailableViewController.viewDidLoad <stripped>
	0x35220  @objc OnboardingRegionNotAvailableViewController.didTapPrimaryButton <stripped>
	0x35370  @objc OnboardingRegionNotAvailableViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x353e0  @objc OnboardingRegionNotAvailableViewController..cxx_destruct <stripped>

	// Swift methods
	0x34eb0  class func OnboardingRegionNotAvailableViewController.__allocating_init(flow:region:) // init 
 }

 enum HealthExposureNotificationUI.AppStoreAssetError {

	// Properties
	case unknown  
	case assetUnavailable  
	case downloadFailed  
	case imageDecodingFailed  
 }

 class HealthExposureNotificationUI.AppStoreAssetManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x38150  @objc AppStoreAssetManager.init <stripped>
 }

 class HealthExposureNotificationUI.ENManagerAdapter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var exposureNotificationStatus : ENStatus // +0x8 (0x8)
	var isExposureLoggingDataPresent : Bool // +0x10 (0x1)
	var areAvailabilityAlertsEnabled : Bool // +0x11 (0x1)
	var statusChangeHandler : ENStatus // +0x18 (0x10)
	let manager : ENManager // +0x28 (0x8)
	let activationGroup : OS_dispatch_group // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var statusObservation : ±ª // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x39a20  @objc ENManagerAdapter.exposureNotificationStatus <stripped>
	0x39a90  @objc ENManagerAdapter.setExposureNotificationStatus: <stripped>
	0x39b50  @objc ENManagerAdapter.isExposureLoggingDataPresent <stripped>
	0x39b90  @objc ENManagerAdapter.setIsExposureLoggingDataPresent: <stripped>
	0x39c20  @objc ENManagerAdapter.areAvailabilityAlertsEnabled <stripped>
	0x39cc0  @objc ENManagerAdapter.setAreAvailabilityAlertsEnabled: <stripped>
	0x39dc0  @objc ENManagerAdapter.statusChangeHandler <stripped>
	0x39f00  @objc ENManagerAdapter.setStatusChangeHandler: <stripped>
	0x3a300  @objc ENManagerAdapter.manager <stripped>
	0x3a8f0  @objc ENManagerAdapter.init <stripped>
	0x3a9d0  @objc ENManagerAdapter.dealloc <stripped>
	0x3b1e0  @objc ENManagerAdapter.refreshStatusWithCompletion: <stripped>
	0x3b2c0  @objc ENManagerAdapter.setExposureNotificationEnabled:completion: <stripped>
	0x3b640  @objc ENManagerAdapter.onboardingDidStartForRegion:source: <stripped>
	0x3b740  @objc ENManagerAdapter.setActiveRegion:completion: <stripped>
	0x3b990  @objc ENManagerAdapter.setActivePhaseOneAppWithBundleIdentifier:completion: <stripped>
	0x3bc40  @objc ENManagerAdapter.latestExposureNotification: <stripped>
	0x3e3a0  @objc ENManagerAdapter.fetchAgencyModelForRegionCode:completion: <stripped>
	0x3e670  @objc ENManagerAdapter.fetchAllEntities: <stripped>
	0x3e9e0  @objc ENManagerAdapter.getAgencyModelForBundleID:completion: <stripped>
	0x3ed00  @objc ENManagerAdapter.getAgencyModelForRegionCode:completion: <stripped>
	0x3ef90  @objc ENManagerAdapter.allRegionConfigurations: <stripped>
	0x3f0d0  @objc ENManagerAdapter.isShareStatisticsEnabledForRegion:completion: <stripped>
	0x3f2a0  @objc ENManagerAdapter.setShareStatisticsEnabled:region:completion: <stripped>
	0x3f470  @objc ENManagerAdapter.isTravelStatusEnabledForRegion:completion: <stripped>
	0x3f650  @objc ENManagerAdapter.setTravelStatusEnabled:region:completion: <stripped>
	0x3f8e0  @objc ENManagerAdapter.isPreReleaseAuthorizedForRegion:completion: <stripped>
	0x3fb60  @objc ENManagerAdapter.setPreReleaseAuthorized:region:completion: <stripped>
	0x3fed0  @objc ENManagerAdapter.resetAllDataAndDisableExposureNotifications: <stripped>
	0x40220  @objc ENManagerAdapter.setAvailabilityAlertsEnabled:completion: <stripped>
	0x403c0  @objc ENManagerAdapter.setWeeklySummaryEnabled:completion: <stripped>
	0x407d0  @objc ENManagerAdapter.setUserConsent:region:text:version:completion: <stripped>
	0x3a9f0  @objc ENManagerAdapter..cxx_destruct <stripped>

	// Swift methods
	0x39a60  func ENManagerAdapter.exposureNotificationStatus.getter // getter 
	0x39ad0  func ENManagerAdapter.exposureNotificationStatus.setter // setter 
	0x39b10  func ENManagerAdapter.exposureNotificationStatus.modify // modifyCoroutine 
	0x39b70  func ENManagerAdapter.isExposureLoggingDataPresent.getter // getter 
	0x39bb0  func ENManagerAdapter.isExposureLoggingDataPresent.setter // setter 
	0x39bd0  func ENManagerAdapter.isExposureLoggingDataPresent.modify // modifyCoroutine 
	0x39c70  func ENManagerAdapter.areAvailabilityAlertsEnabled.getter // getter 
	0x39d20  func ENManagerAdapter.areAvailabilityAlertsEnabled.setter // setter 
	0x39d80  func ENManagerAdapter.areAvailabilityAlertsEnabled.modify // modifyCoroutine 
	0x39e70  func ENManagerAdapter.statusChangeHandler.getter // getter 
	0x39f90  func ENManagerAdapter.statusChangeHandler.setter // setter 
	0x39ff0  func ENManagerAdapter.statusChangeHandler.modify // modifyCoroutine 
	0x3aa50  func <stripped> // method 
	0x3ac10  func ENManagerAdapter.refreshStatus(_:) // method 
	0x3b230  func ENManagerAdapter.setExposureNotification(enabled:completion:) // method 
	0x3b330  func ENManagerAdapter.onboardingDidStart(forRegion:source:) // method 
	0x3b6e0  func ENManagerAdapter.set(activeRegion:completion:) // method 
	0x3b7c0  func ENManagerAdapter.setActivePhaseOneApp(with:completion:) // method 
	0x3baa0  func ENManagerAdapter.latestExposureNotification(_:) // method 
	0x3bc80  func <stripped> // method 
	0x3ce60  func ENManagerAdapter.fetchAgencyModel(for:completionHandler:) // method 
	0x3e440  func ENManagerAdapter.fetchAllEntities(_:) // method 
	0x3e7d0  func ENManagerAdapter.getAgencyModel(forBundleID:completion:) // method 
	0x3ea30  func ENManagerAdapter.getAgencyModel(forRegionCode:completion:) // method 
	0x3ee40  func ENManagerAdapter.allRegionConfigurations(_:) // method 
	0x3f030  func ENManagerAdapter.isShareStatisticsEnabled(for:completion:) // method 
	0x3f200  func ENManagerAdapter.setShareStatistics(_:region:completion:) // method 
	0x3f370  func ENManagerAdapter.isTravelStatusEnabled(for:completion:) // method 
	0x3f4a0  func ENManagerAdapter.setTravelStatus(_:region:completion:) // method 
	0x3f740  func ENManagerAdapter.isPreReleaseAuthorized(for:completion:) // method 
	0x3fa00  func ENManagerAdapter.setPreRelease(_:region:completion:) // method 
	0x3fc30  func ENManagerAdapter.resetAllDataAndDisableExposureNotifications(_:) // method 
	0x3ffd0  func ENManagerAdapter.setAvailabilityAlertsEnabled(_:completion:) // method 
	0x40250  func ENManagerAdapter.setWeeklySummaryEnabled(_:completion:) // method 
	0x404c0  func ENManagerAdapter.setUserConsent(_:region:text:version:completion:) // method 
	0x40980  func ENManagerAdapter.startTestVerificationSession(verificationCode:region:completionHandler:) // method 
	0x40f90  func ENManagerAdapter.fetchTestMetadata(for:completionHandler:) // method 
	0x41a40  func ENManagerAdapter.finishSession(_:userDidConsent:symptomOnset:hasTraveled:completionHandler:) // method 
 }

 class HealthExposureNotificationUI.OnboardingLegalConsentViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let showsTurnOnExposureNotificationsAlert : Bool // +0x20 (0x1)
	let shouldSetActiveRegion : Bool // +0x21 (0x1)
	let primaryButton : OBBoldTrayButton // +0x28 (0x8)
	let secondaryButton : OBLinkTrayButton // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x467d0  @objc OnboardingLegalConsentViewController.viewDidLoad <stripped>
	0x47250  @objc OnboardingLegalConsentViewController.didTapPrimaryButton <stripped>
	0x47b70  @objc OnboardingLegalConsentViewController.didTapSecondaryButton <stripped>
	0x47ba0  @objc OnboardingLegalConsentViewController.didTapCancel <stripped>
	0x47ec0  @objc OnboardingLegalConsentViewController.didConfirmAgree <stripped>
	0x47fb0  @objc OnboardingLegalConsentViewController.didConfirmDontAgree <stripped>
	0x480c0  @objc OnboardingLegalConsentViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x48130  @objc OnboardingLegalConsentViewController..cxx_destruct <stripped>

	// Swift methods
	0x45eb0  class func OnboardingLegalConsentViewController.__allocating_init(flow:agencyModel:showsTurnOnExposureNotificationsAlert:shouldSetActiveRegion:) // init 
 }

 struct HealthExposureNotificationUI.LocalizationSource {

	// Properties
	let bundle : NSBundle // +0x0
	let table : String // +0x8
 }

 class HealthExposureNotificationUI.VerificationCodeEntryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	let statusView : LoadingStatusView // +0x18 (0x8)
	var entryView : ENUIVerificationCodeEntryView? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x4a380  @objc VerificationCodeEntryViewController.viewDidLoad <stripped>
	0x4a6f0  @objc VerificationCodeEntryViewController.viewWillAppear: <stripped>
	0x4a8b0  @objc VerificationCodeEntryViewController.didTapHelpButton <stripped>
	0x4ac50  @objc VerificationCodeEntryViewController.didTapCancel <stripped>
	0x4e2d0  @objc VerificationCodeEntryViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x4e340  @objc VerificationCodeEntryViewController..cxx_destruct <stripped>

	// Swift methods
	0x49500  class func VerificationCodeEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.VerificationFinishedViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let primaryButton : OBBoldTrayButton // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x4f900  @objc VerificationFinishedViewController.viewDidLoad <stripped>
	0x4faa0  @objc VerificationFinishedViewController.didTapPrimaryButton <stripped>
	0x4fbb0  @objc VerificationFinishedViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x4fc20  @objc VerificationFinishedViewController..cxx_destruct <stripped>

	// Swift methods
	0x4f5a0  class func VerificationFinishedViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let imageView : UIImageView
	let header : ENUIPublicHealthHeader
	let insets : UIEdgeInsets
	var imageViewWidthConstraint : NSLayoutConstraint?
	var labelContainerLeadingConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0x50150  @objc OnboardingHeaderView.initWithHeader:insets:corners: <stripped>
	0x501e0  @objc OnboardingHeaderView.initWithCoder: <stripped>
	0x52050  @objc OnboardingHeaderView.initWithFrame: <stripped>
	0x51f50  @objc OnboardingHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x500b0  class func OnboardingHeaderView.__allocating_init(header:insets:corners:) // init 
	0x50200  func <stripped> // method 
	0x506f0  func <stripped> // method 
	0x512a0  func <stripped> // method 
	0x51640  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.Constants { }

 class HealthExposureNotificationUI.OnboardingAuthorityTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let headerView : OnboardingHeaderView
	let textView : UITextView

	// ObjC -> Swift bridged methods
	0x52080  @objc OnboardingAuthorityTextView.initWithCoder: <stripped>
	0x52130  @objc OnboardingAuthorityTextView.initWithFrame: <stripped>
	0x521b0  @objc OnboardingAuthorityTextView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.AuthorizationHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let iconImageView : UIImageView // +0x8 (0x8)
	let arrowImageView : UIImageView // +0x10 (0x8)
	let peopleImageView : UIImageView // +0x18 (0x8)
	var $__lazy_storage_$_iconStack : UIStackView? // +0x20 (0x8)
	let titleLabel : UILabel // +0x28 (0x8)
	let bodyLabel : UILabel // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x538c0  @objc AuthorizationHeaderView.initWithFrame: <stripped>
	0x538f0  @objc AuthorizationHeaderView.initWithCoder: <stripped>
	0x547b0  @objc AuthorizationHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x53930  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.OnboardingStep {

	// Properties
	case welcome  
	case countrySelection  
	case stateSelection  
	case info  
	case legalConsent  
	case summary  
	case openAppStore  
	case alreadyExists  
	case notAvailable  
	case analytics  
	case verificationWelcome  
	case verificationCodeEntry  
	case verificationSymptomDateEntry  
	case verificationTravelStatus  
	case verificationSummary  
	case verificationFinished  
 }

 struct HealthExposureNotificationUI.RegionNameAndCode {

	// Properties
	let displayName : String // +0x0
	let code : String // +0x10
 }

 class HealthExposureNotificationUI.RegionsProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _countries : ùÀ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _states : ùÀ // +0x0 (0x0)

	// Swift methods
	0x55310  func <stripped> // getter 
	0x55330  func <stripped> // getter 
	0x553b0  func RegionsProvider.loadCountries() // method 
	0x555e0  func RegionsProvider.loadStates() // method 
 }

 enum HealthExposureNotificationUI.CodingKeys {

	// Properties
	case displayName  
	case code  
 }

 struct HealthExposureNotificationUI.KeyReleaseDialogue {

	// Properties
	var icon : UIImage // +0x0
	var title : String // +0x8
	var detailText : String // +0x18
	var detailTextTemplate : String // +0x28
	var explainers : [(String, String)] // +0x38
	var primaryButtonTitle : String // +0x40
	var secondaryButtonTitle : String // +0x50
 }

 class HealthExposureNotificationUI.KeyReleaseAuthorizationViewController {
 enum HealthExposureNotificationUI.LogCategory {

	// Properties
	case general  
	case testVerification  
	case buddy  
	case remoteUI  
 }

 struct HealthExposureNotificationUI.Log {

	// Properties
	let categories : LogCategory // +0x0
 }

 struct HealthExposureNotificationUI.LogCategoryWrapper {

	// Properties
	let handle : OS_os_log // +0x0
 }

 class HealthExposureNotificationUI.VerificationTravelStatusViewController : OBTableWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	var hasTraveled : Bool? // +0x18 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : Á∏ // +0x20 (0x8)
	var primaryButton : OBBoldTrayButton // +0x28 (0x8)
	var secondaryButton : OBLinkTrayButton // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x5eac0  @objc VerificationTravelStatusViewController.viewDidLoad <stripped>
	0x5f400  @objc VerificationTravelStatusViewController.viewDidLayoutSubviews <stripped>
	0x5f4e0  @objc VerificationTravelStatusViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x5f6d0  @objc VerificationTravelStatusViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x5f7a0  @objc VerificationTravelStatusViewController.tableView:heightForHeaderInSection: <stripped>
	0x5f820  @objc VerificationTravelStatusViewController.tableView:heightForFooterInSection: <stripped>
	0x5f9b0  @objc VerificationTravelStatusViewController.didTapPrimaryButton <stripped>
	0x5fae0  @objc VerificationTravelStatusViewController.didTapSecondaryButton <stripped>
	0x5fb10  @objc VerificationTravelStatusViewController.didTapCancel <stripped>
	0x5fc30  @objc VerificationTravelStatusViewController.initWithTitle:detailText:icon: <stripped>
	0x5fd80  @objc VerificationTravelStatusViewController.initWithTitle:detailText:symbolName: <stripped>
	0x5fde0  @objc VerificationTravelStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x5e170  class func VerificationTravelStatusViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.Item {

	// Properties
	case authorityText  
	case traveled  
	case notTraveled  
 }

 enum HealthExposureNotificationUI.Section {

	// Properties
	case authorityText  
	case traveled  
 }

 class HealthExposureNotificationUI.VerificationWelcomeViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	let primaryButton : OBBoldTrayButton // +0x18 (0x8)
	let secondaryButton : OBLinkTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x612c0  @objc VerificationWelcomeViewController.viewDidLoad <stripped>
	0x61730  @objc VerificationWelcomeViewController.didTapPrimaryButton <stripped>
	0x61760  @objc VerificationWelcomeViewController.didTapCancel <stripped>
	0x61880  @objc VerificationWelcomeViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x618f0  @objc VerificationWelcomeViewController..cxx_destruct <stripped>

	// Swift methods
	0x60a80  class func VerificationWelcomeViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.OnboardingResult { }

 enum HealthExposureNotificationUI.OnboardingSource { }

 class HealthExposureNotificationUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x61f80  @objc ViewControllerFactory.createOnboardingStackForAgencyModel:exposureManager:fromAvailabilityAlert:completion: <stripped>
	0x62050  @objc ViewControllerFactory.createVerificationStackForAgencyModel:exposureManager:sessionIdentifier:completion: <stripped>
	0x62260  @objc ViewControllerFactory.createKeyReleaseDialogueWithBundleIdentifier:region:completion: <stripped>
	0x62490  @objc ViewControllerFactory.createPreApprovalDialogueWithBundleIdentifier:region:completion: <stripped>
	0x62650  @objc ViewControllerFactory.init <stripped>
	0x62610  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x61f70  func ViewControllerFactory.createOnboardingStack(forAgencyModel:exposureManager:fromAvailabilityAlert:completion:) // method 
	0x62040  func ViewControllerFactory.createVerificationStack(forAgencyModel:exposureManager:sessionIdentifier:completion:) // method 
	0x62180  func ViewControllerFactory.createKeyReleaseDialogue(with:region:completion:) // method 
	0x623b0  func ViewControllerFactory.createPreApprovalDialogue(with:region:completion:) // method 
 }

 class HealthExposureNotificationUI.OnboardingOpenAppStoreViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x635e0  @objc OnboardingOpenAppStoreViewController.viewDidLoad <stripped>
	0x63640  @objc OnboardingOpenAppStoreViewController.openAppStoreButtonTapped <stripped>
	0x636f0  @objc OnboardingOpenAppStoreViewController.didTapPrimaryButton <stripped>
	0x63840  @objc OnboardingOpenAppStoreViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x638b0  @objc OnboardingOpenAppStoreViewController..cxx_destruct <stripped>

	// Swift methods
	0x62d40  class func OnboardingOpenAppStoreViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.NotificationPreviewView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let content : NotificationContent
	var isPresented : Bool

	// ObjC -> Swift bridged methods
	0x64fa0  @objc NotificationPreviewView.initWithFrame: <stripped>
	0x64fd0  @objc NotificationPreviewView.initWithCoder: <stripped>
	0x65090  @objc NotificationPreviewView..cxx_destruct <stripped>
 }

 class HealthExposureNotificationUI.NotificationCapsuleView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
	0x651e0  @objc NotificationCapsuleView.initWithFrame: <stripped>
	0x65260  @objc NotificationCapsuleView.initWithCoder: <stripped>
	0x652b0  @objc NotificationCapsuleView.intrinsicContentSize <stripped>
 }

 class HealthExposureNotificationUI.NotificationContent : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let notificationContainer : NotificationCapsuleView

	// ObjC -> Swift bridged methods
	0x66180  @objc NotificationContent.initWithFrame: <stripped>
	0x66270  @objc NotificationContent.initWithCoder: <stripped>
	0x66330  @objc NotificationContent.intrinsicContentSize <stripped>
	0x663b0  @objc NotificationContent..cxx_destruct <stripped>
 }

 class HealthExposureNotificationUI.VerificationTableView : UITableView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var $__lazy_storage_$_heightConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0x66ae0  @objc VerificationTableView.init <stripped>
	0x66b00  @objc VerificationTableView.initWithCoder: <stripped>
	0x66d50  @objc VerificationTableView.layoutSubviews <stripped>
	0x66d80  @objc VerificationTableView.initWithFrame:style: <stripped>
	0x66dd0  @objc VerificationTableView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.AuthorityTextCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var authorityTextView : OnboardingAuthorityTextView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x67200  @objc AuthorityTextCell.initWithStyle:reuseIdentifier: <stripped>
	0x672c0  @objc AuthorityTextCell.initWithCoder: <stripped>
	0x671e0  @objc AuthorityTextCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.VerificationCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
	0x674c0  @objc VerificationCell.initWithStyle:reuseIdentifier: <stripped>
	0x674e0  @objc VerificationCell.initWithCoder: <stripped>
	0x67530  @objc VerificationCell.layoutSubviews <stripped>
	0x67610  @objc VerificationCell..cxx_destruct <stripped>
 }

 class HealthExposureNotificationUI.VerificationCheckmarkCell : VerificationCell {

	// Properties
	let label : UILabel
	let accessoryImageView : UIImageView
	var isChecked : Bool

	// ObjC -> Swift bridged methods
	0x67640  @objc VerificationCheckmarkCell.initWithStyle:reuseIdentifier: <stripped>
	0x676c0  @objc VerificationCheckmarkCell.initWithCoder: <stripped>
	0x67830  @objc VerificationCheckmarkCell.layoutSubviews <stripped>
	0x678d0  @objc VerificationCheckmarkCell..cxx_destruct <stripped>
 }

 class HealthExposureNotificationUI.OnboardingAddRegionWelcomeViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let primaryButton : OBBoldTrayButton // +0x18 (0x8)
	let secondaryButton : OBLinkTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x68e90  @objc OnboardingAddRegionWelcomeViewController.viewDidLoad <stripped>
	0x68ef0  @objc OnboardingAddRegionWelcomeViewController.didTapHowExposureNotificationsWork <stripped>
	0x68fa0  @objc OnboardingAddRegionWelcomeViewController.didTapPrimaryButton <stripped>
	0x69010  @objc OnboardingAddRegionWelcomeViewController.didTapSecondaryButton <stripped>
	0x69160  @objc OnboardingAddRegionWelcomeViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x691d0  @objc OnboardingAddRegionWelcomeViewController..cxx_destruct <stripped>

	// Swift methods
	0x68390  class func OnboardingAddRegionWelcomeViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)
	let secondaryButton : OBLinkTrayButton // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x6a710  @objc OnboardingAnalyticsViewController.viewDidLoad <stripped>
	0x6a770  @objc OnboardingAnalyticsViewController.didTapPrimaryButton <stripped>
	0x6a8f0  @objc OnboardingAnalyticsViewController.didTapSecondaryButton <stripped>
	0x6aa50  @objc OnboardingAnalyticsViewController.didTapLearnMore <stripped>
	0x6abf0  @objc OnboardingAnalyticsViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x6aab0  @objc OnboardingAnalyticsViewController..cxx_destruct <stripped>

	// Swift methods
	0x69c00  class func OnboardingAnalyticsViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.OnboardingRegionAlreadyExistsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x6b280  @objc OnboardingRegionAlreadyExistsViewController.viewDidLoad <stripped>
	0x6bae0  @objc OnboardingRegionAlreadyExistsViewController.didTapPrimaryButton <stripped>
	0x6bc10  @objc OnboardingRegionAlreadyExistsViewController.openAppButtonTapped <stripped>
	0x6bc40  @objc OnboardingRegionAlreadyExistsViewController.initWithTitle:detailText:icon:contentLayout: <stripped>
	0x6bcb0  @objc OnboardingRegionAlreadyExistsViewController..cxx_destruct <stripped>

	// Swift methods
	0x6b2e0  func <stripped> // method 
	0x6bb50  func <stripped> // method 
 }

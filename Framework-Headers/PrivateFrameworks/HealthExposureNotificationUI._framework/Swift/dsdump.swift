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
 protocol HealthExposureNotificationUI.FlowStepProviding // 1 requirements
 {
	// getter
 }
 protocol HealthExposureNotificationUI.ViewControllerFlow // 16 requirements
 {
	// getter
	// setter
	// modify coroutine
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
	var top : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : #ÿ
 }

 enum __C.ENDiagnosisReportType { }

 enum __C.ENRegionConsent { }

 enum __C.ENStatus { }

 enum __C.ENConfigFetchReason { }

 class __C.CFBundle {
 class __C.CFString {
 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.Code { }

 struct __C.UIDataDetectorTypes {

	// Properties
	let rawValue : UInt
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.Code { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

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
	let rawValue : Y›
 }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : #ÿ
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : #ÿ
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : #ÿ
 }

 class HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	var hasSymptoms : Bool? // +0x18 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var symptomOnsetDate : £ÿ // +0x0 (0x0)
	var isShowingDatePicker : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : …Ÿ // +0x0 (0x8)
	var primaryButton : OBBoldTrayButton // +0x0 (0x8)
	var secondaryButton : OBLinkTrayButton // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x857400027940 (0x57400027940) in binary!
	0x7e08  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x855c00027bb0 (0x55c00027bb0) in binary!
	0x65c2  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x65c400027678 (0x5c400027678) in binary!
	0x65c6  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x65ba00027650 (0x5ba00027650) in binary!
	0x8520  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x851400027ca0 (0x51400027ca0) in binary!
	0x8508  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x659c00027b68 (0x59c00027b68) in binary!
	0x6590  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x84e400027790 (0x4e400027790) in binary!
	0x38000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xc4e200027b70 (0x4e200027b70) in binary!
	0x9f90  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x84b400027760 (0x4b400027760) in binary!
	0x28000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xc4b200027b40 (0x4b200027b40) in binary!
	0x9f60  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7e4fff97a88  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
	0xfff97fe0  @objc VerificationSymptomDateEntryViewController.]√f.Ñ <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3acfff99798  @objc VerificationSymptomDateEntryViewController.(null) <stripped>

	// Swift methods
	0x4730  class func VerificationSymptomDateEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.SymptomOnsetDateCell : VerificationCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc4b200027b40 (0x4b200027b40) in binary!
	0x9f60  @objc SymptomOnsetDateCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7e4fff97a88  @objc SymptomOnsetDateCell.(null) <stripped>
 }

 class HealthExposureNotificationUI.DatePickerCell : VerificationCell {

	// Properties
	let datePicker : UIDatePicker

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc4e200027b70 (0x4e200027b70) in binary!
	0x9f90  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0x84b400027760 (0x4b400027760) in binary!
	0x28000000c  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0xc4b200027b40 (0x4b200027b40) in binary!
	0x9f60  @objc DatePickerCell.(null) <stripped>
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
	let spinnerView : UIActivityIndicatorView
	let statusLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f4c00027cc8 (0x74c00027cc8) in binary!
	0x7660  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x846400027710 (0x46400027710) in binary!
	0x58000000c  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x844c00027818 (0x44c00027818) in binary!
	0x8440  @objc LoadingStatusView.(null) <stripped>

	// Swift methods
	0xb7a0  class func LoadingStatusView.__allocating_init(with:backgroundColor:) // init 
	0xb910  func <stripped> // method 
	0xbcf0  func LoadingStatusView.startAnimating() // method 
	0xbd10  func LoadingStatusView.stopAnimating() // method 
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
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x844c00027818 (0x44c00027818) in binary!
	0x8440  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x843400027bd8 (0x43400027bd8) in binary!
	0x7878  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x841c000276c8 (0x41c000276c8) in binary!
	0x98000000c  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x72b8000273e8 (0x2b8000273e8) in binary!
	0x7c98  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x72a0000273c0 (0x2a0000273c0) in binary!
	0x7c80  @objc OnboardingSummaryViewController.(null) <stripped>

	// Swift methods
	0xd280  class func OnboardingSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.ENUIPublicHealthHeaderStyle { }

 class HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let subtitle : String
	let backgroundColor : UIColor
	let textColor : UIColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logoURL : O”
	let style : ENUIPublicHealthHeaderStyle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x71d000027438 (0x1d000027438) in binary!
	0x71c4  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x71b800027410 (0x1b800027410) in binary!
	0x71ac  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x71a0000273e8 (0x1a0000273e8) in binary!
	0x9f42  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x7984000273c0 (0x184000273c0) in binary!
	0x717c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x82bc00027568 (0x2bc00027568) in binary!
	0x1d8000000c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x715800027b98 (0x15800027b98) in binary!
	0x714c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x714000027330 (0x14000027330) in binary!
	0x7134  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x712800027308 (0x12800027308) in binary!
	0x711c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x7110000272e0 (0x110000272e0) in binary!
	0x7104  @objc ENUIPublicHealthHeader.(null) <stripped>

	// Swift methods
	0xdf90  class func ENUIPublicHealthHeader.__allocating_init(title:subtitle:backgroundColor:textColor:logoURL:style:) // init 
 }

 class HealthExposureNotificationUI.ENUIPublicHealthLegalDocument : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let text : String
	let version : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ff000027220 (0x7f000027220) in binary!
	0x6fe4  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x8c08000271f8 (0x408000271f8) in binary!
	0x6fcc  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x810c000273b8 (0x10c000273b8) in binary!
	0x58000000c  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x72e400027468 (0x2e400027468) in binary!
	0x9bb8  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x80dc00027848 (0xdc00027848) in binary!
	0x80d0  @objc ENUIPublicHealthLegalDocument.(null) <stripped>

	// Swift methods
	0xe410  class func ENUIPublicHealthLegalDocument.__allocating_init(text:version:) // init 
 }

 class HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let textConsented : String
	let versionConsented : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateConsented : ±—

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x722000027438 (0x22000027438) in binary!
	0x7214  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x720800027410 (0x20800027410) in binary!
	0x63e8  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x71f0000279c0 (0x1f0000279c0) in binary!
	0x8330  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x424fff99ec8  @objc ENUIUserConsentStatus.(null) <stripped>
	0x3fcfff99f30  @objc ENUIUserConsentStatus. <stripped>
	0x3d4fff99f98  @objc ENUIUserConsentStatus. <stripped>

	// Swift methods
	0xe780  class func ENUIUserConsentStatus.__allocating_init(textConsented:versionConsented:dateConsented:) // init 
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
	let consentVersion : String
	let isAuthorized : Bool
	let regionVersion : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let regionWebsiteURL : O”
	let wantsAnalytics : Bool
	var analyticsConsentStatus : ENRegionConsent
	let analyticsConsentText : String?
	let verificationIntroductoryText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let verificationCodeHelpURL : O”
	let verificationSymptomOnsetText : String
	let verificationTravelStatusText : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x715800027b98 (0x15800027b98) in binary!
	0x714c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x714000027330 (0x14000027330) in binary!
	0x7134  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x712800027308 (0x12800027308) in binary!
	0x711c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x7110000272e0 (0x110000272e0) in binary!
	0x7104  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa1c4000272c0 (0x1c4000272c0) in binary!
	0x9e9a  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x70e000027298 (0xe000027298) in binary!
	0xa1a0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x9e7600027270 (0x67600027270) in binary!
	0x7bb2  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x70b000027248 (0xb000027248) in binary!
	0x70a4  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x709800027220 (0x9800027220) in binary!
	0x708c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x7080000271f8 (0x80000271f8) in binary!
	0xa140  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa134000271d0 (0x134000271d0) in binary!
	0x7b68  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa11c000271a8 (0x11c000271a8) in binary!
	0xa110  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x703800027180 (0x3800027180) in binary!
	0x702c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa0ec00027158 (0xec00027158) in binary!
	0x7014  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x815400027400 (0x15400027400) in binary!
	0x58000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6ff000027220 (0x7f000027220) in binary!
	0x6fe4  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x8c08000271f8 (0x408000271f8) in binary!
	0x6fcc  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x810c000273b8 (0x10c000273b8) in binary!
	0x58000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x72e400027468 (0x2e400027468) in binary!
	0x9bb8  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80dc00027848 (0xdc00027848) in binary!
	0x80d0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80c400027370 (0xc400027370) in binary!
	0x48000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80ac00027478 (0xac00027478) in binary!
	0x80a0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x74e400027900 (0x4e400027900) in binary!
	0x8088  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x2f4fffaf0f0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0x28cfffaf598  @objc ENUIPublicHealthAgencyModel.Ñ <stripped>
	0x3acfffaf600  @objc ENUIPublicHealthAgencyModel.âˆ1…Ë?ª <stripped>
	0xfffaf6d8  @objc ENUIPublicHealthAgencyModel.Hâ„HÉ¿HÉ‡H)√Hâ‹Lã=ÿ¶	 <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x37cfffae780  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0xfffae9d8  @objc ENUIPublicHealthAgencyModel. <stripped>

	// Swift methods
	0xedd0  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.getter // getter 
	0xee40  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.setter // setter 
	0xee80  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.modify // modifyCoroutine 
	0xf1b0  func ENUIPublicHealthAgencyModel.isSymptomOnsetNeeded.getter // getter 
	0xf230  func ENUIPublicHealthAgencyModel.isTravelStatusNeeded.getter // getter 
	0xf290  class func ENUIPublicHealthAgencyModel.__allocating_init(region:name:appBundleId:introductoryText:header:legalese:consentStatus:consentVersion:isAuthorized:regionVersion:regionWebsiteURL:wantsAnalytics:analyticsConsentStatus:analyticsConsentText:verificationIntroductoryText:verificationCodeHelpURL:verificationSymptomOnsetText:verificationTravelStatusText:) // init 
	0xf9f0  func ENUIPublicHealthAgencyModel.isAppInstalled.getter // getter 
	0xfb10  func ENUIPublicHealthAgencyModel.isRegionUsingApp.getter // getter 
	0xfce0  func ENUIPublicHealthAgencyModel.installedAppName.getter // getter 
	0xfed0  func ENUIPublicHealthAgencyModel.installedAppIcon.getter // getter 
	0x101b0  func ENUIPublicHealthAgencyModel.regionIsPlaceholder.getter // getter 
 }

 class HealthExposureNotificationUI.AuthorizationFooterView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var delegate : AuthorizationFooterViewDelegate
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBBoldTrayButton
	let visualEffectView : UIVisualEffectView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72e400027468 (0x2e400027468) in binary!
	0x9bb8  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x80dc00027848 (0xdc00027848) in binary!
	0x80d0  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x80c400027370 (0xc400027370) in binary!
	0x48000000c  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x80ac00027478 (0xac00027478) in binary!
	0x80a0  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x74e400027900 (0x4e400027900) in binary!
	0x8088  @objc AuthorizationFooterView.(null) <stripped>

	// Swift methods
	0x14970  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionChangeSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x80ac00027478 (0xac00027478) in binary!
	0x80a0  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x74e400027900 (0x4e400027900) in binary!
	0x8088  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x2f4fffaf0f0  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
	0x28cfffaf598  @objc OnboardingRegionChangeSummaryViewController.Ñ <stripped>

	// Swift methods
	0x15430  class func OnboardingRegionChangeSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.StandardOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : FlowResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	let exposureManager : ExposureNotifying
	let isFromAvailabilityAlert : Bool

	// Swift methods
	0x15eb0  func StandardOnboardingFlow.completionHandler.getter // getter 
	0x15ef0  func StandardOnboardingFlow.completionHandler.setter // setter 
	0x15f30  func StandardOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x15f70  func StandardOnboardingFlow.healthAgencyModel.getter // getter 
	0x15fb0  func StandardOnboardingFlow.healthAgencyModel.setter // setter 
	0x15ff0  func StandardOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x16020  func StandardOnboardingFlow.currentSelectedRegion.getter // getter 
	0x160b0  func StandardOnboardingFlow.currentSelectedRegion.setter // setter 
	0x16190  func StandardOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x161c0  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x161e0  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x16200  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x16240  class func StandardOnboardingFlow.__allocating_init(agencyModel:exposureManager:isFromAvailabilityAlert:completion:) // init 
	0x16480  func StandardOnboardingFlow.initialViewController.getter // getter 
	0x164d0  func StandardOnboardingFlow.didTapNext(from:) // method 
	0x16500  func StandardOnboardingFlow.didTapCancel(from:) // method 
	0x16c50  func <stripped> // method 
 }

 class HealthExposureNotificationUI.AddRegionOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : FlowResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	let exposureManager : ExposureNotifying

	// Swift methods
	0x21a90  func AddRegionOnboardingFlow.completionHandler.getter // getter 
	0x21c10  func AddRegionOnboardingFlow.completionHandler.setter // setter 
	0x17480  func AddRegionOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x21a50  func AddRegionOnboardingFlow.healthAgencyModel.getter // getter 
	0x21e70  func AddRegionOnboardingFlow.healthAgencyModel.setter // setter 
	0x174b0  func AddRegionOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x21b70  func AddRegionOnboardingFlow.currentSelectedRegion.getter // getter 
	0x21e60  func AddRegionOnboardingFlow.currentSelectedRegion.setter // setter 
	0x174e0  func AddRegionOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x21a20  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x21bd0  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x17510  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x17540  class func AddRegionOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x17760  func AddRegionOnboardingFlow.initialViewController.getter // getter 
	0x177f0  func AddRegionOnboardingFlow.didTapNext(from:) // method 
	0x17b70  func AddRegionOnboardingFlow.didTapCancel(from:) // method 
	0x17dd0  func <stripped> // method 
 }

 class HealthExposureNotificationUI.AnalyticsConsentOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	let nonNilAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	var exposureManager : ExposureNotifying
	var completionHandler : FlowResult

	// Swift methods
	0x18390  func AnalyticsConsentOnboardingFlow.healthAgencyModel.getter // getter 
	0x183d0  func AnalyticsConsentOnboardingFlow.healthAgencyModel.setter // setter 
	0x18410  func AnalyticsConsentOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x18440  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.getter // getter 
	0x184a0  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.setter // setter 
	0x18550  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x18580  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x185b0  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x185f0  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x18620  func AnalyticsConsentOnboardingFlow.exposureManager.getter // getter 
	0x18680  func AnalyticsConsentOnboardingFlow.exposureManager.setter // setter 
	0x186e0  func AnalyticsConsentOnboardingFlow.exposureManager.modify // modifyCoroutine 
	0x18710  func AnalyticsConsentOnboardingFlow.initialViewController.getter // getter 
	0x18780  func AnalyticsConsentOnboardingFlow.completionHandler.getter // getter 
	0x187c0  func AnalyticsConsentOnboardingFlow.completionHandler.setter // setter 
	0x18800  func AnalyticsConsentOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x18830  class func AnalyticsConsentOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x18990  func AnalyticsConsentOnboardingFlow.didTapNext(from:) // method 
	0x18a50  func AnalyticsConsentOnboardingFlow.didTapCancel(from:) // method 
 }

 enum HealthExposureNotificationUI.SymptomOnset {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case date : ±—
	case noSymptoms  
 }

 class HealthExposureNotificationUI.VerificationOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : FlowResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sessionIdentifier : ˜–
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	let nonNilAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	let exposureManager : ExposureNotifying
	var symptomOnset : SymptomOnset
	var hasTraveled : Bool?

	// Swift methods
	0x21aa0  func VerificationOnboardingFlow.completionHandler.getter // getter 
	0x21c20  func VerificationOnboardingFlow.completionHandler.setter // setter 
	0x19000  func VerificationOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x19030  func VerificationOnboardingFlow.sessionIdentifier.getter // getter 
	0x19050  func VerificationOnboardingFlow.sessionIdentifier.setter // setter 
	0x19070  func VerificationOnboardingFlow.sessionIdentifier.modify // modifyCoroutine 
	0x190b0  func VerificationOnboardingFlow.healthAgencyModel.getter // getter 
	0x190f0  func VerificationOnboardingFlow.healthAgencyModel.setter // setter 
	0x19140  func VerificationOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x19180  func VerificationOnboardingFlow.currentSelectedRegion.getter // getter 
	0x191f0  func VerificationOnboardingFlow.currentSelectedRegion.setter // setter 
	0x192b0  func VerificationOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x192f0  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x19330  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x19380  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x193e0  func VerificationOnboardingFlow.symptomOnset.getter // getter 
	0x19450  func VerificationOnboardingFlow.symptomOnset.setter // setter 
	0x194d0  func VerificationOnboardingFlow.symptomOnset.modify // modifyCoroutine 
	0x19510  func VerificationOnboardingFlow.hasTraveled.getter // getter 
	0x19540  func VerificationOnboardingFlow.hasTraveled.setter // setter 
	0x19580  func VerificationOnboardingFlow.hasTraveled.modify // modifyCoroutine 
	0x195c0  class func VerificationOnboardingFlow.__allocating_init(sessionIdentifier:agencyModel:exposureManager:completion:) // init 
	0x19880  func VerificationOnboardingFlow.initialViewController.getter // getter 
	0x198f0  func VerificationOnboardingFlow.didTapNext(from:) // method 
	0x19920  func VerificationOnboardingFlow.didTapCancel(from:) // method 
	0x19ea0  func VerificationOnboardingFlow.fetchTestMetadata(_:completionHandler:) // method 
 }

 class HealthExposureNotificationUI.NumberedTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let number : Int
	let title : String?
	let details : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ae400027860 (0x2e400027860) in binary!
	0x71f8  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7ffc000272a8 (0x7fc000272a8) in binary!
	0x58000000c  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7fe4000273b0 (0x7e4000273b0) in binary!
	0x9f60  @objc NumberedTextView.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.IconTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let icon : UIImage?
	let details : String
	let highlightedText : String?
	var delegate : IconTextViewDelegate
	let textStack : UIStackView
	let iconView : UIImageView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b44000278c0 (0x344000278c0) in binary!
	0x7908  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x89ac00026ff8 (0x1ac00026ff8) in binary!
	0x6f04  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x78e4000278c8 (0xe4000278c8) in binary!
	0x7228  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x802c000272d8 (0x2c000272d8) in binary!
	0x38000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x9ae400027860 (0x2e400027860) in binary!
	0x71f8  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7ffc000272a8 (0x7fc000272a8) in binary!
	0x58000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7fe4000273b0 (0x7e4000273b0) in binary!
	0x9f60  @objc IconTextView.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.OnboardingInfoViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7fe4000273b0 (0x7e4000273b0) in binary!
	0x9f60  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x8ab000027820 (0x2b000027820) in binary!
	0x9a90  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7fb400027260 (0x7b400027260) in binary!
	0x18000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7f9c00027ac0 (0x79c00027ac0) in binary!
	0xb8000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x9a54000277d0 (0x254000277d0) in binary!
	0x7f78  @objc OnboardingInfoViewController.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : StandardOnboardingFlow
	var isFromAvailabilityAlert : Bool
	let notificationPreview : NotificationPreviewView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a54000277d0 (0x254000277d0) in binary!
	0x7f78  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x9ef400027ad8 (0x6f400027ad8) in binary!
	0x9ee8  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f5400027ae0 (0x75400027ae0) in binary!
	0x7f48  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f3c000276a8 (0x73c000276a8) in binary!
	0x7f30  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f2400027a48 (0x72400027a48) in binary!
	0x89fc  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f0c000271b8 (0x70c000271b8) in binary!
	0x58000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x99c400027740 (0x1c400027740) in binary!
	0x7ee8  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x8f7c00027ae0 (0x77c00027ae0) in binary!
	0x70c0  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7ec400027170 (0x6c400027170) in binary!
	0xd8000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
	0x7ea0  variable initialization expression of VerificationCodeEntryViewController.scrollView
WARNING: couldn't find address 0x7e9400027260 (0x69400027260) in binary!
	0x9e10  @objc OnboardingWelcomeViewController.(null) <stripped>

	// Swift methods
	0x26290  class func OnboardingWelcomeViewController.__allocating_init(flow:fromAvailabilityAlert:) // init 
 }

 enum HealthExposureNotificationUI.SelectionType {

	// Properties
	case subdivisionSelection : [String]
	case countrySelection  
 }

 class HealthExposureNotificationUI.RegionSelectionHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageDimension : #ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iconTitlePadding : #ÿ
	let title : String
	let globeImageView : UIImageView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99c400027740 (0x1c400027740) in binary!
	0x7ee8  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x8f7c00027ae0 (0x77c00027ae0) in binary!
	0x70c0  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x7ec400027170 (0x6c400027170) in binary!
	0xd8000000c  @objc RegionSelectionHeaderView.(null) <stripped>
	0x7ea0  variable initialization expression of VerificationCodeEntryViewController.scrollView
WARNING: couldn't find address 0x7e9400027260 (0x69400027260) in binary!
	0x9e10  @objc RegionSelectionHeaderView.(null) <stripped>

	// Swift methods
	0x29c60  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : ViewControllerFlow
	let selectionType : SelectionType
	let statusView : LoadingStatusView
	let regionTableView : UITableView
	let regionsProvider : RegionsProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var canceller : Eœ

	// ObjC -> Swift bridged methods
	0x7ea0  variable initialization expression of VerificationCodeEntryViewController.scrollView
WARNING: couldn't find address 0x7e9400027260 (0x69400027260) in binary!
	0x9e10  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x9e0400027a50 (0x60400027a50) in binary!
	0x7e70  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7e6400027608 (0x66400027608) in binary!
	0x8fbf  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x893000026dd8 (0x13000026dd8) in binary!
	0x5ec0  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x76d400026db8 (0x6d400026db8) in binary!
	0x890c  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7e1c000270c8 (0x61c000270c8) in binary!
	0x68000000c  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7e04000271d0 (0x604000271d0) in binary!
	0x7df8  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7dec00027558 (0x5ec00027558) in binary!
	0x7de0  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x722400027640 (0x22400027640) in binary!
	0x7dc8  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x514fffc0030  @objc OnboardingRegionSelectionViewController.(null) <stripped>
	0x3cfffc01c8  @objc OnboardingRegionSelectionViewController.‰Ú	 <stripped>
	0x14400026cf8  @objc OnboardingRegionSelectionViewController.ã=äj <stripped>

	// Swift methods
	0x29a70  class func OnboardingRegionSelectionViewController.__allocating_init(flow:type:) // init 
 }

 class HealthExposureNotificationUI.VerificationSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let statusView : LoadingStatusView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e04000271d0 (0x604000271d0) in binary!
	0x7df8  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x7dec00027558 (0x5ec00027558) in binary!
	0x7de0  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x722400027640 (0x22400027640) in binary!
	0x7dc8  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x514fffc0030  @objc VerificationSummaryViewController.(null) <stripped>
	0x3cfffc01c8  @objc VerificationSummaryViewController.‰Ú	 <stripped>
	0x14400026cf8  @objc VerificationSummaryViewController.ã=äj <stripped>

	// Swift methods
	0x2e190  class func VerificationSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.AuthorizationViewController {
 class HealthExposureNotificationUI.OnboardingRegionNotAvailableViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let region : RegionNameAndCode
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7db400027180 (0x5b400027180) in binary!
	0x7da8  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x71ec00027608 (0x1ec00027608) in binary!
	0x7d90  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x4e4fffc21f8  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
	0x4bcfffc2860  @objc OnboardingRegionNotAvailableViewController.È <stripped>

	// Swift methods
	0x34210  class func OnboardingRegionNotAvailableViewController.__allocating_init(flow:region:) // init 
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
WARNING: couldn't find address 0x6be8000273b8 (0x3e8000273b8) in binary!
	0x28000000c  @objc AppStoreAssetManager.(null) <stripped>
 }

 class HealthExposureNotificationUI.ENManagerAdapter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var exposureNotificationStatus : ENStatus
	var isExposureLoggingDataPresent : Bool
	var areAvailabilityAlertsEnabled : Bool
	var isAvailabilityAlertsSwitchEnabled : Bool
	var statusChangeHandler : ENStatus
	let manager : ENManager
	let activationGroup : OS_dispatch_group
WARNING: couldn't find address 0x0 (0x0) in binary!
	var statusObservation : …

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x995e00027ba0 (0x15e00027ba0) in binary!
	0x769a  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c6400026c30 (0x46400026c30) in binary!
	0x9c60  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c4c00026c08 (0x44c00026c08) in binary!
	0x9c48  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c3400026be0 (0x43400026be0) in binary!
	0x9c30  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c2f00026bb8 (0x42f00026bb8) in binary!
	0x7a74  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6b3800027a60 (0x33800027a60) in binary!
	0x6b2c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7c6c00026f40 (0x46c00026f40) in binary!
	0x7a44  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9bf400026b58 (0x3f400026b58) in binary!
	0x6880  @objc ENManagerAdapter.(null) <stripped>
	0x67f8  @objc ENManagerAdapter.Hâù˛ˇˇHâ⁄Ëâæ <stripped>
WARNING: couldn't find address 0x67ec00026b10 (0x7ec00026b10) in binary!
	0x79fc  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9bbc00026ae8 (0x3bc00026ae8) in binary!
	0x79e4  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x67bc00026ac0 (0x7bc00026ac0) in binary!
	0x67b0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x79c000026a98 (0x1c000026a98) in binary!
	0x67b0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x678c00026a70 (0x78c00026a70) in binary!
	0x67b8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x677400026a48 (0x77400026a48) in binary!
	0x67a0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x797800026a20 (0x17800026a20) in binary!
	0x9b28  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9b1c000269f8 (0x31c000269f8) in binary!
	0x6790  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x909c000269d8 (0x9c000269d8) in binary!
	0x7b58  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x2a4fffce640  @objc ENManagerAdapter.(null) <stripped>
	0x2c4fffcf5a8  @objc ENManagerAdapter.7 <stripped>
	0x15cfffcf8a0  @objc ENManagerAdapter.UHâÂ1¿]√Ñ <stripped>
	0x59cfffcfa58  @objc ENManagerAdapter.J	 <stripped>
	0x5ac00027328  @objc ENManagerAdapter.UHâÂ∞]√Ñ <stripped>
WARNING: couldn't find address 0x26da4fffd0b38 (0x5a4fffd0b38) in binary!
	0x2c400026e90  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x27624fffd24d0 (0x624fffd24d0) in binary!
	0x2ac000279a0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x27a2cfffd3088 (0x22cfffd3088) in binary!
	0x294000279e0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x2722cfffd3650 (0x22cfffd3650) in binary!
	0x560000272d0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x26d1cfffd5d68 (0x51cfffd5d68) in binary!
	0x48000000c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7a5c00026e28 (0x25c00026e28) in binary!
	0x7a50  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6e94000272b0 (0x694000272b0) in binary!
	0x7a38  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x264fffd6fd0  @objc ENManagerAdapter.(null) <stripped>
	0x4acfffd95d8  @objc ENManagerAdapter.§€	 <stripped>
	0x4bc00027238  @objc ENManagerAdapter.UHâÂ1¿]√Ñ <stripped>
WARNING: couldn't find address 0x26d54fffd95e8 (0x554fffd95e8) in binary!
	0x1d400026c80  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0xfffd9700 (0xfffd9700) in binary!
	0x3ac00026d30  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x271fcfffdb858 (0x1fcfffdb858) in binary!
	0x1a400026c50  @objc ENManagerAdapter.(null) <stripped>

	// Swift methods
	0x38030  func ENManagerAdapter.exposureNotificationStatus.getter // getter 
	0x380a0  func ENManagerAdapter.exposureNotificationStatus.setter // setter 
	0x380e0  func ENManagerAdapter.exposureNotificationStatus.modify // modifyCoroutine 
	0x38140  func ENManagerAdapter.isExposureLoggingDataPresent.getter // getter 
	0x38180  func ENManagerAdapter.isExposureLoggingDataPresent.setter // setter 
	0x381a0  func ENManagerAdapter.isExposureLoggingDataPresent.modify // modifyCoroutine 
	0x38210  func ENManagerAdapter.areAvailabilityAlertsEnabled.getter // getter 
	0x38250  func ENManagerAdapter.areAvailabilityAlertsEnabled.setter // setter 
	0x38270  func ENManagerAdapter.areAvailabilityAlertsEnabled.modify // modifyCoroutine 
	0x38300  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.getter // getter 
	0x383b0  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.setter // setter 
	0x38410  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.modify // modifyCoroutine 
	0x38500  func ENManagerAdapter.statusChangeHandler.getter // getter 
	0x38600  func ENManagerAdapter.statusChangeHandler.setter // setter 
	0x38660  func ENManagerAdapter.statusChangeHandler.modify // modifyCoroutine 
	0x390c0  func <stripped> // method 
	0x39280  func ENManagerAdapter.refreshStatus(_:) // method 
	0x399d0  func ENManagerAdapter.setExposureNotification(enabled:completion:) // method 
	0x39ac0  func ENManagerAdapter.onboardingDidStart(forRegion:source:) // method 
	0x39e40  func ENManagerAdapter.fetchSubdivisions(forRegion:completion:) // method 
	0x3a060  func ENManagerAdapter.set(activeRegion:completion:) // method 
	0x3a120  func ENManagerAdapter.setActivePhaseOneApp(with:completion:) // method 
	0x3a3f0  func ENManagerAdapter.latestExposureNotification(_:) // method 
	0x3a5c0  func <stripped> // method 
	0x3b4e0  func ENManagerAdapter.fetchAgencyModel(for:reason:completionHandler:) // method 
	0x3c520  func ENManagerAdapter.fetchAllEntities(_:) // method 
	0x3c830  func ENManagerAdapter.getAgencyModel(forBundleID:completion:) // method 
	0x3ca90  func ENManagerAdapter.getAgencyModel(forRegionCode:completion:) // method 
	0x3cea0  func ENManagerAdapter.allRegionConfigurations(_:) // method 
	0x3d090  func ENManagerAdapter.setShareAnalytics(_:region:version:completion:) // method 
	0x3d460  func ENManagerAdapter.isTravelStatusEnabled(for:completion:) // method 
	0x3d570  func ENManagerAdapter.setTravelStatus(_:region:completion:) // method 
	0x3d800  func ENManagerAdapter.isPreReleaseAuthorized(for:completion:) // method 
	0x3dac0  func ENManagerAdapter.setPreRelease(_:region:completion:) // method 
	0x3dcf0  func ENManagerAdapter.resetAllDataAndDisableExposureNotifications(_:) // method 
	0x3e070  func ENManagerAdapter.setAvailabilityAlertsEnabled(_:completion:) // method 
	0x3e2f0  func ENManagerAdapter.setWeeklySummaryEnabled(_:completion:) // method 
	0x3e550  func ENManagerAdapter.setUserConsent(_:region:text:version:completion:) // method 
	0x3e9d0  func ENManagerAdapter.startTestVerificationSession(verificationCode:region:completionHandler:) // method 
	0x3efb0  func ENManagerAdapter.fetchTestMetadata(for:completionHandler:) // method 
	0x3fb30  func ENManagerAdapter.finishSession(_:userDidConsent:symptomOnset:hasTraveled:completionHandler:) // method 
	0x407b0  func ENManagerAdapter.tccContainsRecord(forBundleIdentifier:) // method 
 }

 class HealthExposureNotificationUI.OnboardingLegalConsentViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let showsTurnOnExposureNotificationsAlert : Bool
	let shouldSetActiveRegion : Bool
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b4400026f10 (0x34400026f10) in binary!
	0x7b38  @objc OnboardingLegalConsentViewController.(null) <stripped>
	0x7b20  variable initialization expression of OnboardingWelcomeViewController.isFromAvailabilityAlert
WARNING: couldn't find address 0x7b1400026970 (0x31400026970) in binary!
	0x7b08  @objc OnboardingLegalConsentViewController.(null) <stripped>
	0x7af0  variable initialization expression of VerificationOnboardingFlow.hasTraveled
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x5a4fffd0b38  @objc OnboardingLegalConsentViewController.(null) <stripped>
	0x624fffd24d0  @objc OnboardingLegalConsentViewController.—HãX¯Lâ˜æ <stripped>
	0x22cfffd3088  @objc OnboardingLegalConsentViewController.√f.Ñ <stripped>
	0x22cfffd3650  @objc OnboardingLegalConsentViewController. <stripped>

	// Swift methods
	0x42500  class func OnboardingLegalConsentViewController.__allocating_init(flow:agencyModel:showsTurnOnExposureNotificationsAlert:shouldSetActiveRegion:) // init 
 }

 struct HealthExposureNotificationUI.LocalizationSource {

	// Properties
	let bundle : NSBundle // +0x0
	let table : String // +0x8
 }

 class HealthExposureNotificationUI.VerificationCodeEntryViewController : OBBaseWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let statusView : LoadingStatusView
	var scrollView : UIScrollView?
	var entryView : ENUIVerificationCodeEntryView?
	var contentLayoutGuideBottomConstraint : NSLayoutConstraint?
	var itemStackTopConstraint : NSLayoutConstraint?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyboardHeight : #ÿ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x95ac00027328 (0x5ac00027328) in binary!
	0x7ad0  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7ac400026e90 (0x2c400026e90) in binary!
	0x9a40  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7aac000279a0 (0x2ac000279a0) in binary!
	0x7340  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7a94000279e0 (0x294000279e0) in binary!
	0x7a88  @objc VerificationCodeEntryViewController.(null) <stripped>
	0x7a70  variable initialization expression of VerificationOnboardingFlow.currentSelectedRegion
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1bcfffd6928  @objc VerificationCodeEntryViewController.(null) <stripped>
	0x4e4fffd6b00  @objc VerificationCodeEntryViewController.]√f.Ñ <stripped>
	0x32400026870  @objc VerificationCodeEntryViewController. <stripped>
WARNING: couldn't find address 0x27264fffd6fd0 (0x264fffd6fd0) in binary!
	0x3fc00026d80  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x26cacfffd95d8 (0x4acfffd95d8) in binary!
	0x38000000c  @objc VerificationCodeEntryViewController.(null) <stripped>

	// Swift methods
	0x451f0  class func VerificationCodeEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.VerificationFinishedViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a5c00026e28 (0x25c00026e28) in binary!
	0x7a50  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x6e94000272b0 (0x694000272b0) in binary!
	0x7a38  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x264fffd6fd0  @objc VerificationFinishedViewController.(null) <stripped>
	0x4acfffd95d8  @objc VerificationFinishedViewController.§€	 <stripped>

	// Swift methods
	0x4ae20  class func VerificationFinishedViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let imageView : UIImageView
	let header : ENUIPublicHealthHeader
	let insets : UIEdgeInsets
	var imageViewWidthConstraint : NSLayoutConstraint?
	var labelContainerLeadingConstraint : NSLayoutConstraint?
	var imageWidthConstraint : NSLayoutConstraint?
	var imageHeightConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xab2400026870 (0x32400026870) in binary!
	0x94e8  @objc OnboardingHeaderView.(null) <stripped>
	0x7a00  variable initialization expression of AnalyticsConsentOnboardingFlow.healthAgencyModel
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x554fffd95e8  @objc OnboardingHeaderView.(null) <stripped>
	0xfffd9700  @objc OnboardingHeaderView.âÔËˇæ <stripped>

	// Swift methods
	0x4b730  class func OnboardingHeaderView.__allocating_init(header:insets:corners:) // init 
	0x4b880  func <stripped> // method 
	0x4bd30  func <stripped> // method 
	0x4c820  func <stripped> // method 
	0x4d2a0  func <stripped> // method 
	0x4db80  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.Constants { }

 class HealthExposureNotificationUI.OnboardingAuthorityTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let headerView : OnboardingHeaderView
	let textView : UITextView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94bc00027238 (0x4bc00027238) in binary!
	0x6bd0  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x79d400026c80 (0x1d400026c80) in binary!
	0x38000000c  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x6bac00026d30 (0x3ac00026d30) in binary!
	0x9480  @objc OnboardingAuthorityTextView.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.AuthorizationHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let iconImageView : UIImageView
	let arrowImageView : UIImageView
	let peopleImageView : UIImageView
	var $__lazy_storage_$_iconStack : UIStackView?
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6bac00026d30 (0x3ac00026d30) in binary!
	0x9480  @objc AuthorizationHeaderView.(null) <stripped>
WARNING: couldn't find address 0x79a400026c50 (0x1a400026c50) in binary!
	0xd8000000c  @objc AuthorizationHeaderView.(null) <stripped>
	0x7980  variable initialization expression of StandardOnboardingFlow.healthAgencyModel

	// Swift methods
	0x4fe10  func <stripped> // getter 
	0x50130  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.FlowStep {

	// Properties
	case welcome  
	case countrySelection  
	case subdivisionSelection  
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
	var _countries : ˜œ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _states : ˜œ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _subdivisions : ˜œ // +0x0 (0x0)

	// Swift methods
	0x51a90  func <stripped> // getter 
	0x51ae0  func <stripped> // getter 
	0x51b60  func RegionsProvider.loadCountries() // method 
	0x52340  func RegionsProvider.loadSubdivisions() // method 
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
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	var hasTraveled : Bool?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : ≈
	let traveledCell : VerificationCheckmarkCell
	let notTraveledCell : VerificationCheckmarkCell
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
	0x7980  variable initialization expression of StandardOnboardingFlow.healthAgencyModel
WARNING: couldn't find address 0x59e600026ab0 (0x1e600026ab0) in binary!
	0x59e8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x59ea00026a88 (0x1ea00026a88) in binary!
	0x59de  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x5e2500026788 (0x62500026788) in binary!
	0x7938  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x792c000270b8 (0x12c000270b8) in binary!
	0x7920  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x59b400026f80 (0x1b400026f80) in binary!
	0x59a8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78fc00026ba8 (0xfc00026ba8) in binary!
	0x58000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78e400026cb0 (0xe400026cb0) in binary!
	0x78d8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78cc00027070 (0xcc00027070) in binary!
	0x6d10  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78b400026b60 (0xb400026b60) in binary!
	0x18000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x675000026690 (0x75000026690) in binary!
	0xb8000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x6738000266c0 (0x738000266c0) in binary!
	0x7118  @objc VerificationTravelStatusViewController.(null) <stripped>
	0x7100  VerificationSymptomDateEntryViewController.tableView(_:heightForHeaderInSection:)

	// Swift methods
	0x638f0  class func VerificationTravelStatusViewController.__allocating_init(flow:agencyModel:) // init 
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
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78e400026cb0 (0xe400026cb0) in binary!
	0x78d8  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x78cc00027070 (0xcc00027070) in binary!
	0x6d10  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x78b400026b60 (0xb400026b60) in binary!
	0x18000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x675000026690 (0x75000026690) in binary!
	0xb8000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x6738000266c0 (0x738000266c0) in binary!
	0x7118  @objc VerificationWelcomeViewController.(null) <stripped>

	// Swift methods
	0x662a0  class func VerificationWelcomeViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.FlowResult { }

 enum HealthExposureNotificationUI.OnboardingSource { }

 class HealthExposureNotificationUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var inflightOnboardingStack : weak UIViewController? // +0x8 (0x8)
	var inflightVerificationStack : weak UIViewController? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6738000266c0 (0x738000266c0) in binary!
	0x7118  @objc ViewControllerFactory.(null) <stripped>
	0x7100  VerificationSymptomDateEntryViewController.tableView(_:heightForHeaderInSection:)
WARNING: couldn't find address 0xb36400026670 (0x36400026670) in binary!
	0xb378  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xb38c00026648 (0x38c00026648) in binary!
	0xb360  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xb35400026620 (0x35400026620) in binary!
	0x66cc  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x780c00026ab8 (0xc00026ab8) in binary!
	0x58000000c  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77f400026bc0 (0x7f400026bc0) in binary!
	0x77e8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77dc00026f48 (0x7dc00026f48) in binary!
	0x6c20  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77c400026a70 (0x7c400026a70) in binary!
	0x38000000c  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x699c00026b20 (0x19c00026b20) in binary!
	0x9270  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x779400026a40 (0x79400026a40) in binary!
	0x48000000c  @objc ViewControllerFactory.(null) <stripped>

	// Swift methods
	0x67cd0  func ViewControllerFactory.inflightOnboardingStack.getter // getter 
	0x67d10  func ViewControllerFactory.inflightOnboardingStack.setter // setter 
	0x67d30  func ViewControllerFactory.inflightOnboardingStack.modify // modifyCoroutine 
	0x67e60  func ViewControllerFactory.inflightVerificationStack.getter // getter 
	0x67f10  func ViewControllerFactory.inflightVerificationStack.setter // setter 
	0x67f80  func ViewControllerFactory.inflightVerificationStack.modify // modifyCoroutine 
	0x67ff0  func ViewControllerFactory.createOnboardingStack(forAgencyModel:exposureManager:fromAvailabilityAlert:completion:) // method 
	0x68540  func ViewControllerFactory.createAnalyticsConsentStack(forAgencyModel:exposureManager:completion:) // method 
	0x687b0  func ViewControllerFactory.createVerificationStack(forAgencyModel:exposureManager:sessionIdentifier:completion:) // method 
	0x68aa0  func ViewControllerFactory.createKeyReleaseDialogue(with:region:completion:) // method 
	0x68cd0  func ViewControllerFactory.createPreApprovalDialogue(with:region:completion:) // method 
 }

 class HealthExposureNotificationUI.OnboardingOpenAppStoreViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let appStoreURL : String
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77f400026bc0 (0x7f400026bc0) in binary!
	0x77e8  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x77dc00026f48 (0x7dc00026f48) in binary!
	0x6c20  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x77c400026a70 (0x7c400026a70) in binary!
	0x38000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x699c00026b20 (0x19c00026b20) in binary!
	0x9270  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x779400026a40 (0x79400026a40) in binary!
	0x48000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>

	// Swift methods
	0x69380  class func OnboardingOpenAppStoreViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.NotificationPreviewView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let content : NotificationContent
	var isPresented : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x699c00026b20 (0x19c00026b20) in binary!
	0x9270  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x779400026a40 (0x79400026a40) in binary!
	0x48000000c  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x696c00026af0 (0x16c00026af0) in binary!
	0x9240  @objc NotificationPreviewView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationCapsuleView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x693400026ab8 (0x13400026ab8) in binary!
	0x9208  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0x807c000266c8 (0x7c000266c8) in binary!
	0x48000000c  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0xb72a00026db8 (0x72a00026db8) in binary!
	0x91d8  @objc NotificationCapsuleView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationContent : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let notificationContainer : NotificationCapsuleView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x696c00026af0 (0x16c00026af0) in binary!
	0x9240  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x80b400026700 (0xb400026700) in binary!
	0x7758  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x784ffff6920  @objc NotificationContent.(null) <stripped>
	0xffff69d8  @objc NotificationContent.Lç=A <stripped>
 }

 class HealthExposureNotificationUI.VerificationTableView : UITableView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var $__lazy_storage_$_heightConstraint : NSLayoutConstraint? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x656000026d30 (0x56000026d30) in binary!
	0x9170  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x7694000272a0 (0x694000272a0) in binary!
	0xb608  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x767c00026928 (0x67c00026928) in binary!
	0x48000000c  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0xb67a00026d08 (0x67a00026d08) in binary!
	0x9128  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x764c00027258 (0x64c00027258) in binary!
	0x7640  @objc VerificationTableView.(null) <stripped>

	// Swift methods
	0x6c810  func <stripped> // getter 
 }

 class HealthExposureNotificationUI.AuthorityTextCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var authorityTextView : OnboardingAuthorityTextView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb6f200026d80 (0x6f200026d80) in binary!
	0x91a0  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x76c400026970 (0x6c400026970) in binary!
	0x58000000c  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x656000026d30 (0x56000026d30) in binary!
	0x9170  @objc AuthorityTextCell.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.VerificationCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb72a00026db8 (0x72a00026db8) in binary!
	0x91d8  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x76fc00027308 (0x6fc00027308) in binary!
	0x76f0  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x71cffff81a8  @objc VerificationCell.(null) <stripped>
	0xffff85a0  @objc VerificationCell.ç:  <stripped>
 }

 class HealthExposureNotificationUI.VerificationCheckmarkCell : VerificationCell {

	// Properties
	let label : UILabel
	let accessoryImageView : UIImageView
	var isChecked : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb67a00026d08 (0x67a00026d08) in binary!
	0x9128  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x764c00027258 (0x64c00027258) in binary!
	0x7640  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x1acffffa008  @objc VerificationCheckmarkCell.(null) <stripped>
	0x594ffffa100  @objc VerificationCheckmarkCell.âÒLã}»Mâ¯Ëö≥ <stripped>
 }

 class HealthExposureNotificationUI.OnboardingAddRegionWelcomeViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x762c000269f8 (0x62c000269f8) in binary!
	0x7620  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x761400026d80 (0x61400026d80) in binary!
	0x7608  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x6a4c00026e68 (0x24c00026e68) in binary!
	0x75f0  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x53cffffb1e8  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
	0x78cffffb930  @objc OnboardingAddRegionWelcomeViewController.MâÔLâE»IâÕIâ÷Hâu–Ëi∞ <stripped>
	0x4cffffbb68  @objc OnboardingAddRegionWelcomeViewController.Ëç≥ <stripped>

	// Swift methods
	0x6e260  class func OnboardingAddRegionWelcomeViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75dc000269a8 (0x5dc000269a8) in binary!
	0x75d0  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x75c400026d50 (0x5c400026d50) in binary!
	0x75b8  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x69fc00026e18 (0x1fc00026e18) in binary!
	0x75a0  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5ccffffcc18  @objc OnboardingAnalyticsViewController.(null) <stripped>
	0x56c00026938  @objc OnboardingAnalyticsViewController.Hç5i <stripped>
WARNING: couldn't find address 0x26cccffffccc8 (0x4ccffffccc8) in binary!
	0x55400027750  @objc OnboardingAnalyticsViewController.(null) <stripped>

	// Swift methods
	0x6f420  class func OnboardingAnalyticsViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.MultilineButton : UIButton /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x677c00026900 (0x77c00026900) in binary!
	0x9050  @objc MultilineButton.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x4ccffffccc8  @objc MultilineButton.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingRegionAlreadyExistsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7560  VerificationSymptomDateEntryViewController.init(title:detailText:symbolName:)
WARNING: couldn't find address 0x755400027750 (0x55400027750) in binary!
	0x6998  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x753c000267e8 (0x53c000267e8) in binary!
	0x25029232840  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x1746f4e6572  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x49556e6f69746163 (0x66f69746163) in binary!
	0x46275503a54  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>

	// Swift methods
	0x719e0  func <stripped> // method 
	0x72200  func <stripped> // method 
 }

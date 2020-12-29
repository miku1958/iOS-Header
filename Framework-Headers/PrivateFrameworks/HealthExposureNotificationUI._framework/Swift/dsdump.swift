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
	var top : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ÿ
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
	let rawValue : ›
 }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ÿ
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ÿ
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ÿ
 }

 class HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	var hasSymptoms : Bool? // +0x18 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var symptomOnsetDate : Éÿ // +0x0 (0x0)
	var isShowingDatePicker : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : ©Ÿ // +0x0 (0x8)
	var primaryButton : OBBoldTrayButton // +0x0 (0x8)
	var secondaryButton : OBLinkTrayButton // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8564000278e0 (0x564000278e0) in binary!
	0x7df8  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x854c00027b50 (0x54c00027b50) in binary!
	0x65b2  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x65b400027618 (0x5b400027618) in binary!
	0x65b6  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x65aa000275f0 (0x5aa000275f0) in binary!
	0x8510  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x850400027c40 (0x50400027c40) in binary!
	0x84f8  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x658c00027b08 (0x58c00027b08) in binary!
	0x6580  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x84d400027730 (0x4d400027730) in binary!
	0x38000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xc4a200027b10 (0x4a200027b10) in binary!
	0x9f70  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x84a400027700 (0x4a400027700) in binary!
	0x28000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xc47200027ae0 (0x47200027ae0) in binary!
	0x9f40  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x784fff977f8  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
	0xfff97d50  @objc VerificationSymptomDateEntryViewController. <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x34cfff99508  @objc VerificationSymptomDateEntryViewController.(null) <stripped>

	// Swift methods
	0x5510  class func VerificationSymptomDateEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.SymptomOnsetDateCell : VerificationCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc47200027ae0 (0x47200027ae0) in binary!
	0x9f40  @objc SymptomOnsetDateCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x784fff977f8  @objc SymptomOnsetDateCell.(null) <stripped>
 }

 class HealthExposureNotificationUI.DatePickerCell : VerificationCell {

	// Properties
	let datePicker : UIDatePicker

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc4a200027b10 (0x4a200027b10) in binary!
	0x9f70  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0x84a400027700 (0x4a400027700) in binary!
	0x28000000c  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0xc47200027ae0 (0x47200027ae0) in binary!
	0x9f40  @objc DatePickerCell.(null) <stripped>
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
WARNING: couldn't find address 0x9f2c00027c68 (0x72c00027c68) in binary!
	0x7650  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x8454000276b0 (0x454000276b0) in binary!
	0x58000000c  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x843c000277b8 (0x43c000277b8) in binary!
	0x8430  @objc LoadingStatusView.(null) <stripped>

	// Swift methods
	0xc570  class func LoadingStatusView.__allocating_init(with:backgroundColor:) // init 
	0xc6e0  func <stripped> // method 
	0xcac0  func LoadingStatusView.startAnimating() // method 
	0xcae0  func LoadingStatusView.stopAnimating() // method 
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
WARNING: couldn't find address 0x843c000277b8 (0x43c000277b8) in binary!
	0x8430  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x842400027b78 (0x42400027b78) in binary!
	0x7868  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x840c00027668 (0x40c00027668) in binary!
	0x98000000c  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x72a800027388 (0x2a800027388) in binary!
	0x7c88  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x729000027360 (0x29000027360) in binary!
	0x7c70  @objc OnboardingSummaryViewController.(null) <stripped>

	// Swift methods
	0xe050  class func OnboardingSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.ENUIPublicHealthHeaderStyle { }

 class HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let subtitle : String
	let backgroundColor : UIColor
	let textColor : UIColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logoURL : /”
	let style : ENUIPublicHealthHeaderStyle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x71c0000273d8 (0x1c0000273d8) in binary!
	0x71b4  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x71a8000273b0 (0x1a8000273b0) in binary!
	0x719c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x719000027388 (0x19000027388) in binary!
	0x9f22  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x797400027360 (0x17400027360) in binary!
	0x716c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x82ac00027508 (0x2ac00027508) in binary!
	0x1d8000000c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x714800027b38 (0x14800027b38) in binary!
	0x713c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x7130000272d0 (0x130000272d0) in binary!
	0x7124  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x7118000272a8 (0x118000272a8) in binary!
	0x710c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x710000027280 (0x10000027280) in binary!
	0x70f4  @objc ENUIPublicHealthHeader.(null) <stripped>

	// Swift methods
	0xed60  class func ENUIPublicHealthHeader.__allocating_init(title:subtitle:backgroundColor:textColor:logoURL:style:) // init 
 }

 class HealthExposureNotificationUI.ENUIPublicHealthLegalDocument : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let text : String
	let version : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6fe0000271c0 (0x7e0000271c0) in binary!
	0x6fd4  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x8bf800027198 (0x3f800027198) in binary!
	0x6fbc  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x80fc00027358 (0xfc00027358) in binary!
	0x58000000c  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x72d400027408 (0x2d400027408) in binary!
	0x9b98  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x80cc000277e8 (0xcc000277e8) in binary!
	0x80c0  @objc ENUIPublicHealthLegalDocument.(null) <stripped>

	// Swift methods
	0xf1e0  class func ENUIPublicHealthLegalDocument.__allocating_init(text:version:) // init 
 }

 class HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let textConsented : String
	let versionConsented : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateConsented : ë—

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7210000273d8 (0x210000273d8) in binary!
	0x7204  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x71f8000273b0 (0x1f8000273b0) in binary!
	0x63d8  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x71e000027960 (0x1e000027960) in binary!
	0x8320  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x3c4fff99c38  @objc ENUIUserConsentStatus.(null) <stripped>
	0x39cfff99ca0  @objc ENUIUserConsentStatus.Iâ«Lã%zÜ <stripped>
	0x374fff99d08  @objc ENUIUserConsentStatus. <stripped>

	// Swift methods
	0xf550  class func ENUIUserConsentStatus.__allocating_init(textConsented:versionConsented:dateConsented:) // init 
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
	let regionWebsiteURL : /”
	let wantsAnalytics : Bool
	var analyticsConsentStatus : ENRegionConsent
	let analyticsConsentText : String?
	let verificationIntroductoryText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let verificationCodeHelpURL : /”
	let verificationSymptomOnsetText : String
	let verificationTravelStatusText : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x714800027b38 (0x14800027b38) in binary!
	0x713c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x7130000272d0 (0x130000272d0) in binary!
	0x7124  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x7118000272a8 (0x118000272a8) in binary!
	0x710c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x710000027280 (0x10000027280) in binary!
	0x70f4  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa1a400027260 (0x1a400027260) in binary!
	0x9e7a  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x70d000027238 (0xd000027238) in binary!
	0xa180  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x9e5600027210 (0x65600027210) in binary!
	0x7ba2  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x70a0000271e8 (0xa0000271e8) in binary!
	0x7094  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x7088000271c0 (0x88000271c0) in binary!
	0x707c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x707000027198 (0x7000027198) in binary!
	0xa120  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa11400027170 (0x11400027170) in binary!
	0x7b58  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa0fc00027148 (0xfc00027148) in binary!
	0xa0f0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x702800027120 (0x2800027120) in binary!
	0x701c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0xa0cc000270f8 (0xcc000270f8) in binary!
	0x7004  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x8144000273a0 (0x144000273a0) in binary!
	0x58000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6fe0000271c0 (0x7e0000271c0) in binary!
	0x6fd4  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x8bf800027198 (0x3f800027198) in binary!
	0x6fbc  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80fc00027358 (0xfc00027358) in binary!
	0x58000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x72d400027408 (0x2d400027408) in binary!
	0x9b98  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80cc000277e8 (0xcc000277e8) in binary!
	0x80c0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x80b400027310 (0xb400027310) in binary!
	0x48000000c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x809c00027418 (0x9c00027418) in binary!
	0x8090  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x74d4000278a0 (0x4d4000278a0) in binary!
	0x8078  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x294fffaf0e0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0x22cfffaf588  @objc ENUIPublicHealthAgencyModel.Ë]¡ <stripped>
	0x34cfffaf5f0  @objc ENUIPublicHealthAgencyModel.A]A^A_]√Hç=ï∏	 <stripped>
	0xfffaf6c8  @objc ENUIPublicHealthAgencyModel.3
 <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x31cfffae770  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0xfffae9c8  @objc ENUIPublicHealthAgencyModel.	 <stripped>

	// Swift methods
	0xfba0  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.getter // getter 
	0xfc10  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.setter // setter 
	0xfc50  func ENUIPublicHealthAgencyModel.analyticsConsentStatus.modify // modifyCoroutine 
	0xff80  func ENUIPublicHealthAgencyModel.isSymptomOnsetNeeded.getter // getter 
	0x10000  func ENUIPublicHealthAgencyModel.isTravelStatusNeeded.getter // getter 
	0x10060  class func ENUIPublicHealthAgencyModel.__allocating_init(region:name:appBundleId:introductoryText:header:legalese:consentStatus:consentVersion:isAuthorized:regionVersion:regionWebsiteURL:wantsAnalytics:analyticsConsentStatus:analyticsConsentText:verificationIntroductoryText:verificationCodeHelpURL:verificationSymptomOnsetText:verificationTravelStatusText:) // init 
	0x107c0  func ENUIPublicHealthAgencyModel.isAppInstalled.getter // getter 
	0x108e0  func ENUIPublicHealthAgencyModel.isRegionUsingApp.getter // getter 
	0x10ab0  func ENUIPublicHealthAgencyModel.installedAppName.getter // getter 
	0x10ca0  func ENUIPublicHealthAgencyModel.installedAppIcon.getter // getter 
	0x10f80  func ENUIPublicHealthAgencyModel.regionIsPlaceholder.getter // getter 
 }

 class HealthExposureNotificationUI.AuthorizationFooterView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var delegate : AuthorizationFooterViewDelegate
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBBoldTrayButton
	let visualEffectView : UIVisualEffectView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72d400027408 (0x2d400027408) in binary!
	0x9b98  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x80cc000277e8 (0xcc000277e8) in binary!
	0x80c0  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x80b400027310 (0xb400027310) in binary!
	0x48000000c  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x809c00027418 (0x9c00027418) in binary!
	0x8090  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x74d4000278a0 (0x4d4000278a0) in binary!
	0x8078  @objc AuthorizationFooterView.(null) <stripped>

	// Swift methods
	0x15740  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionChangeSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x809c00027418 (0x9c00027418) in binary!
	0x8090  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x74d4000278a0 (0x4d4000278a0) in binary!
	0x8078  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x294fffaf0e0  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
	0x22cfffaf588  @objc OnboardingRegionChangeSummaryViewController.Ë]¡ <stripped>

	// Swift methods
	0x16200  class func OnboardingRegionChangeSummaryViewController.__allocating_init(flow:agencyModel:) // init 
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
	0x16c80  func StandardOnboardingFlow.completionHandler.getter // getter 
	0x16cc0  func StandardOnboardingFlow.completionHandler.setter // setter 
	0x16d00  func StandardOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x16d40  func StandardOnboardingFlow.healthAgencyModel.getter // getter 
	0x16d80  func StandardOnboardingFlow.healthAgencyModel.setter // setter 
	0x16dc0  func StandardOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x16df0  func StandardOnboardingFlow.currentSelectedRegion.getter // getter 
	0x16e80  func StandardOnboardingFlow.currentSelectedRegion.setter // setter 
	0x16f60  func StandardOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x16f90  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x16fb0  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x16fd0  func StandardOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x17010  class func StandardOnboardingFlow.__allocating_init(agencyModel:exposureManager:isFromAvailabilityAlert:completion:) // init 
	0x17250  func StandardOnboardingFlow.initialViewController.getter // getter 
	0x172a0  func StandardOnboardingFlow.didTapNext(from:) // method 
	0x172d0  func StandardOnboardingFlow.didTapCancel(from:) // method 
	0x17a20  func <stripped> // method 
 }

 class HealthExposureNotificationUI.AddRegionOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : FlowResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	let exposureManager : ExposureNotifying

	// Swift methods
	0x22ad0  func AddRegionOnboardingFlow.completionHandler.getter // getter 
	0x22c60  func AddRegionOnboardingFlow.completionHandler.setter // setter 
	0x18250  func AddRegionOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x22a80  func AddRegionOnboardingFlow.healthAgencyModel.getter // getter 
	0x22ec0  func AddRegionOnboardingFlow.healthAgencyModel.setter // setter 
	0x18280  func AddRegionOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x22bc0  func AddRegionOnboardingFlow.currentSelectedRegion.getter // getter 
	0x22eb0  func AddRegionOnboardingFlow.currentSelectedRegion.setter // setter 
	0x182b0  func AddRegionOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x22a50  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x22c20  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x182e0  func AddRegionOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x18310  class func AddRegionOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x18530  func AddRegionOnboardingFlow.initialViewController.getter // getter 
	0x185c0  func AddRegionOnboardingFlow.didTapNext(from:) // method 
	0x18a50  func AddRegionOnboardingFlow.didTapCancel(from:) // method 
	0x18cb0  func <stripped> // method 
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
	0x19270  func AnalyticsConsentOnboardingFlow.healthAgencyModel.getter // getter 
	0x192b0  func AnalyticsConsentOnboardingFlow.healthAgencyModel.setter // setter 
	0x192f0  func AnalyticsConsentOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x19320  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.getter // getter 
	0x19380  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.setter // setter 
	0x19430  func AnalyticsConsentOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x19460  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x19490  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x194d0  func AnalyticsConsentOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x19500  func AnalyticsConsentOnboardingFlow.exposureManager.getter // getter 
	0x19560  func AnalyticsConsentOnboardingFlow.exposureManager.setter // setter 
	0x195c0  func AnalyticsConsentOnboardingFlow.exposureManager.modify // modifyCoroutine 
	0x195f0  func AnalyticsConsentOnboardingFlow.initialViewController.getter // getter 
	0x19660  func AnalyticsConsentOnboardingFlow.completionHandler.getter // getter 
	0x196a0  func AnalyticsConsentOnboardingFlow.completionHandler.setter // setter 
	0x196e0  func AnalyticsConsentOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x19710  class func AnalyticsConsentOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x19870  func AnalyticsConsentOnboardingFlow.didTapNext(from:) // method 
	0x19930  func AnalyticsConsentOnboardingFlow.didTapCancel(from:) // method 
 }

 enum HealthExposureNotificationUI.SymptomOnset {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case date : ë—
	case noSymptoms  
 }

 class HealthExposureNotificationUI.VerificationOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : FlowResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sessionIdentifier : —–
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	let nonNilAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	var currentSelectedRegionSubdivisionCodes : [String]
	let exposureManager : ExposureNotifying
	var symptomOnset : SymptomOnset
	var hasTraveled : Bool?

	// Swift methods
	0x22ae0  func VerificationOnboardingFlow.completionHandler.getter // getter 
	0x22c70  func VerificationOnboardingFlow.completionHandler.setter // setter 
	0x19ee0  func VerificationOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x19f10  func VerificationOnboardingFlow.sessionIdentifier.getter // getter 
	0x19f30  func VerificationOnboardingFlow.sessionIdentifier.setter // setter 
	0x19f50  func VerificationOnboardingFlow.sessionIdentifier.modify // modifyCoroutine 
	0x19f90  func VerificationOnboardingFlow.healthAgencyModel.getter // getter 
	0x19fd0  func VerificationOnboardingFlow.healthAgencyModel.setter // setter 
	0x1a020  func VerificationOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x1a060  func VerificationOnboardingFlow.currentSelectedRegion.getter // getter 
	0x1a0d0  func VerificationOnboardingFlow.currentSelectedRegion.setter // setter 
	0x1a190  func VerificationOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x1a1d0  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.getter // getter 
	0x1a210  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.setter // setter 
	0x1a260  func VerificationOnboardingFlow.currentSelectedRegionSubdivisionCodes.modify // modifyCoroutine 
	0x1a2c0  func VerificationOnboardingFlow.symptomOnset.getter // getter 
	0x1a330  func VerificationOnboardingFlow.symptomOnset.setter // setter 
	0x1a3b0  func VerificationOnboardingFlow.symptomOnset.modify // modifyCoroutine 
	0x1a3f0  func VerificationOnboardingFlow.hasTraveled.getter // getter 
	0x1a420  func VerificationOnboardingFlow.hasTraveled.setter // setter 
	0x1a460  func VerificationOnboardingFlow.hasTraveled.modify // modifyCoroutine 
	0x1a4a0  class func VerificationOnboardingFlow.__allocating_init(sessionIdentifier:agencyModel:exposureManager:completion:) // init 
	0x1a760  func VerificationOnboardingFlow.initialViewController.getter // getter 
	0x1a7d0  func VerificationOnboardingFlow.didTapNext(from:) // method 
	0x1a800  func VerificationOnboardingFlow.didTapCancel(from:) // method 
	0x1ad80  func VerificationOnboardingFlow.fetchTestMetadata(_:completionHandler:) // method 
 }

 class HealthExposureNotificationUI.NumberedTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let number : Int
	let title : String?
	let details : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ac400027800 (0x2c400027800) in binary!
	0x71e8  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7fec00027248 (0x7ec00027248) in binary!
	0x58000000c  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7fd400027350 (0x7d400027350) in binary!
	0x9f40  @objc NumberedTextView.(null) <stripped>

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
WARNING: couldn't find address 0x9b2400027860 (0x32400027860) in binary!
	0x78f8  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x899c00026f98 (0x19c00026f98) in binary!
	0x6ef4  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x78d400027868 (0xd400027868) in binary!
	0x7218  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x801c00027278 (0x1c00027278) in binary!
	0x38000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x9ac400027800 (0x2c400027800) in binary!
	0x71e8  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7fec00027248 (0x7ec00027248) in binary!
	0x58000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7fd400027350 (0x7d400027350) in binary!
	0x9f40  @objc IconTextView.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.OnboardingInfoViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7fd400027350 (0x7d400027350) in binary!
	0x9f40  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x8aa0000277c0 (0x2a0000277c0) in binary!
	0x9a70  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7fa400027200 (0x7a400027200) in binary!
	0x18000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7f8c00027a60 (0x78c00027a60) in binary!
	0xb8000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x9a3400027770 (0x23400027770) in binary!
	0x7f68  @objc OnboardingInfoViewController.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : StandardOnboardingFlow
	var isFromAvailabilityAlert : Bool
	let notificationPreview : NotificationPreviewView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a3400027770 (0x23400027770) in binary!
	0x7f68  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x9ed400027a78 (0x6d400027a78) in binary!
	0x9ec8  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f4400027a80 (0x74400027a80) in binary!
	0x7f38  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f2c00027648 (0x72c00027648) in binary!
	0x7f20  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7f14000279e8 (0x714000279e8) in binary!
	0x89ec  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7efc00027158 (0x6fc00027158) in binary!
	0x58000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x99a4000276e0 (0x1a4000276e0) in binary!
	0x7ed8  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x8f6c00027a80 (0x76c00027a80) in binary!
	0x70b0  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7eb400027110 (0x6b400027110) in binary!
	0xc8000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x995c00027698 (0x15c00027698) in binary!
	0x7e90  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x9dfc000279a0 (0x5fc000279a0) in binary!
	0x9df0  @objc OnboardingWelcomeViewController.(null) <stripped>

	// Swift methods
	0x272e0  class func OnboardingWelcomeViewController.__allocating_init(flow:fromAvailabilityAlert:) // init 
 }

 enum HealthExposureNotificationUI.SelectionType {

	// Properties
	case subdivisionSelection : [String]
	case countrySelection  
 }

 class HealthExposureNotificationUI.RegionSelectionHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageDimension : ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iconTitlePadding : ÿ
	let title : String
	let globeImageView : UIImageView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99a4000276e0 (0x1a4000276e0) in binary!
	0x7ed8  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x8f6c00027a80 (0x76c00027a80) in binary!
	0x70b0  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x7eb400027110 (0x6b400027110) in binary!
	0xc8000000c  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x995c00027698 (0x15c00027698) in binary!
	0x7e90  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x9dfc000279a0 (0x5fc000279a0) in binary!
	0x9df0  @objc RegionSelectionHeaderView.(null) <stripped>

	// Swift methods
	0x2acb0  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : ViewControllerFlow
	let selectionType : SelectionType
	let statusView : LoadingStatusView
	let regionTableView : UITableView
	let regionsProvider : RegionsProvider

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x995c00027698 (0x15c00027698) in binary!
	0x7e90  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x9dfc000279a0 (0x5fc000279a0) in binary!
	0x9df0  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7e6c00027940 (0x66c00027940) in binary!
	0x7e60  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x8fbb00026d98 (0x7bb00026d98) in binary!
	0x892c  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x5ebc00026f20 (0x6bc00026f20) in binary!
	0x76d0  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x890800027628 (0x10800027628) in binary!
	0x7e18  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x20cfffba670  @objc OnboardingRegionSelectionViewController.(null) <stripped>
	0x51cfffbb658  @objc OnboardingRegionSelectionViewController.]√fêY˛ˇˇ˛ˇˇcˇˇˇˇˇˇ¸ˇˇˇf.Ñ <stripped>
	0x24fffbc1c0  @objc OnboardingRegionSelectionViewController. <stripped>
	0x5b400027130  @objc OnboardingRegionSelectionViewController. <stripped>
WARNING: couldn't find address 0x274c4fffbfab0 (0x4c4fffbfab0) in binary!
	0x1ec000275b8  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x26fecfffbfc48 (0x7ecfffbfc48) in binary!
	0x58000000c  @objc OnboardingRegionSelectionViewController.(null) <stripped>

	// Swift methods
	0x2aac0  class func OnboardingRegionSelectionViewController.__allocating_init(flow:type:) // init 
 }

 class HealthExposureNotificationUI.VerificationSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let statusView : LoadingStatusView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e0400027180 (0x60400027180) in binary!
	0x7df8  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x7dec00027508 (0x5ec00027508) in binary!
	0x7de0  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x7224000275f0 (0x224000275f0) in binary!
	0x7dc8  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x4c4fffbfab0  @objc VerificationSummaryViewController.(null) <stripped>
	0x7ecfffbfc48  @objc VerificationSummaryViewController. <stripped>
	0x14400026ca8  @objc VerificationSummaryViewController. <stripped>

	// Swift methods
	0x2ec60  class func VerificationSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.AuthorizationViewController {
 class HealthExposureNotificationUI.OnboardingRegionNotAvailableViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let region : RegionNameAndCode
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7db400027130 (0x5b400027130) in binary!
	0x7da8  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x71ec000275b8 (0x1ec000275b8) in binary!
	0x7d90  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x494fffc1c78  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
	0x46cfffc22e0  @objc OnboardingRegionNotAvailableViewController.— <stripped>

	// Swift methods
	0x34ce0  class func OnboardingRegionNotAvailableViewController.__allocating_init(flow:region:) // init 
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
WARNING: couldn't find address 0x6be800027368 (0x3e800027368) in binary!
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
	var statusObservation : G…

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x994e00027b48 (0x14e00027b48) in binary!
	0x769a  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c5400026be0 (0x45400026be0) in binary!
	0x9c50  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c3c00026bb8 (0x43c00026bb8) in binary!
	0x9c38  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c2400026b90 (0x42400026b90) in binary!
	0x9c20  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9c1f00026b68 (0x41f00026b68) in binary!
	0x7a74  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6b3800027a10 (0x33800027a10) in binary!
	0x6b2c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7c6c00026ef0 (0x46c00026ef0) in binary!
	0x7a44  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9be400026b08 (0x3e400026b08) in binary!
	0x6880  @objc ENManagerAdapter.(null) <stripped>
	0x67f8  @objc ENManagerAdapter.[ <stripped>
WARNING: couldn't find address 0x67ec00026ac0 (0x7ec00026ac0) in binary!
	0x79fc  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9bac00026a98 (0x3ac00026a98) in binary!
	0x79e4  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x67bc00026a70 (0x7bc00026a70) in binary!
	0x67b0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x79c000026a48 (0x1c000026a48) in binary!
	0x67b0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x678c00026a20 (0x78c00026a20) in binary!
	0x67b8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6774000269f8 (0x774000269f8) in binary!
	0x67a0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7978000269d0 (0x178000269d0) in binary!
	0x9b18  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x9b0c000269a8 (0x30c000269a8) in binary!
	0x6790  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x908c00026988 (0x8c00026988) in binary!
	0x7b58  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x254fffce0c0  @objc ENManagerAdapter.(null) <stripped>
	0x274fffcf028  @objc ENManagerAdapter.âÁAˇ’IâƒHâﬂMâ˝Ë5) <stripped>
	0x10cfffcf320  @objc ENManagerAdapter.} <stripped>
	0x54cfffcf4d8  @objc ENManagerAdapter.HÉ‡H)√Hâ‹HâÿLâÁË˘∫ <stripped>
	0x59c000272d8  @objc ENManagerAdapter. <stripped>
WARNING: couldn't find address 0x26d54fffd05b8 (0x554fffd05b8) in binary!
	0x2c400026e40  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x275d4fffd1f50 (0x5d4fffd1f50) in binary!
	0x2ac00027950  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x279dcfffd2b08 (0x1dcfffd2b08) in binary!
	0x29400027990  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x271dcfffd30d0 (0x1dcfffd30d0) in binary!
	0x56000027280  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x26cccfffd57e8 (0x4ccfffd57e8) in binary!
	0x48000000c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7a5c00026dd8 (0x25c00026dd8) in binary!
	0x7a50  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6e9400027260 (0x69400027260) in binary!
	0x7a38  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x214fffd6a50  @objc ENManagerAdapter.(null) <stripped>
	0x45cfffd9058  @objc ENManagerAdapter.H3Hâ]√UHâÂHãIãU <stripped>
	0x4ac000271e8  @objc ENManagerAdapter.¿ <stripped>
WARNING: couldn't find address 0x26d04fffd9068 (0x504fffd9068) in binary!
	0x1d400026c30  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0xfffd9180 (0xfffd9180) in binary!
	0x3ac00026ce0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x271acfffdb2d8 (0x1acfffdb2d8) in binary!
	0x1a400026c00  @objc ENManagerAdapter.(null) <stripped>

	// Swift methods
	0x38b00  func ENManagerAdapter.exposureNotificationStatus.getter // getter 
	0x38b70  func ENManagerAdapter.exposureNotificationStatus.setter // setter 
	0x38bb0  func ENManagerAdapter.exposureNotificationStatus.modify // modifyCoroutine 
	0x38c10  func ENManagerAdapter.isExposureLoggingDataPresent.getter // getter 
	0x38c50  func ENManagerAdapter.isExposureLoggingDataPresent.setter // setter 
	0x38c70  func ENManagerAdapter.isExposureLoggingDataPresent.modify // modifyCoroutine 
	0x38ce0  func ENManagerAdapter.areAvailabilityAlertsEnabled.getter // getter 
	0x38d20  func ENManagerAdapter.areAvailabilityAlertsEnabled.setter // setter 
	0x38d40  func ENManagerAdapter.areAvailabilityAlertsEnabled.modify // modifyCoroutine 
	0x38dd0  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.getter // getter 
	0x38e80  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.setter // setter 
	0x38ee0  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.modify // modifyCoroutine 
	0x38fd0  func ENManagerAdapter.statusChangeHandler.getter // getter 
	0x390d0  func ENManagerAdapter.statusChangeHandler.setter // setter 
	0x39130  func ENManagerAdapter.statusChangeHandler.modify // modifyCoroutine 
	0x39b90  func <stripped> // method 
	0x39d50  func ENManagerAdapter.refreshStatus(_:) // method 
	0x3a4a0  func ENManagerAdapter.setExposureNotification(enabled:completion:) // method 
	0x3a590  func ENManagerAdapter.onboardingDidStart(forRegion:source:) // method 
	0x3a910  func ENManagerAdapter.fetchSubdivisions(forRegion:completion:) // method 
	0x3ab30  func ENManagerAdapter.set(activeRegion:completion:) // method 
	0x3abf0  func ENManagerAdapter.setActivePhaseOneApp(with:completion:) // method 
	0x3aec0  func ENManagerAdapter.latestExposureNotification(_:) // method 
	0x3b090  func <stripped> // method 
	0x3bfb0  func ENManagerAdapter.fetchAgencyModel(for:reason:completionHandler:) // method 
	0x3cff0  func ENManagerAdapter.fetchAllEntities(_:) // method 
	0x3d300  func ENManagerAdapter.getAgencyModel(forBundleID:completion:) // method 
	0x3d560  func ENManagerAdapter.getAgencyModel(forRegionCode:completion:) // method 
	0x3d970  func ENManagerAdapter.allRegionConfigurations(_:) // method 
	0x3db60  func ENManagerAdapter.setShareAnalytics(_:region:version:completion:) // method 
	0x3df30  func ENManagerAdapter.isTravelStatusEnabled(for:completion:) // method 
	0x3e040  func ENManagerAdapter.setTravelStatus(_:region:completion:) // method 
	0x3e2d0  func ENManagerAdapter.isPreReleaseAuthorized(for:completion:) // method 
	0x3e590  func ENManagerAdapter.setPreRelease(_:region:completion:) // method 
	0x3e7c0  func ENManagerAdapter.resetAllDataAndDisableExposureNotifications(_:) // method 
	0x3eb40  func ENManagerAdapter.setAvailabilityAlertsEnabled(_:completion:) // method 
	0x3edc0  func ENManagerAdapter.setWeeklySummaryEnabled(_:completion:) // method 
	0x3f020  func ENManagerAdapter.setUserConsent(_:region:text:version:completion:) // method 
	0x3f4a0  func ENManagerAdapter.startTestVerificationSession(verificationCode:region:completionHandler:) // method 
	0x3fa80  func ENManagerAdapter.fetchTestMetadata(for:completionHandler:) // method 
	0x40600  func ENManagerAdapter.finishSession(_:userDidConsent:symptomOnset:hasTraveled:completionHandler:) // method 
	0x41280  func ENManagerAdapter.tccContainsRecord(forBundleIdentifier:) // method 
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
WARNING: couldn't find address 0x7b4400026ec0 (0x34400026ec0) in binary!
	0x7b38  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x7b2c00027268 (0x32c00027268) in binary!
	0x7b20  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x7b1400026920 (0x31400026920) in binary!
	0x7b08  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x6f4c00027318 (0x74c00027318) in binary!
	0x7af0  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x554fffd05b8  @objc OnboardingLegalConsentViewController.(null) <stripped>
	0x5d4fffd1f50  @objc OnboardingLegalConsentViewController.UHâÂAWAVAUATSHÉÏIâÃIâ÷Iâˇ1ˇË1ª <stripped>
	0x1dcfffd2b08  @objc OnboardingLegalConsentViewController.êË‡û <stripped>
	0x1dcfffd30d0  @objc OnboardingLegalConsentViewController.F« <stripped>

	// Swift methods
	0x42fd0  class func OnboardingLegalConsentViewController.__allocating_init(flow:agencyModel:showsTurnOnExposureNotificationsAlert:shouldSetActiveRegion:) // init 
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
	var keyboardHeight : ÿ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x959c000272d8 (0x59c000272d8) in binary!
	0x7ad0  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7ac400026e40 (0x2c400026e40) in binary!
	0x9a30  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7aac00027950 (0x2ac00027950) in binary!
	0x7340  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7a9400027990 (0x29400027990) in binary!
	0x7a88  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x856000027280 (0x56000027280) in binary!
	0x7a70  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x16cfffd63a8  @objc VerificationCodeEntryViewController.(null) <stripped>
	0x494fffd6580  @objc VerificationCodeEntryViewController.5ÉÆ	 <stripped>
	0x31400026820  @objc VerificationCodeEntryViewController.ãH¯LâÁæ <stripped>
WARNING: couldn't find address 0x27214fffd6a50 (0x214fffd6a50) in binary!
	0x3fc00026d30  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x26c5cfffd9058 (0x45cfffd9058) in binary!
	0x38000000c  @objc VerificationCodeEntryViewController.(null) <stripped>

	// Swift methods
	0x45cc0  class func VerificationCodeEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.VerificationFinishedViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a5c00026dd8 (0x25c00026dd8) in binary!
	0x7a50  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x6e9400027260 (0x69400027260) in binary!
	0x7a38  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x214fffd6a50  @objc VerificationFinishedViewController.(null) <stripped>
	0x45cfffd9058  @objc VerificationFinishedViewController.H3Hâ]√UHâÂHãIãU <stripped>

	// Swift methods
	0x4b8f0  class func VerificationFinishedViewController.__allocating_init(flow:) // init 
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
WARNING: couldn't find address 0xab1400026820 (0x31400026820) in binary!
	0x94d8  @objc OnboardingHeaderView.(null) <stripped>
WARNING: couldn't find address 0x6bfc00026d30 (0x3fc00026d30) in binary!
	0x7a00  @objc OnboardingHeaderView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x504fffd9068  @objc OnboardingHeaderView.(null) <stripped>
	0xfffd9180  @objc OnboardingHeaderView.¡ËÑŒ <stripped>

	// Swift methods
	0x4c200  class func OnboardingHeaderView.__allocating_init(header:insets:corners:) // init 
	0x4c350  func <stripped> // method 
	0x4c800  func <stripped> // method 
	0x4d2f0  func <stripped> // method 
	0x4dd70  func <stripped> // method 
	0x4e650  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.Constants { }

 class HealthExposureNotificationUI.OnboardingAuthorityTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let headerView : OnboardingHeaderView
	let textView : UITextView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94ac000271e8 (0x4ac000271e8) in binary!
	0x6bd0  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x79d400026c30 (0x1d400026c30) in binary!
	0x38000000c  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x6bac00026ce0 (0x3ac00026ce0) in binary!
	0x9470  @objc OnboardingAuthorityTextView.(null) <stripped>

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
WARNING: couldn't find address 0x6bac00026ce0 (0x3ac00026ce0) in binary!
	0x9470  @objc AuthorizationHeaderView.(null) <stripped>
WARNING: couldn't find address 0x79a400026c00 (0x1a400026c00) in binary!
	0xd8000000c  @objc AuthorizationHeaderView.(null) <stripped>
WARNING: couldn't find address 0x798c00026d08 (0x18c00026d08) in binary!
	0x7980  @objc AuthorizationHeaderView.(null) <stripped>

	// Swift methods
	0x508e0  func <stripped> // getter 
	0x50c00  func <stripped> // method 
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
	var _countries : qœ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _states : qœ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _subdivisions : qœ // +0x0 (0x0)

	// Swift methods
	0x52560  func <stripped> // getter 
	0x525b0  func <stripped> // getter 
	0x52630  func RegionsProvider.loadCountries(_:) // method 
	0x53010  func RegionsProvider.loadSubdivisions(_:) // method 
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
	var dataSource : 3≈
	let traveledCell : VerificationCheckmarkCell
	let notTraveledCell : VerificationCheckmarkCell
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x798c00026d08 (0x18c00026d08) in binary!
	0x7980  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x59e600026a60 (0x1e600026a60) in binary!
	0x59e8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x59ea00026a38 (0x1ea00026a38) in binary!
	0x59de  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x5e2500026738 (0x62500026738) in binary!
	0x7938  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x792c00027068 (0x12c00027068) in binary!
	0x7920  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x59b400026f30 (0x1b400026f30) in binary!
	0x59a8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78fc00026b58 (0xfc00026b58) in binary!
	0x58000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78e400026c60 (0xe400026c60) in binary!
	0x78d8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78cc00027020 (0xcc00027020) in binary!
	0x6d10  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x78b400026b10 (0xb400026b10) in binary!
	0x18000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x675000026640 (0x75000026640) in binary!
	0xb8000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x673800026670 (0x73800026670) in binary!
	0x7118  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x672000026648 (0x72000026648) in binary!
	0x7100  @objc VerificationTravelStatusViewController.(null) <stripped>

	// Swift methods
	0x649a0  class func VerificationTravelStatusViewController.__allocating_init(flow:agencyModel:) // init 
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
WARNING: couldn't find address 0x78e400026c60 (0xe400026c60) in binary!
	0x78d8  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x78cc00027020 (0xcc00027020) in binary!
	0x6d10  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x78b400026b10 (0xb400026b10) in binary!
	0x18000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x675000026640 (0x75000026640) in binary!
	0xb8000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x673800026670 (0x73800026670) in binary!
	0x7118  @objc VerificationWelcomeViewController.(null) <stripped>

	// Swift methods
	0x67350  class func VerificationWelcomeViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.FlowResult { }

 enum HealthExposureNotificationUI.OnboardingSource { }

 class HealthExposureNotificationUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var inflightOnboardingStack : weak UIViewController? // +0x8 (0x8)
	var inflightVerificationStack : weak UIViewController? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x673800026670 (0x73800026670) in binary!
	0x7118  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x672000026648 (0x72000026648) in binary!
	0x7100  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xb33400026620 (0x33400026620) in binary!
	0xb348  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xb35c000265f8 (0x35c000265f8) in binary!
	0xb330  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xb324000265d0 (0x324000265d0) in binary!
	0x66cc  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x780c00026a68 (0xc00026a68) in binary!
	0x58000000c  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77f400026b70 (0x7f400026b70) in binary!
	0x77e8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77dc00026ef8 (0x7dc00026ef8) in binary!
	0x6c20  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x77c400026a20 (0x7c400026a20) in binary!
	0x38000000c  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x699c00026ad0 (0x19c00026ad0) in binary!
	0x9260  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x7794000269f0 (0x794000269f0) in binary!
	0x48000000c  @objc ViewControllerFactory.(null) <stripped>

	// Swift methods
	0x68d80  func ViewControllerFactory.inflightOnboardingStack.getter // getter 
	0x68dc0  func ViewControllerFactory.inflightOnboardingStack.setter // setter 
	0x68de0  func ViewControllerFactory.inflightOnboardingStack.modify // modifyCoroutine 
	0x68f10  func ViewControllerFactory.inflightVerificationStack.getter // getter 
	0x68fc0  func ViewControllerFactory.inflightVerificationStack.setter // setter 
	0x69030  func ViewControllerFactory.inflightVerificationStack.modify // modifyCoroutine 
	0x690a0  func ViewControllerFactory.createOnboardingStack(forAgencyModel:exposureManager:fromAvailabilityAlert:completion:) // method 
	0x695f0  func ViewControllerFactory.createAnalyticsConsentStack(forAgencyModel:exposureManager:completion:) // method 
	0x69860  func ViewControllerFactory.createVerificationStack(forAgencyModel:exposureManager:sessionIdentifier:completion:) // method 
	0x69b50  func ViewControllerFactory.createKeyReleaseDialogue(with:region:completion:) // method 
	0x69d80  func ViewControllerFactory.createPreApprovalDialogue(with:region:completion:) // method 
 }

 class HealthExposureNotificationUI.OnboardingOpenAppStoreViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let appStoreURL : String
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77f400026b70 (0x7f400026b70) in binary!
	0x77e8  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x77dc00026ef8 (0x7dc00026ef8) in binary!
	0x6c20  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x77c400026a20 (0x7c400026a20) in binary!
	0x38000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x699c00026ad0 (0x19c00026ad0) in binary!
	0x9260  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x7794000269f0 (0x794000269f0) in binary!
	0x48000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>

	// Swift methods
	0x6a430  class func OnboardingOpenAppStoreViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.NotificationPreviewView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let content : NotificationContent
	var isPresented : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x699c00026ad0 (0x19c00026ad0) in binary!
	0x9260  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x7794000269f0 (0x794000269f0) in binary!
	0x48000000c  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x696c00026aa0 (0x16c00026aa0) in binary!
	0x9230  @objc NotificationPreviewView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationCapsuleView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x693400026a68 (0x13400026a68) in binary!
	0x91f8  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0x807c00026678 (0x7c00026678) in binary!
	0x48000000c  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0xb6fa00026d68 (0x6fa00026d68) in binary!
	0x91c8  @objc NotificationCapsuleView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationContent : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let notificationContainer : NotificationCapsuleView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x696c00026aa0 (0x16c00026aa0) in binary!
	0x9230  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x80b4000266b0 (0xb4000266b0) in binary!
	0x7758  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x734ffff6980  @objc NotificationContent.(null) <stripped>
	0xffff6a38  @objc NotificationContent.âàKHÉƒ[]√f.Ñ <stripped>
 }

 class HealthExposureNotificationUI.VerificationTableView : UITableView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var $__lazy_storage_$_heightConstraint : NSLayoutConstraint? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x656000026ce0 (0x56000026ce0) in binary!
	0x9160  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x769400027250 (0x69400027250) in binary!
	0xb5d8  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x767c000268d8 (0x67c000268d8) in binary!
	0x48000000c  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0xb64a00026cb8 (0x64a00026cb8) in binary!
	0x9118  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x764c00027208 (0x64c00027208) in binary!
	0x7640  @objc VerificationTableView.(null) <stripped>

	// Swift methods
	0x6d8c0  func <stripped> // getter 
 }

 class HealthExposureNotificationUI.AuthorityTextCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var authorityTextView : OnboardingAuthorityTextView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb6c200026d30 (0x6c200026d30) in binary!
	0x9190  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x76c400026920 (0x6c400026920) in binary!
	0x58000000c  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x656000026ce0 (0x56000026ce0) in binary!
	0x9160  @objc AuthorityTextCell.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.VerificationCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb6fa00026d68 (0x6fa00026d68) in binary!
	0x91c8  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x76fc000272b8 (0x6fc000272b8) in binary!
	0x76f0  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6ccffff8208  @objc VerificationCell.(null) <stripped>
	0xffff8600  @objc VerificationCell.UHâÂSPHâÛ«E <stripped>
 }

 class HealthExposureNotificationUI.VerificationCheckmarkCell : VerificationCell {

	// Properties
	let label : UILabel
	let accessoryImageView : UIImageView
	var isChecked : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb64a00026cb8 (0x64a00026cb8) in binary!
	0x9118  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x764c00027208 (0x64c00027208) in binary!
	0x7640  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x15cffffa068  @objc VerificationCheckmarkCell.(null) <stripped>
	0x544ffffa160  @objc VerificationCheckmarkCell.8Lã`LãhˇÇ <stripped>
 }

 class HealthExposureNotificationUI.OnboardingAddRegionWelcomeViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x762c000269a8 (0x62c000269a8) in binary!
	0x7620  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x761400026d30 (0x61400026d30) in binary!
	0x7608  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x6a4c00026e18 (0x24c00026e18) in binary!
	0x75f0  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x4ecffffb248  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
	0x73cffffb990  @objc OnboardingAddRegionWelcomeViewController. <stripped>
	0x7fcffffbbc8  @objc OnboardingAddRegionWelcomeViewController.Lã%yÇ <stripped>

	// Swift methods
	0x6f310  class func OnboardingAddRegionWelcomeViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75dc00026958 (0x5dc00026958) in binary!
	0x75d0  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x75c400026d00 (0x5c400026d00) in binary!
	0x75b8  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x69fc00026dc8 (0x1fc00026dc8) in binary!
	0x75a0  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x57cffffcc78  @objc OnboardingAnalyticsViewController.(null) <stripped>
	0x56c000268e8  @objc OnboardingAnalyticsViewController.UHâÂ]ÈF- <stripped>
WARNING: couldn't find address 0x26c7cffffcd28 (0x47cffffcd28) in binary!
	0x55400027700  @objc OnboardingAnalyticsViewController.(null) <stripped>

	// Swift methods
	0x704d0  class func OnboardingAnalyticsViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.MultilineButton : UIButton /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x677c000268b0 (0x77c000268b0) in binary!
	0x9040  @objc MultilineButton.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x47cffffcd28  @objc MultilineButton.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingRegionAlreadyExistsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : ViewControllerFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x756c000268e8 (0x56c000268e8) in binary!
	0x7560  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x755400027700 (0x55400027700) in binary!
	0x6998  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x753c00026798 (0x53c00026798) in binary!
	0x25029232840  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x1746f4e6572  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x49556e6f69746163 (0x66f69746163) in binary!
	0x46275503a54  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>

	// Swift methods
	0x72a90  func <stripped> // method 
	0x732b0  func <stripped> // method 
 }

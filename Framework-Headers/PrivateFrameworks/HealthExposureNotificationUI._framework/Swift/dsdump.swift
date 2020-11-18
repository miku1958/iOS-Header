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
	var top : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : W◊
 }

 enum __C.ENDiagnosisReportType { }

 enum __C.ENRegionConsent { }

 enum __C.ENStatus { }

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
	let rawValue : ã‹
 }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : W◊
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : W◊
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : W◊
 }

 class HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow // +0x8 (0x8)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x10 (0x8)
	var hasSymptoms : Bool? // +0x18 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var symptomOnsetDate : Û◊ // +0x0 (0x0)
	var isShowingDatePicker : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataSource : ˝ÿ // +0x0 (0x8)
	var primaryButton : OBBoldTrayButton // +0x0 (0x8)
	var secondaryButton : OBLinkTrayButton // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81e400029270 (0x1e400029270) in binary!
	0x7b18  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x81cc000294e0 (0x1cc000294e0) in binary!
	0x6352  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x635400028fa8 (0x35400028fa8) in binary!
	0x6356  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
	0x8190  variable initialization expression of StandardOnboardingFlow.healthAgencyModel
WARNING: couldn't find address 0x8184000295d0 (0x184000295d0) in binary!
	0x8178  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x632c00029498 (0x32c00029498) in binary!
	0x6320  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x8154000290c0 (0x154000290c0) in binary!
	0x38000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xbef2000294a0 (0x6f2000294a0) in binary!
	0x9b50  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x812400029090 (0x12400029090) in binary!
	0x28000000c  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0xbec200029470 (0x6c200029470) in binary!
	0x9b20  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x114fffa1bb8  @objc VerificationSymptomDateEntryViewController.(null) <stripped>
	0xfffa2110  @objc VerificationSymptomDateEntryViewController.ˇ”LâÁˇ”Lâ˜ˇ”Hçeÿ[A\A]A^A_]√D <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x4dcfffa3858  @objc VerificationSymptomDateEntryViewController.(null) <stripped>

	// Swift methods
	0x4ec0  class func VerificationSymptomDateEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.SymptomOnsetDateCell : VerificationCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbec200029470 (0x6c200029470) in binary!
	0x9b20  @objc SymptomOnsetDateCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x114fffa1bb8  @objc SymptomOnsetDateCell.(null) <stripped>
 }

 class HealthExposureNotificationUI.DatePickerCell : VerificationCell {

	// Properties
	let datePicker : UIDatePicker

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbef2000294a0 (0x6f2000294a0) in binary!
	0x9b50  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0x812400029090 (0x12400029090) in binary!
	0x28000000c  @objc DatePickerCell.(null) <stripped>
WARNING: couldn't find address 0xbec200029470 (0x6c200029470) in binary!
	0x9b20  @objc DatePickerCell.(null) <stripped>
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
WARNING: couldn't find address 0x9b0c000295f8 (0x30c000295f8) in binary!
	0x73b0  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x80d400029040 (0xd400029040) in binary!
	0x58000000c  @objc LoadingStatusView.(null) <stripped>
WARNING: couldn't find address 0x80bc00029148 (0xbc00029148) in binary!
	0x80b0  @objc LoadingStatusView.(null) <stripped>

	// Swift methods
	0xbf80  class func LoadingStatusView.__allocating_init(with:backgroundColor:) // init 
	0xc0f0  func <stripped> // method 
	0xc4d0  func LoadingStatusView.startAnimating() // method 
	0xc4f0  func LoadingStatusView.stopAnimating() // method 
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
	let flow : OnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x80bc00029148 (0xbc00029148) in binary!
	0x80b0  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x80a400029508 (0xa400029508) in binary!
	0x75c8  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x808c00028ff8 (0x8c00028ff8) in binary!
	0x98000000c  @objc OnboardingSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x700800028d38 (0x800028d38) in binary!
	0x79a8  @objc OnboardingSummaryViewController.(null) <stripped>
	0x7990  VerificationSymptomDateEntryViewController.tableView(_:heightForFooterInSection:)

	// Swift methods
	0xda50  class func OnboardingSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.ENUIPublicHealthHeaderStyle { }

 class HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let subtitle : String
	let backgroundColor : UIColor
	let textColor : UIColor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logoURL : ã“
	let style : ENUIPublicHealthHeaderStyle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6f2000028d68 (0x72000028d68) in binary!
	0x6f14  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6f0800028d40 (0x70800028d40) in binary!
	0x6efc  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6ef000028d18 (0x6f000028d18) in binary!
	0x9b02  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x769400028cf0 (0x69400028cf0) in binary!
	0x6ecc  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x7f2c00028e98 (0x72c00028e98) in binary!
	0x188000000c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6ea8000294c8 (0x6a8000294c8) in binary!
	0x6e9c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6e9000028c60 (0x69000028c60) in binary!
	0x6e84  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6e7800028c38 (0x67800028c38) in binary!
	0x6e6c  @objc ENUIPublicHealthHeader.(null) <stripped>
WARNING: couldn't find address 0x6e6000028c10 (0x66000028c10) in binary!
	0x9d90  @objc ENUIPublicHealthHeader.(null) <stripped>

	// Swift methods
	0xe700  class func ENUIPublicHealthHeader.__allocating_init(title:subtitle:backgroundColor:textColor:logoURL:style:) // init 
 }

 class HealthExposureNotificationUI.ENUIPublicHealthLegalDocument : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let text : String
	let version : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6d6800028b78 (0x56800028b78) in binary!
	0x6d5c  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x87f000028b50 (0x7f000028b50) in binary!
	0x6d44  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x7da400028d10 (0x5a400028d10) in binary!
	0x58000000c  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x705c00028dc0 (0x5c00028dc0) in binary!
	0x97a0  @objc ENUIPublicHealthLegalDocument.(null) <stripped>
WARNING: couldn't find address 0x7d74000291a0 (0x574000291a0) in binary!
	0x7d68  @objc ENUIPublicHealthLegalDocument.(null) <stripped>

	// Swift methods
	0xeb80  class func ENUIPublicHealthLegalDocument.__allocating_init(text:version:) // init 
 }

 class HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let textConsented : String
	let versionConsented : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateConsented : Ì–

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6f7000028d68 (0x77000028d68) in binary!
	0x6f64  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x6f5800028d40 (0x75800028d40) in binary!
	0x6178  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x6f40000292f0 (0x740000292f0) in binary!
	0x7fa0  @objc ENUIUserConsentStatus.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x554fffa3f88  @objc ENUIUserConsentStatus.(null) <stripped>
	0x52cfffa3ff0  @objc ENUIUserConsentStatus.â˜æ <stripped>
	0x504fffa4058  @objc ENUIUserConsentStatus.“1…ËÙ! <stripped>

	// Swift methods
	0xeef0  class func ENUIUserConsentStatus.__allocating_init(textConsented:versionConsented:dateConsented:) // init 
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
	let regionWebsiteURL : ã“
	let verificationIntroductoryText : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let verificationCodeHelpURL : ã“
	let verificationSymptomOnsetText : String
	let verificationTravelStatusText : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ea8000294c8 (0x6a8000294c8) in binary!
	0x6e9c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6e9000028c60 (0x69000028c60) in binary!
	0x6e84  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6e7800028c38 (0x67800028c38) in binary!
	0x6e6c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6e6000028c10 (0x66000028c10) in binary!
	0x9d90  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x9a6600028be8 (0x26600028be8) in binary!
	0x6e3c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6e3000028bc0 (0x63000028bc0) in binary!
	0x6e24  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6e1800028b98 (0x61800028b98) in binary!
	0x6e0c  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x9d3c00028b70 (0x53c00028b70) in binary!
	0x9d30  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x78a400028b48 (0xa400028b48) in binary!
	0x9d18  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x9d0c00028b20 (0x50c00028b20) in binary!
	0x6dc4  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6db800028af8 (0x5b800028af8) in binary!
	0x9ce8  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x6da000029150 (0x5a000029150) in binary!
	0x7e00  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa7cc8  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x364fffa4390  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0xf4fffa44d8  @objc ENUIPublicHealthAgencyModel.Ö$ <stripped>
	0xfffa4590  @objc ENUIPublicHealthAgencyModel.–HãÃ˜ <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x28cfffaa368  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0x1b4fffaaba0  @objc ENUIPublicHealthAgencyModel.A\A^A_]√Ñ <stripped>
	0xfffaacb8  @objc ENUIPublicHealthAgencyModel.Ñ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x164fffab0d0  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
	0x48cfffab328  @objc ENUIPublicHealthAgencyModel.ã}–Ëæ <stripped>
	0x72c00029218  @objc ENUIPublicHealthAgencyModel.â«Lã}»Lâ˙Lâ·MâË@ <stripped>
WARNING: couldn't find address 0x29444fffb7998 (0x444fffb7998) in binary!
	0x59400028970  @objc ENUIPublicHealthAgencyModel.(null) <stripped>
WARNING: couldn't find address 0x293dcfffb7e40 (0x3dcfffb7e40) in binary!
	0x61c00029220  @objc ENUIPublicHealthAgencyModel.(null) <stripped>

	// Swift methods
	0xf6f0  func ENUIPublicHealthAgencyModel.isSymptomOnsetNeeded.getter // getter 
	0xf770  func ENUIPublicHealthAgencyModel.isTravelStatusNeeded.getter // getter 
	0xf7d0  class func ENUIPublicHealthAgencyModel.__allocating_init(region:name:appBundleId:introductoryText:header:legalese:consentStatus:isAuthorized:regionVersion:regionWebsiteURL:verificationIntroductoryText:verificationCodeHelpURL:verificationSymptomOnsetText:verificationTravelStatusText:) // init 
	0xfd60  func ENUIPublicHealthAgencyModel.isAppInstalled.getter // getter 
	0xfe80  func ENUIPublicHealthAgencyModel.isRegionUsingApp.getter // getter 
	0x10050  func ENUIPublicHealthAgencyModel.installedAppName.getter // getter 
	0x10240  func ENUIPublicHealthAgencyModel.installedAppIcon.getter // getter 
	0x10520  func ENUIPublicHealthAgencyModel.regionIsPlaceholder.getter // getter 
 }

 class HealthExposureNotificationUI.AuthorizationFooterView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var delegate : AuthorizationFooterViewDelegate
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBBoldTrayButton
	let visualEffectView : UIVisualEffectView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x705c00028dc0 (0x5c00028dc0) in binary!
	0x97a0  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x7d74000291a0 (0x574000291a0) in binary!
	0x7d68  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x7d5c00028cc8 (0x55c00028cc8) in binary!
	0x48000000c  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x7d4400028dd0 (0x54400028dd0) in binary!
	0x7d38  @objc AuthorizationFooterView.(null) <stripped>
WARNING: couldn't find address 0x725c00029258 (0x25c00029258) in binary!
	0x7d20  @objc AuthorizationFooterView.(null) <stripped>

	// Swift methods
	0x14b90  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionChangeSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d4400028dd0 (0x54400028dd0) in binary!
	0x7d38  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x725c00029258 (0x25c00029258) in binary!
	0x7d20  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x444fffb7998  @objc OnboardingRegionChangeSummaryViewController.(null) <stripped>
	0x3dcfffb7e40  @objc OnboardingRegionChangeSummaryViewController.Ö€Ñ‰ <stripped>

	// Swift methods
	0x15640  class func OnboardingRegionChangeSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.StandardOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying
	let isFromAvailabilityAlert : Bool

	// Swift methods
	0x160c0  func StandardOnboardingFlow.completionHandler.getter // getter 
	0x16100  func StandardOnboardingFlow.completionHandler.setter // setter 
	0x16140  func StandardOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x16180  func StandardOnboardingFlow.healthAgencyModel.getter // getter 
	0x161c0  func StandardOnboardingFlow.healthAgencyModel.setter // setter 
	0x16200  func StandardOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x16230  func StandardOnboardingFlow.currentSelectedRegion.getter // getter 
	0x162c0  func StandardOnboardingFlow.currentSelectedRegion.setter // setter 
	0x163a0  func StandardOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x163e0  class func StandardOnboardingFlow.__allocating_init(agencyModel:exposureManager:isFromAvailabilityAlert:completion:) // init 
	0x165c0  func StandardOnboardingFlow.initialViewController.getter // getter 
	0x16610  func StandardOnboardingFlow.didTapNext(from:) // method 
	0x16640  func StandardOnboardingFlow.didTapCancel(from:) // method 
	0x16d90  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.SymptomOnset {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case date : Ì–
	case noSymptoms  
 }

 class HealthExposureNotificationUI.AddRegionOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying

	// Swift methods
	0x20ad0  func AddRegionOnboardingFlow.completionHandler.getter // getter 
	0x20c20  func AddRegionOnboardingFlow.completionHandler.setter // setter 
	0x17540  func AddRegionOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x20aa0  func AddRegionOnboardingFlow.healthAgencyModel.getter // getter 
	0x20da0  func AddRegionOnboardingFlow.healthAgencyModel.setter // setter 
	0x17570  func AddRegionOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x20bb0  func AddRegionOnboardingFlow.currentSelectedRegion.getter // getter 
	0x20d90  func AddRegionOnboardingFlow.currentSelectedRegion.setter // setter 
	0x175a0  func AddRegionOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x175d0  class func AddRegionOnboardingFlow.__allocating_init(agencyModel:exposureManager:completion:) // init 
	0x17790  func AddRegionOnboardingFlow.initialViewController.getter // getter 
	0x17820  func AddRegionOnboardingFlow.didTapNext(from:) // method 
	0x17bd0  func AddRegionOnboardingFlow.didTapCancel(from:) // method 
	0x17e30  func <stripped> // method 
 }

 class HealthExposureNotificationUI.VerificationOnboardingFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var completionHandler : OnboardingResult
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sessionIdentifier : ;–
	var healthAgencyModel : ENUIPublicHealthAgencyModel
	let nonNilAgencyModel : ENUIPublicHealthAgencyModel
	var currentSelectedRegion : RegionNameAndCode
	let exposureManager : ExposureNotifying
	var symptomOnset : SymptomOnset
	var hasTraveled : Bool?

	// Swift methods
	0x20ae0  func VerificationOnboardingFlow.completionHandler.getter // getter 
	0x20c30  func VerificationOnboardingFlow.completionHandler.setter // setter 
	0x183b0  func VerificationOnboardingFlow.completionHandler.modify // modifyCoroutine 
	0x183e0  func VerificationOnboardingFlow.sessionIdentifier.getter // getter 
	0x18400  func VerificationOnboardingFlow.sessionIdentifier.setter // setter 
	0x18420  func VerificationOnboardingFlow.sessionIdentifier.modify // modifyCoroutine 
	0x18460  func VerificationOnboardingFlow.healthAgencyModel.getter // getter 
	0x184a0  func VerificationOnboardingFlow.healthAgencyModel.setter // setter 
	0x184f0  func VerificationOnboardingFlow.healthAgencyModel.modify // modifyCoroutine 
	0x18530  func VerificationOnboardingFlow.currentSelectedRegion.getter // getter 
	0x185a0  func VerificationOnboardingFlow.currentSelectedRegion.setter // setter 
	0x18660  func VerificationOnboardingFlow.currentSelectedRegion.modify // modifyCoroutine 
	0x186c0  func VerificationOnboardingFlow.symptomOnset.getter // getter 
	0x18730  func VerificationOnboardingFlow.symptomOnset.setter // setter 
	0x187b0  func VerificationOnboardingFlow.symptomOnset.modify // modifyCoroutine 
	0x187f0  func VerificationOnboardingFlow.hasTraveled.getter // getter 
	0x18820  func VerificationOnboardingFlow.hasTraveled.setter // setter 
	0x18860  func VerificationOnboardingFlow.hasTraveled.modify // modifyCoroutine 
	0x188a0  class func VerificationOnboardingFlow.__allocating_init(sessionIdentifier:agencyModel:exposureManager:completion:) // init 
	0x18b30  func VerificationOnboardingFlow.initialViewController.getter // getter 
	0x18ba0  func VerificationOnboardingFlow.didTapNext(from:) // method 
	0x18bd0  func VerificationOnboardingFlow.didTapCancel(from:) // method 
	0x19150  func VerificationOnboardingFlow.fetchTestMetadata(_:completionHandler:) // method 
 }

 class HealthExposureNotificationUI.NumberedTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let number : Int
	let title : String?
	let details : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x96cc000291b8 (0x6cc000291b8) in binary!
	0x6f70  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7c9400028c00 (0x49400028c00) in binary!
	0x58000000c  @objc NumberedTextView.(null) <stripped>
WARNING: couldn't find address 0x7c7c00028d08 (0x47c00028d08) in binary!
	0x9b48  @objc NumberedTextView.(null) <stripped>

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
WARNING: couldn't find address 0x972c00029218 (0x72c00029218) in binary!
	0x7640  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x859400028970 (0x59400028970) in binary!
	0x6c7c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x761c00029220 (0x61c00029220) in binary!
	0x6fa0  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7cc400028c30 (0x4c400028c30) in binary!
	0x38000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x96cc000291b8 (0x6cc000291b8) in binary!
	0x6f70  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7c9400028c00 (0x49400028c00) in binary!
	0x58000000c  @objc IconTextView.(null) <stripped>
WARNING: couldn't find address 0x7c7c00028d08 (0x47c00028d08) in binary!
	0x9b48  @objc IconTextView.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.OnboardingInfoViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c7c00028d08 (0x47c00028d08) in binary!
	0x9b48  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x869800029178 (0x69800029178) in binary!
	0x9678  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7c4c00028bb8 (0x44c00028bb8) in binary!
	0x18000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x7c3400029410 (0x43400029410) in binary!
	0xb8000000c  @objc OnboardingInfoViewController.(null) <stripped>
WARNING: couldn't find address 0x963c00029128 (0x63c00029128) in binary!
	0x7c10  @objc OnboardingInfoViewController.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : StandardOnboardingFlow
	var isFromAvailabilityAlert : Bool
	let notificationPreview : NotificationPreviewView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x963c00029128 (0x63c00029128) in binary!
	0x7c10  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x9adc00029428 (0x2dc00029428) in binary!
	0x9ad0  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7bec00029430 (0x3ec00029430) in binary!
	0x7be0  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7bd400029000 (0x3d400029000) in binary!
	0x7bc8  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7bbc00029398 (0x3bc00029398) in binary!
	0x85e4  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7ba400028b10 (0x3a400028b10) in binary!
	0x58000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x95ac00029098 (0x5ac00029098) in binary!
	0x7b80  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x8b6400029420 (0x36400029420) in binary!
	0x6e38  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7b5c00028ac8 (0x35c00028ac8) in binary!
	0xc8000000c  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x956400029050 (0x56400029050) in binary!
	0x7b38  @objc OnboardingWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7b2c00028bb8 (0x32c00028bb8) in binary!
	0x99f8  @objc OnboardingWelcomeViewController.(null) <stripped>

	// Swift methods
	0x251b0  class func OnboardingWelcomeViewController.__allocating_init(flow:fromAvailabilityAlert:) // init 
 }

 enum HealthExposureNotificationUI.SelectionType {

	// Properties
	case countrySelection  
	case stateSelection  
 }

 class HealthExposureNotificationUI.RegionSelectionHeaderView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageDimension : W◊
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iconTitlePadding : W◊
	let title : String
	let globeImageView : UIImageView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x95ac00029098 (0x5ac00029098) in binary!
	0x7b80  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x8b6400029420 (0x36400029420) in binary!
	0x6e38  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x7b5c00028ac8 (0x35c00028ac8) in binary!
	0xc8000000c  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x956400029050 (0x56400029050) in binary!
	0x7b38  @objc RegionSelectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x7b2c00028bb8 (0x32c00028bb8) in binary!
	0x99f8  @objc RegionSelectionHeaderView.(null) <stripped>

	// Swift methods
	0x28d70  func <stripped> // method 
 }

 class HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let flow : OnboardingFlow
	let selectionType : SelectionType
	let statusView : LoadingStatusView
	let regionTableView : UITableView
	let regionsProvider : RegionsProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var canceller : ≈Œ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x956400029050 (0x56400029050) in binary!
	0x7b38  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7b2c00028bb8 (0x32c00028bb8) in binary!
	0x99f8  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x7b14000292f0 (0x314000292f0) in binary!
	0x7b08  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x8bb300028770 (0x3b300028770) in binary!
	0x8524  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x5c84000288d8 (0x484000288d8) in binary!
	0x7418  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x850000028fe0 (0x50000028fe0) in binary!
	0x7ac0  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x3acfffc2c98  @objc OnboardingRegionSelectionViewController.(null) <stripped>
	0x6d4fffc3c80  @objc OnboardingRegionSelectionViewController. <stripped>
	0x1dcfffc47e8  @objc OnboardingRegionSelectionViewController. <stripped>
	0x25c00028ae8  @objc OnboardingRegionSelectionViewController.LâÁLâÓ1…Ë{ <stripped>
WARNING: couldn't find address 0x28e7cfffc81d8 (0x67cfffc81d8) in binary!
	0x77400028f70  @objc OnboardingRegionSelectionViewController.(null) <stripped>
WARNING: couldn't find address 0x289a4fffc8370 (0x1a4fffc8370) in binary!
	0x58000000c  @objc OnboardingRegionSelectionViewController.(null) <stripped>

	// Swift methods
	0x28ac0  class func OnboardingRegionSelectionViewController.__allocating_init(flow:type:) // init 
 }

 class HealthExposureNotificationUI.VerificationSummaryViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let statusView : LoadingStatusView
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7aac00028b38 (0x2ac00028b38) in binary!
	0x7aa0  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x7a9400028ec0 (0x29400028ec0) in binary!
	0x7a88  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x6fac00028fa8 (0x7ac00028fa8) in binary!
	0x7a70  @objc VerificationSummaryViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x67cfffc81d8  @objc VerificationSummaryViewController.(null) <stripped>
	0x1a4fffc8370  @objc VerificationSummaryViewController.Oãd= <stripped>
	0x72c00028680  @objc VerificationSummaryViewController.Hâ„HÉ¿HÉ‡H)√Hâ‹Lã=PÏ <stripped>

	// Swift methods
	0x2c8b0  class func VerificationSummaryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.AuthorizationViewController {
 class HealthExposureNotificationUI.OnboardingRegionNotAvailableViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let region : RegionNameAndCode
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a5c00028ae8 (0x25c00028ae8) in binary!
	0x7a50  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x6f7400028f70 (0x77400028f70) in binary!
	0x7a38  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x66cfffca390  @objc OnboardingRegionNotAvailableViewController.(null) <stripped>
	0x644fffca9f8  @objc OnboardingRegionNotAvailableViewController. <stripped>

	// Swift methods
	0x32a30  class func OnboardingRegionNotAvailableViewController.__allocating_init(flow:region:) // init 
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
WARNING: couldn't find address 0x697000028d20 (0x17000028d20) in binary!
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
	var statusObservation : ù»

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9556000294f8 (0x556000294f8) in binary!
	0x6687  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x985c000285b8 (0x5c000285b8) in binary!
	0x9858  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x984400028590 (0x4400028590) in binary!
	0x9840  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x982c00028568 (0x2c00028568) in binary!
	0x9828  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x982700028540 (0x2700028540) in binary!
	0x770c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x68c0000293c0 (0xc0000293c0) in binary!
	0x68b4  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7914000288a8 (0x114000288a8) in binary!
	0x76dc  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x97ec000284e0 (0x7ec000284e0) in binary!
	0x6648  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x65ec00029468 (0x5ec00029468) in binary!
	0x65e0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x76a000028498 (0x6a000028498) in binary!
	0x65c8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x768800028470 (0x68800028470) in binary!
	0x65b0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x65a400028448 (0x5a400028448) in binary!
	0x7664  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x658c00028420 (0x58c00028420) in binary!
	0x6598  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6574000283f8 (0x574000283f8) in binary!
	0x6580  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x655c000283d0 (0x55c000283d0) in binary!
	0x6568  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x7610000283a8 (0x610000283a8) in binary!
	0x9720  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x971400028380 (0x71400028380) in binary!
	0x6558  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x8c9400028360 (0x49400028360) in binary!
	0x7800  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x40cfffd63e8  @objc ENManagerAdapter.(null) <stripped>
	0x42cfffd7350  @objc ENManagerAdapter.Lâˆ1…Ë <stripped>
	0x2e4fffd7648  @objc ENManagerAdapter.S8HãØÓ <stripped>
	0x704fffd7800  @objc ENManagerAdapter.ãX¯Lãe»LâÁæ <stripped>
	0x1a400028c90  @objc ENManagerAdapter.‹Ó <stripped>
WARNING: couldn't find address 0x2870cfffd88e0 (0x70cfffd88e0) in binary!
	0x76c000287f8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x28f84fffda278 (0x784fffda278) in binary!
	0x754000292f0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x2937cfffdae30 (0x37cfffdae30) in binary!
	0x73c00029330  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x28b94fffdb3f8 (0x394fffdb3f8) in binary!
	0x15800028c38  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x28684fffddb10 (0x684fffddb10) in binary!
	0x48000000c  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x770400028790 (0x70400028790) in binary!
	0x76f8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x6c1c00028c18 (0x41c00028c18) in binary!
	0x76e0  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3ccfffded68  @objc ENManagerAdapter.(null) <stripped>
	0x614fffe1370  @objc ENManagerAdapter.UHâÂHã∂ <stripped>
	0xb400028ba0  @objc ENManagerAdapter.È± <stripped>
WARNING: couldn't find address 0x286bcfffe1380 (0x6bcfffe1380) in binary!
	0x67c000285e8  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0xfffe1498 (0xfffe1498) in binary!
	0x13400028698  @objc ENManagerAdapter.(null) <stripped>
WARNING: couldn't find address 0x28b64fffe35f0 (0x364fffe35f0) in binary!
	0x64c000285b8  @objc ENManagerAdapter.(null) <stripped>

	// Swift methods
	0x36840  func ENManagerAdapter.exposureNotificationStatus.getter // getter 
	0x368b0  func ENManagerAdapter.exposureNotificationStatus.setter // setter 
	0x368f0  func ENManagerAdapter.exposureNotificationStatus.modify // modifyCoroutine 
	0x36950  func ENManagerAdapter.isExposureLoggingDataPresent.getter // getter 
	0x36990  func ENManagerAdapter.isExposureLoggingDataPresent.setter // setter 
	0x369b0  func ENManagerAdapter.isExposureLoggingDataPresent.modify // modifyCoroutine 
	0x36a20  func ENManagerAdapter.areAvailabilityAlertsEnabled.getter // getter 
	0x36a60  func ENManagerAdapter.areAvailabilityAlertsEnabled.setter // setter 
	0x36a80  func ENManagerAdapter.areAvailabilityAlertsEnabled.modify // modifyCoroutine 
	0x36b10  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.getter // getter 
	0x36bc0  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.setter // setter 
	0x36c20  func ENManagerAdapter.isAvailabilityAlertsSwitchEnabled.modify // modifyCoroutine 
	0x36d10  func ENManagerAdapter.statusChangeHandler.getter // getter 
	0x36e10  func ENManagerAdapter.statusChangeHandler.setter // setter 
	0x36e70  func ENManagerAdapter.statusChangeHandler.modify // modifyCoroutine 
	0x378d0  func <stripped> // method 
	0x37a90  func ENManagerAdapter.refreshStatus(_:) // method 
	0x381e0  func ENManagerAdapter.setExposureNotification(enabled:completion:) // method 
	0x382d0  func ENManagerAdapter.onboardingDidStart(forRegion:source:) // method 
	0x38650  func ENManagerAdapter.set(activeRegion:completion:) // method 
	0x38710  func ENManagerAdapter.setActivePhaseOneApp(with:completion:) // method 
	0x389e0  func ENManagerAdapter.latestExposureNotification(_:) // method 
	0x38bb0  func <stripped> // method 
	0x39ad0  func ENManagerAdapter.fetchAgencyModel(for:completionHandler:) // method 
	0x3aab0  func ENManagerAdapter.fetchAllEntities(_:) // method 
	0x3adc0  func ENManagerAdapter.getAgencyModel(forBundleID:completion:) // method 
	0x3aff0  func ENManagerAdapter.getAgencyModel(forRegionCode:completion:) // method 
	0x3b430  func ENManagerAdapter.allRegionConfigurations(_:) // method 
	0x3b620  func ENManagerAdapter.isShareStatisticsEnabled(for:completion:) // method 
	0x3b7e0  func ENManagerAdapter.setShareStatistics(_:region:completion:) // method 
	0x3b950  func ENManagerAdapter.isTravelStatusEnabled(for:completion:) // method 
	0x3ba10  func ENManagerAdapter.setTravelStatus(_:region:completion:) // method 
	0x3bca0  func ENManagerAdapter.isPreReleaseAuthorized(for:completion:) // method 
	0x3bf60  func ENManagerAdapter.setPreRelease(_:region:completion:) // method 
	0x3c190  func ENManagerAdapter.resetAllDataAndDisableExposureNotifications(_:) // method 
	0x3c510  func ENManagerAdapter.setAvailabilityAlertsEnabled(_:completion:) // method 
	0x3c790  func ENManagerAdapter.setWeeklySummaryEnabled(_:completion:) // method 
	0x3c9f0  func ENManagerAdapter.setUserConsent(_:region:text:version:completion:) // method 
	0x3ce70  func ENManagerAdapter.startTestVerificationSession(verificationCode:region:completionHandler:) // method 
	0x3d450  func ENManagerAdapter.fetchTestMetadata(for:completionHandler:) // method 
	0x3dfd0  func ENManagerAdapter.finishSession(_:userDidConsent:symptomOnset:hasTraveled:completionHandler:) // method 
	0x3ec30  func ENManagerAdapter.tccContainsRecord(forBundleIdentifier:) // method 
 }

 class HealthExposureNotificationUI.OnboardingLegalConsentViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let showsTurnOnExposureNotificationsAlert : Bool
	let shouldSetActiveRegion : Bool
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77ec00028878 (0x7ec00028878) in binary!
	0x77e0  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x77d400028c20 (0x7d400028c20) in binary!
	0x77c8  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x77bc000282f8 (0x7bc000282f8) in binary!
	0x77b0  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0x6cd400028cd0 (0x4d400028cd0) in binary!
	0x7798  @objc OnboardingLegalConsentViewController.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x70cfffd88e0  @objc OnboardingLegalConsentViewController.(null) <stripped>
	0x784fffda278  @objc OnboardingLegalConsentViewController. <stripped>
	0x37cfffdae30  @objc OnboardingLegalConsentViewController.Ñ <stripped>
	0x394fffdb3f8  @objc OnboardingLegalConsentViewController.  <stripped>

	// Swift methods
	0x40920  class func OnboardingLegalConsentViewController.__allocating_init(flow:agencyModel:showsTurnOnExposureNotificationsAlert:shouldSetActiveRegion:) // init 
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
	var keyboardHeight : W◊

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x91a400028c90 (0x1a400028c90) in binary!
	0x7778  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x776c000287f8 (0x76c000287f8) in binary!
	0x9638  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x7754000292f0 (0x754000292f0) in binary!
	0x7088  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x773c00029330 (0x73c00029330) in binary!
	0x7730  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x815800028c38 (0x15800028c38) in binary!
	0x7718  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x324fffde6c0  @objc VerificationCodeEntryViewController.(null) <stripped>
	0x64cfffde898  @objc VerificationCodeEntryViewController.Á1ˆ∫ <stripped>
	0x6fc000281f8  @objc VerificationCodeEntryViewController.0É¯ÖÄ <stripped>
WARNING: couldn't find address 0x28bccfffded68 (0x3ccfffded68) in binary!
	0x184000286e8  @objc VerificationCodeEntryViewController.(null) <stripped>
WARNING: couldn't find address 0x28614fffe1370 (0x614fffe1370) in binary!
	0x38000000c  @objc VerificationCodeEntryViewController.(null) <stripped>

	// Swift methods
	0x43610  class func VerificationCodeEntryViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.VerificationFinishedViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : VerificationOnboardingFlow
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x770400028790 (0x70400028790) in binary!
	0x76f8  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x6c1c00028c18 (0x41c00028c18) in binary!
	0x76e0  @objc VerificationFinishedViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3ccfffded68  @objc VerificationFinishedViewController.(null) <stripped>
	0x614fffe1370  @objc VerificationFinishedViewController.UHâÂHã∂ <stripped>

	// Swift methods
	0x49230  class func VerificationFinishedViewController.__allocating_init(flow:) // init 
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
WARNING: couldn't find address 0xa6fc000281f8 (0x6fc000281f8) in binary!
	0x90e0  @objc OnboardingHeaderView.(null) <stripped>
WARNING: couldn't find address 0x6984000286e8 (0x184000286e8) in binary!
	0x76a8  @objc OnboardingHeaderView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6bcfffe1380  @objc OnboardingHeaderView.(null) <stripped>
	0xfffe1498  @objc OnboardingHeaderView. <stripped>

	// Swift methods
	0x49b40  class func OnboardingHeaderView.__allocating_init(header:insets:corners:) // init 
	0x49c90  func <stripped> // method 
	0x4a140  func <stripped> // method 
	0x4ac30  func <stripped> // method 
	0x4b6b0  func <stripped> // method 
	0x4bf90  func <stripped> // method 
 }

 enum HealthExposureNotificationUI.Constants { }

 class HealthExposureNotificationUI.OnboardingAuthorityTextView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let headerView : OnboardingHeaderView
	let textView : UITextView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x90b400028ba0 (0xb400028ba0) in binary!
	0x6958  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x767c000285e8 (0x67c000285e8) in binary!
	0x38000000c  @objc OnboardingAuthorityTextView.(null) <stripped>
WARNING: couldn't find address 0x693400028698 (0x13400028698) in binary!
	0x9078  @objc OnboardingAuthorityTextView.(null) <stripped>

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
WARNING: couldn't find address 0x693400028698 (0x13400028698) in binary!
	0x9078  @objc AuthorizationHeaderView.(null) <stripped>
WARNING: couldn't find address 0x764c000285b8 (0x64c000285b8) in binary!
	0xd8000000c  @objc AuthorizationHeaderView.(null) <stripped>
WARNING: couldn't find address 0x7634000286c0 (0x634000286c0) in binary!
	0x7628  @objc AuthorizationHeaderView.(null) <stripped>

	// Swift methods
	0x4e220  func <stripped> // getter 
	0x4e540  func <stripped> // method 
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
	var _countries : ÉŸ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _states : ÉŸ // +0x0 (0x0)

	// Swift methods
	0x4fea0  func <stripped> // getter 
	0x4fef0  func <stripped> // getter 
	0x4ff70  func RegionsProvider.loadCountries() // method 
	0x50750  func RegionsProvider.loadStates() // method 
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
	var dataSource : óƒ
	let traveledCell : VerificationCheckmarkCell
	let notTraveledCell : VerificationCheckmarkCell
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7634000286c0 (0x634000286c0) in binary!
	0x7628  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x57ae00028418 (0x7ae00028418) in binary!
	0x57b0  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x57b2000283f0 (0x7b2000283f0) in binary!
	0x57a6  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x5bed00028110 (0x3ed00028110) in binary!
	0x75e0  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x75d400028a20 (0x5d400028a20) in binary!
	0x75c8  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x577c000288e8 (0x77c000288e8) in binary!
	0x5770  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x75a400028510 (0x5a400028510) in binary!
	0x58000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x758c00028618 (0x58c00028618) in binary!
	0x7580  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x7574000289d8 (0x574000289d8) in binary!
	0x6a98  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x755c000284c8 (0x55c000284c8) in binary!
	0x18000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x64d800028020 (0x4d800028020) in binary!
	0xa8000000c  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x64c000028048 (0x4c000028048) in binary!
	0x6e60  @objc VerificationTravelStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x64a800028020 (0x4a800028020) in binary!
	0x6e48  @objc VerificationTravelStatusViewController.(null) <stripped>

	// Swift methods
	0x5b180  class func VerificationTravelStatusViewController.__allocating_init(flow:agencyModel:) // init 
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
WARNING: couldn't find address 0x758c00028618 (0x58c00028618) in binary!
	0x7580  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x7574000289d8 (0x574000289d8) in binary!
	0x6a98  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x755c000284c8 (0x55c000284c8) in binary!
	0x18000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x64d800028020 (0x4d800028020) in binary!
	0xa8000000c  @objc VerificationWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x64c000028048 (0x4c000028048) in binary!
	0x6e60  @objc VerificationWelcomeViewController.(null) <stripped>

	// Swift methods
	0x5db40  class func VerificationWelcomeViewController.__allocating_init(flow:agencyModel:) // init 
 }

 enum HealthExposureNotificationUI.OnboardingResult { }

 enum HealthExposureNotificationUI.OnboardingSource { }

 class HealthExposureNotificationUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var inflightOnboardingStack : weak UIViewController? // +0x8 (0x8)
	var inflightVerificationStack : weak UIViewController? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x64c000028048 (0x4c000028048) in binary!
	0x6e60  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x64a800028020 (0x4a800028020) in binary!
	0x6e48  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xadac00027ff8 (0x5ac00027ff8) in binary!
	0xadc0  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0xadd400027fd0 (0x5d400027fd0) in binary!
	0xadc8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x646000028810 (0x46000028810) in binary!
	0x74c0  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x214ffff6068  @objc ViewControllerFactory.(null) <stripped>
	0x1b4ffff6390  @objc ViewControllerFactory. <stripped>
	0xffff6538  @objc ViewControllerFactory.â∆ËA" <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x164ffff76a0  @objc ViewControllerFactory.(null) <stripped>
	0xffff7778  @objc ViewControllerFactory.[A]]√ <stripped>

	// Swift methods
	0x5f570  func ViewControllerFactory.inflightOnboardingStack.getter // getter 
	0x5f5b0  func ViewControllerFactory.inflightOnboardingStack.setter // setter 
	0x5f5d0  func ViewControllerFactory.inflightOnboardingStack.modify // modifyCoroutine 
	0x5f700  func ViewControllerFactory.inflightVerificationStack.getter // getter 
	0x5f7b0  func ViewControllerFactory.inflightVerificationStack.setter // setter 
	0x5f820  func ViewControllerFactory.inflightVerificationStack.modify // modifyCoroutine 
	0x5f890  func ViewControllerFactory.createOnboardingStack(forAgencyModel:exposureManager:fromAvailabilityAlert:completion:) // method 
	0x5fd90  func ViewControllerFactory.createVerificationStack(forAgencyModel:exposureManager:sessionIdentifier:completion:) // method 
	0x60100  func ViewControllerFactory.createKeyReleaseDialogue(with:region:completion:) // method 
	0x60330  func ViewControllerFactory.createPreApprovalDialogue(with:region:completion:) // method 
 }

 class HealthExposureNotificationUI.OnboardingOpenAppStoreViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let appStoreURL : String
	let primaryButton : OBBoldTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74ac00028538 (0x4ac00028538) in binary!
	0x74a0  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x7494000288c0 (0x494000288c0) in binary!
	0x69b8  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x747c000283e8 (0x47c000283e8) in binary!
	0x38000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x673400028498 (0x73400028498) in binary!
	0x8e78  @objc OnboardingOpenAppStoreViewController.(null) <stripped>
WARNING: couldn't find address 0x744c000283b8 (0x44c000283b8) in binary!
	0x48000000c  @objc OnboardingOpenAppStoreViewController.(null) <stripped>

	// Swift methods
	0x60940  class func OnboardingOpenAppStoreViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.NotificationPreviewView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let content : NotificationContent
	var isPresented : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x673400028498 (0x73400028498) in binary!
	0x8e78  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x744c000283b8 (0x44c000283b8) in binary!
	0x48000000c  @objc NotificationPreviewView.(null) <stripped>
WARNING: couldn't find address 0x670400028468 (0x70400028468) in binary!
	0x8e48  @objc NotificationPreviewView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationCapsuleView : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x66cc00028430 (0x6cc00028430) in binary!
	0x8e10  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0x7c8400028060 (0x48400028060) in binary!
	0x48000000c  @objc NotificationCapsuleView.(null) <stripped>
WARNING: couldn't find address 0xb18200028730 (0x18200028730) in binary!
	0x8de0  @objc NotificationCapsuleView.(null) <stripped>
 }

 class HealthExposureNotificationUI.NotificationContent : UIView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	let notificationContainer : NotificationCapsuleView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x670400028468 (0x70400028468) in binary!
	0x8e48  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x7cbc00028098 (0x4bc00028098) in binary!
	0x7410  @objc NotificationContent.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xfcffff7878  @objc NotificationContent.(null) <stripped>
	0xffff7930  @objc NotificationContent.UHâÂ]ÈV0 <stripped>
 }

 class HealthExposureNotificationUI.VerificationTableView : UITableView /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var $__lazy_storage_$_heightConstraint : NSLayoutConstraint? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x62f8000286a8 (0x2f8000286a8) in binary!
	0x8d78  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x734c00028c00 (0x34c00028c00) in binary!
	0xb060  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x7334000282a0 (0x334000282a0) in binary!
	0x48000000c  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0xb0d200028680 (0xd200028680) in binary!
	0x8d30  @objc VerificationTableView.(null) <stripped>
WARNING: couldn't find address 0x730400028bb8 (0x30400028bb8) in binary!
	0x72f8  @objc VerificationTableView.(null) <stripped>

	// Swift methods
	0x63dd0  func <stripped> // getter 
 }

 class HealthExposureNotificationUI.AuthorityTextCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {

	// Properties
	var authorityTextView : OnboardingAuthorityTextView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb14a000286f8 (0x14a000286f8) in binary!
	0x8da8  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x737c000282e8 (0x37c000282e8) in binary!
	0x58000000c  @objc AuthorityTextCell.(null) <stripped>
WARNING: couldn't find address 0x62f8000286a8 (0x2f8000286a8) in binary!
	0x8d78  @objc AuthorityTextCell.(null) <stripped>

	// Swift methods
 }

 class HealthExposureNotificationUI.VerificationCell : UITableViewCell /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb18200028730 (0x18200028730) in binary!
	0x8de0  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x73b400028c68 (0x3b400028c68) in binary!
	0x73a8  @objc VerificationCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x94ffff9100  @objc VerificationCell.(null) <stripped>
	0xffff94f8  @objc VerificationCell.ã!¡9¡î¿]√f.Ñ <stripped>
 }

 class HealthExposureNotificationUI.VerificationCheckmarkCell : VerificationCell {

	// Properties
	let label : UILabel
	let accessoryImageView : UIImageView
	var isChecked : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb0d200028680 (0xd200028680) in binary!
	0x8d30  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x730400028bb8 (0x30400028bb8) in binary!
	0x72f8  @objc VerificationCheckmarkCell.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x31cffffaf60  @objc VerificationCheckmarkCell.(null) <stripped>
	0x70cffffb058  @objc VerificationCheckmarkCell.â}¿Hç=ÜÛ <stripped>
 }

 class HealthExposureNotificationUI.OnboardingAddRegionWelcomeViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72e400028370 (0x2e400028370) in binary!
	0x72d8  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x72cc000286f8 (0x2cc000286f8) in binary!
	0x72c0  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x67e4000287e0 (0x7e4000287e0) in binary!
	0x72a8  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x6b4ffffc100  @objc OnboardingAddRegionWelcomeViewController.(null) <stripped>
	0xecffffc2c8  @objc OnboardingAddRegionWelcomeViewController.=ãÚ <stripped>
	0x1c4ffffc5b0  @objc OnboardingAddRegionWelcomeViewController.=£Ú <stripped>

	// Swift methods
	0x65820  class func OnboardingAddRegionWelcomeViewController.__allocating_init(flow:) // init 
 }

 class HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow
	let healthAgencyModel : ENUIPublicHealthAgencyModel
	let primaryButton : OBBoldTrayButton
	let secondaryButton : OBLinkTrayButton

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x729400028320 (0x29400028320) in binary!
	0x7288  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x727c000286c8 (0x27c000286c8) in binary!
	0x7270  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x679400028790 (0x79400028790) in binary!
	0x7258  @objc OnboardingAnalyticsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x744ffffcc50  @objc OnboardingAnalyticsViewController.(null) <stripped>
	0x224000282b0  @objc OnboardingAnalyticsViewController.Ë <stripped>
WARNING: couldn't find address 0x28644ffffcd00 (0x644ffffcd00) in binary!
	0x20c00029090  @objc OnboardingAnalyticsViewController.(null) <stripped>

	// Swift methods
	0x669e0  class func OnboardingAnalyticsViewController.__allocating_init(flow:agencyModel:) // init 
 }

 class HealthExposureNotificationUI.MultilineButton : UIButton /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x651400028278 (0x51400028278) in binary!
	0x8c58  @objc MultilineButton.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x644ffffcd00  @objc MultilineButton.(null) <stripped>
 }

 class HealthExposureNotificationUI.OnboardingRegionAlreadyExistsViewController : OBWelcomeController /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit {

	// Properties
	let flow : OnboardingFlow // +0x8 (0x10)
	let healthAgencyModel : ENUIPublicHealthAgencyModel // +0x18 (0x8)
	let primaryButton : OBBoldTrayButton // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7224000282b0 (0x224000282b0) in binary!
	0x7218  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x720c00029090 (0x20c00029090) in binary!
	0x6730  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x71f400028160 (0x1f400028160) in binary!
	0x0  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x77078456874  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>
WARNING: couldn't find address 0x696669746f4e6572 (0x1746f4e6572) in binary!
	0x24f52502020  @objc OnboardingRegionAlreadyExistsViewController.(null) <stripped>

	// Swift methods
	0x68080  func <stripped> // method 
	0x688a0  func <stripped> // method 
 }

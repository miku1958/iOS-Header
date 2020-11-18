 protocol HealthProfile.SharingParticipantDataSourceCache // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol HealthProfile.SharingParticipantDataSourceParticipantManagerFactory // 1 requirements
 {
	// method
 }
 protocol HealthProfile.ProfileAvailabilityProvider // 1 requirements
 {
	// class method
 }
 protocol HealthProfile.ProfileDeepLinkHandling // 1 requirements
 {
	// method
 }
 protocol HealthProfile.ProfileButtonCellItem // 4 requirements
 {
	// class base protocol
	// getter
	// getter
	// getter
 }
 protocol HealthProfile.ProfileCollectionViewListItem // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol HealthProfile.OrganDonationRegisteredViewControllerDelegate // 1 requirements
 {
	// method
 }
 protocol HealthProfile.ActivityIndicatorDetailItem // 12 requirements
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
	// setter
	// modify coroutine
 }
 protocol HealthProfile.StopReceivingProfileFlowDelegate // 1 requirements
 {
	// method
 }

 enum __C.HKSharingParticipantStatus { }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIAccessibilityTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : —h
 }

 enum __C.Code { }

 struct __C_Synthesized.HKError {

	// Properties
	let _nsError : NSError
 }

 class HealthProfile.ProfileCompoundDataSource {
 class HealthProfile.ProfileContactCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var avatarView : MeContactAvatarView
	var nameLabel : UILabel
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : }b

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x48fc00015830 (0xfc00015830) in binary!
	0x79d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x51e400015730 (0x1e400015730) in binary!
	0x51d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7b4fffde6d0  @objc ProfileContactCell.(null) <stripped>
	0xfffdf648  @objc ProfileContactCell.UHâÂËG <stripped>

	// Swift methods
	0x4640  func <stripped> // method 
	0x4b50  func <stripped> // method 
 }

 class HealthProfile.MemorySharingParticipantDataSourceCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SharingParticipantDataSourceCache {

	// Properties
	var participants : [String]? // +0x10 (0x8)

	// Swift methods
 }

 class HealthProfile.SharingParticipantDataSource {
 class HealthProfile.MedicalIDDataSourceItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let uniqueIdentifier : String // +0x8 (0x10)
	var text : String? // +0x18 (0x10)
	var detailText : String? // +0x28 (0x10)
	var showDisclosureIndicator : Bool // +0x38 (0x1)
	var reuseIdentifier : String // +0x40 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x50 (0x8)
	let healthStore : HKHealthStore // +0x58 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let medicalIDCache : [` // +0x60 (0x8)
	var presentingViewController : UIViewController? // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultCancellable : Õc // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultPresented : e` // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x51b0  _globalinit_33_35CC3FF21804F92ED723BE44B13D33F8_func0
WARNING: couldn't find address 0x51ac000156f0 (0x1ac000156f0) in binary!
	0x38000000c  @objc MedicalIDDataSourceItem.(null) <stripped>
WARNING: couldn't find address 0x679800015650 (0x79800015650) in binary!
	0x678c  @objc MedicalIDDataSourceItem.(null) <stripped>

	// Swift methods
	0x7740  func <stripped> // method 
	0x8110  func <stripped> // method 
	0x8bb0  func <stripped> // method 
 }

 enum HealthProfile.MedicalIDFetchError {

	// Properties
	case medicalIDFetchTimeout  
 }

 class HealthProfile.CloudSyncCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var cloudSyncDetailView : ActivityIndicatorDetailView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : }b

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x486400015798 (0x6400015798) in binary!
	0x7940  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x514c00015880 (0x14c00015880) in binary!
	0x5140  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5cfffe4af8  @objc CloudSyncCollectionViewCell.(null) <stripped>
	0xfffe57d0  @objc CloudSyncCollectionViewCell.Hã]–HâŸLãm∏Ë* <stripped>

	// Swift methods
	0xa450  func <stripped> // method 
	0xa790  func <stripped> // method 
 }

 enum HealthProfile.ProfileDeepLinkRow {

	// Properties
	case researchStudies : (studyBundleIdentifier: String?)
	case appAuthSheet : (applicationBundleIdentifier: String?)
	case healthProfile  
	case medicalID  
 }

 class HealthProfile.ProfileViewController {
 class HealthProfile.SafetyCheckProfileDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String // +0x10 (0x10)
	var text : String? // +0x20 (0x10)
	var detailText : String? // +0x30 (0x10)
	var showDisclosureIndicator : Bool // +0x40 (0x1)
	var reuseIdentifier : String // +0x48 (0x10)

	// Swift methods
 }

 class HealthProfile.ProfileButtonCell {
 class HealthProfile.ProfileCollectionViewListCell : _UICollectionViewListCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : }b
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_textLabel : ±^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_detailTextLabel : ±^
	var detailTextLabelHiddenConstraints : [NSLayoutConstraint]
	var detailTextLabelVisibleConstraints : [NSLayoutConstraint]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x482c00015760 (0x2c00015760) in binary!
	0x7908  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x511400015658 (0x11400015658) in binary!
	0x38000000c  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x6700000159f8 (0x700000159f8) in binary!
	0x50e8  @objc ProfileCollectionViewListCell.(null) <stripped>

	// Swift methods
	0xdfc0  func <stripped> // getter 
	0xe000  func <stripped> // setter 
	0xe060  func <stripped> // modifyCoroutine 
	0xe110  func <stripped> // getter 
	0xe1a0  func <stripped> // getter 
	0xe610  func <stripped> // method 
	0xed50  func <stripped> // method 
	0xee90  func <stripped> // method 
	0xef90  func <stripped> // method 
 }

 class HealthProfile.SharingParticipantDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var reuseIdentifier : String

	// Swift methods
	0x11950  func <stripped> // getter 
	0x11930  func <stripped> // setter 
	0xff40  func <stripped> // modifyCoroutine 
	0x11960  func <stripped> // getter 
	0x11940  func <stripped> // setter 
	0xff70  func <stripped> // modifyCoroutine 
	0x10040  func <stripped> // getter 
	0x10080  func <stripped> // setter 
	0x100c0  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.RevokeSharingDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var enableInteraction : Bool
	var buttonLabelColor : UIColor
	var text : String?
	var detailText : String?
	let uniqueIdentifier : String
	var reuseIdentifier : String
	var revokeSharing : (_:)?

	// Swift methods
	0x10280  func <stripped> // getter 
	0x102c0  func <stripped> // setter 
	0x10300  func <stripped> // modifyCoroutine 
	0x103e0  func <stripped> // getter 
	0x10420  func <stripped> // setter 
	0x10460  func <stripped> // modifyCoroutine 
	0x104c0  func <stripped> // getter 
	0x105a0  func <stripped> // getter 
	0x105e0  func <stripped> // setter 
	0x10620  func <stripped> // modifyCoroutine 
	0x10790  func <stripped> // getter 
	0x107f0  func <stripped> // setter 
	0x10860  func <stripped> // modifyCoroutine 
	0x10c40  func <stripped> // method 
	0x10c50  func <stripped> // method 
 }

 class HealthProfile.FeaturesDataSource {
 class HealthProfile.MedicalDetailsDataSource {
 class HealthProfile.OrganDonationRegisteredViewController {
 class HealthProfile.OrganDonationRegisteredDataSource {
 struct HealthProfile.HeaderItem {

	// Properties
	var reuseIdentifier : String // +0x0
 }

 struct HealthProfile.BodyItem {

	// Properties
	var reuseIdentifier : String // +0x0
 }

 class HealthProfile.EditItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String
	var tableViewCell : UITableViewCell?
	var presentingViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6700000159f8 (0x700000159f8) in binary!
	0x50e8  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50e400015628 (0xe400015628) in binary!
	0x38000000c  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50cc00015608 (0xcc00015608) in binary!
	0x50b8  @objc EditItem.(null) <stripped>

	// Swift methods
	0x136f0  func <stripped> // getter 
	0x13740  func <stripped> // setter 
	0x13790  func <stripped> // modifyCoroutine 
	0x137e0  func <stripped> // method 
	0x13870  func <stripped> // method 
	0x13c60  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ıZ
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x14a70  func <stripped> // getter 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50cc00015608 (0xcc00015608) in binary!
	0x50b8  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x50b4000155f8 (0xb4000155f8) in binary!
	0x68000000c  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x787600015a38 (0x7600015a38) in binary!
	0x7878  @objc FetchMeContactOperation.(null) <stripped>

	// Swift methods
 }

 class HealthProfile.OrganDonationButtonCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : }b

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x787600015a38 (0x7600015a38) in binary!
	0x7878  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x5084000157b8 (0x84000157b8) in binary!
	0x64e6  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x64da000159d0 (0x4da000159d0) in binary!
	0x5060  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x56cffff4098  @objc OrganDonationButtonCell.(null) <stripped>
	0x544ffff40c0  @objc OrganDonationButtonCell.LâÊLâ˙LãµXˇˇˇLâÒLãm»ËÂ" <stripped>
	0x51cffff40e8  @objc OrganDonationButtonCell.ﬁLâÍHã]êIâ›MâHâŸË0# <stripped>

	// Swift methods
 }

 class HealthProfile.DeviceSourcesDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var showDisclosureIndicator : Bool
	var healthStore : HKHealthStore
	var reuseIdentifier : String

	// Swift methods
	0x16180  func <stripped> // getter 
	0x161c0  func <stripped> // setter 
	0x16200  func <stripped> // modifyCoroutine 
	0x162e0  func <stripped> // getter 
	0x16320  func <stripped> // setter 
	0x16360  func <stripped> // modifyCoroutine 
	0x16420  func <stripped> // getter 
	0x16450  func <stripped> // setter 
	0x16480  func <stripped> // modifyCoroutine 
	0x16550  func <stripped> // getter 
	0x16590  func <stripped> // setter 
	0x165d0  func <stripped> // modifyCoroutine 
	0x16880  func <stripped> // method 
 }

 class HealthProfile.ExportDataSource {
 struct HealthProfile.StopReceivingProfileNotificationUserInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var profileUUID : Y
 }

 enum HealthProfile.UserInfoDecodingError {

	// Properties
	case noUserInfoFound  
	case noProfileUUIDFound  
	case invalidProfileUUIDValueType  
	case invalidProfileUUIDString  
 }

 enum HealthProfile.UserInfoKeys {

	// Properties
	case profileUUID  
 }

 class HealthProfile.PrimaryProfileAvatarDataSource {
 class HealthProfile.PrivacyDataSource {
 class HealthProfile.OrganDonationDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var showDisclosureIndicator : Bool
	var reuseIdentifier : String

	// Swift methods
	0x19e70  func <stripped> // getter 
	0x19eb0  func <stripped> // setter 
	0x19ef0  func <stripped> // modifyCoroutine 
	0x19fd0  func <stripped> // getter 
	0x1a010  func <stripped> // setter 
	0x1a050  func <stripped> // modifyCoroutine 
	0x1a110  func <stripped> // getter 
	0x1a140  func <stripped> // setter 
	0x1a170  func <stripped> // modifyCoroutine 
	0x1a240  func <stripped> // getter 
	0x1a280  func <stripped> // setter 
	0x1a2c0  func <stripped> // modifyCoroutine 
	0x1a2f0  func <stripped> // method 
 }

 class HealthProfile.CloudSyncDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String // +0x10 (0x10)
	var titleLabel : String // +0x20 (0x10)
	var detailLabel : String // +0x30 (0x10)
	var action : CloudSyncAction // +0x0 (0x0)
	var animateCloudSync : Bool? // +0x45545f5f (0x1)
	var reuseIdentifier : String // +0x0 (0x10)

	// Swift methods
 }

 class HealthProfile.ExportDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var reuseIdentifier : String
	var healthStore : HKHealthStore

	// Swift methods
	0x1afb0  func <stripped> // getter 
	0x1aff0  func <stripped> // setter 
	0x1b030  func <stripped> // modifyCoroutine 
	0x1b110  func <stripped> // getter 
	0x1b150  func <stripped> // setter 
	0x1b190  func <stripped> // modifyCoroutine 
	0x1b1d0  func <stripped> // getter 
	0x1b2b0  func <stripped> // getter 
	0x1b2f0  func <stripped> // setter 
	0x1b330  func <stripped> // modifyCoroutine 
	0x1b5c0  func <stripped> // method 
 }

 class HealthProfile.CloudSyncDataSource {
 class HealthProfile.ActivityIndicatorDetailView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleStackView : weak UIStackView?
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : CloudSyncAction

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x504400015580 (0x4400015580) in binary!
	0x6644  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x502c00015558 (0x2c00015558) in binary!
	0x662c  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x501400015530 (0x1400015530) in binary!
	0x6614  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4ffc00015508 (0x7fc00015508) in binary!
	0x65fc  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4fec00015720 (0x7ec00015720) in binary!
	0x46e0  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x77bc00015710 (0x7bc00015710) in binary!
	0x4fc8  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff5000  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x58cffff6a78  @objc ActivityIndicatorDetailView.(null) <stripped>
	0x4bcffff6bc0  @objc ActivityIndicatorDetailView.AUATSHÉÏH∆E∞ <stripped>
	0x74c000156a0  @objc ActivityIndicatorDetailView. <stripped>
WARNING: couldn't find address 0x15554ffff9380 (0x554ffff9380) in binary!
	0x64c00015580  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x159ccffff9988 (0x1ccffff9988) in binary!
	0x73400015478  @objc ActivityIndicatorDetailView.(null) <stripped>

	// Swift methods
	0x1dde0  func <stripped> // method 
	0x1df30  func <stripped> // method 
	0x1e1c0  func <stripped> // method 
 }

 struct HealthProfile.CloudSyncAction {

	// Properties
	var title : String
	var target : CloudSyncTarget
 }

 enum HealthProfile.CloudSyncTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : QW
	case block : CloudSyncAction
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : [W // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x778400015490 (0x78400015490) in binary!
	0x4f88  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x776c000156c0 (0x76c000156c0) in binary!
	0x4f78  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x554ffff9380  @objc LastBackedUpDateFormatter.(null) <stripped>
	0x1ccffff9988  @objc LastBackedUpDateFormatter.UHâÂLâÔ]ÈS˚ <stripped>

	// Swift methods
	0x1fc10  func <stripped> // method 
	0x1fff0  func <stripped> // method 
	0x20310  func <stripped> // method 
 }

 class HealthProfile.AppSourcesDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var showDisclosureIndicator : Bool
	var healthStore : HKHealthStore
	var reuseIdentifier : String

	// Swift methods
	0x211f0  func <stripped> // getter 
	0x21230  func <stripped> // setter 
	0x21270  func <stripped> // modifyCoroutine 
	0x21350  func <stripped> // getter 
	0x21390  func <stripped> // setter 
	0x213d0  func <stripped> // modifyCoroutine 
	0x21490  func <stripped> // getter 
	0x214c0  func <stripped> // setter 
	0x214f0  func <stripped> // modifyCoroutine 
	0x215c0  func <stripped> // getter 
	0x21600  func <stripped> // setter 
	0x21640  func <stripped> // modifyCoroutine 
	0x21900  func <stripped> // method 
	0x21910  func <stripped> // method 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?
	let avatarSize : Size

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x652000015998 (0x52000015998) in binary!
	0x76f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x6508000153f0 (0x508000153f0) in binary!
	0x45f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eec00015430 (0x6ec00015430) in binary!
	0xa8000000c  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4ecc000153b8 (0x6cc000153b8) in binary!
	0x64cc  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eb400015390 (0x6b400015390) in binary!
	0x64b4  @objc MeContactAvatarView.(null) <stripped>

	// Swift methods
	0x22110  func <stripped> // method 
	0x22520  func <stripped> // method 
	0x228c0  func <stripped> // method 
	0x21ef0  class func MeContactAvatarView.__allocating_init(for:) // init 
	0x22d10  func <stripped> // method 
	0x22d40  func <stripped> // method 
 }

 enum HealthProfile.Size {

	// Properties
	case header  
	case navigationBar  
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView // +0x8 (0x8)
	var gestureRecognizer : UITapGestureRecognizer? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x774c000156a0 (0x74c000156a0) in binary!
	0x4f50  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x464c00015580 (0x64c00015580) in binary!
	0x6544  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x4f3400015478 (0x73400015478) in binary!
	0x58000000c  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x652000015998 (0x52000015998) in binary!
	0x76f8  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x6508000153f0 (0x508000153f0) in binary!
	0x45f8  @objc ProfileBarButton.(null) <stripped>

	// Swift methods
	0x22f00  func <stripped> // getter 
	0x235d0  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var organDonationLogoImage : weak UIImageView?
	var title : weak UILabel?
	var subtitle : weak UILabel?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : }b

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4ecc000153b8 (0x6cc000153b8) in binary!
	0x64cc  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4eb400015390 (0x6b400015390) in binary!
	0x64b4  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e9c00015370 (0x69c00015370) in binary!
	0x649c  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x766600015828 (0x66600015828) in binary!
	0x7668  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e74000155a8 (0x674000155a8) in binary!
	0x4e68  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x1dcffffd320  @objc OrganDonationCell.(null) <stripped>
	0x56cffffd578  @objc OrganDonationCell.√fÑ <stripped>
	0xffffd6e0  @objc OrganDonationCell.ˇˇfD <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x5483a4d4152  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x6c69666f72506874 (0x66f72506874) in binary!
	0x165483a5443  @objc OrganDonationCell.(null) <stripped>

	// Swift methods
 }

 class HealthProfile.StopReceivingProfileDataSource {
 class HealthProfile.StopReceivingProfileFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : StopReceivingProfileFlowDelegate
	let participantManager : HKCloudSyncShareParticipantManager
	let profileIdentifier : HKProfileIdentifier
	let firstName : String?

	// Swift methods
	0x24d60  func <stripped> // method 
	0x25250  func <stripped> // method 
 }

 class HealthProfile.ResearchStudySourcesDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var showDisclosureIndicator : Bool
	var healthStore : HKHealthStore
	var reuseIdentifier : String

	// Swift methods
	0x258b0  func <stripped> // getter 
	0x258f0  func <stripped> // setter 
	0x25930  func <stripped> // modifyCoroutine 
	0x25a10  func <stripped> // getter 
	0x25a50  func <stripped> // setter 
	0x25a90  func <stripped> // modifyCoroutine 
	0x25b50  func <stripped> // getter 
	0x25b80  func <stripped> // setter 
	0x25bb0  func <stripped> // modifyCoroutine 
	0x25c80  func <stripped> // getter 
	0x25cc0  func <stripped> // setter 
	0x25d00  func <stripped> // modifyCoroutine 
	0x25fb0  func <stripped> // method 
	0x25fc0  func <stripped> // method 
 }

 struct HealthProfile.ProfileDeepLinkingHandler { }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4e54000155a0 (0x654000155a0) in binary!
	0x5616  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x7d86000156e8 (0x586000156e8) in binary!
	0x7618  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x4e2400015368 (0x62400015368) in binary!
	0x0  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x66f72506874  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x454a4f5250202065 (0x75250202065) in binary!
	0x1666f725068  @objc OrganDonationStatusViewController.(null) <stripped>

	// Swift methods
	0x26c20  func <stripped> // getter 
	0x26d80  func <stripped> // getter 
	0x270a0  func <stripped> // method 
 }

 class HealthProfile.CharacteristicsDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var showDisclosureIndicator : Bool
	var reuseIdentifier : String
	var healthStore : HKHealthStore

	// Swift methods
 }

 class HealthProfile.ProfileAvatarDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var reuseIdentifier : String
	var name : String?
	var healthStore : HKHealthStore

	// Swift methods
	0x27990  func <stripped> // getter 
 }

 class HealthProfile.StopReceivingProfileItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String // +0x10 (0x10)
	let reuseIdentifier : String // +0x20 (0x10)
	let text : String? // +0x30 (0x10)
	let detailText : String? // +0x40 (0x10)
	let buttonLabelColor : UIColor // +0x50 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deselectionBehavior : #Y // +0x80000408 (0x0)
	let healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileInformation : πc // +0x0 (0x28)
	let participantManager : HKCloudSyncShareParticipantManager // +0x0 (0x8)
	var currentStopReceivingProfileFlow : StopReceivingProfileFlow // +0x0 (0x8)
	var isFlowCurrentlyPresented : Bool // +0x0 (0x1)

	// Swift methods
 }

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

 struct __C_Synthesized.HKError {

	// Properties
	let _nsError : NSError
 }

 enum __C.HKSharingParticipantStatus { }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIAccessibilityTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : e
 }

 enum __C.Code { }

 class HealthProfile.ProfileCompoundDataSource {
 class HealthProfile.ProfileContactCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var avatarView : MeContactAvatarView
	var nameLabel : UILabel
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : ≠^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x48fc00014460 (0xfc00014460) in binary!
	0x79d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x51e400014360 (0x1e400014360) in binary!
	0x51d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3e4fffde540  @objc ProfileContactCell.(null) <stripped>
	0xfffdf4b8  @objc ProfileContactCell.UHâÂAWAVAUATSHÉÏH∆E∞ <stripped>

	// Swift methods
	0x4870  func <stripped> // method 
	0x4d80  func <stripped> // method 
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
	let medicalIDCache : ã\ // +0x60 (0x8)
	var presentingViewController : UIViewController? // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultCancellable : ˝_ // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultPresented : ï\ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67c800014510 (0x7c800014510) in binary!
	0x51b0  @objc MedicalIDDataSourceItem.(null) <stripped>
WARNING: couldn't find address 0x51ac00014320 (0x1ac00014320) in binary!
	0x38000000c  @objc MedicalIDDataSourceItem.(null) <stripped>
WARNING: couldn't find address 0x679800014280 (0x79800014280) in binary!
	0x678c  @objc MedicalIDDataSourceItem.(null) <stripped>

	// Swift methods
	0x7980  func <stripped> // method 
	0x8350  func <stripped> // method 
	0x8df0  func <stripped> // method 
 }

 enum HealthProfile.MedicalIDFetchError {

	// Properties
	case medicalIDFetchTimeout  
 }

 class HealthProfile.CloudSyncCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var cloudSyncDetailView : ActivityIndicatorDetailView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : ≠^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4864000143c8 (0x64000143c8) in binary!
	0x7940  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x514c000144b0 (0x14c000144b0) in binary!
	0x5140  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x48cfffe49f8  @objc CloudSyncCollectionViewCell.(null) <stripped>
	0xfffe56d0  @objc CloudSyncCollectionViewCell.ÏHLçm∞LâËË» <stripped>

	// Swift methods
	0xa6b0  func <stripped> // method 
	0xa9f0  func <stripped> // method 
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
	var item : ≠^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_textLabel : ·Z
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_detailTextLabel : ·Z
	var detailTextLabelHiddenConstraints : [NSLayoutConstraint]
	var detailTextLabelVisibleConstraints : [NSLayoutConstraint]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x482c00014390 (0x2c00014390) in binary!
	0x7908  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x511400014288 (0x11400014288) in binary!
	0x38000000c  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x670000014628 (0x70000014628) in binary!
	0x50e8  @objc ProfileCollectionViewListCell.(null) <stripped>

	// Swift methods
	0xe290  func <stripped> // getter 
	0xe2d0  func <stripped> // setter 
	0xe330  func <stripped> // modifyCoroutine 
	0xe3e0  func <stripped> // getter 
	0xe470  func <stripped> // getter 
	0xe8e0  func <stripped> // method 
	0xf020  func <stripped> // method 
	0xf160  func <stripped> // method 
	0xf260  func <stripped> // method 
 }

 class HealthProfile.SharingParticipantDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var reuseIdentifier : String

	// Swift methods
	0x11c30  func <stripped> // getter 
	0x11c10  func <stripped> // setter 
	0x10220  func <stripped> // modifyCoroutine 
	0x11c40  func <stripped> // getter 
	0x11c20  func <stripped> // setter 
	0x10250  func <stripped> // modifyCoroutine 
	0x10320  func <stripped> // getter 
	0x10360  func <stripped> // setter 
	0x103a0  func <stripped> // modifyCoroutine 
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
	0x10560  func <stripped> // getter 
	0x105a0  func <stripped> // setter 
	0x105e0  func <stripped> // modifyCoroutine 
	0x106c0  func <stripped> // getter 
	0x10700  func <stripped> // setter 
	0x10740  func <stripped> // modifyCoroutine 
	0x107a0  func <stripped> // getter 
	0x10880  func <stripped> // getter 
	0x108c0  func <stripped> // setter 
	0x10900  func <stripped> // modifyCoroutine 
	0x10a70  func <stripped> // getter 
	0x10ad0  func <stripped> // setter 
	0x10b40  func <stripped> // modifyCoroutine 
	0x10f20  func <stripped> // method 
	0x10f30  func <stripped> // method 
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
WARNING: couldn't find address 0x670000014628 (0x70000014628) in binary!
	0x50e8  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50e400014258 (0xe400014258) in binary!
	0x38000000c  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50cc00014238 (0xcc00014238) in binary!
	0x50b8  @objc EditItem.(null) <stripped>

	// Swift methods
	0x139d0  func <stripped> // getter 
	0x13a20  func <stripped> // setter 
	0x13a70  func <stripped> // modifyCoroutine 
	0x13ac0  func <stripped> // method 
	0x13b50  func <stripped> // method 
	0x13f40  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : %W
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x14d60  func <stripped> // getter 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50cc00014238 (0xcc00014238) in binary!
	0x50b8  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x50b400014228 (0xb400014228) in binary!
	0x68000000c  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x787600014668 (0x7600014668) in binary!
	0x7878  @objc FetchMeContactOperation.(null) <stripped>

	// Swift methods
 }

 class HealthProfile.OrganDonationButtonCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : ≠^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x787600014668 (0x7600014668) in binary!
	0x7878  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x5084000143e8 (0x84000143e8) in binary!
	0x64e6  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x64da00014600 (0x4da00014600) in binary!
	0x5060  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x19cffff4018  @objc OrganDonationButtonCell.(null) <stripped>
	0x174ffff4040  @objc OrganDonationButtonCell.@ˇˇˇHâﬂ1“1…ËJ( <stripped>
	0x14cffff4068  @objc OrganDonationButtonCell.Iâ‰HÉ¿HÉ‡I)ƒLâ‰HÉ√Hçµ@ˇˇˇHâﬂ1“1…ËJ( <stripped>

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
	0x16480  func <stripped> // getter 
	0x164c0  func <stripped> // setter 
	0x16500  func <stripped> // modifyCoroutine 
	0x165e0  func <stripped> // getter 
	0x16620  func <stripped> // setter 
	0x16660  func <stripped> // modifyCoroutine 
	0x16720  func <stripped> // getter 
	0x16750  func <stripped> // setter 
	0x16780  func <stripped> // modifyCoroutine 
	0x16850  func <stripped> // getter 
	0x16890  func <stripped> // setter 
	0x168d0  func <stripped> // modifyCoroutine 
	0x16b80  func <stripped> // method 
 }

 class HealthProfile.ExportDataSource {
 struct HealthProfile.StopReceivingProfileNotificationUserInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var profileUUID : 7U
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
	0x1a1c0  func <stripped> // getter 
	0x1a200  func <stripped> // setter 
	0x1a240  func <stripped> // modifyCoroutine 
	0x1a320  func <stripped> // getter 
	0x1a360  func <stripped> // setter 
	0x1a3a0  func <stripped> // modifyCoroutine 
	0x1a460  func <stripped> // getter 
	0x1a490  func <stripped> // setter 
	0x1a4c0  func <stripped> // modifyCoroutine 
	0x1a590  func <stripped> // getter 
	0x1a5d0  func <stripped> // setter 
	0x1a610  func <stripped> // modifyCoroutine 
	0x1a640  func <stripped> // method 
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
	0x1b300  func <stripped> // getter 
	0x1b340  func <stripped> // setter 
	0x1b380  func <stripped> // modifyCoroutine 
	0x1b460  func <stripped> // getter 
	0x1b4a0  func <stripped> // setter 
	0x1b4e0  func <stripped> // modifyCoroutine 
	0x1b520  func <stripped> // getter 
	0x1b600  func <stripped> // getter 
	0x1b640  func <stripped> // setter 
	0x1b680  func <stripped> // modifyCoroutine 
	0x1b910  func <stripped> // method 
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
WARNING: couldn't find address 0x5044000141b0 (0x44000141b0) in binary!
	0x6644  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x502c00014188 (0x2c00014188) in binary!
	0x662c  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x501400014160 (0x1400014160) in binary!
	0x6614  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4ffc00014138 (0x7fc00014138) in binary!
	0x65fc  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4fec00014350 (0x7ec00014350) in binary!
	0x46e0  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x77bc00014340 (0x7bc00014340) in binary!
	0x4fc8  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff4f80  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1bcffff6a38  @objc ActivityIndicatorDetailView.(null) <stripped>
	0xecffff6b80  @objc ActivityIndicatorDetailView.A^]È¿ <stripped>
	0x74c000142d0  @objc ActivityIndicatorDetailView.<Aˇ÷H\µ <stripped>
WARNING: couldn't find address 0x14184ffff9350 (0x184ffff9350) in binary!
	0x64c000141b0  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x145fcffff9958 (0x5fcffff9958) in binary!
	0x734000140a8  @objc ActivityIndicatorDetailView.(null) <stripped>

	// Swift methods
	0x1e130  func <stripped> // method 
	0x1e280  func <stripped> // method 
	0x1e510  func <stripped> // method 
 }

 struct HealthProfile.CloudSyncAction {

	// Properties
	var title : String
	var target : CloudSyncTarget
 }

 enum HealthProfile.CloudSyncTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : ÅS
	case block : CloudSyncAction
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : ãS // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7784000140c0 (0x784000140c0) in binary!
	0x4f88  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x776c000142f0 (0x76c000142f0) in binary!
	0x4f78  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x184ffff9350  @objc LastBackedUpDateFormatter.(null) <stripped>
	0x5fcffff9958  @objc LastBackedUpDateFormatter.UHâÂAVSHâ˚Hãoµ <stripped>

	// Swift methods
	0x1ffa0  func <stripped> // method 
	0x20380  func <stripped> // method 
	0x206a0  func <stripped> // method 
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
	0x21590  func <stripped> // getter 
	0x215d0  func <stripped> // setter 
	0x21610  func <stripped> // modifyCoroutine 
	0x216f0  func <stripped> // getter 
	0x21730  func <stripped> // setter 
	0x21770  func <stripped> // modifyCoroutine 
	0x21830  func <stripped> // getter 
	0x21860  func <stripped> // setter 
	0x21890  func <stripped> // modifyCoroutine 
	0x21960  func <stripped> // getter 
	0x219a0  func <stripped> // setter 
	0x219e0  func <stripped> // modifyCoroutine 
	0x21ca0  func <stripped> // method 
	0x21cb0  func <stripped> // method 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?
	let avatarSize : Size

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6520000145c8 (0x520000145c8) in binary!
	0x76f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x650800014020 (0x50800014020) in binary!
	0x45f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eec00014060 (0x6ec00014060) in binary!
	0xa8000000c  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4ecc00013fe8 (0x6cc00013fe8) in binary!
	0x64cc  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eb400013fc0 (0x6b400013fc0) in binary!
	0x64b4  @objc MeContactAvatarView.(null) <stripped>

	// Swift methods
	0x224b0  func <stripped> // method 
	0x228c0  func <stripped> // method 
	0x22c60  func <stripped> // method 
	0x22290  class func MeContactAvatarView.__allocating_init(for:) // init 
	0x230b0  func <stripped> // method 
	0x230e0  func <stripped> // method 
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
WARNING: couldn't find address 0x774c000142d0 (0x74c000142d0) in binary!
	0x4f50  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x464c000141b0 (0x64c000141b0) in binary!
	0x6544  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x4f34000140a8 (0x734000140a8) in binary!
	0x58000000c  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x6520000145c8 (0x520000145c8) in binary!
	0x76f8  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x650800014020 (0x50800014020) in binary!
	0x45f8  @objc ProfileBarButton.(null) <stripped>

	// Swift methods
	0x232a0  func <stripped> // getter 
	0x23970  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var organDonationLogoImage : weak UIImageView?
	var title : weak UILabel?
	var subtitle : weak UILabel?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : ≠^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4ecc00013fe8 (0x6cc00013fe8) in binary!
	0x64cc  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4eb400013fc0 (0x6b400013fc0) in binary!
	0x64b4  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e9c00013fa0 (0x69c00013fa0) in binary!
	0x649c  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x766600014458 (0x66600014458) in binary!
	0x7668  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e74000141d8 (0x674000141d8) in binary!
	0x4e68  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x60cffffd320  @objc OrganDonationCell.(null) <stripped>
	0x19cffffd578  @objc OrganDonationCell.IâD$Hç=¶∞ <stripped>
	0xffffd6e0  @objc OrganDonationCell.{ <stripped>
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
	0x25110  func <stripped> // method 
	0x25600  func <stripped> // method 
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
	0x25c80  func <stripped> // getter 
	0x25cc0  func <stripped> // setter 
	0x25d00  func <stripped> // modifyCoroutine 
	0x25de0  func <stripped> // getter 
	0x25e20  func <stripped> // setter 
	0x25e60  func <stripped> // modifyCoroutine 
	0x25f20  func <stripped> // getter 
	0x25f50  func <stripped> // setter 
	0x25f80  func <stripped> // modifyCoroutine 
	0x26050  func <stripped> // getter 
	0x26090  func <stripped> // setter 
	0x260d0  func <stripped> // modifyCoroutine 
	0x26380  func <stripped> // method 
	0x26390  func <stripped> // method 
 }

 struct HealthProfile.ProfileDeepLinkingHandler { }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4e54000141d0 (0x654000141d0) in binary!
	0x5616  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x7d8600014318 (0x58600014318) in binary!
	0x7618  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x4e2400013f98 (0x62400013f98) in binary!
	0x0  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x66f72506874  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x454a4f5250202065 (0x75250202065) in binary!
	0x1666f725068  @objc OrganDonationStatusViewController.(null) <stripped>

	// Swift methods
	0x26ff0  func <stripped> // getter 
	0x27150  func <stripped> // getter 
	0x27470  func <stripped> // method 
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
	0x27d60  func <stripped> // getter 
 }

 class HealthProfile.StopReceivingProfileItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String // +0x10 (0x10)
	let reuseIdentifier : String // +0x20 (0x10)
	let text : String? // +0x30 (0x10)
	let detailText : String? // +0x40 (0x10)
	let buttonLabelColor : UIColor // +0x50 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deselectionBehavior : SU // +0x80000408 (0x0)
	let healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileInformation : È_ // +0x0 (0x28)
	let participantManager : HKCloudSyncShareParticipantManager // +0x0 (0x8)
	var currentStopReceivingProfileFlow : StopReceivingProfileFlow // +0x0 (0x8)
	var isFlowCurrentlyPresented : Bool // +0x0 (0x1)

	// Swift methods
 }

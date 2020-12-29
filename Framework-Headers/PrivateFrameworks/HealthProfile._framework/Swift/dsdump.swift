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
	let rawValue : e
 }

 enum __C.Code { }

 class HealthProfile.ProfileCompoundDataSource {
 class HealthProfile.ProfileContactCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var avatarView : MeContactAvatarView
	var nameLabel : UILabel
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : Ω^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x48fc00014478 (0xfc00014478) in binary!
	0x79d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x51e400014370 (0x1e400014370) in binary!
	0x51d8  @objc ProfileContactCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3fcfffde530  @objc ProfileContactCell.(null) <stripped>
	0xfffdf4a8  @objc ProfileContactCell.í< <stripped>

	// Swift methods
	0x4850  func <stripped> // method 
	0x4d60  func <stripped> // method 
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
	let medicalIDCache : õ\ // +0x60 (0x8)
	var presentingViewController : UIViewController? // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultCancellable : ` // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentMedicalIDDataResultPresented : •\ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67c800014528 (0x7c800014528) in binary!
	0x51b0  @objc MedicalIDDataSourceItem.(null) <stripped>
WARNING: couldn't find address 0x51ac00014330 (0x1ac00014330) in binary!
	0x38000000c  @objc MedicalIDDataSourceItem.(null) <stripped>
WARNING: couldn't find address 0x679800014290 (0x79800014290) in binary!
	0x678c  @objc MedicalIDDataSourceItem.(null) <stripped>

	// Swift methods
	0x7960  func <stripped> // method 
	0x8330  func <stripped> // method 
	0x8dd0  func <stripped> // method 
 }

 enum HealthProfile.MedicalIDFetchError {

	// Properties
	case medicalIDFetchTimeout  
 }

 class HealthProfile.CloudSyncCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var cloudSyncDetailView : ActivityIndicatorDetailView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : Ω^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4864000143e0 (0x64000143e0) in binary!
	0x7940  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x514c000144c8 (0x14c000144c8) in binary!
	0x5140  @objc CloudSyncCollectionViewCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4a4fffe49e8  @objc CloudSyncCollectionViewCell.(null) <stripped>
	0xfffe56c0  @objc CloudSyncCollectionViewCell.]√fD <stripped>

	// Swift methods
	0xa690  func <stripped> // method 
	0xa9d0  func <stripped> // method 
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
	var item : Ω^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_textLabel : ÒZ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_detailTextLabel : ÒZ
	var detailTextLabelHiddenConstraints : [NSLayoutConstraint]
	var detailTextLabelVisibleConstraints : [NSLayoutConstraint]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x482c000143a8 (0x2c000143a8) in binary!
	0x7908  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x511400014298 (0x11400014298) in binary!
	0x38000000c  @objc ProfileCollectionViewListCell.(null) <stripped>
WARNING: couldn't find address 0x670000014640 (0x70000014640) in binary!
	0x50e8  @objc ProfileCollectionViewListCell.(null) <stripped>

	// Swift methods
	0xe270  func <stripped> // getter 
	0xe2b0  func <stripped> // setter 
	0xe310  func <stripped> // modifyCoroutine 
	0xe3c0  func <stripped> // getter 
	0xe450  func <stripped> // getter 
	0xe8c0  func <stripped> // method 
	0xf000  func <stripped> // method 
	0xf140  func <stripped> // method 
	0xf240  func <stripped> // method 
 }

 class HealthProfile.SharingParticipantDataSourceItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String
	var text : String?
	var detailText : String?
	var reuseIdentifier : String

	// Swift methods
	0x11c10  func <stripped> // getter 
	0x11bf0  func <stripped> // setter 
	0x10200  func <stripped> // modifyCoroutine 
	0x11c20  func <stripped> // getter 
	0x11c00  func <stripped> // setter 
	0x10230  func <stripped> // modifyCoroutine 
	0x10300  func <stripped> // getter 
	0x10340  func <stripped> // setter 
	0x10380  func <stripped> // modifyCoroutine 
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
	0x10540  func <stripped> // getter 
	0x10580  func <stripped> // setter 
	0x105c0  func <stripped> // modifyCoroutine 
	0x106a0  func <stripped> // getter 
	0x106e0  func <stripped> // setter 
	0x10720  func <stripped> // modifyCoroutine 
	0x10780  func <stripped> // getter 
	0x10860  func <stripped> // getter 
	0x108a0  func <stripped> // setter 
	0x108e0  func <stripped> // modifyCoroutine 
	0x10a50  func <stripped> // getter 
	0x10ab0  func <stripped> // setter 
	0x10b20  func <stripped> // modifyCoroutine 
	0x10f00  func <stripped> // method 
	0x10f10  func <stripped> // method 
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
WARNING: couldn't find address 0x670000014640 (0x70000014640) in binary!
	0x50e8  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50e400014268 (0xe400014268) in binary!
	0x38000000c  @objc EditItem.(null) <stripped>
WARNING: couldn't find address 0x50cc00014248 (0xcc00014248) in binary!
	0x50b8  @objc EditItem.(null) <stripped>

	// Swift methods
	0x139b0  func <stripped> // getter 
	0x13a00  func <stripped> // setter 
	0x13a50  func <stripped> // modifyCoroutine 
	0x13aa0  func <stripped> // method 
	0x13b30  func <stripped> // method 
	0x13f20  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : 5W
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x14d40  func <stripped> // getter 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50cc00014248 (0xcc00014248) in binary!
	0x50b8  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x50b400014238 (0xb400014238) in binary!
	0x68000000c  @objc FetchMeContactOperation.(null) <stripped>
WARNING: couldn't find address 0x787600014680 (0x7600014680) in binary!
	0x7878  @objc FetchMeContactOperation.(null) <stripped>

	// Swift methods
 }

 class HealthProfile.OrganDonationButtonCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : Ω^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x787600014680 (0x7600014680) in binary!
	0x7878  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x508400014400 (0x8400014400) in binary!
	0x64e6  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0x64da00014618 (0x4da00014618) in binary!
	0x5060  @objc OrganDonationButtonCell.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x1acffff4008  @objc OrganDonationButtonCell.(null) <stripped>
	0x184ffff4030  @objc OrganDonationButtonCell. <stripped>
	0x15cffff4058  @objc OrganDonationButtonCell.“1…ËZ( <stripped>

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
	0x16460  func <stripped> // getter 
	0x164a0  func <stripped> // setter 
	0x164e0  func <stripped> // modifyCoroutine 
	0x165c0  func <stripped> // getter 
	0x16600  func <stripped> // setter 
	0x16640  func <stripped> // modifyCoroutine 
	0x16700  func <stripped> // getter 
	0x16730  func <stripped> // setter 
	0x16760  func <stripped> // modifyCoroutine 
	0x16830  func <stripped> // getter 
	0x16870  func <stripped> // setter 
	0x168b0  func <stripped> // modifyCoroutine 
	0x16b60  func <stripped> // method 
 }

 class HealthProfile.ExportDataSource {
 struct HealthProfile.StopReceivingProfileNotificationUserInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var profileUUID : GU
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
	0x1a1a0  func <stripped> // getter 
	0x1a1e0  func <stripped> // setter 
	0x1a220  func <stripped> // modifyCoroutine 
	0x1a300  func <stripped> // getter 
	0x1a340  func <stripped> // setter 
	0x1a380  func <stripped> // modifyCoroutine 
	0x1a440  func <stripped> // getter 
	0x1a470  func <stripped> // setter 
	0x1a4a0  func <stripped> // modifyCoroutine 
	0x1a570  func <stripped> // getter 
	0x1a5b0  func <stripped> // setter 
	0x1a5f0  func <stripped> // modifyCoroutine 
	0x1a620  func <stripped> // method 
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
	0x1b2e0  func <stripped> // getter 
	0x1b320  func <stripped> // setter 
	0x1b360  func <stripped> // modifyCoroutine 
	0x1b440  func <stripped> // getter 
	0x1b480  func <stripped> // setter 
	0x1b4c0  func <stripped> // modifyCoroutine 
	0x1b500  func <stripped> // getter 
	0x1b5e0  func <stripped> // getter 
	0x1b620  func <stripped> // setter 
	0x1b660  func <stripped> // modifyCoroutine 
	0x1b8f0  func <stripped> // method 
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
WARNING: couldn't find address 0x5044000141c0 (0x44000141c0) in binary!
	0x6644  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x502c00014198 (0x2c00014198) in binary!
	0x662c  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x501400014170 (0x1400014170) in binary!
	0x6614  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4ffc00014148 (0x7fc00014148) in binary!
	0x65fc  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x4fec00014368 (0x7ec00014368) in binary!
	0x46e0  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x77bc00014358 (0x7bc00014358) in binary!
	0x4fc8  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff4f70  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1d4ffff6a28  @objc ActivityIndicatorDetailView.(null) <stripped>
	0xfcffff6b70  @objc ActivityIndicatorDetailView. <stripped>
	0x74c000142e8  @objc ActivityIndicatorDetailView.ËÁ> <stripped>
WARNING: couldn't find address 0x1419cffff9340 (0x19cffff9340) in binary!
	0x64c000141c8  @objc ActivityIndicatorDetailView.(null) <stripped>
WARNING: couldn't find address 0x14614ffff9948 (0x614ffff9948) in binary!
	0x734000140b8  @objc ActivityIndicatorDetailView.(null) <stripped>

	// Swift methods
	0x1e110  func <stripped> // method 
	0x1e260  func <stripped> // method 
	0x1e4f0  func <stripped> // method 
 }

 struct HealthProfile.CloudSyncAction {

	// Properties
	var title : String
	var target : CloudSyncTarget
 }

 enum HealthProfile.CloudSyncTarget {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : ëS
	case block : CloudSyncAction
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : õS // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7784000140d0 (0x784000140d0) in binary!
	0x4f88  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x776c00014308 (0x76c00014308) in binary!
	0x4f78  @objc LastBackedUpDateFormatter.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x19cffff9340  @objc LastBackedUpDateFormatter.(null) <stripped>
	0x614ffff9948  @objc LastBackedUpDateFormatter.ãäµ <stripped>

	// Swift methods
	0x1ff80  func <stripped> // method 
	0x20360  func <stripped> // method 
	0x20680  func <stripped> // method 
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
	0x21570  func <stripped> // getter 
	0x215b0  func <stripped> // setter 
	0x215f0  func <stripped> // modifyCoroutine 
	0x216d0  func <stripped> // getter 
	0x21710  func <stripped> // setter 
	0x21750  func <stripped> // modifyCoroutine 
	0x21810  func <stripped> // getter 
	0x21840  func <stripped> // setter 
	0x21870  func <stripped> // modifyCoroutine 
	0x21940  func <stripped> // getter 
	0x21980  func <stripped> // setter 
	0x219c0  func <stripped> // modifyCoroutine 
	0x21c80  func <stripped> // method 
	0x21c90  func <stripped> // method 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?
	let avatarSize : Size

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6520000145e0 (0x520000145e0) in binary!
	0x76f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x650800014030 (0x50800014030) in binary!
	0x45f8  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eec00014070 (0x6ec00014070) in binary!
	0xa8000000c  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4ecc00013ff8 (0x6cc00013ff8) in binary!
	0x64cc  @objc MeContactAvatarView.(null) <stripped>
WARNING: couldn't find address 0x4eb400013fd0 (0x6b400013fd0) in binary!
	0x64b4  @objc MeContactAvatarView.(null) <stripped>

	// Swift methods
	0x22490  func <stripped> // method 
	0x228a0  func <stripped> // method 
	0x22c40  func <stripped> // method 
	0x22270  class func MeContactAvatarView.__allocating_init(for:) // init 
	0x23090  func <stripped> // method 
	0x230c0  func <stripped> // method 
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
WARNING: couldn't find address 0x774c000142e8 (0x74c000142e8) in binary!
	0x4f50  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x464c000141c8 (0x64c000141c8) in binary!
	0x6544  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x4f34000140b8 (0x734000140b8) in binary!
	0x58000000c  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x6520000145e0 (0x520000145e0) in binary!
	0x76f8  @objc ProfileBarButton.(null) <stripped>
WARNING: couldn't find address 0x650800014030 (0x50800014030) in binary!
	0x45f8  @objc ProfileBarButton.(null) <stripped>

	// Swift methods
	0x23280  func <stripped> // getter 
	0x23950  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var organDonationLogoImage : weak UIImageView?
	var title : weak UILabel?
	var subtitle : weak UILabel?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : Ω^

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4ecc00013ff8 (0x6cc00013ff8) in binary!
	0x64cc  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4eb400013fd0 (0x6b400013fd0) in binary!
	0x64b4  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e9c00013fb0 (0x69c00013fb0) in binary!
	0x649c  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x766600014470 (0x66600014470) in binary!
	0x7668  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x4e74000141f0 (0x674000141f0) in binary!
	0x4e68  @objc OrganDonationCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x624ffffd310  @objc OrganDonationCell.(null) <stripped>
	0x1b4ffffd568  @objc OrganDonationCell.Ë≈ËˇˇLâ˜Lâ˛1“1…E1¿E1…Ëˆ3 <stripped>
	0xffffd6d0  @objc OrganDonationCell.ç=rå <stripped>
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
	0x250f0  func <stripped> // method 
	0x255e0  func <stripped> // method 
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
	0x25c60  func <stripped> // getter 
	0x25ca0  func <stripped> // setter 
	0x25ce0  func <stripped> // modifyCoroutine 
	0x25dc0  func <stripped> // getter 
	0x25e00  func <stripped> // setter 
	0x25e40  func <stripped> // modifyCoroutine 
	0x25f00  func <stripped> // getter 
	0x25f30  func <stripped> // setter 
	0x25f60  func <stripped> // modifyCoroutine 
	0x26030  func <stripped> // getter 
	0x26070  func <stripped> // setter 
	0x260b0  func <stripped> // modifyCoroutine 
	0x26360  func <stripped> // method 
	0x26370  func <stripped> // method 
 }

 struct HealthProfile.ProfileDeepLinkingHandler { }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4e54000141e8 (0x654000141e8) in binary!
	0x5616  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x7d8600014330 (0x58600014330) in binary!
	0x7618  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x4e2400013fa8 (0x62400013fa8) in binary!
	0x0  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x66f72506874  @objc OrganDonationStatusViewController.(null) <stripped>
WARNING: couldn't find address 0x454a4f5250202065 (0x75250202065) in binary!
	0x1666f725068  @objc OrganDonationStatusViewController.(null) <stripped>

	// Swift methods
	0x26fd0  func <stripped> // getter 
	0x27130  func <stripped> // getter 
	0x27450  func <stripped> // method 
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
	0x27d50  func <stripped> // getter 
 }

 class HealthProfile.StopReceivingProfileItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let uniqueIdentifier : String // +0x10 (0x10)
	let reuseIdentifier : String // +0x20 (0x10)
	let text : String? // +0x30 (0x10)
	let detailText : String? // +0x40 (0x10)
	let buttonLabelColor : UIColor // +0x50 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deselectionBehavior : cU // +0x80000408 (0x0)
	let healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let profileInformation : ˘_ // +0x0 (0x28)
	let participantManager : HKCloudSyncShareParticipantManager // +0x0 (0x8)
	var currentStopReceivingProfileFlow : StopReceivingProfileFlow // +0x0 (0x8)
	var isFlowCurrentlyPresented : Bool // +0x0 (0x1)

	// Swift methods
 }

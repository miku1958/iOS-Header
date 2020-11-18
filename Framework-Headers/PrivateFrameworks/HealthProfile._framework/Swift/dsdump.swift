 protocol HealthProfile.OrganDonationRegisteredViewControllerDelegate // 1 requirements
 {
	// method
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIAccessibilityTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : }A
 }

 class HealthProfile.ProfileContactCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var nameLabel : weak UILabel? // +0x8 (0x8)
	var avatarView : MeContactAvatarView // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : uE // +0x18 (0x28)

	// ObjC -> Swift bridged methods
	0x1a40  @objc ProfileContactCell.nameLabel <stripped>
	0x1a80  @objc ProfileContactCell.setNameLabel: <stripped>
	0x1b30  @objc ProfileContactCell.avatarView <stripped>
	0x1be0  @objc ProfileContactCell.setAvatarView: <stripped>
	0x2430  @objc ProfileContactCell.awakeFromNib <stripped>
	0x2610  @objc ProfileContactCell.updateName <stripped>
	0x26f0  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x2750  @objc ProfileContactCell.initWithCoder: <stripped>
	0x2670  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x1a60  func <stripped> // getter 
	0x1aa0  func <stripped> // setter 
	0x1ac0  func <stripped> // modifyCoroutine 
	0x1b90  func <stripped> // getter 
	0x1c40  func <stripped> // setter 
	0x1cb0  func <stripped> // modifyCoroutine 
	0x1d90  func <stripped> // getter 
	0x1e30  func <stripped> // setter 
	0x1f00  func <stripped> // modifyCoroutine 
	0x2030  func <stripped> // getter 
	0x2460  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x3600  @objc MedicalIDProfileDataSource.init <stripped>
	0x33f0  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x2a80  func <stripped> // getter 
	0x2aa0  func <stripped> // setter 
	0x2ac0  func <stripped> // modifyCoroutine 
	0x2b10  func <stripped> // getter 
	0x2b30  func <stripped> // setter 
	0x2b50  func <stripped> // modifyCoroutine 
	0x2bc0  func <stripped> // getter 
	0x2c10  func <stripped> // setter 
	0x2c80  func <stripped> // modifyCoroutine 
	0x2d60  func <stripped> // getter 
	0x2dd0  func <stripped> // setter 
	0x2e40  func <stripped> // modifyCoroutine 
	0x2e80  func <stripped> // method 
	0x2f10  func <stripped> // method 
	0x31a0  func <stripped> // method 
 }

 class HealthProfile.ProfileViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var $__lazy_storage_$_profilePrivacyExportDataSource : ProfilePrivacyExportDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_healthRecordsPluginAccountsList : !E // +0x30 (0x10)
	let profileTableViewAdaptor : ProfileTableViewAdaptor // +0x40 (0x8)
	var $__lazy_storage_$_activityIndicatorDetailFooterView : ActivityIndicatorDetailFooterView // +0x48 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cloudSyncStateObserver : ÿD // +0x50 (0x8)
	var restorationRowToLoad : RestorationRow // +0x58 (0x11)

	// ObjC -> Swift bridged methods
	0x4900  @objc ProfileViewController.viewDidLoad <stripped>
	0x4eb0  @objc ProfileViewController.viewDidAppear: <stripped>
	0x4f50  @objc ProfileViewController.dismissProfile: <stripped>
	0x5170  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x5410  @objc ProfileViewController.initWithStyle: <stripped>
	0x54e0  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x55d0  @objc ProfileViewController.initWithCoder: <stripped>
	0x5280  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x3bc0  func ProfileViewController.selectedDataSources(for:) // method 
	0x3d90  func <stripped> // getter 
	0x3e00  func <stripped> // setter 
	0x3e20  func <stripped> // modifyCoroutine 
	0x3ee0  func <stripped> // getter 
	0x41d0  func <stripped> // setter 
	0x4200  func <stripped> // modifyCoroutine 
	0x4300  func ProfileViewController.adaptor(for:) // method 
	0x4350  func <stripped> // getter 
	0x43d0  func <stripped> // setter 
	0x43f0  func <stripped> // modifyCoroutine 
	0x44c0  func <stripped> // getter 
	0x4500  func <stripped> // setter 
	0x4550  func <stripped> // modifyCoroutine 
	0x4ef0  func <stripped> // method 
	0x4fe0  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case researchStudies : (studyBundleIdentifer: String?)
	case appAuthSheet : (applicationBundleIdentifier: String?)
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x5f80  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x6020  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x6040  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x61c0  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x6250  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_profileNameSection : “C // +0x50 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_medicalDetailSection : “C // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0x92b0  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x7e60  func <stripped> // getter 
	0x8020  func <stripped> // setter 
	0x8060  func <stripped> // modifyCoroutine 
	0x8260  func <stripped> // getter 
	0x8460  func <stripped> // setter 
	0x84b0  func <stripped> // modifyCoroutine 
	0x8730  func <stripped> // getter 
	0x8870  func <stripped> // setter 
	0x88c0  func <stripped> // modifyCoroutine 
	0x8a50  func <stripped> // getter 
	0x8a90  func <stripped> // setter 
	0x8ad0  func <stripped> // modifyCoroutine 
	0x8b20  class func ProfileDataSource.__allocating_init() // init 
	0x8cb0  func ProfileDataSource.addMeContactSection() // method 
	0x8e50  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0x92a0  func <stripped> // method 
	0x9340  func <stripped> // method 
 }

 struct HealthProfile.ProfileContactItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var name : String? // +0x10
 }

 struct HealthProfile.CharacteristicsItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String // +0x10
 }

 class HealthProfile.ProfileTableViewAdaptor : type metadata for SectionedTableViewAdaptor /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0xba60  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xbb50  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xbc30  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xd610  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xd820  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xd890  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xd950  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xd9d0  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xdad0  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xd930  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xd310  func <stripped> // getter 
	0xd350  func <stripped> // setter 
	0xd3d0  func <stripped> // modifyCoroutine 
	0xd640  func <stripped> // method 
	0xd800  func <stripped> // method 
 }

 class HealthProfile.OrganDonationRegisteredDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience { }

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
	0xe6d0  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0xe8b0  @objc EditItem.init <stripped>
	0xe7c0  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0xdfd0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0xe020  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0xe070  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0xe0e0  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0xe170  func <stripped> // method 
	0xe490  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ùA
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0xf2b0  func MeContactCache.contact.getter // getter 
	0xf330  func <stripped> // method 
	0xf130  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0xfa10  @objc FetchMeContactOperation.main <stripped>
	0xfa90  @objc FetchMeContactOperation.init <stripped>
	0xfa70  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0xf400  func <stripped> // getter 
	0xf440  func <stripped> // setter 
	0xf490  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_profileNameSection : “C // +0x50 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_medicalDetailSection : “C // +0x78 (0x28)
	let researchStudiesItem : ResearchStudySourcesItem // +0xa0 (0x20)
	let appSourcesItem : AppSourcesItem // +0xc0 (0x20)

	// Swift methods
	0x101c0  func <stripped> // getter 
	0x10320  func <stripped> // setter 
	0x10360  func <stripped> // modifyCoroutine 
	0x10560  func <stripped> // getter 
	0x10780  func <stripped> // setter 
	0x107d0  func <stripped> // modifyCoroutine 
	0x10bc0  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
 }

 struct HealthProfile.AppSourcesItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String // +0x10
 }

 struct HealthProfile.DeviceSourcesItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String // +0x10
 }

 struct HealthProfile.ResearchStudySourcesItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String // +0x10
 }

 struct HealthProfile.ExportItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String // +0x10
 }

 class HealthProfile.OrganDonationProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var title : String // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x134f0  @objc OrganDonationProfileDataSource.init <stripped>
	0x13360  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x13010  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x13030  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x13050  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x13140  func OrganDonationProfileDataSource.title.getter // getter 
	0x131b0  func OrganDonationProfileDataSource.title.setter // setter 
	0x13220  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x13260  class func <stripped> // method 
	0x13290  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x13800  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x13820  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x13840  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x13860  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x13880  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x138a0  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x13a60  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x14b00  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x14b30  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x148a0  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x13a90  func <stripped> // method 
	0x13c20  func <stripped> // method 
	0x13dc0  func <stripped> // method 
 }

 struct HealthProfile.Action {

	// Properties
	var title : String
	var target : Target
 }

 enum HealthProfile.Target {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : q@
	case block : Action
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : å? // +0x6d617246 (0x0)

	// ObjC -> Swift bridged methods
	0x16c80  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x16dc0  @objc LastBackedUpDateFormatter.init <stripped>
	0x16e60  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x16d70  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x16220  func <stripped> // method 
	0x162a0  func <stripped> // method 
	0x16680  func <stripped> // method 
	0x16990  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : uE // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x17730  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x17810  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x17bb0  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x180c0  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x17e70  func <stripped> // getter 
	0x17eb0  func <stripped> // setter 
	0x17f30  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x18660  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x18e00  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x19000  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x19140  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x19240  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x18200  func <stripped> // getter 
	0x18240  func <stripped> // setter 
	0x18290  func <stripped> // modifyCoroutine 
	0x182f0  func <stripped> // method 
	0x186b0  func <stripped> // method 
	0x18b40  func <stripped> // method 
	0x19020  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x190b0  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x19550  @objc ProfileBarButton.initWithCoder: <stripped>
	0x19690  @objc ProfileBarButton.init <stripped>
	0x19be0  @objc ProfileBarButton.initWithFrame: <stripped>
	0x19d70  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x19e40  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x19290  func <stripped> // getter 
	0x19340  func <stripped> // setter 
	0x19360  func <stripped> // modifyCoroutine 
	0x19470  func <stripped> // getter 
	0x194b0  func <stripped> // setter 
	0x19500  func <stripped> // modifyCoroutine 
	0x19c30  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1a3a0  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1a3e0  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1a500  @objc OrganDonationCell.title <stripped>
	0x1a540  @objc OrganDonationCell.setTitle: <stripped>
	0x1a5f0  @objc OrganDonationCell.subtitle <stripped>
	0x1a6a0  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1aa60  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1ab40  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1aba0  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1ab00  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1a3c0  func <stripped> // getter 
	0x1a400  func <stripped> // setter 
	0x1a420  func <stripped> // modifyCoroutine 
	0x1a520  func <stripped> // getter 
	0x1a560  func <stripped> // setter 
	0x1a580  func <stripped> // modifyCoroutine 
	0x1a650  func <stripped> // getter 
	0x1a700  func <stripped> // setter 
	0x1a770  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1b2d0  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1b300  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1b670  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1b750  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1b5e0  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1ada0  func <stripped> // getter 
	0x1af00  func <stripped> // getter 
	0x1b0a0  func <stripped> // getter 
	0x1b0e0  func <stripped> // setter 
	0x1b130  func <stripped> // modifyCoroutine 
	0x1b340  func <stripped> // method 
 }

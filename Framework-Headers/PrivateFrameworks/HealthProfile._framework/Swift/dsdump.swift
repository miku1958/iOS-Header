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
	let rawValue : ]A
 }

 class HealthProfile.ProfileContactCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var nameLabel : weak UILabel? // +0x8 (0x8)
	var avatarView : MeContactAvatarView // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : UE // +0x18 (0x28)

	// ObjC -> Swift bridged methods
	0x19f0  @objc ProfileContactCell.nameLabel <stripped>
	0x1a30  @objc ProfileContactCell.setNameLabel: <stripped>
	0x1ae0  @objc ProfileContactCell.avatarView <stripped>
	0x1b90  @objc ProfileContactCell.setAvatarView: <stripped>
	0x23e0  @objc ProfileContactCell.awakeFromNib <stripped>
	0x25c0  @objc ProfileContactCell.updateName <stripped>
	0x26a0  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x2700  @objc ProfileContactCell.initWithCoder: <stripped>
	0x2620  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x1a10  func <stripped> // getter 
	0x1a50  func <stripped> // setter 
	0x1a70  func <stripped> // modifyCoroutine 
	0x1b40  func <stripped> // getter 
	0x1bf0  func <stripped> // setter 
	0x1c60  func <stripped> // modifyCoroutine 
	0x1d40  func <stripped> // getter 
	0x1de0  func <stripped> // setter 
	0x1eb0  func <stripped> // modifyCoroutine 
	0x1fe0  func <stripped> // getter 
	0x2410  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x35b0  @objc MedicalIDProfileDataSource.init <stripped>
	0x33a0  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x2a30  func <stripped> // getter 
	0x2a50  func <stripped> // setter 
	0x2a70  func <stripped> // modifyCoroutine 
	0x2ac0  func <stripped> // getter 
	0x2ae0  func <stripped> // setter 
	0x2b00  func <stripped> // modifyCoroutine 
	0x2b70  func <stripped> // getter 
	0x2bc0  func <stripped> // setter 
	0x2c30  func <stripped> // modifyCoroutine 
	0x2d10  func <stripped> // getter 
	0x2d80  func <stripped> // setter 
	0x2df0  func <stripped> // modifyCoroutine 
	0x2e30  func <stripped> // method 
	0x2ec0  func <stripped> // method 
	0x3150  func <stripped> // method 
 }

 class HealthProfile.ProfileViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var $__lazy_storage_$_profilePrivacyExportDataSource : ProfilePrivacyExportDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_healthRecordsPluginAccountsList : E // +0x30 (0x10)
	let profileTableViewAdaptor : ProfileTableViewAdaptor // +0x40 (0x8)
	var $__lazy_storage_$_activityIndicatorDetailFooterView : ActivityIndicatorDetailFooterView // +0x48 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cloudSyncStateObserver : ßD // +0x50 (0x8)
	var restorationRowToLoad : RestorationRow // +0x58 (0x11)

	// ObjC -> Swift bridged methods
	0x48b0  @objc ProfileViewController.viewDidLoad <stripped>
	0x4e60  @objc ProfileViewController.viewDidAppear: <stripped>
	0x4f00  @objc ProfileViewController.dismissProfile: <stripped>
	0x5120  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x53c0  @objc ProfileViewController.initWithStyle: <stripped>
	0x5490  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x5580  @objc ProfileViewController.initWithCoder: <stripped>
	0x5230  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x3b70  func ProfileViewController.selectedDataSources(for:) // method 
	0x3d40  func <stripped> // getter 
	0x3db0  func <stripped> // setter 
	0x3dd0  func <stripped> // modifyCoroutine 
	0x3e90  func <stripped> // getter 
	0x4180  func <stripped> // setter 
	0x41b0  func <stripped> // modifyCoroutine 
	0x42b0  func ProfileViewController.adaptor(for:) // method 
	0x4300  func <stripped> // getter 
	0x4380  func <stripped> // setter 
	0x43a0  func <stripped> // modifyCoroutine 
	0x4470  func <stripped> // getter 
	0x44b0  func <stripped> // setter 
	0x4500  func <stripped> // modifyCoroutine 
	0x4ea0  func <stripped> // method 
	0x4f90  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case researchStudies : (studyBundleIdentifer: String?)
	case appAuthSheet : (applicationBundleIdentifier: String?)
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x5f30  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x5fd0  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x5ff0  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x6170  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x6200  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_profileNameSection : sC // +0x50 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_medicalDetailSection : sC // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0x9260  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x7e10  func <stripped> // getter 
	0x7fd0  func <stripped> // setter 
	0x8010  func <stripped> // modifyCoroutine 
	0x8210  func <stripped> // getter 
	0x8410  func <stripped> // setter 
	0x8460  func <stripped> // modifyCoroutine 
	0x86e0  func <stripped> // getter 
	0x8820  func <stripped> // setter 
	0x8870  func <stripped> // modifyCoroutine 
	0x8a00  func <stripped> // getter 
	0x8a40  func <stripped> // setter 
	0x8a80  func <stripped> // modifyCoroutine 
	0x8ad0  class func ProfileDataSource.__allocating_init() // init 
	0x8c60  func ProfileDataSource.addMeContactSection() // method 
	0x8e00  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0x9250  func <stripped> // method 
	0x92f0  func <stripped> // method 
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
	0xba10  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xbb00  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xbbe0  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xd5c0  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xd7d0  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xd840  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xd900  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xd980  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xda80  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xd8e0  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xd2c0  func <stripped> // getter 
	0xd300  func <stripped> // setter 
	0xd380  func <stripped> // modifyCoroutine 
	0xd5f0  func <stripped> // method 
	0xd7b0  func <stripped> // method 
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
	0xe680  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0xe860  @objc EditItem.init <stripped>
	0xe770  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0xdf80  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0xdfd0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0xe020  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0xe090  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0xe120  func <stripped> // method 
	0xe440  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ÙA
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0xf260  func MeContactCache.contact.getter // getter 
	0xf2e0  func <stripped> // method 
	0xf0e0  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0xf9c0  @objc FetchMeContactOperation.main <stripped>
	0xfa40  @objc FetchMeContactOperation.init <stripped>
	0xfa20  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0xf3b0  func <stripped> // getter 
	0xf3f0  func <stripped> // setter 
	0xf440  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_profileNameSection : sC // +0x50 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_medicalDetailSection : sC // +0x78 (0x28)
	let researchStudiesItem : ResearchStudySourcesItem // +0xa0 (0x20)
	let appSourcesItem : AppSourcesItem // +0xc0 (0x20)

	// Swift methods
	0x10170  func <stripped> // getter 
	0x102d0  func <stripped> // setter 
	0x10310  func <stripped> // modifyCoroutine 
	0x10510  func <stripped> // getter 
	0x10730  func <stripped> // setter 
	0x10780  func <stripped> // modifyCoroutine 
	0x10b70  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
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
	0x134a0  @objc OrganDonationProfileDataSource.init <stripped>
	0x13310  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x12fc0  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x12fe0  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x13000  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x130f0  func OrganDonationProfileDataSource.title.getter // getter 
	0x13160  func OrganDonationProfileDataSource.title.setter // setter 
	0x131d0  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x13210  class func <stripped> // method 
	0x13240  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x137b0  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x137d0  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x137f0  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x13810  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x13830  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x13850  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x13a10  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x14ab0  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x14ae0  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x14850  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x13a40  func <stripped> // method 
	0x13bd0  func <stripped> // method 
	0x13d70  func <stripped> // method 
 }

 struct HealthProfile.Action {

	// Properties
	var title : String
	var target : Target
 }

 enum HealthProfile.Target {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : Q@
	case block : Action
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : Å? // +0x6d617246 (0x0)

	// ObjC -> Swift bridged methods
	0x16c30  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x16d70  @objc LastBackedUpDateFormatter.init <stripped>
	0x16e10  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x16d20  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x161d0  func <stripped> // method 
	0x16250  func <stripped> // method 
	0x16630  func <stripped> // method 
	0x16940  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : UE // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x176e0  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x177c0  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x17b60  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x18070  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x17e20  func <stripped> // getter 
	0x17e60  func <stripped> // setter 
	0x17ee0  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x18610  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x18db0  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x18fb0  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x190f0  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x191f0  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x181b0  func <stripped> // getter 
	0x181f0  func <stripped> // setter 
	0x18240  func <stripped> // modifyCoroutine 
	0x182a0  func <stripped> // method 
	0x18660  func <stripped> // method 
	0x18af0  func <stripped> // method 
	0x18fd0  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x19060  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x19500  @objc ProfileBarButton.initWithCoder: <stripped>
	0x19640  @objc ProfileBarButton.init <stripped>
	0x19b90  @objc ProfileBarButton.initWithFrame: <stripped>
	0x19d20  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x19df0  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x19240  func <stripped> // getter 
	0x192f0  func <stripped> // setter 
	0x19310  func <stripped> // modifyCoroutine 
	0x19420  func <stripped> // getter 
	0x19460  func <stripped> // setter 
	0x194b0  func <stripped> // modifyCoroutine 
	0x19be0  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1a350  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1a390  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1a4b0  @objc OrganDonationCell.title <stripped>
	0x1a4f0  @objc OrganDonationCell.setTitle: <stripped>
	0x1a5a0  @objc OrganDonationCell.subtitle <stripped>
	0x1a650  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1aa10  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1aaf0  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1ab50  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1aab0  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1a370  func <stripped> // getter 
	0x1a3b0  func <stripped> // setter 
	0x1a3d0  func <stripped> // modifyCoroutine 
	0x1a4d0  func <stripped> // getter 
	0x1a510  func <stripped> // setter 
	0x1a530  func <stripped> // modifyCoroutine 
	0x1a600  func <stripped> // getter 
	0x1a6b0  func <stripped> // setter 
	0x1a720  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1b280  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1b2b0  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1b620  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1b700  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1b590  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1ad50  func <stripped> // getter 
	0x1aeb0  func <stripped> // getter 
	0x1b050  func <stripped> // getter 
	0x1b090  func <stripped> // setter 
	0x1b0e0  func <stripped> // modifyCoroutine 
	0x1b2f0  func <stripped> // method 
 }

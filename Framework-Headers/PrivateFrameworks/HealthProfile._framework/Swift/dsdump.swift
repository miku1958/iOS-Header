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
	let rawValue : UInt64
 }

 class HealthProfile.ProfileContactCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var nameLabel : weak UILabel? // +0x8 (0x8)
	var avatarView : weak MeContactAvatarView? // +0x10 (0x8)
	var item : SectionedDataSourceItem? // +0x18 (0x28)

	// ObjC -> Swift bridged methods
	0x2270  @objc ProfileContactCell.nameLabel <stripped>
	0x22b0  @objc ProfileContactCell.setNameLabel: <stripped>
	0x2360  @objc ProfileContactCell.avatarView <stripped>
	0x2410  @objc ProfileContactCell.setAvatarView: <stripped>
	0x2e90  @objc ProfileContactCell.awakeFromNib <stripped>
	0x3080  @objc ProfileContactCell.updateName <stripped>
	0x30d0  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x3130  @objc ProfileContactCell.initWithCoder: <stripped>
	0x31c0  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x2290  func <stripped> // getter 
	0x22d0  func <stripped> // setter 
	0x22f0  func <stripped> // modifyCoroutine 
	0x23c0  func <stripped> // getter 
	0x2470  func <stripped> // setter 
	0x24e0  func <stripped> // modifyCoroutine 
	0x25c0  func <stripped> // getter 
	0x2660  func <stripped> // setter 
	0x2730  func <stripped> // modifyCoroutine 
	0x2870  func <stripped> // getter 
	0x2ec0  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x4150  @objc MedicalIDProfileDataSource.init <stripped>
	0x41c0  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x3540  func <stripped> // getter 
	0x3560  func <stripped> // setter 
	0x3580  func <stripped> // modifyCoroutine 
	0x35d0  func <stripped> // getter 
	0x35f0  func <stripped> // setter 
	0x3610  func <stripped> // modifyCoroutine 
	0x3680  func <stripped> // getter 
	0x36d0  func <stripped> // setter 
	0x3740  func <stripped> // modifyCoroutine 
	0x3820  func <stripped> // getter 
	0x3890  func <stripped> // setter 
	0x3900  func <stripped> // modifyCoroutine 
	0x3940  func <stripped> // method 
	0x3a00  func <stripped> // method 
	0x3d10  func <stripped> // method 
 }

 class HealthProfile.ProfileViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var $__lazy_storage_$_profilePrivacyExportDataSource : ProfilePrivacyExportDataSource? // +0x28 (0x8)
	var $__lazy_storage_$_healthRecordsPluginAccountsList : PluginAccountsDelegate?? // +0x30 (0x10)
	let profileTableViewAdaptor : ProfileTableViewAdaptor // +0x40 (0x8)
	var $__lazy_storage_$_activityIndicatorDetailFooterView : ActivityIndicatorDetailFooterView? // +0x48 (0x8)
	var cloudSyncStateObserver : CloudSyncStateObserver? // +0x50 (0x8)
	var restorationRowToLoad : RestorationRow // +0x58 (0x1)

	// ObjC -> Swift bridged methods
	0x5a20  @objc ProfileViewController.viewDidLoad <stripped>
	0x5ae0  @objc ProfileViewController.viewDidAppear: <stripped>
	0x5b80  @objc ProfileViewController.dismissProfile: <stripped>
	0x5c80  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x5e20  @objc ProfileViewController.initWithStyle: <stripped>
	0x6010  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x60d0  @objc ProfileViewController.initWithCoder: <stripped>
	0x61d0  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x4880  func ProfileViewController.selectedDataSources(for:) // method 
	0x4c30  func <stripped> // getter 
	0x4ca0  func <stripped> // setter 
	0x4cc0  func <stripped> // modifyCoroutine 
	0x4d80  func <stripped> // getter 
	0x5160  func <stripped> // setter 
	0x5190  func <stripped> // modifyCoroutine 
	0x52c0  func ProfileViewController.adaptor(for:) // method 
	0x5320  func <stripped> // getter 
	0x53a0  func <stripped> // setter 
	0x53c0  func <stripped> // modifyCoroutine 
	0x5480  func <stripped> // getter 
	0x54c0  func <stripped> // setter 
	0x5510  func <stripped> // modifyCoroutine 
	0x5b20  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x6980  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x69b0  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x69d0  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x6bc0  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x6c70  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource? // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0xa7e0  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x8ec0  func <stripped> // getter 
	0x90a0  func <stripped> // setter 
	0x90e0  func <stripped> // modifyCoroutine 
	0x9340  func <stripped> // getter 
	0x9540  func <stripped> // setter 
	0x9590  func <stripped> // modifyCoroutine 
	0x98c0  func <stripped> // getter 
	0x9a00  func <stripped> // setter 
	0x9a50  func <stripped> // modifyCoroutine 
	0x9c40  func <stripped> // getter 
	0x9c80  func <stripped> // setter 
	0x9cc0  func <stripped> // modifyCoroutine 
	0x9d10  class func ProfileDataSource.__allocating_init() // init 
	0x9f00  func ProfileDataSource.addMeContactSection() // method 
	0xa2f0  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0xa7d0  func <stripped> // method 
	0xa870  func <stripped> // method 
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
	0xd1f0  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xd2e0  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xd3b0  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xf180  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xf460  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xf4d0  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xf540  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xf5d0  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xf6f0  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xf7e0  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xee70  func <stripped> // getter 
	0xeeb0  func <stripped> // setter 
	0xef30  func <stripped> // modifyCoroutine 
	0xf1b0  func <stripped> // method 
	0xf440  func <stripped> // method 
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
	0x104f0  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0x10640  @objc EditItem.init <stripped>
	0x10750  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0xfcf0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0xfd40  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0xfd90  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0xfe00  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0xfe90  func <stripped> // method 
	0x101f0  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
	var lock : UnfairLock
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x110d0  func MeContactCache.contact.getter // getter 
	0x11150  func <stripped> // method 
	0x10f30  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0x119d0  @objc FetchMeContactOperation.main <stripped>
	0x11a00  @objc FetchMeContactOperation.init <stripped>
	0x11ad0  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0x11230  func <stripped> // getter 
	0x11270  func <stripped> // setter 
	0x112c0  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)

	// Swift methods
	0x122c0  func <stripped> // getter 
	0x12420  func <stripped> // setter 
	0x12460  func <stripped> // modifyCoroutine 
	0x126c0  func <stripped> // getter 
	0x128e0  func <stripped> // setter 
	0x12930  func <stripped> // modifyCoroutine 
	0x12a90  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
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
	0x14b70  @objc OrganDonationProfileDataSource.init <stripped>
	0x14be0  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x14700  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x14720  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x14740  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x14830  func OrganDonationProfileDataSource.title.getter // getter 
	0x148a0  func OrganDonationProfileDataSource.title.setter // setter 
	0x14910  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x14950  class func <stripped> // method 
	0x14980  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x14f70  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x14f90  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x14fb0  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x14fd0  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x14ff0  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x15010  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x151e0  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x165a0  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x165d0  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x16650  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x15210  func <stripped> // method 
	0x153c0  func <stripped> // method 
	0x15580  func <stripped> // method 
 }

 struct HealthProfile.Action {

	// Properties
	var title : String
	var target : Target
 }

 enum HealthProfile.Target {

	// Properties
	case url : URL
	case block : Action
 }

 class HealthProfile.LastBackedUpDateFormatter : NSFormatter /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let calendar : Calendar // +0x6d617246 (0x0)

	// ObjC -> Swift bridged methods
	0x18ea0  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x18f80  @objc LastBackedUpDateFormatter.init <stripped>
	0x19020  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x19120  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x18140  func <stripped> // method 
	0x181d0  func <stripped> // method 
	0x18830  func <stripped> // method 
	0x18b40  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var item : SectionedDataSourceItem? // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x19c80  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x19d80  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x1a1a0  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x1a790  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x1a510  func <stripped> // getter 
	0x1a550  func <stripped> // setter 
	0x1a5d0  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x1ae10  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x1b680  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x1b860  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x1b9a0  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x1baa0  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x1a8e0  func <stripped> // getter 
	0x1a920  func <stripped> // setter 
	0x1a970  func <stripped> // modifyCoroutine 
	0x1a9d0  func <stripped> // method 
	0x1ae60  func <stripped> // method 
	0x1b380  func <stripped> // method 
	0x1b880  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x1b910  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x1bde0  @objc ProfileBarButton.initWithCoder: <stripped>
	0x1bf00  @objc ProfileBarButton.init <stripped>
	0x1c7f0  @objc ProfileBarButton.initWithFrame: <stripped>
	0x1c9a0  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x1ca80  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x1bb00  func <stripped> // getter 
	0x1bbd0  func <stripped> // setter 
	0x1bbf0  func <stripped> // modifyCoroutine 
	0x1bd00  func <stripped> // getter 
	0x1bd40  func <stripped> // setter 
	0x1bd90  func <stripped> // modifyCoroutine 
	0x1c840  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1d1c0  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1d200  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1d320  @objc OrganDonationCell.title <stripped>
	0x1d360  @objc OrganDonationCell.setTitle: <stripped>
	0x1d410  @objc OrganDonationCell.subtitle <stripped>
	0x1d4c0  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1d950  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1d980  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1d9e0  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1dab0  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1d1e0  func <stripped> // getter 
	0x1d220  func <stripped> // setter 
	0x1d240  func <stripped> // modifyCoroutine 
	0x1d340  func <stripped> // getter 
	0x1d380  func <stripped> // setter 
	0x1d3a0  func <stripped> // modifyCoroutine 
	0x1d470  func <stripped> // getter 
	0x1d520  func <stripped> // setter 
	0x1d590  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1e2a0  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1e2d0  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1e870  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1e980  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1ea70  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1dcf0  func <stripped> // getter 
	0x1dea0  func <stripped> // getter 
	0x1e040  func <stripped> // getter 
	0x1e080  func <stripped> // setter 
	0x1e0d0  func <stripped> // modifyCoroutine 
	0x1e350  func <stripped> // method 
 }

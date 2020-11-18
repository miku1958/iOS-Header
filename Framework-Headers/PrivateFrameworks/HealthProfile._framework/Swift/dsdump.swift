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
	0x22e0  @objc ProfileContactCell.nameLabel <stripped>
	0x2320  @objc ProfileContactCell.setNameLabel: <stripped>
	0x23d0  @objc ProfileContactCell.avatarView <stripped>
	0x2480  @objc ProfileContactCell.setAvatarView: <stripped>
	0x2f00  @objc ProfileContactCell.awakeFromNib <stripped>
	0x30f0  @objc ProfileContactCell.updateName <stripped>
	0x3140  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x31a0  @objc ProfileContactCell.initWithCoder: <stripped>
	0x3230  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x2300  func <stripped> // getter 
	0x2340  func <stripped> // setter 
	0x2360  func <stripped> // modifyCoroutine 
	0x2430  func <stripped> // getter 
	0x24e0  func <stripped> // setter 
	0x2550  func <stripped> // modifyCoroutine 
	0x2630  func <stripped> // getter 
	0x26d0  func <stripped> // setter 
	0x27a0  func <stripped> // modifyCoroutine 
	0x28e0  func <stripped> // getter 
	0x2f30  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x41c0  @objc MedicalIDProfileDataSource.init <stripped>
	0x4230  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x35b0  func <stripped> // getter 
	0x35d0  func <stripped> // setter 
	0x35f0  func <stripped> // modifyCoroutine 
	0x3640  func <stripped> // getter 
	0x3660  func <stripped> // setter 
	0x3680  func <stripped> // modifyCoroutine 
	0x36f0  func <stripped> // getter 
	0x3740  func <stripped> // setter 
	0x37b0  func <stripped> // modifyCoroutine 
	0x3890  func <stripped> // getter 
	0x3900  func <stripped> // setter 
	0x3970  func <stripped> // modifyCoroutine 
	0x39b0  func <stripped> // method 
	0x3a70  func <stripped> // method 
	0x3d80  func <stripped> // method 
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
	0x5a90  @objc ProfileViewController.viewDidLoad <stripped>
	0x5b50  @objc ProfileViewController.viewDidAppear: <stripped>
	0x5bf0  @objc ProfileViewController.dismissProfile: <stripped>
	0x5cf0  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x5e90  @objc ProfileViewController.initWithStyle: <stripped>
	0x6080  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x6140  @objc ProfileViewController.initWithCoder: <stripped>
	0x6240  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x48f0  func ProfileViewController.selectedDataSources(for:) // method 
	0x4ca0  func <stripped> // getter 
	0x4d10  func <stripped> // setter 
	0x4d30  func <stripped> // modifyCoroutine 
	0x4df0  func <stripped> // getter 
	0x51d0  func <stripped> // setter 
	0x5200  func <stripped> // modifyCoroutine 
	0x5330  func ProfileViewController.adaptor(for:) // method 
	0x5390  func <stripped> // getter 
	0x5410  func <stripped> // setter 
	0x5430  func <stripped> // modifyCoroutine 
	0x54f0  func <stripped> // getter 
	0x5530  func <stripped> // setter 
	0x5580  func <stripped> // modifyCoroutine 
	0x5b90  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x69f0  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x6a20  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x6a40  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x6c30  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x6ce0  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource? // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0xa850  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x8f30  func <stripped> // getter 
	0x9110  func <stripped> // setter 
	0x9150  func <stripped> // modifyCoroutine 
	0x93b0  func <stripped> // getter 
	0x95b0  func <stripped> // setter 
	0x9600  func <stripped> // modifyCoroutine 
	0x9930  func <stripped> // getter 
	0x9a70  func <stripped> // setter 
	0x9ac0  func <stripped> // modifyCoroutine 
	0x9cb0  func <stripped> // getter 
	0x9cf0  func <stripped> // setter 
	0x9d30  func <stripped> // modifyCoroutine 
	0x9d80  class func ProfileDataSource.__allocating_init() // init 
	0x9f70  func ProfileDataSource.addMeContactSection() // method 
	0xa360  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0xa840  func <stripped> // method 
	0xa8e0  func <stripped> // method 
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
	0xd260  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xd350  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xd420  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xf1f0  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xf4d0  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xf540  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xf5b0  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xf640  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xf760  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xf850  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xeee0  func <stripped> // getter 
	0xef20  func <stripped> // setter 
	0xefa0  func <stripped> // modifyCoroutine 
	0xf220  func <stripped> // method 
	0xf4b0  func <stripped> // method 
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
	0x10560  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0x106b0  @objc EditItem.init <stripped>
	0x107c0  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0xfd60  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0xfdb0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0xfe00  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0xfe70  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0xff00  func <stripped> // method 
	0x10260  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
	var lock : UnfairLock
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x11140  func MeContactCache.contact.getter // getter 
	0x111c0  func <stripped> // method 
	0x10fa0  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0x11a40  @objc FetchMeContactOperation.main <stripped>
	0x11a70  @objc FetchMeContactOperation.init <stripped>
	0x11b40  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0x112a0  func <stripped> // getter 
	0x112e0  func <stripped> // setter 
	0x11330  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)

	// Swift methods
	0x12330  func <stripped> // getter 
	0x12490  func <stripped> // setter 
	0x124d0  func <stripped> // modifyCoroutine 
	0x12730  func <stripped> // getter 
	0x12950  func <stripped> // setter 
	0x129a0  func <stripped> // modifyCoroutine 
	0x12b00  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
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
	0x14be0  @objc OrganDonationProfileDataSource.init <stripped>
	0x14c50  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x14770  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x14790  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x147b0  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x148a0  func OrganDonationProfileDataSource.title.getter // getter 
	0x14910  func OrganDonationProfileDataSource.title.setter // setter 
	0x14980  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x149c0  class func <stripped> // method 
	0x149f0  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x14fe0  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x15000  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x15020  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x15040  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x15060  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x15080  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x15250  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x16610  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x16640  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x166c0  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x15280  func <stripped> // method 
	0x15430  func <stripped> // method 
	0x155f0  func <stripped> // method 
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
	0x18f10  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x18ff0  @objc LastBackedUpDateFormatter.init <stripped>
	0x19090  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x19190  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x181b0  func <stripped> // method 
	0x18240  func <stripped> // method 
	0x188a0  func <stripped> // method 
	0x18bb0  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var item : SectionedDataSourceItem? // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x19cf0  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x19df0  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x1a210  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x1a800  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x1a580  func <stripped> // getter 
	0x1a5c0  func <stripped> // setter 
	0x1a640  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x1ae80  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x1b6f0  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x1b8d0  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x1ba10  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x1bb10  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x1a950  func <stripped> // getter 
	0x1a990  func <stripped> // setter 
	0x1a9e0  func <stripped> // modifyCoroutine 
	0x1aa40  func <stripped> // method 
	0x1aed0  func <stripped> // method 
	0x1b3f0  func <stripped> // method 
	0x1b8f0  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x1b980  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x1be50  @objc ProfileBarButton.initWithCoder: <stripped>
	0x1bf70  @objc ProfileBarButton.init <stripped>
	0x1c860  @objc ProfileBarButton.initWithFrame: <stripped>
	0x1ca10  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x1caf0  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x1bb70  func <stripped> // getter 
	0x1bc40  func <stripped> // setter 
	0x1bc60  func <stripped> // modifyCoroutine 
	0x1bd70  func <stripped> // getter 
	0x1bdb0  func <stripped> // setter 
	0x1be00  func <stripped> // modifyCoroutine 
	0x1c8b0  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1d230  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1d270  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1d390  @objc OrganDonationCell.title <stripped>
	0x1d3d0  @objc OrganDonationCell.setTitle: <stripped>
	0x1d480  @objc OrganDonationCell.subtitle <stripped>
	0x1d530  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1d9c0  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1d9f0  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1da50  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1db20  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1d250  func <stripped> // getter 
	0x1d290  func <stripped> // setter 
	0x1d2b0  func <stripped> // modifyCoroutine 
	0x1d3b0  func <stripped> // getter 
	0x1d3f0  func <stripped> // setter 
	0x1d410  func <stripped> // modifyCoroutine 
	0x1d4e0  func <stripped> // getter 
	0x1d590  func <stripped> // setter 
	0x1d600  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1e310  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1e340  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1e8e0  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1e9f0  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1eae0  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1dd60  func <stripped> // getter 
	0x1df10  func <stripped> // getter 
	0x1e0b0  func <stripped> // getter 
	0x1e0f0  func <stripped> // setter 
	0x1e140  func <stripped> // modifyCoroutine 
	0x1e3c0  func <stripped> // method 
 }

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
	0x2390  @objc ProfileContactCell.nameLabel <stripped>
	0x23d0  @objc ProfileContactCell.setNameLabel: <stripped>
	0x2480  @objc ProfileContactCell.avatarView <stripped>
	0x2530  @objc ProfileContactCell.setAvatarView: <stripped>
	0x2fb0  @objc ProfileContactCell.awakeFromNib <stripped>
	0x31a0  @objc ProfileContactCell.updateName <stripped>
	0x31f0  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x3250  @objc ProfileContactCell.initWithCoder: <stripped>
	0x32e0  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x23b0  func <stripped> // getter 
	0x23f0  func <stripped> // setter 
	0x2410  func <stripped> // modifyCoroutine 
	0x24e0  func <stripped> // getter 
	0x2590  func <stripped> // setter 
	0x2600  func <stripped> // modifyCoroutine 
	0x26e0  func <stripped> // getter 
	0x2780  func <stripped> // setter 
	0x2850  func <stripped> // modifyCoroutine 
	0x2990  func <stripped> // getter 
	0x2fe0  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x4270  @objc MedicalIDProfileDataSource.init <stripped>
	0x42e0  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x3660  func <stripped> // getter 
	0x3680  func <stripped> // setter 
	0x36a0  func <stripped> // modifyCoroutine 
	0x36f0  func <stripped> // getter 
	0x3710  func <stripped> // setter 
	0x3730  func <stripped> // modifyCoroutine 
	0x37a0  func <stripped> // getter 
	0x37f0  func <stripped> // setter 
	0x3860  func <stripped> // modifyCoroutine 
	0x3940  func <stripped> // getter 
	0x39b0  func <stripped> // setter 
	0x3a20  func <stripped> // modifyCoroutine 
	0x3a60  func <stripped> // method 
	0x3b20  func <stripped> // method 
	0x3e30  func <stripped> // method 
 }

 class HealthProfile.ProfileViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var $__lazy_storage_$_profilePrivacyExportDataSource : ProfilePrivacyExportDataSource? // +0x28 (0x8)
	var $__lazy_storage_$_healthRecordsPluginAccountsList : PluginAccountsDelegate?? // +0x30 (0x10)
	let profileTableViewAdaptor : ProfileTableViewAdaptor // +0x40 (0x8)
	var $__lazy_storage_$_activityIndicatorDetailFooterView : ActivityIndicatorDetailFooterView? // +0x48 (0x8)
	var cloudSyncStateObserver : CloudSyncStateObserver? // +0x50 (0x8)
	var restorationRowToLoad : RestorationRow // +0x58 (0x10)

	// ObjC -> Swift bridged methods
	0x5ae0  @objc ProfileViewController.viewDidLoad <stripped>
	0x5f60  @objc ProfileViewController.viewDidAppear: <stripped>
	0x6000  @objc ProfileViewController.dismissProfile: <stripped>
	0x6100  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x62b0  @objc ProfileViewController.initWithStyle: <stripped>
	0x64b0  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x6570  @objc ProfileViewController.initWithCoder: <stripped>
	0x6680  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x49a0  func ProfileViewController.selectedDataSources(for:) // method 
	0x4d50  func <stripped> // getter 
	0x4dc0  func <stripped> // setter 
	0x4de0  func <stripped> // modifyCoroutine 
	0x4ea0  func <stripped> // getter 
	0x5280  func <stripped> // setter 
	0x52b0  func <stripped> // modifyCoroutine 
	0x53e0  func ProfileViewController.adaptor(for:) // method 
	0x5440  func <stripped> // getter 
	0x54c0  func <stripped> // setter 
	0x54e0  func <stripped> // modifyCoroutine 
	0x55a0  func <stripped> // getter 
	0x55e0  func <stripped> // setter 
	0x5630  func <stripped> // modifyCoroutine 
	0x5fa0  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case researchStudies : (studyBundleIdentifer: String?)
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x70a0  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x70d0  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x70f0  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x72e0  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x7390  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource? // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0xaee0  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x95e0  func <stripped> // getter 
	0x97a0  func <stripped> // setter 
	0x97e0  func <stripped> // modifyCoroutine 
	0x9a40  func <stripped> // getter 
	0x9c40  func <stripped> // setter 
	0x9c90  func <stripped> // modifyCoroutine 
	0x9fc0  func <stripped> // getter 
	0xa100  func <stripped> // setter 
	0xa150  func <stripped> // modifyCoroutine 
	0xa340  func <stripped> // getter 
	0xa380  func <stripped> // setter 
	0xa3c0  func <stripped> // modifyCoroutine 
	0xa410  class func ProfileDataSource.__allocating_init() // init 
	0xa600  func ProfileDataSource.addMeContactSection() // method 
	0xa9f0  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0xaed0  func <stripped> // method 
	0xaf70  func <stripped> // method 
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
	0xd8d0  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xd9c0  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xda90  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xf860  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xfb40  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xfbb0  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xfc20  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xfcb0  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xfdd0  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xfec0  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xf550  func <stripped> // getter 
	0xf590  func <stripped> // setter 
	0xf610  func <stripped> // modifyCoroutine 
	0xf890  func <stripped> // method 
	0xfb20  func <stripped> // method 
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
	0x10bd0  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0x10d20  @objc EditItem.init <stripped>
	0x10e30  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0x103d0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0x10420  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0x10470  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0x104e0  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0x10570  func <stripped> // method 
	0x108d0  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
	var lock : UnfairLock
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x11790  func MeContactCache.contact.getter // getter 
	0x11810  func <stripped> // method 
	0x115f0  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0x12090  @objc FetchMeContactOperation.main <stripped>
	0x120c0  @objc FetchMeContactOperation.init <stripped>
	0x12190  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0x118f0  func <stripped> // getter 
	0x11930  func <stripped> // setter 
	0x11980  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	let researchStudiesItem : ResearchStudySourcesItem // +0xa0 (0x20)

	// Swift methods
	0x12980  func <stripped> // getter 
	0x12ae0  func <stripped> // setter 
	0x12b20  func <stripped> // modifyCoroutine 
	0x12d80  func <stripped> // getter 
	0x12fa0  func <stripped> // setter 
	0x12ff0  func <stripped> // modifyCoroutine 
	0x131f0  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
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
	0x159e0  @objc OrganDonationProfileDataSource.init <stripped>
	0x15a50  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x15570  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x15590  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x155b0  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x156a0  func OrganDonationProfileDataSource.title.getter // getter 
	0x15710  func OrganDonationProfileDataSource.title.setter // setter 
	0x15780  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x157c0  class func <stripped> // method 
	0x157f0  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x15de0  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x15e00  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x15e20  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x15e40  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x15e60  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x15e80  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x16050  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x17410  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x17440  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x174c0  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x16080  func <stripped> // method 
	0x16230  func <stripped> // method 
	0x163f0  func <stripped> // method 
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
	0x19d10  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x19df0  @objc LastBackedUpDateFormatter.init <stripped>
	0x19e90  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x19f90  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x18fb0  func <stripped> // method 
	0x19040  func <stripped> // method 
	0x196a0  func <stripped> // method 
	0x199b0  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var item : SectionedDataSourceItem? // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x1aaf0  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x1abf0  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x1b010  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x1b600  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x1b380  func <stripped> // getter 
	0x1b3c0  func <stripped> // setter 
	0x1b440  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x1bc80  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x1c4f0  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x1c6d0  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x1c810  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x1c910  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x1b750  func <stripped> // getter 
	0x1b790  func <stripped> // setter 
	0x1b7e0  func <stripped> // modifyCoroutine 
	0x1b840  func <stripped> // method 
	0x1bcd0  func <stripped> // method 
	0x1c1f0  func <stripped> // method 
	0x1c6f0  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x1c780  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x1cc50  @objc ProfileBarButton.initWithCoder: <stripped>
	0x1cd70  @objc ProfileBarButton.init <stripped>
	0x1d660  @objc ProfileBarButton.initWithFrame: <stripped>
	0x1d810  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x1d8f0  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x1c970  func <stripped> // getter 
	0x1ca40  func <stripped> // setter 
	0x1ca60  func <stripped> // modifyCoroutine 
	0x1cb70  func <stripped> // getter 
	0x1cbb0  func <stripped> // setter 
	0x1cc00  func <stripped> // modifyCoroutine 
	0x1d6b0  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1e030  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1e070  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1e190  @objc OrganDonationCell.title <stripped>
	0x1e1d0  @objc OrganDonationCell.setTitle: <stripped>
	0x1e280  @objc OrganDonationCell.subtitle <stripped>
	0x1e330  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1e7c0  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1e7f0  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1e850  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1e920  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1e050  func <stripped> // getter 
	0x1e090  func <stripped> // setter 
	0x1e0b0  func <stripped> // modifyCoroutine 
	0x1e1b0  func <stripped> // getter 
	0x1e1f0  func <stripped> // setter 
	0x1e210  func <stripped> // modifyCoroutine 
	0x1e2e0  func <stripped> // getter 
	0x1e390  func <stripped> // setter 
	0x1e400  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1f110  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1f140  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1f6e0  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1f7f0  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1f8e0  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1eb60  func <stripped> // getter 
	0x1ed10  func <stripped> // getter 
	0x1eeb0  func <stripped> // getter 
	0x1eef0  func <stripped> // setter 
	0x1ef40  func <stripped> // modifyCoroutine 
	0x1f1c0  func <stripped> // method 
 }

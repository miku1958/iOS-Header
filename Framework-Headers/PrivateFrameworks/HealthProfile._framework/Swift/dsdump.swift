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
	0x23a0  @objc ProfileContactCell.nameLabel <stripped>
	0x23e0  @objc ProfileContactCell.setNameLabel: <stripped>
	0x2490  @objc ProfileContactCell.avatarView <stripped>
	0x2540  @objc ProfileContactCell.setAvatarView: <stripped>
	0x2fc0  @objc ProfileContactCell.awakeFromNib <stripped>
	0x31b0  @objc ProfileContactCell.updateName <stripped>
	0x3200  @objc ProfileContactCell.initWithStyle:reuseIdentifier: <stripped>
	0x3260  @objc ProfileContactCell.initWithCoder: <stripped>
	0x32f0  @objc ProfileContactCell..cxx_destruct <stripped>

	// Swift methods
	0x23c0  func <stripped> // getter 
	0x2400  func <stripped> // setter 
	0x2420  func <stripped> // modifyCoroutine 
	0x24f0  func <stripped> // getter 
	0x25a0  func <stripped> // setter 
	0x2610  func <stripped> // modifyCoroutine 
	0x26f0  func <stripped> // getter 
	0x2790  func <stripped> // setter 
	0x2860  func <stripped> // modifyCoroutine 
	0x29a0  func <stripped> // getter 
	0x2ff0  func <stripped> // method 
 }

 class HealthProfile.MedicalIDProfileDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var reuseIdentifier : String // +0x8 (0x10)
	var medicalIDViewController : HKMedicalIDViewController? // +0x18 (0x8)
	var parentViewController : weak UIViewController? // +0x20 (0x8)
	var tableViewCell : weak UITableViewCell? // +0x28 (0x8)
	var title : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x4280  @objc MedicalIDProfileDataSource.init <stripped>
	0x42f0  @objc MedicalIDProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x3670  func <stripped> // getter 
	0x3690  func <stripped> // setter 
	0x36b0  func <stripped> // modifyCoroutine 
	0x3700  func <stripped> // getter 
	0x3720  func <stripped> // setter 
	0x3740  func <stripped> // modifyCoroutine 
	0x37b0  func <stripped> // getter 
	0x3800  func <stripped> // setter 
	0x3870  func <stripped> // modifyCoroutine 
	0x3950  func <stripped> // getter 
	0x39c0  func <stripped> // setter 
	0x3a30  func <stripped> // modifyCoroutine 
	0x3a70  func <stripped> // method 
	0x3b30  func <stripped> // method 
	0x3e40  func <stripped> // method 
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
	0x5af0  @objc ProfileViewController.viewDidLoad <stripped>
	0x5f70  @objc ProfileViewController.viewDidAppear: <stripped>
	0x6010  @objc ProfileViewController.dismissProfile: <stripped>
	0x6110  @objc ProfileViewController.viewWillDisappear: <stripped>
	0x62c0  @objc ProfileViewController.initWithStyle: <stripped>
	0x64c0  @objc ProfileViewController.initWithNibName:bundle: <stripped>
	0x6580  @objc ProfileViewController.initWithCoder: <stripped>
	0x6690  @objc ProfileViewController..cxx_destruct <stripped>

	// Swift methods
	0x49b0  func ProfileViewController.selectedDataSources(for:) // method 
	0x4d60  func <stripped> // getter 
	0x4dd0  func <stripped> // setter 
	0x4df0  func <stripped> // modifyCoroutine 
	0x4eb0  func <stripped> // getter 
	0x5290  func <stripped> // setter 
	0x52c0  func <stripped> // modifyCoroutine 
	0x53f0  func ProfileViewController.adaptor(for:) // method 
	0x5450  func <stripped> // getter 
	0x54d0  func <stripped> // setter 
	0x54f0  func <stripped> // modifyCoroutine 
	0x55b0  func <stripped> // getter 
	0x55f0  func <stripped> // setter 
	0x5640  func <stripped> // modifyCoroutine 
	0x5fb0  func <stripped> // method 
 }

 enum HealthProfile.RestorationRow {

	// Properties
	case researchStudies : (studyBundleIdentifer: String?)
	case medicalID  
 }

 class HealthProfile.ProfileButtonCell : ProfileBasicCell {
	// ObjC -> Swift bridged methods
	0x70b0  @objc ProfileButtonCell.awakeFromNib <stripped>
	0x70e0  @objc ProfileButtonCell.touchesBegan:withEvent: <stripped>
	0x7100  @objc ProfileButtonCell.touchesEnded:withEvent: <stripped>
	0x72f0  @objc ProfileButtonCell.initWithStyle:reuseIdentifier: <stripped>
	0x73a0  @objc ProfileButtonCell.initWithCoder: <stripped>
 }

 class HealthProfile.ProfileDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	var $__lazy_storage_$_meContactItem : ProfileContactItem // +0xa0 (0x20)
	var medicalIDItem : MedicalIDProfileDataSource? // +0xc0 (0x8)

	// ObjC -> Swift bridged methods
	0xaef0  @objc ProfileDataSource.didChangeName: <stripped>

	// Swift methods
	0x95f0  func <stripped> // getter 
	0x97b0  func <stripped> // setter 
	0x97f0  func <stripped> // modifyCoroutine 
	0x9a50  func <stripped> // getter 
	0x9c50  func <stripped> // setter 
	0x9ca0  func <stripped> // modifyCoroutine 
	0x9fd0  func <stripped> // getter 
	0xa110  func <stripped> // setter 
	0xa160  func <stripped> // modifyCoroutine 
	0xa350  func <stripped> // getter 
	0xa390  func <stripped> // setter 
	0xa3d0  func <stripped> // modifyCoroutine 
	0xa420  class func ProfileDataSource.__allocating_init() // init 
	0xa610  func ProfileDataSource.addMeContactSection() // method 
	0xaa00  func ProfileDataSource.addMedicalDetailsSection(shouldShowOrganDonation:) // method 
	0xaee0  func <stripped> // method 
	0xaf80  func <stripped> // method 
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
	0xd8e0  @objc ProfileTableViewAdaptor.tableView:cellForRowAtIndexPath: <stripped>
	0xd9d0  @objc ProfileTableViewAdaptor.respondsToSelector: <stripped>
	0xdaa0  @objc ProfileTableViewAdaptor.init <stripped>
 }

 class HealthProfile.OrganDonationRegisteredViewController : type metadata for CompoundDataSourceViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	var organDonationRegisteredViewControllerDelegate : OrganDonationRegisteredViewControllerDelegate

	// ObjC -> Swift bridged methods
	0xf870  @objc OrganDonationRegisteredViewController.viewDidLoad <stripped>
	0xfb50  @objc OrganDonationRegisteredViewController.learnMore: <stripped>
	0xfbc0  @objc OrganDonationRegisteredViewController.tableView:heightForHeaderInSection: <stripped>
	0xfc30  @objc OrganDonationRegisteredViewController.initWithStyle: <stripped>
	0xfcc0  @objc OrganDonationRegisteredViewController.initWithNibName:bundle: <stripped>
	0xfde0  @objc OrganDonationRegisteredViewController.initWithCoder: <stripped>
	0xfed0  @objc OrganDonationRegisteredViewController..cxx_destruct <stripped>

	// Swift methods
	0xf560  func <stripped> // getter 
	0xf5a0  func <stripped> // setter 
	0xf620  func <stripped> // modifyCoroutine 
	0xf8a0  func <stripped> // method 
	0xfb30  func <stripped> // method 
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
	0x10be0  @objc EditItem.listenForMedicalIDUpdatesWithNotification: <stripped>
	0x10d30  @objc EditItem.init <stripped>
	0x10e40  @objc EditItem..cxx_destruct <stripped>

	// Swift methods
	0x103e0  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.getter // getter 
	0x10430  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.setter // setter 
	0x10480  func OrganDonationRegisteredDataSource.EditItem.reuseIdentifier.modify // modifyCoroutine 
	0x104f0  func OrganDonationRegisteredDataSource.EditItem.tableView(_:viewController:didSelectRowAt:) // method 
	0x10580  func <stripped> // method 
	0x108e0  func <stripped> // method 
 }

 class HealthProfile.MeContactCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contact : CNContact?
	var lock : UnfairLock
	var currentOperation : FetchMeContactOperation

	// Swift methods
	0x117a0  func MeContactCache.contact.getter // getter 
	0x11820  func <stripped> // method 
	0x11600  class func <stripped> // init 
 }

 class HealthProfile.FetchMeContactOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var contact : CNContact?

	// ObjC -> Swift bridged methods
	0x120a0  @objc FetchMeContactOperation.main <stripped>
	0x120d0  @objc FetchMeContactOperation.init <stripped>
	0x121a0  @objc FetchMeContactOperation..cxx_destruct <stripped>

	// Swift methods
	0x11900  func <stripped> // getter 
	0x11940  func <stripped> // setter 
	0x11990  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.ProfilePrivacyExportDataSource : type metadata for MutableArrayDataSource /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_profileNameSection : ArrayDataSourceSection? // +0x50 (0x28)
	var $__lazy_storage_$_medicalDetailSection : ArrayDataSourceSection? // +0x78 (0x28)
	let researchStudiesItem : ResearchStudySourcesItem // +0xa0 (0x20)

	// Swift methods
	0x12990  func <stripped> // getter 
	0x12af0  func <stripped> // setter 
	0x12b30  func <stripped> // modifyCoroutine 
	0x12d90  func <stripped> // getter 
	0x12fb0  func <stripped> // setter 
	0x13000  func <stripped> // modifyCoroutine 
	0x13200  class func ProfilePrivacyExportDataSource.__allocating_init() // init 
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
	0x159f0  @objc OrganDonationProfileDataSource.init <stripped>
	0x15a60  @objc OrganDonationProfileDataSource..cxx_destruct <stripped>

	// Swift methods
	0x15580  func OrganDonationProfileDataSource.reuseIdentifier.getter // getter 
	0x155a0  func OrganDonationProfileDataSource.reuseIdentifier.setter // setter 
	0x155c0  func OrganDonationProfileDataSource.reuseIdentifier.modify // modifyCoroutine 
	0x156b0  func OrganDonationProfileDataSource.title.getter // getter 
	0x15720  func OrganDonationProfileDataSource.title.setter // setter 
	0x15790  func OrganDonationProfileDataSource.title.modify // modifyCoroutine 
	0x157d0  class func <stripped> // method 
	0x15800  func OrganDonationProfileDataSource.selectItem(for:) // method 
 }

 class HealthProfile.ActivityIndicatorDetailFooterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel?
	var detailTextView : weak UITextView?
	var activityIndicatorView : weak UIActivityIndicatorView?
	var action : Action

	// ObjC -> Swift bridged methods
	0x15df0  @objc ActivityIndicatorDetailFooterView.titleLabel <stripped>
	0x15e10  @objc ActivityIndicatorDetailFooterView.setTitleLabel: <stripped>
	0x15e30  @objc ActivityIndicatorDetailFooterView.detailTextView <stripped>
	0x15e50  @objc ActivityIndicatorDetailFooterView.setDetailTextView: <stripped>
	0x15e70  @objc ActivityIndicatorDetailFooterView.activityIndicatorView <stripped>
	0x15e90  @objc ActivityIndicatorDetailFooterView.setActivityIndicatorView: <stripped>
	0x16060  @objc ActivityIndicatorDetailFooterView.awakeFromNib <stripped>
	0x17420  @objc ActivityIndicatorDetailFooterView.initWithFrame: <stripped>
	0x17450  @objc ActivityIndicatorDetailFooterView.initWithCoder: <stripped>
	0x174d0  @objc ActivityIndicatorDetailFooterView..cxx_destruct <stripped>

	// Swift methods
	0x16090  func <stripped> // method 
	0x16240  func <stripped> // method 
	0x16400  func <stripped> // method 
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
	0x19d20  @objc LastBackedUpDateFormatter.stringForObjectValue: <stripped>
	0x19e00  @objc LastBackedUpDateFormatter.init <stripped>
	0x19ea0  @objc LastBackedUpDateFormatter.initWithCoder: <stripped>
	0x19fa0  @objc LastBackedUpDateFormatter..cxx_destruct <stripped>

	// Swift methods
	0x18fc0  func <stripped> // method 
	0x19050  func <stripped> // method 
	0x196b0  func <stripped> // method 
	0x199c0  func <stripped> // method 
 }

 class HealthProfile.ProfileBasicCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var item : SectionedDataSourceItem? // +0x8 (0x28)

	// ObjC -> Swift bridged methods
	0x1ab00  @objc ProfileBasicCell.initWithStyle:reuseIdentifier: <stripped>
	0x1ac00  @objc ProfileBasicCell.initWithCoder: <stripped>
	0x1b020  @objc ProfileBasicCell.awakeFromNib <stripped>
	0x1b610  @objc ProfileBasicCell..cxx_destruct <stripped>

	// Swift methods
	0x1b390  func <stripped> // getter 
	0x1b3d0  func <stripped> // setter 
	0x1b450  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.MeContactAvatarView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var defaultAvatarImageSymbolConfiguration : _UIImageSymbolConfiguration
	var contactsAvatarViewController : CNAvatarViewController?
	var defaultAvatarImageView : UIImageView?

	// ObjC -> Swift bridged methods
	0x1bc90  @objc MeContactAvatarView.meContactCacheDidUpdateWithNotification: <stripped>
	0x1c500  @objc MeContactAvatarView.initWithCoder: <stripped>
	0x1c6e0  @objc MeContactAvatarView.initWithFrame: <stripped>
	0x1c820  @objc MeContactAvatarView.didUpdateContentForAvatarViewController: <stripped>
	0x1c920  @objc MeContactAvatarView..cxx_destruct <stripped>

	// Swift methods
	0x1b760  func <stripped> // getter 
	0x1b7a0  func <stripped> // setter 
	0x1b7f0  func <stripped> // modifyCoroutine 
	0x1b850  func <stripped> // method 
	0x1bce0  func <stripped> // method 
	0x1c200  func <stripped> // method 
	0x1c700  func MeContactAvatarView.fetchAvatarImageFromContacts() // method 
	0x1c790  func MeContactAvatarView.didUpdateContent(for:) // method 
 }

 class HealthProfile.ProfileBarButton : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_meContactView : MeContactAvatarView
	var gestureRecognizer : UITapGestureRecognizer?

	// ObjC -> Swift bridged methods
	0x1cc60  @objc ProfileBarButton.initWithCoder: <stripped>
	0x1cd80  @objc ProfileBarButton.init <stripped>
	0x1d670  @objc ProfileBarButton.initWithFrame: <stripped>
	0x1d820  @objc ProfileBarButton.openProfileViewControllerWithSender: <stripped>
	0x1d900  @objc ProfileBarButton..cxx_destruct <stripped>

	// Swift methods
	0x1c980  func <stripped> // getter 
	0x1ca50  func <stripped> // setter 
	0x1ca70  func <stripped> // modifyCoroutine 
	0x1cb80  func <stripped> // getter 
	0x1cbc0  func <stripped> // setter 
	0x1cc10  func <stripped> // modifyCoroutine 
	0x1d6c0  func <stripped> // method 
 }

 class HealthProfile.OrganDonationCell : ProfileBasicCell {

	// Properties
	var organDonationLogoImage : weak UIImageView? // +0x30 (0x8)
	var title : weak UILabel? // +0x38 (0x8)
	var subtitle : weak UILabel? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x1e040  @objc OrganDonationCell.organDonationLogoImage <stripped>
	0x1e080  @objc OrganDonationCell.setOrganDonationLogoImage: <stripped>
	0x1e1a0  @objc OrganDonationCell.title <stripped>
	0x1e1e0  @objc OrganDonationCell.setTitle: <stripped>
	0x1e290  @objc OrganDonationCell.subtitle <stripped>
	0x1e340  @objc OrganDonationCell.setSubtitle: <stripped>
	0x1e7d0  @objc OrganDonationCell.awakeFromNib <stripped>
	0x1e800  @objc OrganDonationCell.initWithStyle:reuseIdentifier: <stripped>
	0x1e860  @objc OrganDonationCell.initWithCoder: <stripped>
	0x1e930  @objc OrganDonationCell..cxx_destruct <stripped>

	// Swift methods
	0x1e060  func <stripped> // getter 
	0x1e0a0  func <stripped> // setter 
	0x1e0c0  func <stripped> // modifyCoroutine 
	0x1e1c0  func <stripped> // getter 
	0x1e200  func <stripped> // setter 
	0x1e220  func <stripped> // modifyCoroutine 
	0x1e2f0  func <stripped> // getter 
	0x1e3a0  func <stripped> // setter 
	0x1e410  func <stripped> // modifyCoroutine 
 }

 class HealthProfile.OrganDonationStatusViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var currentChildViewController : UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1f120  @objc OrganDonationStatusViewController.viewDidLoad <stripped>
	0x1f150  @objc OrganDonationStatusViewController.viewWillAppear: <stripped>
	0x1f6f0  @objc OrganDonationStatusViewController.initWithNibName:bundle: <stripped>
	0x1f800  @objc OrganDonationStatusViewController.initWithCoder: <stripped>
	0x1f8f0  @objc OrganDonationStatusViewController..cxx_destruct <stripped>

	// Swift methods
	0x1eb70  func <stripped> // getter 
	0x1ed20  func <stripped> // getter 
	0x1eec0  func <stripped> // getter 
	0x1ef00  func <stripped> // setter 
	0x1ef50  func <stripped> // modifyCoroutine 
	0x1f1d0  func <stripped> // method 
 }

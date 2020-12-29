 protocol ConversationKit.TapInteractionHandler // 1 requirements
 {
	// method
 }
 protocol ConversationKit.BlockedCallerChecker // 1 requirements
 {
	// method
 }
 protocol ConversationKit.ParticipantVideoProvider // 7 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
	// method
 }
 protocol ConversationKit.InCallControlsAddParticipantTableViewCellDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.ParticipantsViewController // 9 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.ParticipantsViewControllerDelegate // 5 requirements
 {
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.ViewConstraintManager // 1 requirements
 {
	// method
 }
 protocol ConversationKit.IDSCapabilitiesCheckerDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.IDSLookupManager // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.ParticipantGridViewDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ConversationKit.LocalParticipantViewDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.CameraContainer // 7 requirements
 {
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.InCallControlsViewDataSource // 1 requirements
 {
	// method
 }
 protocol ConversationKit.ParticipantInfoViewDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.ParticipantMediaProviderCreator // 1 requirements
 {
	// method
 }
 protocol ConversationKit.ImageName // 1 requirements
 {
	// getter
 }
 protocol ConversationKit.NamedImageProviding // 1 requirements
 {
	// class method
 }
 protocol ConversationKit.ParticipantGridViewControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.BlockedParticipantAlerter // 0 requirements
 {
 }
 protocol ConversationKit.EffectsHandler // 20 requirements
 {
	// method
	// method
	// method
	// method
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// getter
	// getter
	// method
	// method
 }
 protocol ConversationKit.InCallControlButtonMenuDataSource // 1 requirements
 {
	// method
 }
 protocol ConversationKit.InCallControlsParticipantsTableViewControllerDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.InCallControlsViewControllerParticipantDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.InCallControlsParticipantTableViewCellDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.HasSortableHandle // 1 requirements
 {
	// getter
 }
 protocol ConversationKit.ViewControllerLayout // 8 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// class method
	// class method
	// getter
 }
 protocol ConversationKit.PlatformDisplayLinkObserver // 1 requirements
 {
	// method
 }
 protocol ConversationKit.CallCenterProvider // 12 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.CallCenterProviderDelegate // 8 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.SymbolImageProviding // 1 requirements
 {
	// class method
 }
 protocol ConversationKit.SymbolImageDescribing // 1 requirements
 {
	// getter
 }
 protocol ConversationKit.MultiwayTransitioning // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
	// method
 }
 protocol ConversationKit.StagingAreaTransitioning // 7 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol ConversationKit.InCallControlsTitleCellDelegate // 1 requirements
 {
	// method
 }
 protocol ConversationKit.Conversation // 11 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol ConversationKit.ParticipantViewDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.ViewAnimating // 2 requirements
 {
	// method
	// method
 }

 struct ConversationKit.RadarRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ·+
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupUUID : ,
	let remoteMembers : Member
	let activeParticipants : Participant
	let isBackedByMessagesGroup : Bool
 }

 struct ConversationKit.Member {

	// Properties
	let handles : [String] // +0x0
 }

 struct ConversationKit.Participant {

	// Properties
	let handle : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : M4 // +0x10
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case date  
	case groupUUID  
	case remoteMembers  
	case activeParticipants  
	case isBackedByMessagesGroup  
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case handle  
	case identifier  
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case handles  
 }

 class ConversationKit.TapInteraction : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var view : weak UIView?
	let tapGestureRecognizer : UITapGestureRecognizer

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19a5400040fb0 (0x25400040fb0) in binary!
	0x10428  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x11c2000040be8 (0x42000040be8) in binary!
	0xf461  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x19a2400040b50 (0x22400040b50) in binary!
	0x103f8  @objc TapInteraction.(null) <stripped>
	0x103e0  type metadata accessor for RemoteParticipantVideoProvider
WARNING: couldn't find address 0xffa400040af0 (0x7a400040af0) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0xf48600040798 (0x48600040798) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x11f9c00040ab8 (0x79c00040ab8) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x199ac00040ad8 (0x1ac00040ad8) in binary!
	0x68000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x1999400040a80 (0x19400040a80) in binary!
	0x13dce  @objc TapInteraction.(null) <stripped>
 }

 class ConversationKit.InCallControlsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let leadingConstraint : NSLayoutConstraint
	let bottomConstraint : NSLayoutConstraint
	let widthConstraint : NSLayoutConstraint
	let expandedTopPortraitAnchorConstraint : NSLayoutConstraint
	let expandedTopLandscapeAnchorConstraint : NSLayoutConstraint
	let visibleTopAnchorConstraint : NSLayoutConstraint
	var constraints : [NSLayoutConstraint]
	var type : InCallControlsLayoutType

	// Swift methods
	0xe380  func InCallControlsViewConstraintManager.type.getter // getter 
	0xe3b0  func InCallControlsViewConstraintManager.type.setter // setter 
	0xe3f0  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xe460  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xe7c0  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xe8b0  func InCallControlsViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.InCallControlsLayoutType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case effectsVisible : }.
	case leftFloating : DeviceOrientation
	case hidden  
	case bottomLeftFloating  
 }

 class ConversationKit.TUBlockedCallerChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib, BlockedCallerChecker {
	// Swift methods
	0xf2e0  func TUBlockedCallerChecker.blockListContains(_:with:) // method 
	0xf400  class func TUBlockedCallerChecker.__allocating_init() // init 
 }

 class ConversationKit.SpringBoardUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xf590  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient?

	// Swift methods
	0xf5f0  func RemoteParticipantVideoProvider.token.getter // getter 
	0xf620  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xf640  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xf650  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xf670  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xf700  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xf870  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
	0xfa30  func RemoteParticipantVideoProvider.isEqual(to:) // method 
 }

 struct ConversationKit.Colors { }

 struct ConversationKit.ParticipantViews { }

 struct ConversationKit.ParticipantGridView { }

 struct ConversationKit.LocalParticipantView { }

 struct ConversationKit.InCallControls { }

 struct ConversationKit.MultiwayViewController { }

 struct ConversationKit.ParticipantControls { }

 struct ConversationKit.Roster { }

 struct ConversationKit.AudioVisualization { }

 struct ConversationKit.ParticipantGradients { }

 class ConversationKit.PipZoomControl : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let minimumZoomFactor : Float
	let maximumZoomFactor : Float
	var currentZoomFactor : Float
	var initialZoomFactor : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x199ac00040ad8 (0x1ac00040ad8) in binary!
	0x68000000c  @objc PipZoomControl.(null) <stripped>

	// Swift methods
	0x13420  func <stripped> // method 
	0x13530  func <stripped> // method 
	0x13540  func <stripped> // method 
 }

 class ConversationKit.InCallControlsAddParticipantTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let button : InCallControlButton
	var isAccessiblityConstraintsEnabled : Bool
	var nameLabelFirstBaselineLayoutConstraint : NSLayoutConstraint?
	var nameLabelLastBaselineLayoutConstraint : NSLayoutConstraint?
	var delegate : InCallControlsAddParticipantTableViewCellDelegate
	var isEnabled : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1999400040a80 (0x19400040a80) in binary!
	0x13dce  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x108cc00040d80 (0xcc00040d80) in binary!
	0x10350  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1034400040d70 (0x34400040d70) in binary!
	0xff08  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff01e00  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x564fff01658  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
	0x204fff017e0  @objc InCallControlsAddParticipantTableViewCell. ÀLâ˜Ë8- <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle
	var gradient : [UIColor]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1992c00040a58 (0x12c00040a58) in binary!
	0xfab0  @objc AudioVisualizationView.(null) <stripped>
WARNING: couldn't find address 0x1086400040d18 (0x6400040d18) in binary!
	0xfeb8  @objc AudioVisualizationView.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x564fff02b20  @objc AudioVisualizationView.(null) <stripped>
	0x2b4fff03068  @objc AudioVisualizationView.ˇ]È1 <stripped>

	// Swift methods
	0x14db0  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x14e50  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x15250  func AudioVisualizationView.scale.getter // getter 
	0x152a0  func AudioVisualizationView.scale.setter // setter 
	0x15300  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x155c0  func AudioVisualizationView.gradient.getter // getter 
	0x15600  func AudioVisualizationView.gradient.setter // setter 
	0x15660  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x156d0  func AudioVisualizationView.startAnimation() // method 
	0x156f0  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool
	var scale : Float
	var scaleBuffer : CircularBuffer
	let rings : AudioVisualizationRingLayer
	var color : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x198f400040a20 (0xf400040a20) in binary!
	0x10838  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x1082c00040ce0 (0x2c00040ce0) in binary!
	0xfe80  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0xfbb400040d48 (0x3b400040d48) in binary!
	0xfbd8  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x1711c00040d48 (0x11c00040d48) in binary!
	0xfe50  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x484fff06cf8  @objc AudioVisualizationLayer.(null) <stripped>
	0x144fff07900  @objc AudioVisualizationLayer.UHâÂHç=ù_ <stripped>
	0x11cfff079d8  @objc AudioVisualizationLayer.ãm <stripped>
	0x134fff07fa0  @objc AudioVisualizationLayer.5ªˇˇˇË<  <stripped>
 }

 class ConversationKit.LocalParticipantViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let widthConstraint : NSLayoutConstraint
	let heightConstraint : NSLayoutConstraint
	let trailingConstraint : NSLayoutConstraint
	let bottomConstraint : NSLayoutConstraint
	let centerXConstraint : NSLayoutConstraint
	let centerYConstraint : NSLayoutConstraint
	var centeredConstraints : [NSLayoutConstraint]
	var portraitCenteringConstraints : [NSLayoutConstraint]
	var landscapeCenteringConstraints : [NSLayoutConstraint]
	var constraints : [NSLayoutConstraint]
	var type : LocalParticipantLayoutType

	// Swift methods
	0x18000  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x18030  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x18080  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x180f0  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x19160  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x191f0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.LocalParticipantLayoutType {

	// Properties
	case bottomRight : CGSize
	case centered : DeviceOrientation
 }

 struct ConversationKit.SymptomRequest {

	// Properties
	let radarIdentifier : UInt // +0x0
	let description : String // +0x8
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case radarIdentifier  
	case description  
 }

 struct ConversationKit.Strings { }

 struct ConversationKit.Automation { }

 class ConversationKit.ParticipantListLayout : UICollectionViewFlowLayout /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var indexPathLayoutAttributes :  empty-list 
	var lastInvalidatedSize : CGSize
	var calculatedContentSize : CGSize

	// ObjC -> Swift bridged methods
	0x107d0  _globalinit_33_F44C517C9140EE21C3FE77A0D5071B9C_func5
WARNING: couldn't find address 0xfe2400040d70 (0x62400040d70) in binary!
	0xfe28  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0xfe3c00040930 (0x63c00040930) in binary!
	0x107a0  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0xf9d400040908 (0x1d400040908) in binary!
	0xfde8  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x45cfff10f10  @objc ParticipantListLayout.(null) <stripped>
	0x574fff115e8  @objc ParticipantListLayout.\$LâÁHâﬁË™	 <stripped>
	0x94fff11900  @objc ParticipantListLayout.çeÿ[A\A]A^A_]√fêUHâÂAUPMãm <stripped>
	0xfff11a48  @objc ParticipantListLayout.ˇHâ√Hç5’¡ <stripped>
 }

 enum ConversationKit.ParticipantsViewControllerUpdateReason {

	// Properties
	case prominence : ProminenceChangeReason
	case focus  
	case dataReload  
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint]

	// Swift methods
	0x1d580  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1d830  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 enum ConversationKit.ParticipantViewModel {

	// Properties
	case video : ParticipantDetails
	case videoWithOverlay : ParticipantDetails
	case monogram : ParticipantDetails
 }

 struct ConversationKit.ParticipantDetails {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ,
	var displayName : String
	var isMomentsAvailable : Bool
	var isLocal : Bool
 }

 class ConversationKit.LargeStagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let containingView : UIView
	let constraintManagers : ViewConstraintManager
	var effectsConstraintManagers : ViewConstraintManager
	var currentConstraints : [NSLayoutConstraint]
	var currentSize : CGSize
	var currentDeviceOrientation : DeviceOrientation

	// Swift methods
	0x22cf0  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : ', // +0x113890 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19824000408e0 (0x24000408e0) in binary!
	0xf9a8  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x1075c00040c10 (0x75c00040c10) in binary!
	0xfdb0  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x197f4000408a8 (0x7f4000408a8) in binary!
	0x101c8  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0xfd8c000408d8 (0x58c000408d8) in binary!
	0x78000000c  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x197c400040868 (0x7c400040868) in binary!
	0x197b8  @objc ParticipantCell.(null) <stripped>
	0x106f0  _globalinit_33_F44C517C9140EE21C3FE77A0D5071B9C_func3
WARNING: couldn't find address 0x1017400040ba0 (0x17400040ba0) in binary!
	0x10168  @objc ParticipantCell.(null) <stripped>
 }

 class ConversationKit.InCallControlsTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let subtitleLabel : UILabel
	let titleLabel : UILabel
	let messagesButton : InCallControlButton
	var isAccessiblityConstraintsEnabled : Bool
	var singleLabelTopConstraint : NSLayoutConstraint?
	var singleLabelBottomConstraint : NSLayoutConstraint?
	var dualLabelTopConstraint : NSLayoutConstraint?
	var dualLabelBottomConstraint : NSLayoutConstraint?
	var interLabelConstraint : NSLayoutConstraint?
	var trailingTextLayoutGuide : UILayoutGuide
	var trailingTextShowingButtonLayoutConstraint : NSLayoutConstraint?
	var trailingTextHidingButtonLayoutConstraint : NSLayoutConstraint?
	var delegate : InCallControlsTitleCellDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x197c400040868 (0x7c400040868) in binary!
	0x197b8  @objc InCallControlsTitleCell.(null) <stripped>
	0x106f0  _globalinit_33_F44C517C9140EE21C3FE77A0D5071B9C_func3
WARNING: couldn't find address 0x1017400040ba0 (0x17400040ba0) in binary!
	0x10168  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0xfd2c00040878 (0x52c00040878) in binary!
	0x28000000c  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1976400040890 (0x76400040890) in binary!
	0xfd08  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x544fff16840  @objc InCallControlsTitleCell.(null) <stripped>
	0x53cfff16968  @objc InCallControlsTitleCell.Ë)˚ <stripped>
 }

 enum ConversationKit.Command { }

 struct ConversationKit.ParticipantContactDetails {

	// Properties
	var contact : CNContact? // +0x0
	var displayName : String // +0x8
	var shortName : String // +0x18
	var initials : String // +0x28
 }

 class ConversationKit.ParticipantContactDetailsCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contactStore : CNContactStore
	let cache : BoxedDetails

	// Swift methods
	0x29330  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1976400040890 (0x76400040890) in binary!
	0xfd08  @objc BoxedDetails.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x544fff16840  @objc BoxedDetails.(null) <stripped>

	// Swift methods
 }

 class ConversationKit.ParticipantViewButton : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView
	let blurView : UIVisualEffectView
	let discView : UIView
	var image : UIImage?
	var colorConfiguration : State

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x11d1c00040d48 (0x51c00040d48) in binary!
	0x12b38  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x11d0400040d40 (0x50400040d40) in binary!
	0x12b20  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x1066400040b18 (0x66400040b18) in binary!
	0xfcb8  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0xf88c00040b40 (0x8c00040b40) in binary!
	0xfca0  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff19748  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff1d830  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2e4fff1d5a8  @objc ParticipantViewButton.(null) <stripped>
	0x784fff1d7f0  @objc ParticipantViewButton.åº <stripped>

	// Swift methods
	0x2a850  class func ParticipantViewButton.__allocating_init(imageName:) // init 
 }

 struct ConversationKit.ElementColors {

	// Properties
	let glyph : UIColor // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let glyphAlpha : }. // +0x8
	let background : UIColor // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let backgroundAlpha : }. // +0x18
 }

 enum ConversationKit.LayerAnimationCoordinatorKeyPath {

	// Properties
	case size  
 }

 class ConversationKit.IDSCapabilitiesChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantCapabilities :  empty-list 
	var delegate : IDSCapabilitiesCheckerDelegate
	var participantDestinations : ParticipantDestination
	let lookupManager : IDSLookupManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x100bc00040d90 (0xbc00040d90) in binary!
	0x18000000c  @objc IDSCapabilitiesChecker.(null) <stripped>

	// Swift methods
	0x2bf30  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2bfd0  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2c000  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2c050  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2c130  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2c260  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2c270  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2ce90  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
 }

 enum ConversationKit.Capabilities {

	// Properties
	case known : (faceTimeAudio: Bool, faceTimeVideo: Bool, multiway: Bool)
	case unknown  
 }

 struct ConversationKit.ParticipantDestination {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ,
	var destination : String
 }

 class ConversationKit.GradientView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var colors : [UIColor]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x196ac000407d8 (0x6ac000407d8) in binary!
	0xf830  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x105e400040a98 (0x5e400040a98) in binary!
	0xfc38  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff1dfe0  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x254fff1fb48  @objc GradientView.(null) <stripped>
 }

 class ConversationKit.LargeMultiwayControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let containingView : UIView
	let constraintManagers : ViewConstraintManager
	var effectsConstraintManagers : ViewConstraintManager
	var currentConstraints : [NSLayoutConstraint]
	var currentSize : CGSize
	var currentDeviceOrientation : DeviceOrientation

	// Swift methods
	0x31e50  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.InCallControlsReportAProblemTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let reportAProblemLabel : UILabel
	let icon : UIImageView
	var isAccessiblityConstraintsEnabled : Bool
	var reportAProblemLabelFirstBaselineLayoutConstraint : NSLayoutConstraint?
	var reportAProblemLabelLastBaselineLayoutConstraint : NSLayoutConstraint?
	var enabled : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13aa2000409d8 (0x2a2000409d8) in binary!
	0x105a0  @objc InCallControlsReportAProblemTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1002400040a50 (0x2400040a50) in binary!
	0xfbe8  @objc InCallControlsReportAProblemTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x21cfff21bb0  @objc InCallControlsReportAProblemTableViewCell.(null) <stripped>
	0x434fff220f8  @objc InCallControlsReportAProblemTableViewCell.ˇˇfD <stripped>
 }

 class ConversationKit.ParticipantGridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantViews : IdentifiableParticipantView
	let unfocusedParticipantOverlay : UIView
	let organicLayoutConfiguration : Configuration
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentlyFocusedParticipantIdentifier : ',
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mostProminentParticipantIdentifier : ',
	var mostRecentAnimationIndex : Int
	var delegate : ParticipantGridViewDelegate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentParticipantAnimationContextUUID : ',
	var cachedFrameSize : CGSize

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1962400040750 (0x62400040750) in binary!
	0x10568  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xf79c00040a50 (0x79c00040a50) in binary!
	0xfbb0  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xfba4000406f0 (0x3a4000406f0) in binary!
	0x48000000c  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0x1052c000409e0 (0x52c000409e0) in binary!
	0xf760  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xfb7400040bf8 (0x37400040bf8) in binary!
	0xfb68  @objc ParticipantGridView.(null) <stripped>
 }

 enum ConversationKit.AnimationStyle {

	// Properties
	case instant  
	case fast  
	case slow  
 }

 struct ConversationKit.IdentifiableParticipantView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ,
	var view : ParticipantView
 }

 class ConversationKit.LocalParticipantView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let participantView : ParticipantView
	var delegate : LocalParticipantViewDelegate
	var isInRoster : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1052c000409e0 (0x52c000409e0) in binary!
	0xf760  @objc LocalParticipantView.(null) <stripped>
WARNING: couldn't find address 0xfb7400040bf8 (0x37400040bf8) in binary!
	0xfb68  @objc LocalParticipantView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3ccfff31df0  @objc LocalParticipantView.(null) <stripped>
	0x67cfff32198  @objc LocalParticipantView.JˇˇHãH¯HY@L!˚Iâ‰I)‹Lâ‰Lcx0MÁLâÔLâÊHçµ¬ <stripped>

	// Swift methods
	0x3eb50  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
 }

 class ConversationKit.InCallControlsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataSource : InCallControlsViewDataSource
	let effectsButton : InCallControlButton
	let muteButton : InCallControlButton
	let flipCameraButton : InCallControlButton
	let joinLeaveButton : InCallControlButton
	let audioRouteButton : InCallControlButton
	let toggleCameraButton : InCallControlButton
	let buttonsByRow : InCallControlButton
	var joinLeaveConfiguration : JoinLeaveConfiguration
	let buttonLabelWidthConstraints : [NSLayoutConstraint]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x104f4000409a8 (0x4f4000409a8) in binary!
	0xfb48  @objc InCallControlsView.(null) <stripped>
WARNING: couldn't find address 0xf71c000409d0 (0x71c000409d0) in binary!
	0xfb30  @objc InCallControlsView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x254fff32f08  @objc InCallControlsView.(null) <stripped>
	0x54c000405e8  @objc InCallControlsView.UHâÂHç=˝* <stripped>

	// Swift methods
	0x41220  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
 }

 enum ConversationKit.JoinLeaveConfiguration {

	// Properties
	case join  
	case leave  
 }

 enum ConversationKit.ConfigurationCapabilities {

	// Properties
	case full  
	case videoNoEffects  
	case audioOnly  
 }

 class ConversationKit.ParticipantListViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let controlsLeadingConstraint : NSLayoutConstraint
	let containerLeadingConstraint : NSLayoutConstraint
	let trailingConstraint : NSLayoutConstraint
	let bottomConstraint : NSLayoutConstraint
	let heightConstraint : NSLayoutConstraint
	var constraints : [NSLayoutConstraint]
	var type : ParticipantListLayoutType

	// Swift methods
	0x49be0  func ParticipantListViewConstraintManager.type.getter // getter 
	0x49c10  func ParticipantListViewConstraintManager.type.setter // setter 
	0x49c50  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x49b20  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x49f80  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x49f90  func ParticipantListViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.ParticipantListLayoutType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case nextToControls : }.
	case bottom  
 }

 struct ConversationKit.ParticipantPresentationContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let idsIdentifier : M4 // +0x0
	let videoQuality : TUConversationParticipantVideoQuality // +0x8
	let visibility : Int // +0x10
	let prominence : Int // +0x18
 }

 class ConversationKit.ParticipantInfoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView
	let nameLabel : ParticipantViewLabelContainerView
	let shutterButton : UIButton
	let expandButton : ParticipantViewButton
	var isSmall : Bool
	var isExpanded : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customCornerRadius : }.
	var isMomentsAvailable : Bool
	var recordingLocalVideo : Bool
	var delegate : ParticipantInfoViewDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1954c000405e8 (0x54c000405e8) in binary!
	0x11b18  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x12934000405c8 (0x134000405c8) in binary!
	0x19528  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x1046c00040920 (0x46c00040920) in binary!
	0xfac0  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0xfab400040df0 (0x2b400040df0) in binary!
	0xfaa8  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0xf67c00040930 (0x67c00040930) in binary!
	0xfa90  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0xc4fff389b8  @objc ParticipantInfoView.(null) <stripped>
	0x2dcfff38c80  @objc ParticipantInfoView.v" <stripped>
	0xfff395d8  @objc ParticipantInfoView.âﬂËKˇˇHâ√Ëy	 <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4fcfff3aac0  @objc ParticipantInfoView.(null) <stripped>
	0xfff3b748  @objc ParticipantInfoView.ãm <stripped>

	// Swift methods
	0x4a550  func ParticipantInfoView.isSmall.getter // getter 
	0x4a570  func ParticipantInfoView.isSmall.setter // setter 
	0x4a5c0  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4a740  func ParticipantInfoView.isExpanded.getter // getter 
	0x4a760  func ParticipantInfoView.isExpanded.setter // setter 
	0x4a780  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4a890  func ParticipantInfoView.customCornerRadius.getter // getter 
	0x4a8c0  func ParticipantInfoView.customCornerRadius.setter // setter 
	0x4a900  func ParticipantInfoView.customCornerRadius.modify // modifyCoroutine 
	0x4a9a0  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4aa00  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4ab20  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4ad20  func ParticipantInfoView.recordingLocalVideo.getter // getter 
	0x4ad70  func ParticipantInfoView.recordingLocalVideo.setter // setter 
	0x4add0  func ParticipantInfoView.recordingLocalVideo.modify // modifyCoroutine 
	0x4aee0  func ParticipantInfoView.delegate.getter // getter 
	0x4af20  func ParticipantInfoView.delegate.setter // setter 
	0x4af80  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4ba40  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4bb70  func ParticipantInfoView.configure(shouldHideShutterButton:) // method 
	0x4bcb0  func ParticipantInfoView._layout() // method 
	0x4c180  func ParticipantInfoView.didTapExpandButton() // method 
	0x4c200  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView
	let backFacingCameraView : ParticipantVideoCameraView
	var previousViewModelHash : Int?
	var previousVideoSnapshot : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194cc000405f8 (0x4cc000405f8) in binary!
	0x10410  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0xf644000408f8 (0x644000408f8) in binary!
	0xfa58  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0xfa4c00040598 (0x24c00040598) in binary!
	0x38000000c  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0x114a600040510 (0x4a600040510) in binary!
	0xfe58  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0x1946c00040598 (0x46c00040598) in binary!
	0x78000000c  @objc ParticipantVideoView.(null) <stripped>
 }

 struct ConversationKit.ViewModel {

	// Properties
	var videoProvider : ParticipantVideoProvider // +0x0
	var transform : CATransform3D // +0x28
 }

 class ConversationKit.DefaultObjectCache {
 struct ConversationKit.HSLAComponents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hue : }. // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var saturation : }. // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lightness : }. // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alpha : }. // +0x18
 }

 struct ConversationKit.RGBAComponents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var red : }. // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var green : }. // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blue : }. // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alpha : }. // +0x18
 }

 enum ConversationKit.ColorStyle {

	// Properties
	case color  
	case monochrome  
 }

 class ConversationKit.BuzzedAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x114a600040510 (0x4a600040510) in binary!
	0xfe58  @objc BuzzedAnimator.(null) <stripped>
WARNING: couldn't find address 0x1946c00040598 (0x46c00040598) in binary!
	0x78000000c  @objc BuzzedAnimator.(null) <stripped>
WARNING: couldn't find address 0x103a4000408d0 (0x3a4000408d0) in binary!
	0x10398  @objc BuzzedAnimator.(null) <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x103a4000408d0 (0x3a4000408d0) in binary!
	0x10398  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x1177a00040db8 (0x77a00040db8) in binary!
	0x11776  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf714000408a8 (0x714000408a8) in binary!
	0xf738  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x1940c00040538 (0x40c00040538) in binary!
	0x78000000c  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x10344000407f8 (0x344000407f8) in binary!
	0xf998  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf98c00040dc8 (0x18c00040dc8) in binary!
	0x119a8  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf97400040db8 (0x17400040db8) in binary!
	0x11998  @objc AudioVisualizationRingLayer.(null) <stripped>

	// Swift methods
	0x4fc80  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x503b0  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
 }

 struct ConversationKit.ImageNames { }

 enum ConversationKit.Drawer {

	// Properties
	case hotdog  
	case effects  
	case effectsSelected  
	case expandDrawer  
	case ringBackground  
	case facetimeAudio  
	case glow  
	case reportAProblem  
 }

 enum ConversationKit.Staging {

	// Properties
	case info  
	case leaveCall  
	case toggleVideo  
	case expand  
	case muteAudio  
	case openMessages  
	case facetimeJoin  
 }

 enum ConversationKit.InCall {

	// Properties
	case leaveCall  
	case toggleVideo  
	case expand  
	case muteAudio  
	case openMessages  
 }

 enum ConversationKit.Roster {

	// Properties
	case onCanvas  
 }

 enum ConversationKit.ParticipantView {

	// Properties
	case shutter  
	case expand  
	case collapse  
	case flipCamera  
	case contactGlow  
	case contactSilhouette  
	case pausedSmall  
	case pausedLarge  
	case badConnectionSmall  
	case badConnectionLarge  
 }

 class ConversationKit.SmallMultiwayControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : OverallLayoutState
	let participantListHeightConstraint : NSLayoutConstraint
	var localParticipantViewHeightConstraint : NSLayoutConstraint
	var effectsConstraintManagers : ViewConstraintManager
	var currentConstraints : [NSLayoutConstraint]

	// Swift methods
	0x51ff0  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
 }

 class ConversationKit.ParticipantGridViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : Participant // +0x8 (0x8)
	var participantsBeforeFocus : Participant // +0x10 (0x8)
	let forceAudioPriorityButton : UIButton // +0x18 (0x8)
	var focusedParticipant : Participant // +0x7079745f (0x0)
	var sashedParticipant : Participant // +0x45545f5f (0x0)
	var selectedParticipant : Participant // +0x0 (0x0)
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate // +0x0 (0x10)
	var participantGridViewControllerDelegate : ParticipantGridViewControllerDelegate // +0x11e1f8 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10344000407f8 (0x344000407f8) in binary!
	0xf998  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf98c00040dc8 (0x18c00040dc8) in binary!
	0x119a8  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf97400040db8 (0x17400040db8) in binary!
	0x11998  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf95c000404a8 (0x15c000404a8) in binary!
	0x28000000c  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf524000407d8 (0x524000407d8) in binary!
	0x102d8  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x174fff56f10  @objc ParticipantGridViewController.(null) <stripped>
	0x16cfff57038  @objc ParticipantGridViewController. <stripped>

	// Swift methods
	0x5b920  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf524000407d8 (0x524000407d8) in binary!
	0x102d8  @objc ParticipantVideoCameraView.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x174fff56f10  @objc ParticipantVideoCameraView.(null) <stripped>
 }

 class ConversationKit.MostActiveParticipantsController {
 enum ConversationKit.ProminenceChangeReason {

	// Properties
	case audio  
	case video  
 }

 struct ConversationKit.ActivityDetails {

	// Properties
	var participantIdentifier : A
	var currentEMA : Float
	var currentTimeScale : Float
	var isActive : Bool
	var prominenceWeight : Float
	var audioPriority : Float
	var videoPriority : Float
 }

 enum ConversationKit.InCallControlButtonStyle { }

 class ConversationKit.InCallControlButton : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var discBackgroundEffectView : UIVisualEffectView?
	let discBackgroundFlatView : UIView
	let imageView : UIImageView?
	let paragraphStyle : NSParagraphStyle
	let isUsingVisualEffects : Bool
	let style : InCallControlButtonStyle
	let label : UILabel?
	let discView : UIView
	var image : UIImage?
	var colorConfiguration : State
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentAlpha : }.
	var menuDataSource : InCallControlButtonMenuDataSource

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1194c00040978 (0x14c00040978) in binary!
	0x12768  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x1193400040970 (0x13400040970) in binary!
	0x12750  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x1029400040748 (0x29400040748) in binary!
	0xf8e8  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x11e9c00040398 (0x69c00040398) in binary!
	0xf4b0  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0xf8c400040410 (0xc400040410) in binary!
	0x28000000c  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x192fc00040428 (0x2fc00040428) in binary!
	0xf8a0  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x7cfff601b8  @objc InCallControlButton.(null) <stripped>
	0x54fff5fa00  @objc InCallControlButton.Hã<HÉƒ[]ˇ% <stripped>
	0x2cfff5fc48  @objc InCallControlButton. <stripped>

	// Swift methods
 }

 struct ConversationKit.InCallControlButtonConfiguration {

	// Properties
	var regular : Regular // +0x0
	var flat : Flat // +0x20
 }

 enum ConversationKit.DiscConfiguration {

	// Properties
	case flat : UIColor
	case vibrant : UIVibrancyEffect
 }

 struct ConversationKit.Regular {

	// Properties
	var contentColor : UIColor // +0x0
	var discContentColor : UIColor // +0x8
	var disc : DiscConfiguration // +0x10
 }

 struct ConversationKit.Flat {

	// Properties
	var contentColor : UIColor // +0x0
	var discContentColor : UIColor // +0x8
	var discBackgroundColor : UIColor // +0x10
 }

 class ConversationKit.CallCenter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let tuCallCenter : TUCallCenter
	var delegate : CallCenterProviderDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x192fc00040428 (0x2fc00040428) in binary!
	0xf8a0  @objc CallCenter.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x7cfff601b8  @objc CallCenter.(null) <stripped>

	// Swift methods
	0x72420  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize
	var font : UIFont?
	let colorStyle : ColorStyle
	var text : String

	// ObjC -> Swift bridged methods
	0xf400  TUBlockedCallerChecker.__allocating_init()
WARNING: couldn't find address 0x101b400040668 (0x1b400040668) in binary!
	0xf578  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0xf7fc00040348 (0x7fc00040348) in binary!
	0x38000000c  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0x1180c0003ffb0 (0xc0003ffb0) in binary!
	0x12628  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0xfbfc00040d68 (0x3fc00040d68) in binary!
	0x78000000c  @objc MonogramView.(null) <stripped>

	// Swift methods
	0x75210  class func MonogramView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.InCallControlsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var groupName : String?
	var representedLegacyCallIdentifier : String?
	var controlsButtonRowCount : Int
	var tableViewSeparator : UIView?
	var participantsTableViewController : InCallControlsParticipantsTableViewController
	var localParticipant : Participant
	var viewContent : ViewContent
	var mode : InCallControlsMode
WARNING: couldn't find address 0x0 (0x0) in binary!
	var topInset : }.
	var isExpanded : Bool
	var audioIsEnabled : Bool
	var videoIsEnabled : Bool
	var effectsAreAvailable : Bool
	var effectsAreEnabled : Bool
	var shouldShowJoinButton : Bool
	var delegate : weak CNKFaceTimeInCallControlsViewControllerDelegate?
	var participantDelegate : InCallControlsViewControllerParticipantDelegate
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xffff1050 in binary!
WARNING: couldn't find offset 0xffff1050 in binary!
	0x0  @objc InCallControlsViewController.¯˛ˇˇDà7Hç5íy <stripped>
WARNING: couldn't find offset 0xffff1038 in binary!
WARNING: couldn't find offset 0xffff1038 in binary!
	0x0  @objc InCallControlsViewController.Ï÷ <stripped>
WARNING: couldn't find offset 0xffff1020 in binary!
WARNING: couldn't find offset 0xffff1020 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff1008 in binary!
WARNING: couldn't find offset 0xffff1008 in binary!
	0x0  @objc InCallControlsViewController.Ë;$ <stripped>
WARNING: couldn't find offset 0xffff0ff0 in binary!
WARNING: couldn't find offset 0xffff0ff0 in binary!
	0x0  @objc InCallControlsViewController.µÄ˛ˇˇLâ˜HâﬁËH@ <stripped>
WARNING: couldn't find offset 0xffff0fd8 in binary!
WARNING: couldn't find offset 0xffff0fd8 in binary!
	0x0  @objc InCallControlsViewController.f` <stripped>
WARNING: couldn't find offset 0xffff7bc0 in binary!
WARNING: couldn't find offset 0xffff7bc0 in binary!
	0x0  @objc InCallControlsViewController.Hçµ¯˛ˇˇÛH•W¿A)FPA)F@A)F0A)F A)FIÉf` <stripped>
WARNING: couldn't find offset 0xffff7ba8 in binary!
WARNING: couldn't find offset 0xffff7ba8 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xfffeeae0 in binary!
WARNING: couldn't find offset 0xfffeeae0 in binary!
	0x0  @objc InCallControlsViewController.ÔHç5∞ <stripped>
WARNING: couldn't find offset 0xfffee128 in binary!
WARNING: couldn't find offset 0xfffee128 in binary!
	0x0  @objc InCallControlsViewController.çµÄ˛ˇˇLâˆËJA <stripped>
WARNING: couldn't find offset 0xffff0f60 in binary!
WARNING: couldn't find offset 0xffff0f60 in binary!
	0x0  @objc InCallControlsViewController.ˇÖx <stripped>
WARNING: couldn't find offset 0xfffee528 in binary!
WARNING: couldn't find offset 0xfffee528 in binary!
	0x0  @objc InCallControlsViewController.1ˇ1ˆ1“1…Ë <stripped>
WARNING: couldn't find offset 0xfffee0e0 in binary!
WARNING: couldn't find offset 0xfffee0e0 in binary!
	0x0  @objc InCallControlsViewController.ãU∏HcB AäIcL$AàHcBIãHç5’ <stripped>
WARNING: couldn't find offset 0xffff00f0 in binary!
WARNING: couldn't find offset 0xffff00f0 in binary!
	0x0  @objc InCallControlsViewController.Ë <stripped>
WARNING: couldn't find offset 0xfffee4e0 in binary!
WARNING: couldn't find offset 0xfffee4e0 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xfffee4c8 in binary!
WARNING: couldn't find offset 0xfffee4c8 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff0ed0 in binary!
WARNING: couldn't find offset 0xffff0ed0 in binary!
	0x0  @objc InCallControlsViewController.Lçµ∞˛ˇˇLâLâÁHâﬁË#â <stripped>
WARNING: couldn't find offset 0xfffee498 in binary!
WARNING: couldn't find offset 0xfffee498 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff7aa0 in binary!
WARNING: couldn't find offset 0xffff7aa0 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff7a88 in binary!
WARNING: couldn't find offset 0xffff7a88 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff7a70 in binary!
WARNING: couldn't find offset 0xffff7a70 in binary!
	0x0  @objc InCallControlsViewController.E∞Hã@¯HX@L!„Iâ‰I)‹Lâ‰Hçù¯˛ˇˇHâÿã}¿Lâm∏Ë <stripped>
WARNING: couldn't find offset 0xffff7a58 in binary!
WARNING: couldn't find offset 0xffff7a58 in binary!
	0x0  @objc InCallControlsViewController.ã@@HÿL!‡Hâ·H)¡HâM»HâÃIâÊI)∆LâÙ1ˇËbÔˇˇHâE∞Hã@¯HX@L!„Iâ‰I)‹Lâ‰Hçù¯˛ˇˇHâÿã}¿Lâm∏Ë <stripped>
WARNING: couldn't find offset 0xffff7a40 in binary!
WARNING: couldn't find offset 0xffff7a40 in binary!
	0x0  @objc InCallControlsViewController.[Hã@@HÿjA\L!‡IâÁI)«Lâ¸1ˇËQ <stripped>
WARNING: couldn't find offset 0xffff7a28 in binary!
WARNING: couldn't find offset 0xffff7a28 in binary!
	0x0  @objc InCallControlsViewController.AUATSHÅÏò <stripped>
WARNING: couldn't find offset 0xfffedfc0 in binary!
WARNING: couldn't find offset 0xfffedfc0 in binary!
	0x0  @objc InCallControlsViewController.âﬁËë <stripped>
WARNING: couldn't find address 0x238000000c (0x238000000c) in binary!
	0xd4fff8d818  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find address 0xfff8d87cfffee3d0 (0x0) in binary!
	0xacfff8d8d0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffeffb0 in binary!
WARNING: couldn't find offset 0xfffeffb0 in binary!
WARNING: couldn't find address 0xfff8d914fffeffb0 (0x0) in binary!
	0x84fff8d928  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffed3f1 in binary!
WARNING: couldn't find offset 0xfffed3f1 in binary!
WARNING: couldn't find address 0xfff8d98cfffed3f1 (0x0) in binary!
	0x5cfff8e3e0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0da8 in binary!
WARNING: couldn't find offset 0xffff0da8 in binary!
WARNING: couldn't find address 0xfff8e434ffff0da8 (0x0) in binary!
	0x34cfff8ef38  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee370 in binary!
WARNING: couldn't find offset 0xfffee370 in binary!
WARNING: couldn't find address 0xfff8efacfffee370 (0x0) in binary!
	0x1cfff8f170  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0d78 in binary!
WARNING: couldn't find offset 0xffff0d78 in binary!
WARNING: couldn't find address 0xfff8f1f4ffff0d78 (0x0) in binary!
	0x7f4fff8f298  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffeff40 in binary!
WARNING: couldn't find offset 0xfffeff40 in binary!
WARNING: couldn't find address 0xfff8f48cfffeff40 (0x0) in binary!
	0x54cfff8f660  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee898 in binary!
WARNING: couldn't find offset 0xfffee898 in binary!
WARNING: couldn't find address 0xfff93374fffee898 (0x0) in binary!
	0x31cfff934d8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffedee0 in binary!
WARNING: couldn't find offset 0xfffedee0 in binary!
WARNING: couldn't find address 0xfff946ccfffedee0 (0x0) in binary!
	0x24cfff94860  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0d18 in binary!
WARNING: couldn't find offset 0xffff0d18 in binary!
WARNING: couldn't find address 0xfff94944ffff0d18 (0x0) in binary!
	0x4d4fff949c8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee2e0 in binary!
WARNING: couldn't find offset 0xfffee2e0 in binary!
WARNING: couldn't find address 0xfff94a8cfffee2e0 (0x0) in binary!
	0x4ecfff94ae0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffede98 in binary!
WARNING: couldn't find offset 0xfffede98 in binary!
WARNING: couldn't find address 0xfff94b84fffede98 (0x0) in binary!
	0x75cfff956c8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffede80 in binary!
WARNING: couldn't find offset 0xfffede80 in binary!
WARNING: couldn't find address 0xfff9604cfffede80 (0x0) in binary!
	0x734fff96150  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffede68 in binary!
WARNING: couldn't find offset 0xfffede68 in binary!
WARNING: couldn't find address 0xfff96194fffede68 (0x0) in binary!
	0x1dcfff961d8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff4b60 in binary!
WARNING: couldn't find offset 0xffff4b60 in binary!
WARNING: couldn't find address 0xfff964ccffff4b60 (0x0) in binary!
	0x6ecfff965c0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0c88 in binary!
WARNING: couldn't find offset 0xffff0c88 in binary!
WARNING: couldn't find address 0xfff96bb4ffff0c88 (0x0) in binary!
	0x24cfff96c38  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffefe50 in binary!
WARNING: couldn't find offset 0xfffefe50 in binary!
WARNING: couldn't find address 0xfff96d0cfffefe50 (0x0) in binary!
	0xfff93420  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x6e4fffc24e8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0c40 in binary!
WARNING: couldn't find offset 0xffff0c40 in binary!
WARNING: couldn't find address 0xfffc253cffff0c40 (0x0) in binary!
	0x674fffc27a0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0c28 in binary!
WARNING: couldn't find offset 0xffff0c28 in binary!
WARNING: couldn't find address 0xfffc27f4ffff0c28 (0x0) in binary!
	0x1ccfffc2848  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee1f0 in binary!
WARNING: couldn't find offset 0xfffee1f0 in binary!
WARNING: couldn't find address 0xfffc289cfffee1f0 (0x0) in binary!
	0x634fffc2970  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee1d8 in binary!
WARNING: couldn't find offset 0xfffee1d8 in binary!
WARNING: couldn't find address 0xfffc29f4fffee1d8 (0x0) in binary!
	0x614fffc2c28  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee1c0 in binary!
WARNING: couldn't find offset 0xfffee1c0 in binary!
WARNING: couldn't find address 0xfffc2c9cfffee1c0 (0x0) in binary!
	0x68cfffc2dd0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffed1f9 in binary!
WARNING: couldn't find offset 0xfffed1f9 in binary!
WARNING: couldn't find address 0xfffc2e34fffed1f9 (0x0) in binary!
	0x664fffc30f8  @objc InCallControlsViewController.(null) <stripped>

	// Swift methods
	0x78b40  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let contentLayoutGuide : UILayoutGuide // +0x0
	let hotdog : UIView // +0x8
	let controlsView : InCallControlsView // +0x10
	let controlsViewTopConstraint : NSLayoutConstraint // +0x18
	var viewsToHideInUnexpandedState : [UIView] // +0x20
	var heightLayoutGuideLandscapeConstraint : NSLayoutConstraint? // +0x28
	var heightLayoutGuidePortraitConstraint : NSLayoutConstraint? // +0x30
 }

 struct ConversationKit.LegacyCallConfiguration {

	// Properties
	var identifier : String
	var mode : InCallControlsMode
	var localParticipant : Participant
	var remoteParticipant : Participant
 }

 enum ConversationKit.DeviceOrientation { }

 class ConversationKit.ParticipantMonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle
	let contactView : ParticipantContactView
	let glowClippingView : UIView?
	let glowView : UIImageView?
	let audioVisualizationView : AudioVisualizationView
	let titleLabelContainer : ParticipantViewLabelContainerView
	let subtitleLabelContainer : ParticipantViewLabelContainerView
	var isInRoster : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customCornerRadius : }.

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1920400040168 (0x20400040168) in binary!
	0x191f8  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0x191ec00040318 (0x1ec00040318) in binary!
	0x10130  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf36400040618 (0x36400040618) in binary!
	0xf778  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf76c000402b8 (0x76c000402b8) in binary!
	0xc8000000c  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xfb8400040e48 (0x38400040e48) in binary!
	0x100e8  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf73c00040b78 (0x73c00040b78) in binary!
	0x11758  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xe764000400c8 (0x764000400c8) in binary!
	0x1337e  @objc ParticipantMonogramView.(null) <stripped>

	// Swift methods
	0x82ea0  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
 }

 struct ConversationKit.ViewModel {

	// Properties
	var participantContactDetails : ParticipantContactDetails // +0x0
	var gradient : [UIColor] // +0x38
	var includeAudioVisualization : Bool // +0x40
	var titles : (title: String, subtitle: String?)? // +0x48
 }

 class ConversationKit.ParticipantMonogramViewLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let glowView : UIView?
	let audioVisualizer : UIView
	let contactView : UIView
	let titleView : ParticipantViewLabelContainerView
	let subtitleView : ParticipantViewLabelContainerView

	// Swift methods
	0x84b20  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
 }

 class ConversationKit.InCallControlsParticipantsTableViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let capabilitiesChecker : IDSCapabilitiesChecker
	var participants : Participant
	let isLegacy : Bool
	var groupName : String?
	var mode : InCallControlsMode
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate
	var inCallControlsParticipantsTableViewControllerDelegate : InCallControlsParticipantsTableViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfb8400040e48 (0x38400040e48) in binary!
	0x100e8  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0xf73c00040b78 (0x73c00040b78) in binary!
	0x11758  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0xe764000400c8 (0x764000400c8) in binary!
	0x1337e  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x1173c000400a0 (0x73c000400a0) in binary!
	0x169c0  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x1337400040078 (0x37400040078) in binary!
	0x13376  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x1170c00040b08 (0x70c00040b08) in binary!
	0xf6d0  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x47cfff77b28  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
	0x71cfff78800  @objc InCallControlsParticipantsTableViewController.f.Ñ <stripped>
	0x1ccfff79a18  @objc InCallControlsParticipantsTableViewController.SPIâ˛Iã}A∑HÖˇt;Hã5N <stripped>
	0xc000404c0  @objc InCallControlsParticipantsTableViewController. <stripped>
WARNING: couldn't find address 0x40a9cfff7e298 (0x29cfff7e298) in binary!
	0x28400040e38  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x40a74fff7eb00 (0x274fff7eb00) in binary!
	0x63c00040188  @objc InCallControlsParticipantsTableViewController.(null) <stripped>

	// Swift methods
	0x856f0  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
 }

 enum ConversationKit.TableViewSection {

	// Properties
	case title  
	case participants  
	case addParticipant  
	case reportAProblem  
 }

 enum ConversationKit.Action {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case buzz : ,
	case showMessages  
	case addParticipant  
	case reportAProblem  
 }

 class ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let nameLabel : UILabel
	let subtitleLabel : UILabel
	let cameraIcon : UIImageView
	let avatarView : ParticipantContactView
	let ringButton : InCallControlButton
	var callDelegate : ()?
	var delegate : InCallControlsParticipantTableViewCellDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1910c00040038 (0x10c00040038) in binary!
	0x13546  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x10044000404f8 (0x44000404f8) in binary!
	0xf698  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0xfabc00040de0 (0x2bc00040de0) in binary!
	0xf680  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x29cfff7e298  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
	0x274fff7eb00  @objc InCallControlsParticipantTableViewCell. <stripped>
	0xfff7f488  @objc InCallControlsParticipantTableViewCell.Ú∞Q <stripped>
 }

 struct ConversationKit.NotifyDispatchName {

	// Properties
	var rawValue : String // +0x0
 }

 struct ConversationKit.CircularBuffer {

	// Properties
	var array : [A?]
	var writeIndex : Int
	let count : Int
 }

 class ConversationKit.ReportAProblemContractViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let call : TUCall
	let conversation : Conversation
	let radarSession : RadarSession
	var radarIdentifier : UInt?
	let reportAProblemView : ReportAProblemView
	let activityIndicator : UIActivityIndicatorView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1000c000404c0 (0xc000404c0) in binary!
	0xf660  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xfa8400040e38 (0x28400040e38) in binary!
	0x11678  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xf63c00040188 (0x63c00040188) in binary!
	0x68000000c  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0x19074000401a0 (0x74000401a0) in binary!
	0xf1f8  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xffac00040460 (0x7ac00040460) in binary!
	0xf600  @objc ReportAProblemContractViewController.(null) <stripped>

	// Swift methods
	0x92240  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0x92d50  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0x92e00  func ReportAProblemContractViewController.didTapButton() // method 
	0x93220  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0x932e0  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xff7400040428 (0x77400040428) in binary!
	0xf5c8  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0x1240c00040eb8 (0x40c00040eb8) in binary!
	0xf9e0  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf9d400040ef8 (0x1d400040ef8) in binary!
	0x115c8  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf58c000400d8 (0x58c000400d8) in binary!
	0x78000000c  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xe3f40003fee8 (0x3f40003fee8) in binary!
	0xff08  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf55c00040998 (0x55c00040998) in binary!
	0x11184  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf97400040e08 (0x17400040e08) in binary!
	0x11568  @objc ReportAProblemSymptomsViewController.(null) <stripped>

	// Swift methods
	0x93840  func <stripped> // setter 
	0x94520  func <stripped> // method 
	0x94c30  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe3f40003fee8 (0x3f40003fee8) in binary!
	0xff08  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf55c00040998 (0x55c00040998) in binary!
	0x11184  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf97400040e08 (0x17400040e08) in binary!
	0x11568  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf52c00040078 (0x52c00040078) in binary!
	0x88000000c  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0x18f640003ff58 (0x7640003ff58) in binary!
	0xf938  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0x115240003fe60 (0x5240003fe60) in binary!
	0x11520  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf4e40003fe38 (0x4e40003fe38) in binary!
	0xf908  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>

	// Swift methods
	0x957e0  func <stripped> // method 
	0x95aa0  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19074000401a0 (0x74000401a0) in binary!
	0xf1f8  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0xffac00040460 (0x7ac00040460) in binary!
	0xf600  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0xfa24000403f8 (0x224000403f8) in binary!
	0xf5e8  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x204fff7f890  @objc ReportAProblemView.(null) <stripped>
	0x6bcfff801d8  @objc ReportAProblemView.√Ä <stripped>
	0x1c4fff80cc0  @objc ReportAProblemView.ﬂË6. <stripped>

	// Swift methods
	0x95de0  func <stripped> // setter 
	0x96c90  func <stripped> // method 
	0x96f90  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : OverallLayoutState
	var effectsConstraintManagers : ViewConstraintManager
	var currentConstraints : [NSLayoutConstraint]

	// Swift methods
	0x97bd0  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint]
	let effectsBrowserViewTopAnchor : NSLayoutConstraint

	// Swift methods
	0x98b70  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0x98e20  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession
	var pendingTask : NSURLSessionTask?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_encoder : ›
WARNING: couldn't find address 0x0 (0x0) in binary!
	let decoder : ≈

	// Swift methods
	0x99120  func RadarSession.encoder.getter // getter 
	0x98fe0  class func RadarSession.__allocating_init() // init 
	0x998c0  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0x99f10  func RadarSession.addSymptom(withRequest:) // method 
	0x9a2b0  func RadarSession.cancel() // method 
 }

 enum ConversationKit.CameraPosition {

	// Properties
	case front  
	case back  
	case unspecified  
 }

 class ConversationKit.InCallControlsDragController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let inCallControlsView : UIView
	let constraintsController : MultiwayViewConstraintsController
	let panGestureRecognizer : UIPanGestureRecognizer
	var animation : DragAnimation
	var delegate : weak CNKFaceTimeInCallControlsDragControllerDelegate?
	var disabledScrollViews : [UIScrollView]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18f640003ff58 (0x7640003ff58) in binary!
	0xf938  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x115240003fe60 (0x5240003fe60) in binary!
	0x11520  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0xf4e40003fe38 (0x4e40003fe38) in binary!
	0xf908  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x18f1c00040048 (0x71c00040048) in binary!
	0xf4c0  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff887d8  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x75cfff89d60  @objc InCallControlsDragController.(null) <stripped>
	0xfff8a028  @objc InCallControlsDragController. <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff93230  @objc InCallControlsDragController.(null) <stripped>

	// Swift methods
	0x9ac10  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
 }

 struct ConversationKit.DragAnimation {

	// Properties
	var animator : UIViewPropertyAnimator // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var validAnimationRange :  empty-list  // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gestureOffsetToTopOfControls : }. // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initialTranslationInView : }. // +0x20
	var isDraggingDown : Bool // +0x28
	var expandedState : InCallControlsState // +0x30
	var visibleState : InCallControlsState // +0x38
 }

 struct ConversationKit.KeyFrame {

	// Properties
	var state : InCallControlsState // +0x0
	var relativeStartTime : Double // +0x8
	var relativeDuration : Double // +0x10
 }

 struct ConversationKit.SpringAnimationParameters {

	// Properties
	var duration : Double // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mass : }. // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stiffness : }. // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var damping : }. // +0x18
 }

 struct ConversationKit.CubicAnimationParameters {

	// Properties
	let duration : Double // +0x0
	let controlPoint1 : CGPoint // +0x8
	let controlPoint2 : CGPoint // +0x18
 }

 struct ConversationKit.ParticipantMediaPriorities {

	// Properties
	var remoteIdentifiers : RemoteIdentifiers // +0x0
	var audioPriority : Float // +0x28
	var videoPriority : Float // +0x2c
 }

 class ConversationKit.CrossFadeAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10f060003ff70 (0x7060003ff70) in binary!
	0xf8b8  @objc CrossFadeAnimator.(null) <stripped>
WARNING: couldn't find address 0x18ecc0003fff8 (0x6cc0003fff8) in binary!
	0x18000000c  @objc CrossFadeAnimator.(null) <stripped>
WARNING: couldn't find address 0xffc80003ff98 (0x7c80003ff98) in binary!
	0x58000000c  @objc CrossFadeAnimator.(null) <stripped>
 }

 enum ConversationKit.PlatformAlertActionStyle {

	// Properties
	case default  
	case alternate  
	case other  
 }

 class ConversationKit.PlatformAlert : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var currentPresentedUserNotification : CFUserNotification
	let alertDictionary : NSMutableDictionary
	var buttonHandlers : PlatformAlertActionStyle
	var title : String?
	var message : String?
	var defaultButtonTitle : String?
	var alternateButtonTitle : String?
	var otherButtonTitle : String?

	// Swift methods
	0x9e6d0  func PlatformAlert.currentPresentedUserNotification.getter // getter 
	0x9e780  func PlatformAlert.buttonHandlers.getter // getter 
	0x9e890  func PlatformAlert.title.setter // setter 
	0x9e9b0  func PlatformAlert.message.setter // setter 
	0x9ead0  func PlatformAlert.defaultButtonTitle.setter // setter 
	0x9ebf0  func PlatformAlert.alternateButtonTitle.setter // setter 
	0x9ed10  func PlatformAlert.otherButtonTitle.setter // setter 
	0x9ed50  class func static PlatformAlert.create(with:message:) // method 
	0x9eea0  func PlatformAlert.addAction(title:style:handler:) // method 
	0x9efb0  func PlatformAlert.show() // method 
	0x9ee50  class func PlatformAlert.__allocating_init() // init 
 }

 struct ConversationKit.Participant: HasSortableHandle {

	// Properties
	var state : State
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ,
	var remoteIdentifiers : RemoteIdentifiers
	var gradient : [UIColor]
	var isMomentsAvailable : Bool
 }

 enum ConversationKit.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case waiting : ·+
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rung : ·+
WARNING: couldn't find address 0x0 (0x0) in binary!
	case broadcasting : e"
WARNING: couldn't find address 0x0 (0x0) in binary!
	case left : ·+
	case joining  
 }

 struct ConversationKit.RemoteIdentifiers {

	// Properties
	var handle : TUHandle // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var idsIdentifier : u // +0x8
	var avcIdentifier : String? // +0x18
 }

 struct ConversationKit.MediaInfo {

	// Properties
	var audioToken : Int // +0x0
	var videoInfo : VideoInfo // +0x8
 }

 struct ConversationKit.VideoState {

	// Properties
	var isReceivingVideoFrames : Bool // +0x0
	var isVideoSuspended : Bool // +0x1
	var isVideoPaused : Bool // +0x2
	var isVideoDegraded : Bool // +0x3
	var isVideoMirrored : Bool // +0x4
	var isChangingMirroredVideo : Bool // +0x5
 }

 enum ConversationKit.VideoProviderType {

	// Properties
	case grid  
	case list  
	case localPIP  
 }

 struct ConversationKit.VideoInfo {

	// Properties
	var providers : VideoProviderType // +0x0
	var state : VideoState // +0x8
	var orientation : DeviceOrientation // +0x10
	var cameraPosition : CameraPosition // +0x18
 }

 class ConversationKit.ParticipantViewLabelContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel
	var centerAlignedConstraints : [NSLayoutConstraint]
	var leadingAlignedConstraints : [NSLayoutConstraint]
	var isCentered : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18e9c0003fd98 (0x69c0003fd98) in binary!
	0xf020  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xf44400040ba0 (0x44400040ba0) in binary!
	0xfdc8  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xf41c0003ff68 (0x41c0003ff68) in binary!
	0x48000000c  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0x18e540003ff80 (0x6540003ff80) in binary!
	0xfd98  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xfd8c00040240 (0x58c00040240) in binary!
	0xf3e0  @objc ParticipantViewLabelContainerView.(null) <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18e540003ff80 (0x6540003ff80) in binary!
	0xfd98  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0xfd8c00040240 (0x58c00040240) in binary!
	0xf3e0  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff940b8  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x724fff96970  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf7fc00040e58 (0x7fc00040e58) in binary!
	0x38000000c  @objc DisplayLinkCallbackWrapper.(null) <stripped>

	// Swift methods
	0xa8610  class func <stripped> // init 
 }

 class ConversationKit.PlatformDisplayLink : PlatformDisplayLinkBase {

	// Properties
	var observers : WeakPlatformDisplayLinkObserver
	var isRunning : Bool
 }

 class ConversationKit.PlatformDisplayLinkBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let callbackWrapper : DisplayLinkCallbackWrapper
	var $__lazy_storage_$_displayLink : CADisplayLink?

	// Swift methods
	0xa8a20  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xa8a80  func PlatformDisplayLinkBase.start() // method 
	0xa8aa0  func PlatformDisplayLinkBase.cancel() // method 
	0xa8c30  class func PlatformDisplayLinkBase.__allocating_init() // init 
 }

 struct ConversationKit.WeakPlatformDisplayLinkObserver {

	// Properties
	var displayLinkObserver : PlatformDisplayLinkObserver // +0x0
 }

 struct ConversationKit.SymbolImageDescription {

	// Properties
	var name : String // +0x0
	var scale : SymbolScale // +0x10
	var textStyle : TextStyle // +0x18
	var staticWeight : SymbolWeight // +0x20
 }

 struct ConversationKit.SymbolImageDescribers { }

 enum ConversationKit.DrawerDisc {

	// Properties
	case flipCamera  
	case audioMute  
	case toggleCamera  
	case joinCall  
	case endCall  
 }

 enum ConversationKit.DrawerPill {

	// Properties
	case toggleCamera  
 }

 enum ConversationKit.DrawerTable {

	// Properties
	case openMessages  
	case addParticipant  
	case facetimeCall  
 }

 enum ConversationKit.BottomBar {

	// Properties
	case stopRecording  
 }

 class ConversationKit.EffectsLayoutController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var containingViewController : weak UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfd540003fcf8 (0x5540003fcf8) in binary!
	0x18df8  @objc EffectsLayoutController.(null) <stripped>
WARNING: couldn't find address 0xf39c0003fee8 (0x39c0003fee8) in binary!
	0x58000000c  @objc EffectsLayoutController.(null) <stripped>
WARNING: couldn't find address 0x18dd40003ff00 (0x5d40003ff00) in binary!
	0xfd18  @objc EffectsLayoutController.(null) <stripped>

	// Swift methods
	0xaadc0  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView
	let contactMonogram : MonogramView
	let silhouette : UIImageView
	var contactDetails : ParticipantContactDetails

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18dd40003ff00 (0x5d40003ff00) in binary!
	0xfd18  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0xef4c00040200 (0x74c00040200) in binary!
	0xf360  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0xf3540003fea0 (0x3540003fea0) in binary!
	0x28000000c  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0x18d8c0003feb8 (0x58c0003feb8) in binary!
	0xf330  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2bcfff9cff8  @objc ParticipantContactView.(null) <stripped>

	// Swift methods
	0xaaf90  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : Participant
	var offlineParticipants : Participant
	let participantIsShownInGrid : Participant
	var didCreateCellForParticipant : ParticipantCell

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18d8c0003feb8 (0x58c0003feb8) in binary!
	0xf330  @objc ParticipantsCollectionViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2bcfff9cff8  @objc ParticipantsCollectionViewDataSource.(null) <stripped>

	// Swift methods
	0xad110  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xb22e0  func Defaults.enableAudioVisualization.getter // getter 
	0xb2300  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xb2320  func Defaults.forceVideoLayerVisible.getter // getter 
	0xb2340  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xb2360  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xb2380  func Defaults.startUplinkMuted.getter // getter 
	0xb23a0  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xb23c0  func Defaults.supportsVideo.getter // getter 
	0xb23f0  func Defaults.supportsEffects.getter // getter 
	0xb2430  func Defaults.useFlattenedUI.getter // getter 
	0xb2450  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xb2480  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xb24b0  func Defaults.mimimumActiveDuration.getter // getter 
	0xb24e0  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xb2510  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xb2530  func Defaults.organicSashFontSize.getter // getter 
	0xb2550  func Defaults.organicCellCornerRadius.getter // getter 
	0xb2570  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xb2590  func Defaults.emaTimeScale.getter // getter 
	0xb25c0  func Defaults.emaTimerFrequency.getter // getter 
	0xb25f0  func Defaults.emaProminenceWeight1.getter // getter 
	0xb2620  func Defaults.emaProminenceWeight2.getter // getter 
	0xb2650  func Defaults.emaProminenceWeight3.getter // getter 
	0xb2680  func Defaults.emaProminenceWeight4.getter // getter 
	0xb26b0  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xb26e0  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xb2710  func Defaults.shouldCenterRoster.getter // getter 
	0xb2730  func Defaults.allowSelfZoom.getter // getter 
	0xb2740  func Defaults.allowAudioProminence.getter // getter 
	0xb2760  func Defaults.allowVideoProminence.getter // getter 
	0xb27e0  func Defaults.disableAutomaticDrawerHiding.getter // getter 
	0xb2840  func Defaults.allowLocalVideoRecording.getter // getter 
	0xb2850  func Defaults.reduceMotion.getter // getter 
	0xb2bb0  func Defaults.isInternalInstall.getter // getter 
	0xb2c80  func Defaults.bool(for:domain:default:) // method 
	0xb2d90  func Defaults.float(for:default:) // method 
	0xb2ef0  func Defaults.double(for:default:) // method 
	0xb2280  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any // +0x10 (0x20)

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10d5e0003fdc8 (0x55e0003fdc8) in binary!
	0xf710  @objc StagingAreaAnimator.(null) <stripped>
WARNING: couldn't find address 0x18d240003fe50 (0x5240003fe50) in binary!
	0x68000000c  @objc StagingAreaAnimator.(null) <stripped>
WARNING: couldn't find address 0xfc5c00040110 (0x45c00040110) in binary!
	0xf2b0  @objc StagingAreaAnimator.(null) <stripped>
 }

 struct ConversationKit.OrganicLayout {

	// Properties
	let frames : CGRect // +0x0
 }

 enum ConversationKit.DeviceType {

	// Properties
	case phone  
	case pad  
	case mac  
 }

 struct ConversationKit.Configuration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minCellOverlap : }. // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minCellOverlapThreshold : }. // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxCellOverlap : }. // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxCellOverlapThreshold : }. // +0x18
 }

 class ConversationKit.MostActiveParticipantViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : Participant // +0x8 (0x8)
	var focusedParticipant : Participant // +0x122370 (0x0)
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate // +0xbbfa (0x10)
	let participantView : ParticipantView // +0x122370 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfc5c00040110 (0x45c00040110) in binary!
	0xf2b0  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x112cc0003fd68 (0x2cc0003fd68) in binary!
	0xf298  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x112bc000406b8 (0x2bc000406b8) in binary!
	0xf280  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x69cfffa54e8  @objc MostActiveParticipantViewController.(null) <stripped>
	0xa4fffa5a00  @objc MostActiveParticipantViewController.PHãËœ <stripped>
	0x65cfffa5bc8  @objc MostActiveParticipantViewController.A]]√@ <stripped>

	// Swift methods
	0xb6ab0  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x0
	var viewContent : ViewContent // +0x0
	var lastLayedOutViewSize : CGSize // +0x11c910
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate // +0x0

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfc0c000400c0 (0x40c000400c0) in binary!
	0xf260  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x120a400040868 (0xa400040868) in binary!
	0xf248  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x112640003fd00 (0x2640003fd00) in binary!
	0x11260  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0xf2240003fd70 (0x2240003fd70) in binary!
	0x28000000c  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x1489c0003f9a8 (0x9c0003f9a8) in binary!
	0x14890  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x34fffa8b28  @objc ParticipantListViewController.(null) <stripped>
	0x514fffa8db0  @objc ParticipantListViewController.â˛Hâ⁄Ë	 <stripped>

	// Swift methods
	0xb9900  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint]

	// Swift methods
	0xbc700  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xbc980  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18c3c0003fd68 (0x43c0003fd68) in binary!
	0xfb80  @objc ParticipantAlertView.(null) <stripped>
WARNING: couldn't find address 0xedb400040068 (0x5b400040068) in binary!
	0xf1c8  @objc ParticipantAlertView.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x24fffbe5e0  @objc ParticipantAlertView.(null) <stripped>
	0x11cfffbd018  @objc ParticipantAlertView. <stripped>
 }

 struct ConversationKit.ViewModel {

	// Properties
	let text : String // +0x0
 }

 class ConversationKit.MultiwayViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversationController : ConversationController
	let mostActiveParticipantsController : MostActiveParticipantsController
	var avcEffects : AVCEffects?
	var effectsCaptureInfo : EffectsCaptureInfo
	var viewContent : ViewContent
	var inCallControlsDismissTimer : NSTimer?
	var hideInactiveParticipantsTimer : NSTimer?
	var effectsLayoutController : EffectsLayoutController
	var pipZoomControl : PipZoomControl
	var shouldShowZoomControls : Bool
	var deviceOrientation : DeviceOrientation
	var isOnScreen : Bool
	var delegate : weak CNKFaceTimeMultiwayConversationViewControllerDelegate?
	var effectsEnabled : Bool
	var isPipped : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find offset 0xfffee3d0 in binary!
	0x0  @objc MultiwayViewController.ˇLâˇË_P <stripped>
WARNING: couldn't find offset 0xfffeffb0 in binary!
WARNING: couldn't find offset 0xfffeffb0 in binary!
	0x0  @objc MultiwayViewController.k(Hçw <stripped>
WARNING: couldn't find offset 0xfffed3f1 in binary!
WARNING: couldn't find offset 0xfffed3f1 in binary!
	0x0  @objc MultiwayViewController.Ëõ8 <stripped>
WARNING: couldn't find offset 0xffff0da8 in binary!
WARNING: couldn't find offset 0xffff0da8 in binary!
	0x0  @objc MultiwayViewController.ZHâ«Ë5> <stripped>
WARNING: couldn't find offset 0xfffee370 in binary!
WARNING: couldn't find offset 0xfffee370 in binary!
	0x0  @objc MultiwayViewController.ËQ> <stripped>
WARNING: couldn't find offset 0xffff0d78 in binary!
WARNING: couldn't find offset 0xffff0d78 in binary!
	0x0  @objc MultiwayViewController.çΩ–˛ˇˇËÂC <stripped>
WARNING: couldn't find offset 0xfffeff40 in binary!
WARNING: couldn't find offset 0xfffeff40 in binary!
	0x0  @objc MultiwayViewController.Hâ∆Ë <stripped>
WARNING: couldn't find offset 0xfffee898 in binary!
WARNING: couldn't find offset 0xfffee898 in binary!
	0x0  @objc MultiwayViewController.:7 <stripped>
WARNING: couldn't find offset 0xfffedee0 in binary!
WARNING: couldn't find offset 0xfffedee0 in binary!
	0x0  @objc MultiwayViewController.HãU®HcB AäHcKAàHcBMã$Hç5˚ <stripped>
WARNING: couldn't find offset 0xffff0d18 in binary!
WARNING: couldn't find offset 0xffff0d18 in binary!
	0x0  @objc MultiwayViewController.î‰ˇˇHâE»Hã@¯HX@L!„Iâ‰I)‹Lâ‰Hã}–Lâ˛Hç. <stripped>
WARNING: couldn't find offset 0xfffee2e0 in binary!
WARNING: couldn't find offset 0xfffee2e0 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xfffede98 in binary!
WARNING: couldn't find offset 0xfffede98 in binary!
	0x0  @objc MultiwayViewController.]√Hç=ﬂ  <stripped>
WARNING: couldn't find offset 0xfffede80 in binary!
WARNING: couldn't find offset 0xfffede80 in binary!
	0x0  @objc MultiwayViewController.ÔHâﬁËÁ <stripped>
WARNING: couldn't find offset 0xfffede68 in binary!
WARNING: couldn't find offset 0xfffede68 in binary!
	0x0  @objc MultiwayViewController.Lãm®Ëü <stripped>
WARNING: couldn't find offset 0xffff4b60 in binary!
WARNING: couldn't find offset 0xffff4b60 in binary!
	0x0  @objc MultiwayViewController.5s‹ <stripped>
WARNING: couldn't find offset 0xffff0c88 in binary!
WARNING: couldn't find offset 0xffff0c88 in binary!
	0x0  @objc MultiwayViewController.ã$Hç56 <stripped>
WARNING: couldn't find offset 0xfffefe50 in binary!
WARNING: couldn't find offset 0xfffefe50 in binary!
	0x0  @objc MultiwayViewController.}»HãM¿IâMâlHãU∞HcB AäHcKAàHcBMã$Hç56 <stripped>
	0x1f8000000c  @objc MultiwayViewController.A\A]A^A_]√Hç=ﬂ  <stripped>
WARNING: couldn't find offset 0xffff0c40 in binary!
WARNING: couldn't find offset 0xffff0c40 in binary!
	0x0  @objc MultiwayViewController.àHcBMã$Hç56 <stripped>
WARNING: couldn't find offset 0xffff0c28 in binary!
WARNING: couldn't find offset 0xffff0c28 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xfffee1f0 in binary!
WARNING: couldn't find offset 0xfffee1f0 in binary!
	0x0  @objc MultiwayViewController.Lâ˜Ëh( <stripped>
WARNING: couldn't find offset 0xfffee1d8 in binary!
WARNING: couldn't find offset 0xfffee1d8 in binary!
	0x0  @objc MultiwayViewController.ãE∞HcXLÛ1ˇË≈9 <stripped>
WARNING: couldn't find offset 0xfffee1c0 in binary!
WARNING: couldn't find offset 0xfffee1c0 in binary!
	0x0  @objc MultiwayViewController.ÁË( <stripped>
WARNING: couldn't find offset 0xfffed1f9 in binary!
WARNING: couldn't find offset 0xfffed1f9 in binary!
	0x0  @objc MultiwayViewController.ˇˇLâ‡LâˇHâﬁË <stripped>
WARNING: couldn't find offset 0xffff0bb0 in binary!
WARNING: couldn't find offset 0xffff0bb0 in binary!
	0x0  @objc MultiwayViewController.HÉ=–Õ <stripped>
WARNING: couldn't find offset 0xffff77a9 in binary!
WARNING: couldn't find offset 0xffff77a9 in binary!
	0x0  @objc MultiwayViewController.\? <stripped>
WARNING: couldn't find offset 0xfffedd30 in binary!
WARNING: couldn't find offset 0xfffedd30 in binary!
	0x0  @objc MultiwayViewController.Ë+$ <stripped>
WARNING: couldn't find offset 0xfffedd18 in binary!
WARNING: couldn't find offset 0xfffedd18 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xfffefd28 in binary!
WARNING: couldn't find offset 0xfffefd28 in binary!
	0x0  @objc MultiwayViewController.º <stripped>
WARNING: couldn't find offset 0xfffedce8 in binary!
WARNING: couldn't find offset 0xfffedce8 in binary!
	0x0  @objc MultiwayViewController.LPHâM∏HãLXHâM¿HãD`HâE»Hç–ﬁˇˇHâﬂLâˆË’ <stripped>
WARNING: couldn't find offset 0xfffedcd0 in binary!
WARNING: couldn't find offset 0xfffedcd0 in binary!
	0x0  @objc MultiwayViewController.¸1ˇËê <stripped>
WARNING: couldn't find offset 0xfffedcb8 in binary!
WARNING: couldn't find offset 0xfffedcb8 in binary!
	0x0  @objc MultiwayViewController.Ë©B <stripped>
WARNING: couldn't find offset 0xfffefcd0 in binary!
WARNING: couldn't find offset 0xfffefcd0 in binary!
	0x0  @objc MultiwayViewController.‰ <stripped>
	0x100000001c  @objc MultiwayViewController. <stripped>
WARNING: couldn't find address 0x5c (0x5c) in binary!
	0xd101000000  @objc MultiwayViewController.(null) <stripped>

	// Swift methods
	0xc5050  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	var listViewController : ParticipantListViewController // +0x0
	var gridViewController : ParticipantGridViewController // +0x8
	var controlsViewController : InCallControlsViewController // +0x10
	var constraintController : MultiwayViewConstraintsController // +0x18
	var controlsDragController : InCallControlsDragController // +0x20
	var floatingLocalParticipantView : LocalParticipantView // +0x28
	var effectsViewController : UIViewController? // +0x30
	var effectsBrowserViewController : UIViewController? // +0x38
	var floatingControlsView : UIView? // +0x40
	var mostActiveParticipantViewController : MostActiveParticipantViewController // +0x48
 }

 struct ConversationKit.EffectsCaptureInfo {

	// Properties
	var cameraViewController : UIViewController // +0x0
	var presentationFrame : CGRect // +0x8
	var contentsFrame : CGRect // +0x28
 }

 class ConversationKit.ConversationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var localParticipant : Participant // +0x77735f5f (0x0)
	var remoteParticipants : Participant // +0x6975625f (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x0 (0x1)
	var carPlayDisconnectRequiresLocalVideoEnable : Bool // +0x26c (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x0 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x0 (0x8)
	var $__lazy_storage_$_momentsController : TUMomentsController? // +0x0 (0x8)
	var lastRegisteredMomentsProvider : TUMomentsProvider? // +0x0 (0x8)
	var blockedCallerLookupQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recentPresentationContexts :  empty-list  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledIsChangingMirroredVideoResetDates :  empty-list  // +0x0 (0x8)
	var conversationState : TUConversationState // +0x0 (0x8)
	var deviceOrientation : DeviceOrientation // +0x0 (0x8)
	var broadcastingState : BroadcastingState // +0x0 (0x10)
	var didAddVisibleParticipant : Participant // +0x0 (0x10)
	var didRemoveVisibleParticipant : Participant // +0x77735f5f (0x10)
	var didUpdateVisibleParticipant : Participant // +0x6665725f (0x10)
	var visibleParticipantDidBecomeActive : Participant // +0x45545f5f (0x10)
	var didStartVideoForVisibleParticipant : Participant // +0x0 (0x10)
	var participantsMediaPrioritiesDidChange : ParticipantMediaPriorities // +0x12e1e0 (0x10)
	var participantAudioPowerDidChange : Participant // +0x355e (0x10)
	var audioRouteDidChange : (_:)? // +0x12e1e0 (0x10)
	var cameraZoomAvailabiltyDidChange : (_:)? // +0x0 (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x0 (0x10)
	var didUpdateLocalParticipant : Participant // +0x0 (0x10)
	var didUpdateRecordingLocalVideo : (_:)? // +0x0 (0x10)
	var didStartVideoForLocalParticipant : Participant // +0x77735f5f (0x10)
	var conversationStateDidChange : TUConversationState // +0x6569665f (0x10)
	var blockedParticipantsAdded : Participant // +0x45545f5f (0x10)
	var blocklistCheckedHandles : Set<TUHandle>? // +0x0 (0x8)
	var needsUserConfirmationForBlockedCaller : Bool // +0x2 (0x1)
	var enableVideoOnJoin : Bool // +0x0 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x131740 (0x28)
	var callCenter : CallCenterProvider // +0x45545f5f (0x28)
	let call : TUCall // +0x12df6c (0x8)
	let blockedCallerChecker : BlockedCallerChecker // +0x3210 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conversationUUID : ', // +0x0 (0x0)
	var localVideoRecordingTransactionID : String? // +0x12df6c (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18b84000402d8 (0x384000402d8) in binary!
	0xf128  @objc ConversationController.(null) <stripped>
WARNING: couldn't find address 0x18b6c0003fc98 (0x36c0003fc98) in binary!
	0xf110  @objc ConversationController.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x50cfffdbc58  @objc ConversationController.(null) <stripped>
	0x4dcfffdc190  @objc ConversationController.N1 <stripped>

	// Swift methods
	0xd97b0  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:blockedCallerChecker:includeLocalParticipantInVisibleParticipants:) // init 
 }

 struct ConversationKit.InCallControlsTitleCellModel {

	// Properties
	let groupName : String? // +0x0
	let summary : String // +0x10
	let shouldShowMessagesButton : Bool // +0x20
 }

 enum ConversationKit.InCallControlsMode {

	// Properties
	case staging : (canJoin: Bool)
	case inCall  
 }

 struct ConversationKit.RadarResponse {

	// Properties
	let response : ResponseType // +0x0
	let radarIdentifier : UInt? // +0x8
 }

 enum ConversationKit.ResponseType {

	// Properties
	case success  
	case error  
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case response  
	case radarIdentifier  
 }

 struct ConversationKit.Layout { }

 struct ConversationKit.MultiwayFaceTime { }

 struct ConversationKit.Roster { }

 struct ConversationKit.LocalParticipantView { }

 struct ConversationKit.ParticipantViews { }

 struct ConversationKit.ParticipantMonogramViews { }

 struct ConversationKit.ParticipantAlertViews { }

 struct ConversationKit.InCallControls { }

 struct ConversationKit.InCallControlsButton { }

 struct ConversationKit.ParticipantContactAvatars { }

 struct ConversationKit.ParticipantRingView { }

 struct ConversationKit.Staging { }

 struct ConversationKit.AudioVisualization { }

 class ConversationKit.StagingAreaViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantLabel : UILabel
	var secondaryParticipantLabel : UILabel
	var localPreviewFrontView : UIView
	var localPreviewBackView : UIView
	var audioVisualizationView : UIView
	var controlsViewController : InCallControlsViewController
	var constraintController : MultiwayViewConstraintsController
	var controlsDragController : InCallControlsDragController
	var effectsEnabled : Bool
	var avcEffects : AVCEffects?
	var effectsCaptureInfo : EffectsCaptureInfo
	var effectsViewController : UIViewController?
	var effectsBrowserViewController : UIViewController?
	var effectsLayoutController : EffectsLayoutController
	let conversationController : ConversationController
	let videoDeviceController : TUVideoDeviceController
	var numberFormatter : NSNumberFormatter
	var scheduledUpdateTimer : NSTimer?
	var isWaitingToConnect : Bool
	var hasJoined : Bool
	var delegate : weak CNKFaceTimeMultiwayConversationViewControllerDelegate?
	var stagingAreaDelegate : weak CNKStagingAreaViewControllerDelegate?
	var call : TUCall
	var deviceOrientation : DeviceOrientation
	var isOnScreen : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xffff0c40 in binary!
WARNING: couldn't find offset 0xffff0c40 in binary!
	0x0  @objc StagingAreaViewController.àHcBMã$Hç56 <stripped>
WARNING: couldn't find offset 0xffff0c28 in binary!
WARNING: couldn't find offset 0xffff0c28 in binary!
	0x0  @objc StagingAreaViewController. <stripped>
WARNING: couldn't find offset 0xfffee1f0 in binary!
WARNING: couldn't find offset 0xfffee1f0 in binary!
	0x0  @objc StagingAreaViewController.Lâ˜Ëh( <stripped>
WARNING: couldn't find offset 0xfffee1d8 in binary!
WARNING: couldn't find offset 0xfffee1d8 in binary!
	0x0  @objc StagingAreaViewController.ãE∞HcXLÛ1ˇË≈9 <stripped>
WARNING: couldn't find offset 0xfffee1c0 in binary!
WARNING: couldn't find offset 0xfffee1c0 in binary!
	0x0  @objc StagingAreaViewController.ÁË( <stripped>
WARNING: couldn't find offset 0xfffed1f9 in binary!
WARNING: couldn't find offset 0xfffed1f9 in binary!
	0x0  @objc StagingAreaViewController.ˇˇLâ‡LâˇHâﬁË <stripped>
WARNING: couldn't find offset 0xffff0bb0 in binary!
WARNING: couldn't find offset 0xffff0bb0 in binary!
	0x0  @objc StagingAreaViewController.HÉ=–Õ <stripped>
WARNING: couldn't find offset 0xffff77a9 in binary!
WARNING: couldn't find offset 0xffff77a9 in binary!
	0x0  @objc StagingAreaViewController.\? <stripped>
WARNING: couldn't find offset 0xfffedd30 in binary!
WARNING: couldn't find offset 0xfffedd30 in binary!
	0x0  @objc StagingAreaViewController.Ë+$ <stripped>
WARNING: couldn't find offset 0xfffedd18 in binary!
WARNING: couldn't find offset 0xfffedd18 in binary!
	0x0  @objc StagingAreaViewController. <stripped>
WARNING: couldn't find offset 0xfffefd28 in binary!
WARNING: couldn't find offset 0xfffefd28 in binary!
	0x0  @objc StagingAreaViewController.º <stripped>
WARNING: couldn't find offset 0xfffedce8 in binary!
WARNING: couldn't find offset 0xfffedce8 in binary!
	0x0  @objc StagingAreaViewController.LPHâM∏HãLXHâM¿HãD`HâE»Hç–ﬁˇˇHâﬂLâˆË’ <stripped>
WARNING: couldn't find offset 0xfffedcd0 in binary!
WARNING: couldn't find offset 0xfffedcd0 in binary!
	0x0  @objc StagingAreaViewController.¸1ˇËê <stripped>
WARNING: couldn't find offset 0xfffedcb8 in binary!
WARNING: couldn't find offset 0xfffedcb8 in binary!
	0x0  @objc StagingAreaViewController.Ë©B <stripped>
WARNING: couldn't find offset 0xfffefcd0 in binary!
WARNING: couldn't find offset 0xfffefcd0 in binary!
	0x0  @objc StagingAreaViewController.‰ <stripped>
	0x100000001c  @objc StagingAreaViewController. <stripped>
WARNING: couldn't find address 0x5c (0x5c) in binary!
	0xd101000000  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x101000101020021 (0x101020021) in binary!
	0x1901040b11  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x202000001030119 (0x1030119) in binary!
	0x2040802  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x10408d101030111 (0xd101030111) in binary!
	0x2b0000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400000438 (0xa400000438) in binary!
	0x150000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400002438 (0xa400002438) in binary!
	0x6db000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400000000 (0xa400000000) in binary!
	0x1c0324  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x400008006000020 (0x8006000020) in binary!
	0x4c001000120  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x1000550060004e0 (0x550060004e0) in binary!
	0x74000000720  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x5000820000007b0 (0x20000007b0) in binary!
	0x4b006000a80  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xd4001000cd0 (0x54001000cd0) in binary!
	0x2002000e70  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x107002001040 (0x7002001040) in binary!
	0x210000011d0  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x20013d0000013b0 (0x3d0000013b0) in binary!
	0x4f0040014a0  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x700156008001510 (0x56008001510) in binary!
	0x78003001720  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x4001890000017f0 (0x90000017f0) in binary!
	0x19000001980  @objc StagingAreaViewController.(null) <stripped>

	// Swift methods
	0xf93c0  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
 }

 struct ConversationKit.EffectsCaptureInfo {

	// Properties
	var cameraViewController : UIViewController // +0x0
	var presentationFrame : CGRect // +0x8
	var contentsFrame : CGRect // +0x28
 }

 struct ConversationKit.Animation { }

 struct ConversationKit.InCallControls { }

 struct ConversationKit.MultiwayView { }

 struct ConversationKit.ParticipantView { }

 struct ConversationKit.StagingAreaAnimator { }

 struct ConversationKit.AudioVisualization { }

 struct ConversationKit.Fonts { }

 struct ConversationKit.ParticipantViews { }

 struct ConversationKit.StagingArea { }

 struct ConversationKit.InCallControls { }

 struct ConversationKit.Roster { }

 class ConversationKit.InCallControlsFramesCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var inCallControlsViewFrames : InCallControlsState

	// Swift methods
	0x102e00  class func InCallControlsFramesCache.__allocating_init() // init 
 }

 class ConversationKit.ParticipantView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let backgroundEffectsView : UIView? // +0x8 (0x8)
	let contentView : UIView // +0x10 (0x8)
	let monogramView : ParticipantMonogramView // +0x18 (0x8)
	let videoView : ParticipantVideoView // +0x20 (0x8)
	let alertView : ParticipantAlertView // +0x28 (0x8)
	let videoOverlayView : ParticipantVideoOverlayView // +0x30 (0x8)
	let bottomBar : ParticipantInfoView // +0x38 (0x8)
	let debugLabel : UILabel // +0x40 (0x8)
	var mostRecentViewModelHash : Int? // +0x48 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let loggingIdentifier : , // +0x0 (0x0)
	var hideBottomBarTimer : NSTimer? // +0x0 (0x8)
	var hideAlertViewTimer : NSTimer? // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : ', // +0x0 (0x0)
	var delegate : ParticipantViewDelegate // +0x1356a8 (0x10)
	var isInRoster : Bool // +0x45545f5f (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customCornerRadius : }. // +0x58c (0x8)
	var isExpanded : Bool // +0x1356a8 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18a2c0003f848 (0x22c0003f848) in binary!
	0x10ff8  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x11e140003f820 (0x6140003f820) in binary!
	0x10fe0  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x11dfc0003fa50 (0x5fc0003fa50) in binary!
	0xeb80  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0xf9340003fde8 (0x1340003fde8) in binary!
	0xef88  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0xef7c00040000 (0x77c00040000) in binary!
	0xef70  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x5a4ffff7258  @objc ParticipantView.(null) <stripped>
	0x7bcffff7520  @objc ParticipantView.Hã5—L <stripped>
	0xffff7908  @objc ParticipantView.))N)V )^0)f@)nP)v`)~pHçEÄD) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x754ffff9420  @objc ParticipantView.(null) <stripped>
	0x72cffff97a8  @objc ParticipantView.ç}HHçuË1“1…ËEC <stripped>
 }

 struct ConversationKit.InCallControlsParticipantTableViewCellModel {

	// Properties
	var contactDetails : ParticipantContactDetails
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : ,
	var name : String
	var subtitle : SubtitleState
	var ringButtonLabel : String
	var shouldShowRingButton : Bool
	var shouldEnableRingButton : Bool
	var contactGradient : [UIColor]
	var nameLabelColor : UIColor
 }

 enum ConversationKit.SubtitleState {

	// Properties
	case visible : String
	case visibleWithCameraIcon : String
	case hidden  
 }

 class ConversationKit.ParticipantVideoOverlayView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView
	let imageView : UIImageView
	let monogramView : ParticipantMonogramView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x189ac0003fad8 (0x1ac0003fad8) in binary!
	0xf8f0  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0xeb240003fdd8 (0x3240003fdd8) in binary!
	0xef38  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0xef2c0003fa78 (0x72c0003fa78) in binary!
	0xb8000000c  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0x10b480003f768 (0x3480003f768) in binary!
	0xe389  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0x10b300003f740 (0x3300003f740) in binary!
	0xe371  @objc ParticipantVideoOverlayView.(null) <stripped>
 }

 enum ConversationKit.ViewModel {

	// Properties
	case icon : ImageName
	case symbol : SymbolImageDescription
	case monogram : ViewModel
	case empty  
 }

 enum ConversationKit.BroadcastingState {

	// Properties
	case audio : (muted: Bool)
	case audioVideo : CameraPosition
 }

 enum ConversationKit.PlatformEffectViewStyle {

	// Properties
	case extraLight  
	case light  
	case dark  
 }

 enum ConversationKit.InCallControlsState { }

 class ConversationKit.MultiwayViewConstraintsController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var participantListState : ParticipantListState
	var localParticipantState : LocalParticipantState
	var inCallControlsState : InCallControlsState
	var floatingControlsState : FloatingControlsState
	var viewStateEffects : OverallLayoutState
	let viewControllerLayout : ViewControllerLayout
	let inCallControlsFramesCache : InCallControlsFramesCache

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10b480003f768 (0x3480003f768) in binary!
	0xe389  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x10b300003f740 (0x3300003f740) in binary!
	0xe371  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x193f40003f718 (0x3f40003f718) in binary!
	0x19408  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x1942c0003f6f0 (0x42c0003f6f0) in binary!
	0xeec0  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x14f540003f6c8 (0x7540003f6c8) in binary!
	0x188f8  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0xee9c0003f9e8 (0x69c0003f9e8) in binary!
	0x25029232840  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x766e6f433a4d4152 (0x7433a4d4152) in binary!
	0x202074694b  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x6e6f433a5443454a (0x33a5443454a) in binary!
	0x12d74694b6e  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x3  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x404c000000000000 (0x0) in binary!
	0x435f5f  @objc MultiwayViewConstraintsController.(null) <stripped>
	0x54e00656c61  @objc MultiwayViewConstraintsController.œ˙Ì˛ <stripped>

	// Swift methods
	0x10d590  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x10d7d0  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
 }

 enum ConversationKit.ParticipantListState {

	// Properties
	case hidden  
	case visible  
 }

 enum ConversationKit.LocalParticipantState { }

 enum ConversationKit.FloatingControlsState {

	// Properties
	case hidden  
	case visible  
 }

 struct ConversationKit.OverallLayoutState {

	// Properties
	var listState : ParticipantListState // +0x0
	var controlsState : InCallControlsState // +0x8
	var localState : LocalParticipantState // +0x10
 }

 enum __C.SymbolScale { }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : }.
 }

 enum __C.TUConversationParticipantVideoQuality { }

 struct __C.State {

	// Properties
	let rawValue : UInt
 }

 struct __C.CATransform3D {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m11 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m12 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m13 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m14 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m21 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m22 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m23 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m24 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m31 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m32 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m33 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m34 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m41 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m42 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m43 : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m44 : }.
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 class __C.CFUserNotification {
 class __C.CFString {
 enum __C.State { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : }.
 }

 enum __C.SymbolWeight { }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.AutoresizingMask {

	// Properties
	let rawValue : UInt
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.Position { }

 struct __C.CGAffineTransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : }.
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : }.
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.TUConversationState { }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.TUHandleType { }

 struct __C.CGGradientDrawingOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : q5
 }

 enum __C.UIViewAnimatingPosition { }

 class __C.CGColor {

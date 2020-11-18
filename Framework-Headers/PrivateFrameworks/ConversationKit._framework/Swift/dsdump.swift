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
	let date : ¡)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupUUID : Î)
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
	let identifier : -2 // +0x10
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
WARNING: couldn't find address 0x1985400040d80 (0x5400040d80) in binary!
	0x10408  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x11aa0000409b8 (0x2a0000409b8) in binary!
	0xf441  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x1982400040920 (0x2400040920) in binary!
	0x103d8  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x103cc000408e0 (0x3cc000408e0) in binary!
	0x103c0  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0xff84000408c0 (0x784000408c0) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0xf46600040568 (0x46600040568) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x11e1c00040888 (0x61c00040888) in binary!
	0x18000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x197ac000408a8 (0x7ac000408a8) in binary!
	0x68000000c  @objc TapInteraction.(null) <stripped>
WARNING: couldn't find address 0x1979400040850 (0x79400040850) in binary!
	0x13c4e  @objc TapInteraction.(null) <stripped>
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
	0xe060  func InCallControlsViewConstraintManager.type.getter // getter 
	0xe090  func InCallControlsViewConstraintManager.type.setter // setter 
	0xe0d0  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xe140  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xe4a0  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xe590  func InCallControlsViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.InCallControlsLayoutType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case effectsVisible : ],
	case leftFloating : DeviceOrientation
	case hidden  
	case bottomLeftFloating  
 }

 class ConversationKit.TUBlockedCallerChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib, BlockedCallerChecker {
	// Swift methods
	0xefc0  func TUBlockedCallerChecker.blockListContains(_:with:) // method 
	0xf0e0  class func TUBlockedCallerChecker.__allocating_init() // init 
 }

 class ConversationKit.SpringBoardUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xf270  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient?

	// Swift methods
	0xf2d0  func RemoteParticipantVideoProvider.token.getter // getter 
	0xf300  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xf320  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xf330  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xf350  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xf3e0  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xf550  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
	0xf710  func RemoteParticipantVideoProvider.isEqual(to:) // method 
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
WARNING: couldn't find address 0x197ac000408a8 (0x7ac000408a8) in binary!
	0x68000000c  @objc PipZoomControl.(null) <stripped>

	// Swift methods
	0x13100  func <stripped> // method 
	0x13210  func <stripped> // method 
	0x13220  func <stripped> // method 
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
WARNING: couldn't find address 0x1979400040850 (0x79400040850) in binary!
	0x13c4e  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1074c00040b50 (0x74c00040b50) in binary!
	0x10330  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1032400040b40 (0x32400040b40) in binary!
	0xfee8  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff028b0  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x334fff02108  @objc InCallControlsAddParticipantTableViewCell.(null) <stripped>
	0x7d4fff02290  @objc InCallControlsAddParticipantTableViewCell.çeÿ[A\A]A^A_]√fêUHâÂAUPMãm <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle
	var gradient : [UIColor]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1972c00040828 (0x72c00040828) in binary!
	0xfa90  @objc AudioVisualizationView.(null) <stripped>
WARNING: couldn't find address 0x106e400040ae8 (0x6e400040ae8) in binary!
	0xfe98  @objc AudioVisualizationView.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x334fff035d0  @objc AudioVisualizationView.(null) <stripped>
	0x84fff03b18  @objc AudioVisualizationView. <stripped>

	// Swift methods
	0x14a90  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x14b30  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x14f30  func AudioVisualizationView.scale.getter // getter 
	0x14f80  func AudioVisualizationView.scale.setter // setter 
	0x14fe0  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x152a0  func AudioVisualizationView.gradient.getter // getter 
	0x152e0  func AudioVisualizationView.gradient.setter // setter 
	0x15340  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x153b0  func AudioVisualizationView.startAnimation() // method 
	0x153d0  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool
	var scale : Float
	var scaleBuffer : CircularBuffer
	let rings : AudioVisualizationRingLayer
	var color : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x196f4000407f0 (0x6f4000407f0) in binary!
	0x106b8  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x106ac00040ab0 (0x6ac00040ab0) in binary!
	0xfe60  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0xfb9400040b18 (0x39400040b18) in binary!
	0xfbb8  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x16f9c00040b18 (0x79c00040b18) in binary!
	0xfe30  @objc AudioVisualizationLayer.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x254fff077a8  @objc AudioVisualizationLayer.(null) <stripped>
	0x714fff083b0  @objc AudioVisualizationLayer.5ªˇˇˇËº <stripped>
	0x6ecfff08488  @objc AudioVisualizationLayer.Æ <stripped>
	0x704fff08a50  @objc AudioVisualizationLayer.S <stripped>
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
	0x17ce0  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x17d10  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x17d60  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x17dd0  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x18e40  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x18ed0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
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
WARNING: couldn't find address 0x1968c00040788 (0x68c00040788) in binary!
	0x10650  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0xfe0400040b40 (0x60400040b40) in binary!
	0xfe08  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0xfe1c00040700 (0x61c00040700) in binary!
	0x10620  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0xf9b4000406d8 (0x1b4000406d8) in binary!
	0xfdc8  @objc ParticipantListLayout.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x22cfff119c0  @objc ParticipantListLayout.(null) <stripped>
	0x344fff12098  @objc ParticipantListLayout.ÊI)∆LâÙHç=ª <stripped>
	0x664fff123b0  @objc ParticipantListLayout.UHâÂAUPMãm <stripped>
	0xfff124f8  @objc ParticipantListLayout.[A^]√ <stripped>
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
	0x1d260  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1d510  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
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
	var identifier : Î)
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
	0x229d0  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : * // +0x112ac0 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19624000406b0 (0x624000406b0) in binary!
	0xf988  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x105dc000409e0 (0x5dc000409e0) in binary!
	0xfd90  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x195f400040678 (0x5f400040678) in binary!
	0x101a8  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0xfd6c000406a8 (0x56c000406a8) in binary!
	0x78000000c  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x195c400040638 (0x5c400040638) in binary!
	0x195b8  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x13a72000408f8 (0x272000408f8) in binary!
	0x10570  @objc ParticipantCell.(null) <stripped>
WARNING: couldn't find address 0x1015400040970 (0x15400040970) in binary!
	0x10148  @objc ParticipantCell.(null) <stripped>
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
WARNING: couldn't find address 0x195c400040638 (0x5c400040638) in binary!
	0x195b8  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x13a72000408f8 (0x272000408f8) in binary!
	0x10570  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1015400040970 (0x15400040970) in binary!
	0x10148  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0xfd0c00040648 (0x50c00040648) in binary!
	0x28000000c  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1956400040660 (0x56400040660) in binary!
	0xfce8  @objc InCallControlsTitleCell.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x314fff16ef0  @objc InCallControlsTitleCell.(null) <stripped>
	0x30cfff17018  @objc InCallControlsTitleCell. <stripped>
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
	0x28c40  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1956400040660 (0x56400040660) in binary!
	0xfce8  @objc BoxedDetails.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x314fff16ef0  @objc BoxedDetails.(null) <stripped>

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
WARNING: couldn't find address 0x11b9c00040b18 (0x39c00040b18) in binary!
	0x129b8  @objc ParticipantViewButton.(null) <stripped>
	0x129a0  _globalinit_33_F44C517C9140EE21C3FE77A0D5071B9C_func52
WARNING: couldn't find address 0x104e4000408e8 (0x4e4000408e8) in binary!
	0xfc98  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0xf86c00040910 (0x6c00040910) in binary!
	0xfc80  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff19df8  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff1dee0  @objc ParticipantViewButton.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xb4fff1dc58  @objc ParticipantViewButton.(null) <stripped>
	0x554fff1dea0  @objc ParticipantViewButton.A_L!¯IâÊI)∆LâÙHç=Zº <stripped>

	// Swift methods
	0x2a130  class func ParticipantViewButton.__allocating_init(imageName:) // init 
 }

 struct ConversationKit.ElementColors {

	// Properties
	let glyph : UIColor // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let glyphAlpha : ], // +0x8
	let background : UIColor // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let backgroundAlpha : ], // +0x18
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
WARNING: couldn't find address 0x1009c00040b60 (0x9c00040b60) in binary!
	0x18000000c  @objc IDSCapabilitiesChecker.(null) <stripped>

	// Swift methods
	0x2b810  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2b8b0  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2b8e0  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2b930  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2ba10  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2bb40  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2bb50  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2c770  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
 }

 enum ConversationKit.Capabilities {

	// Properties
	case known : (faceTimeAudio: Bool, faceTimeVideo: Bool, multiway: Bool)
	case unknown  
 }

 struct ConversationKit.ParticipantDestination {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : Î)
	var destination : String
 }

 class ConversationKit.GradientView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var colors : [UIColor]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194ac000405a8 (0x4ac000405a8) in binary!
	0xf810  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x1046400040868 (0x46400040868) in binary!
	0xfc18  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff1e690  @objc GradientView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x24fff201f8  @objc GradientView.(null) <stripped>
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
	0x31730  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
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
	0x10420  static Colors.ParticipantViews.alertText.getter
	0xfbc8  @objc InCallControlsReportAProblemTableViewCell.ll <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7ecfff22260  @objc InCallControlsReportAProblemTableViewCell.(null) <stripped>
	0x204fff227a8  @objc InCallControlsReportAProblemTableViewCell.4 <stripped>
 }

 class ConversationKit.ParticipantGridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantViews : IdentifiableParticipantView
	let unfocusedParticipantOverlay : UIView
	let organicLayoutConfiguration : Configuration
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentlyFocusedParticipantIdentifier : *
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mostProminentParticipantIdentifier : *
	var mostRecentAnimationIndex : Int
	var delegate : ParticipantGridViewDelegate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentParticipantAnimationContextUUID : *
	var cachedFrameSize : CGSize

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1942400040520 (0x42400040520) in binary!
	0x103e8  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xf77c00040820 (0x77c00040820) in binary!
	0xfb90  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xfb84000404c0 (0x384000404c0) in binary!
	0x48000000c  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0x103ac000407b0 (0x3ac000407b0) in binary!
	0xf740  @objc ParticipantGridView.(null) <stripped>
WARNING: couldn't find address 0xfb54000409c8 (0x354000409c8) in binary!
	0xfb48  @objc ParticipantGridView.(null) <stripped>
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
	var identifier : Î)
	var view : ParticipantView
 }

 class ConversationKit.LocalParticipantView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let participantView : ParticipantView
	var delegate : LocalParticipantViewDelegate
	var isInRoster : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x103ac000407b0 (0x3ac000407b0) in binary!
	0xf740  @objc LocalParticipantView.(null) <stripped>
WARNING: couldn't find address 0xfb54000409c8 (0x354000409c8) in binary!
	0xfb48  @objc LocalParticipantView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x19cfff324a0  @objc LocalParticipantView.(null) <stripped>
	0x44cfff32848  @objc LocalParticipantView.]√fD <stripped>

	// Swift methods
	0x3e430  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
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
WARNING: couldn't find address 0x1037400040778 (0x37400040778) in binary!
	0xfb28  @objc InCallControlsView.(null) <stripped>
WARNING: couldn't find address 0xf6fc000407a0 (0x6fc000407a0) in binary!
	0xfb10  @objc InCallControlsView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x24fff335b8  @objc InCallControlsView.(null) <stripped>
	0x34c000403b8  @objc InCallControlsView. <stripped>

	// Swift methods
	0x40b00  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
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
	0x494c0  func ParticipantListViewConstraintManager.type.getter // getter 
	0x494f0  func ParticipantListViewConstraintManager.type.setter // setter 
	0x49530  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x49400  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x49860  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x49870  func ParticipantListViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.ParticipantListLayoutType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case nextToControls : ],
	case bottom  
 }

 struct ConversationKit.ParticipantPresentationContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let idsIdentifier : -2 // +0x0
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
	var customCornerRadius : ],
	var isMomentsAvailable : Bool
	var recordingLocalVideo : Bool
	var delegate : ParticipantInfoViewDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1934c000403b8 (0x34c000403b8) in binary!
	0x11998  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x127b400040398 (0x7b400040398) in binary!
	0x19328  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x102ec000406f0 (0x2ec000406f0) in binary!
	0xfaa0  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0xfa9400040bc0 (0x29400040bc0) in binary!
	0xfa88  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0xf65c00040700 (0x65c00040700) in binary!
	0xfa70  @objc ParticipantInfoView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x694fff39068  @objc ParticipantInfoView.(null) <stripped>
	0xacfff39330  @objc ParticipantInfoView.UHâÂHÉ=,† <stripped>
	0xfff39c88  @objc ParticipantInfoView.‚ËR}ˇˇÉ¯uLâ˜Ëµ <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2ccfff3b170  @objc ParticipantInfoView.(null) <stripped>
	0xfff3bdf8  @objc ParticipantInfoView.Ä˛HçÆ7 <stripped>

	// Swift methods
	0x49e30  func ParticipantInfoView.isSmall.getter // getter 
	0x49e50  func ParticipantInfoView.isSmall.setter // setter 
	0x49ea0  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4a020  func ParticipantInfoView.isExpanded.getter // getter 
	0x4a040  func ParticipantInfoView.isExpanded.setter // setter 
	0x4a060  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4a170  func ParticipantInfoView.customCornerRadius.getter // getter 
	0x4a1a0  func ParticipantInfoView.customCornerRadius.setter // setter 
	0x4a1e0  func ParticipantInfoView.customCornerRadius.modify // modifyCoroutine 
	0x4a280  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4a2e0  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4a400  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4a600  func ParticipantInfoView.recordingLocalVideo.getter // getter 
	0x4a650  func ParticipantInfoView.recordingLocalVideo.setter // setter 
	0x4a6b0  func ParticipantInfoView.recordingLocalVideo.modify // modifyCoroutine 
	0x4a7c0  func ParticipantInfoView.delegate.getter // getter 
	0x4a800  func ParticipantInfoView.delegate.setter // setter 
	0x4a860  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4b320  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4b450  func ParticipantInfoView.configure(shouldHideShutterButton:) // method 
	0x4b590  func ParticipantInfoView._layout() // method 
	0x4ba60  func ParticipantInfoView.didTapExpandButton() // method 
	0x4bae0  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView
	let backFacingCameraView : ParticipantVideoCameraView
	var previousViewModelHash : Int?
	var previousVideoSnapshot : UIView?

	// ObjC -> Swift bridged methods
	0x10290  Colors.ParticipantViews.background.unsafeMutableAddressor
WARNING: couldn't find address 0xf624000406c8 (0x624000406c8) in binary!
	0xfa38  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0xfa2c00040368 (0x22c00040368) in binary!
	0x38000000c  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0x11326000402e0 (0x326000402e0) in binary!
	0xfe38  @objc ParticipantVideoView.(null) <stripped>
WARNING: couldn't find address 0x1926c00040368 (0x26c00040368) in binary!
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
	var hue : ], // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var saturation : ], // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lightness : ], // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alpha : ], // +0x18
 }

 struct ConversationKit.RGBAComponents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var red : ], // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var green : ], // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blue : ], // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var alpha : ], // +0x18
 }

 enum ConversationKit.ColorStyle {

	// Properties
	case color  
	case monochrome  
 }

 class ConversationKit.BuzzedAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x11326000402e0 (0x326000402e0) in binary!
	0xfe38  @objc BuzzedAnimator.(null) <stripped>
WARNING: couldn't find address 0x1926c00040368 (0x26c00040368) in binary!
	0x78000000c  @objc BuzzedAnimator.(null) <stripped>
WARNING: couldn't find address 0x10224000406a0 (0x224000406a0) in binary!
	0x10218  @objc BuzzedAnimator.(null) <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10224000406a0 (0x224000406a0) in binary!
	0x10218  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x115fa00040b88 (0x5fa00040b88) in binary!
	0x115f6  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf6f400040678 (0x6f400040678) in binary!
	0xf718  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x1920c00040308 (0x20c00040308) in binary!
	0x78000000c  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0x101c4000405c8 (0x1c4000405c8) in binary!
	0xf978  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf96c00040b98 (0x16c00040b98) in binary!
	0x11828  @objc AudioVisualizationRingLayer.(null) <stripped>
WARNING: couldn't find address 0xf95400040b88 (0x15400040b88) in binary!
	0x11818  @objc AudioVisualizationRingLayer.(null) <stripped>

	// Swift methods
	0x4f560  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x4fc90  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
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
	0x518d0  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
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
	var participantGridViewControllerDelegate : ParticipantGridViewControllerDelegate // +0x11d418 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x101c4000405c8 (0x1c4000405c8) in binary!
	0xf978  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf96c00040b98 (0x16c00040b98) in binary!
	0x11828  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf95400040b88 (0x15400040b88) in binary!
	0x11818  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf93c00040278 (0x13c00040278) in binary!
	0x28000000c  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0xf504000405a8 (0x504000405a8) in binary!
	0x10158  @objc ParticipantGridViewController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x744fff575c0  @objc ParticipantGridViewController.(null) <stripped>
	0x73cfff576e8  @objc ParticipantGridViewController.â«Ú.4 <stripped>

	// Swift methods
	0x5b200  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf504000405a8 (0x504000405a8) in binary!
	0x10158  @objc ParticipantVideoCameraView.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x744fff575c0  @objc ParticipantVideoCameraView.(null) <stripped>
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
	var contentAlpha : ],
	var menuDataSource : InCallControlButtonMenuDataSource

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x117cc00040748 (0x7cc00040748) in binary!
	0x125e8  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x117b400040740 (0x7b400040740) in binary!
	0x125d0  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x1011400040518 (0x11400040518) in binary!
	0xf8c8  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x11d1c00040168 (0x51c00040168) in binary!
	0xf490  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0xf8a4000401e0 (0xa4000401e0) in binary!
	0x28000000c  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x190fc000401f8 (0xfc000401f8) in binary!
	0xf880  @objc InCallControlButton.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x64cfff60868  @objc InCallControlButton.(null) <stripped>
	0x624fff600b0  @objc InCallControlButton.E–ÚE∏ÚE»ÚE¿HãE¿HãM∏HãU®Hã]∞PQSRËºÆ <stripped>
	0x5fcfff602f8  @objc InCallControlButton.Õ <stripped>

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
WARNING: couldn't find address 0x190fc000401f8 (0xfc000401f8) in binary!
	0xf880  @objc CallCenter.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x64cfff60868  @objc CallCenter.(null) <stripped>

	// Swift methods
	0x71d00  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize
	var font : UIFont?
	let colorStyle : ColorStyle
	var text : String

	// ObjC -> Swift bridged methods
	0xf3e0  RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:)
WARNING: couldn't find address 0x1003400040438 (0x3400040438) in binary!
	0xf558  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0xf7dc00040118 (0x7dc00040118) in binary!
	0x38000000c  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0x1168c0003fd80 (0x68c0003fd80) in binary!
	0x124a8  @objc MonogramView.(null) <stripped>
WARNING: couldn't find address 0xfbdc00040b38 (0x3dc00040b38) in binary!
	0x78000000c  @objc MonogramView.(null) <stripped>

	// Swift methods
	0x74af0  class func MonogramView.__allocating_init(colorStyle:) // init 
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
	var topInset : ],
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
WARNING: couldn't find offset 0xffff10d0 in binary!
WARNING: couldn't find offset 0xffff10d0 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff10b8 in binary!
WARNING: couldn't find offset 0xffff10b8 in binary!
	0x0  @objc InCallControlsViewController.Hç1« <stripped>
WARNING: couldn't find offset 0xffff10a0 in binary!
WARNING: couldn't find offset 0xffff10a0 in binary!
	0x0  @objc InCallControlsViewController.AàHcBIãHç5’ <stripped>
WARNING: couldn't find offset 0xffff1088 in binary!
WARNING: couldn't find offset 0xffff1088 in binary!
	0x0  @objc InCallControlsViewController.Ëõ <stripped>
WARNING: couldn't find offset 0xffff1070 in binary!
WARNING: couldn't find offset 0xffff1070 in binary!
	0x0  @objc InCallControlsViewController.†˛ˇˇLâ‡Hã}»HâﬁËïê <stripped>
WARNING: couldn't find offset 0xffff1058 in binary!
WARNING: couldn't find offset 0xffff1058 in binary!
	0x0  @objc InCallControlsViewController.Ë;  <stripped>
WARNING: couldn't find offset 0xffff7bc0 in binary!
WARNING: couldn't find offset 0xffff7bc0 in binary!
	0x0  @objc InCallControlsViewController.HcXLÛ1ˇË®& <stripped>
WARNING: couldn't find offset 0xffff7ba8 in binary!
WARNING: couldn't find offset 0xffff7ba8 in binary!
	0x0  @objc InCallControlsViewController.ç=:∆ <stripped>
WARNING: couldn't find offset 0xfffeeb60 in binary!
WARNING: couldn't find offset 0xfffeeb60 in binary!
	0x0  @objc InCallControlsViewController.Ë” <stripped>
WARNING: couldn't find offset 0xfffee308 in binary!
WARNING: couldn't find offset 0xfffee308 in binary!
	0x0  @objc InCallControlsViewController.X@L!ÎIâÁI)ﬂLãm∞Lâ¸Hçù <stripped>
WARNING: couldn't find offset 0xffff0fe0 in binary!
WARNING: couldn't find offset 0xffff0fe0 in binary!
	0x0  @objc InCallControlsViewController.¯uCHç=ƒ <stripped>
WARNING: couldn't find offset 0xfffee708 in binary!
WARNING: couldn't find offset 0xfffee708 in binary!
	0x0  @objc InCallControlsViewController.¯Hã@@Hâ„HÉ¿HÉ‡H)√Hâ‹LâÔHâﬁËÁ <stripped>
WARNING: couldn't find offset 0xfffee2c0 in binary!
WARNING: couldn't find offset 0xfffee2c0 in binary!
	0x0  @objc InCallControlsViewController.Hâ]¿HâﬂLâˆHâ¬ˇQLâˇLâÓLâ‚Ë  <stripped>
WARNING: couldn't find offset 0xffff0170 in binary!
WARNING: couldn't find offset 0xffff0170 in binary!
	0x0  @objc InCallControlsViewController.HÉ¿HÉ‡H)√Hâ‹LâÔHâﬁËÁ <stripped>
WARNING: couldn't find offset 0xfffee6c0 in binary!
WARNING: couldn't find offset 0xfffee6c0 in binary!
	0x0  @objc InCallControlsViewController.P X0`@hPp`xpA$AL$AT$ A\$0Ad$@Al$PAt$`A|$pHçeÿ[A\A]A^A_]√fÑ <stripped>
WARNING: couldn't find offset 0xfffee6a8 in binary!
WARNING: couldn't find offset 0xfffee6a8 in binary!
	0x0  @objc InCallControlsViewController.P X0`@hPp`xpA$AL$AT$ A\$0Ad$@Al$PAt$`A|$pHçeÿ[A\A]A^A_]√fÑ <stripped>
WARNING: couldn't find offset 0xffff0f50 in binary!
WARNING: couldn't find offset 0xffff0f50 in binary!
	0x0  @objc InCallControlsViewController.(ùpˇˇˇ(ï`ˇˇˇ(çPˇˇˇ(E¿Î&Hã <stripped>
WARNING: couldn't find offset 0xfffee678 in binary!
WARNING: couldn't find offset 0xfffee678 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff7aa0 in binary!
WARNING: couldn't find offset 0xffff7aa0 in binary!
	0x0  @objc InCallControlsViewController.˛ˇjT^jZLãE∞SË\( <stripped>
WARNING: couldn't find offset 0xffff7a88 in binary!
WARNING: couldn't find offset 0xffff7a88 in binary!
	0x0  @objc InCallControlsViewController. <stripped>
WARNING: couldn't find offset 0xffff7a70 in binary!
WARNING: couldn't find offset 0xffff7a70 in binary!
	0x0  @objc InCallControlsViewController.M®Ë…ê˛ˇLâˇËÅA <stripped>
WARNING: couldn't find offset 0xffff7a58 in binary!
WARNING: couldn't find offset 0xffff7a58 in binary!
	0x0  @objc InCallControlsViewController.Lâc Lâk(HçI
 <stripped>
WARNING: couldn't find offset 0xffff7a40 in binary!
WARNING: couldn't find offset 0xffff7a40 in binary!
	0x0  @objc InCallControlsViewController.ç5öl <stripped>
WARNING: couldn't find offset 0xffff7a28 in binary!
WARNING: couldn't find offset 0xffff7a28 in binary!
	0x0  @objc InCallControlsViewController.ˇjp^jZHâ«ËW/ <stripped>
WARNING: couldn't find offset 0xfffee1a0 in binary!
WARNING: couldn't find offset 0xfffee1a0 in binary!
	0x0  @objc InCallControlsViewController.êA(F)Ö`ˇˇˇA(F )ÖpˇˇˇMãn0HãE®Hc@Mã4Lâ˜Ë'% <stripped>
WARNING: couldn't find address 0x238000000c (0x238000000c) in binary!
	0xa4fff8e0c8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee5b0 in binary!
WARNING: couldn't find offset 0xfffee5b0 in binary!
WARNING: couldn't find address 0xfff8e12cfffee5b0 (0x0) in binary!
	0x7cfff8e180  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0030 in binary!
WARNING: couldn't find offset 0xffff0030 in binary!
WARNING: couldn't find address 0xfff8e1c4ffff0030 (0x0) in binary!
	0x54fff8e1d8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffed5d1 in binary!
WARNING: couldn't find offset 0xfffed5d1 in binary!
WARNING: couldn't find address 0xfff8e23cfffed5d1 (0x0) in binary!
	0x2cfff8ec90  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0e28 in binary!
WARNING: couldn't find offset 0xffff0e28 in binary!
WARNING: couldn't find address 0xfff8ece4ffff0e28 (0x0) in binary!
	0x31cfff8f7e8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee550 in binary!
WARNING: couldn't find offset 0xfffee550 in binary!
WARNING: couldn't find address 0xfff8f85cfffee550 (0x0) in binary!
	0x7ecfff8fa20  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0df8 in binary!
WARNING: couldn't find offset 0xffff0df8 in binary!
WARNING: couldn't find address 0xfff8faa4ffff0df8 (0x0) in binary!
	0x7c4fff8fb48  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffeffc0 in binary!
WARNING: couldn't find offset 0xfffeffc0 in binary!
WARNING: couldn't find address 0xfff8fd3cfffeffc0 (0x0) in binary!
	0x51cfff8ff10  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee918 in binary!
WARNING: couldn't find offset 0xfffee918 in binary!
WARNING: couldn't find address 0xfff93c24fffee918 (0x0) in binary!
	0x2ecfff93d88  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee0c0 in binary!
WARNING: couldn't find offset 0xfffee0c0 in binary!
WARNING: couldn't find address 0xfff94f7cfffee0c0 (0x0) in binary!
	0x21cfff95110  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0d98 in binary!
WARNING: couldn't find offset 0xffff0d98 in binary!
WARNING: couldn't find address 0xfff951f4ffff0d98 (0x0) in binary!
	0x4a4fff95278  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee4c0 in binary!
WARNING: couldn't find offset 0xfffee4c0 in binary!
WARNING: couldn't find address 0xfff9533cfffee4c0 (0x0) in binary!
	0x4bcfff95390  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee078 in binary!
WARNING: couldn't find offset 0xfffee078 in binary!
WARNING: couldn't find address 0xfff95434fffee078 (0x0) in binary!
	0x72cfff95f78  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee060 in binary!
WARNING: couldn't find offset 0xfffee060 in binary!
WARNING: couldn't find address 0xfff968fcfffee060 (0x0) in binary!
	0x704fff96a00  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee048 in binary!
WARNING: couldn't find offset 0xfffee048 in binary!
WARNING: couldn't find address 0xfff96a44fffee048 (0x0) in binary!
	0x1acfff96a88  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff4be0 in binary!
WARNING: couldn't find offset 0xffff4be0 in binary!
WARNING: couldn't find address 0xfff96d7cffff4be0 (0x0) in binary!
	0x6bcfff96e70  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0d08 in binary!
WARNING: couldn't find offset 0xffff0d08 in binary!
WARNING: couldn't find address 0xfff97464ffff0d08 (0x0) in binary!
	0x21cfff974e8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffefed0 in binary!
WARNING: couldn't find offset 0xfffefed0 in binary!
WARNING: couldn't find address 0xfff975bcfffefed0 (0x0) in binary!
	0xfff93cd0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x6b4fffc26e8  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0cc0 in binary!
WARNING: couldn't find offset 0xffff0cc0 in binary!
WARNING: couldn't find address 0xfffc273cffff0cc0 (0x0) in binary!
	0x644fffc29a0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xffff0ca8 in binary!
WARNING: couldn't find offset 0xffff0ca8 in binary!
WARNING: couldn't find address 0xfffc29f4ffff0ca8 (0x0) in binary!
	0x19cfffc2a48  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find address 0xfffc2a9cfffee3d0 (0x0) in binary!
	0x604fffc2b70  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee3b8 in binary!
WARNING: couldn't find offset 0xfffee3b8 in binary!
WARNING: couldn't find address 0xfffc2bf4fffee3b8 (0x0) in binary!
	0x5e4fffc2e28  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffee3a0 in binary!
WARNING: couldn't find offset 0xfffee3a0 in binary!
WARNING: couldn't find address 0xfffc2e9cfffee3a0 (0x0) in binary!
	0x65cfffc2fd0  @objc InCallControlsViewController.(null) <stripped>
WARNING: couldn't find offset 0xfffed3d9 in binary!
WARNING: couldn't find offset 0xfffed3d9 in binary!
WARNING: couldn't find address 0xfffc3034fffed3d9 (0x0) in binary!
	0x634fffc32f8  @objc InCallControlsViewController.(null) <stripped>

	// Swift methods
	0x78420  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
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
	var customCornerRadius : ],

	// ObjC -> Swift bridged methods
	0x18ff8  @objc ParticipantMonogramView.¸ <stripped>
WARNING: couldn't find address 0x18fec000400e8 (0x7ec000400e8) in binary!
	0xffb0  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf344000403e8 (0x344000403e8) in binary!
	0xf758  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf74c00040088 (0x74c00040088) in binary!
	0xc8000000c  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xfb6400040c18 (0x36400040c18) in binary!
	0xff68  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xf71c00040948 (0x71c00040948) in binary!
	0x115d8  @objc ParticipantMonogramView.(null) <stripped>
WARNING: couldn't find address 0xe7440003fe98 (0x7440003fe98) in binary!
	0x131fe  @objc ParticipantMonogramView.(null) <stripped>

	// Swift methods
	0x82780  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
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
	0x84400  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
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
WARNING: couldn't find address 0xfb6400040c18 (0x36400040c18) in binary!
	0xff68  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0xf71c00040948 (0x71c00040948) in binary!
	0x115d8  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0xe7440003fe98 (0x7440003fe98) in binary!
	0x131fe  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x115bc0003fe70 (0x5bc0003fe70) in binary!
	0x16840  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x131f40003fe48 (0x1f40003fe48) in binary!
	0x131f6  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x1158c000408d8 (0x58c000408d8) in binary!
	0xf6b0  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x24cfff781d8  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
	0x4ecfff78eb0  @objc InCallControlsParticipantsTableViewController.PIâ˝Ë <stripped>
	0x79cfff7a0c8  @objc InCallControlsParticipantsTableViewController.ç•pˇˇˇLâÊËä	 <stripped>
	0x68c00040290  @objc InCallControlsParticipantsTableViewController.¨	 <stripped>
WARNING: couldn't find address 0x4086cfff7e948 (0x6cfff7e948) in binary!
	0x26400040c08  @objc InCallControlsParticipantsTableViewController.(null) <stripped>
WARNING: couldn't find address 0x40844fff7f1b0 (0x44fff7f1b0) in binary!
	0x61c0003ff58  @objc InCallControlsParticipantsTableViewController.(null) <stripped>

	// Swift methods
	0x84fd0  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
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
	case buzz : Î)
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
WARNING: couldn't find address 0x18f0c0003fe08 (0x70c0003fe08) in binary!
	0x133c6  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0xfec4000402c8 (0x6c4000402c8) in binary!
	0xf678  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0xfa9c00040bb0 (0x29c00040bb0) in binary!
	0xf660  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x6cfff7e948  @objc InCallControlsParticipantTableViewCell.(null) <stripped>
	0x44fff7f1b0  @objc InCallControlsParticipantTableViewCell. <stripped>
	0xfff7fb38  @objc InCallControlsParticipantTableViewCell.˜Ë§ <stripped>
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
WARNING: couldn't find address 0xfe8c00040290 (0x68c00040290) in binary!
	0xf640  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xfa6400040c08 (0x26400040c08) in binary!
	0x114f8  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xf61c0003ff58 (0x61c0003ff58) in binary!
	0x68000000c  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0x18e740003ff70 (0x6740003ff70) in binary!
	0xf1d8  @objc ReportAProblemContractViewController.(null) <stripped>
WARNING: couldn't find address 0xfe2c00040230 (0x62c00040230) in binary!
	0xf5e0  @objc ReportAProblemContractViewController.(null) <stripped>

	// Swift methods
	0x91b20  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0x92630  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0x926e0  func ReportAProblemContractViewController.didTapButton() // method 
	0x92b00  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0x92bc0  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfdf4000401f8 (0x5f4000401f8) in binary!
	0xf5a8  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0x1228c00040c88 (0x28c00040c88) in binary!
	0xf9c0  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf9b400040cc8 (0x1b400040cc8) in binary!
	0x11448  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf56c0003fea8 (0x56c0003fea8) in binary!
	0x78000000c  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xe3d40003fcb8 (0x3d40003fcb8) in binary!
	0xfd88  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf53c00040768 (0x53c00040768) in binary!
	0x11004  @objc ReportAProblemSymptomsViewController.(null) <stripped>
WARNING: couldn't find address 0xf95400040bd8 (0x15400040bd8) in binary!
	0x113e8  @objc ReportAProblemSymptomsViewController.(null) <stripped>

	// Swift methods
	0x93120  func <stripped> // setter 
	0x93e00  func <stripped> // method 
	0x94510  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe3d40003fcb8 (0x3d40003fcb8) in binary!
	0xfd88  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf53c00040768 (0x53c00040768) in binary!
	0x11004  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf95400040bd8 (0x15400040bd8) in binary!
	0x113e8  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf50c0003fe48 (0x50c0003fe48) in binary!
	0x88000000c  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0x18d640003fd28 (0x5640003fd28) in binary!
	0xf918  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0x113a40003fc30 (0x3a40003fc30) in binary!
	0x113a0  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>
WARNING: couldn't find address 0xf4c40003fc08 (0x4c40003fc08) in binary!
	0xf8e8  @objc ReportAProblemAcknowledgmentViewController.(null) <stripped>

	// Swift methods
	0x950c0  func <stripped> // method 
	0x95380  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18e740003ff70 (0x6740003ff70) in binary!
	0xf1d8  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0xfe2c00040230 (0x62c00040230) in binary!
	0xf5e0  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0xfa04000401c8 (0x204000401c8) in binary!
	0xf5c8  @objc ReportAProblemView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x7d4fff7ff40  @objc ReportAProblemView.(null) <stripped>
	0x48cfff80888  @objc ReportAProblemView." <stripped>
	0x794fff81370  @objc ReportAProblemView.∫ <stripped>

	// Swift methods
	0x956c0  func <stripped> // setter 
	0x96570  func <stripped> // method 
	0x96870  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : OverallLayoutState
	var effectsConstraintManagers : ViewConstraintManager
	var currentConstraints : [NSLayoutConstraint]

	// Swift methods
	0x974b0  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint]
	let effectsBrowserViewTopAnchor : NSLayoutConstraint

	// Swift methods
	0x98450  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0x98700  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession
	var pendingTask : NSURLSessionTask?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_encoder : Ω
WARNING: couldn't find address 0x0 (0x0) in binary!
	let decoder : •

	// Swift methods
	0x98a00  func RadarSession.encoder.getter // getter 
	0x988c0  class func RadarSession.__allocating_init() // init 
	0x991a0  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0x997f0  func RadarSession.addSymptom(withRequest:) // method 
	0x99b90  func RadarSession.cancel() // method 
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
WARNING: couldn't find address 0x18d640003fd28 (0x5640003fd28) in binary!
	0xf918  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x113a40003fc30 (0x3a40003fc30) in binary!
	0x113a0  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0xf4c40003fc08 (0x4c40003fc08) in binary!
	0xf8e8  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x18d1c0003fe18 (0x51c0003fe18) in binary!
	0xf4a0  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff88e88  @objc InCallControlsDragController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x52cfff8a410  @objc InCallControlsDragController.(null) <stripped>
	0xfff8a6d8  @objc InCallControlsDragController.uHHç5áµ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff938e0  @objc InCallControlsDragController.(null) <stripped>

	// Swift methods
	0x9a4f0  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
 }

 struct ConversationKit.DragAnimation {

	// Properties
	var animator : UIViewPropertyAnimator // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var validAnimationRange :  empty-list  // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gestureOffsetToTopOfControls : ], // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initialTranslationInView : ], // +0x20
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
	var mass : ], // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stiffness : ], // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var damping : ], // +0x18
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
WARNING: couldn't find address 0x10d860003fd40 (0x5860003fd40) in binary!
	0xf898  @objc CrossFadeAnimator.(null) <stripped>
WARNING: couldn't find address 0x18ccc0003fdc8 (0x4cc0003fdc8) in binary!
	0x18000000c  @objc CrossFadeAnimator.(null) <stripped>
WARNING: couldn't find address 0xfe480003fd68 (0x6480003fd68) in binary!
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
	0x9dfb0  func PlatformAlert.currentPresentedUserNotification.getter // getter 
	0x9e060  func PlatformAlert.buttonHandlers.getter // getter 
	0x9e170  func PlatformAlert.title.setter // setter 
	0x9e290  func PlatformAlert.message.setter // setter 
	0x9e3b0  func PlatformAlert.defaultButtonTitle.setter // setter 
	0x9e4d0  func PlatformAlert.alternateButtonTitle.setter // setter 
	0x9e5f0  func PlatformAlert.otherButtonTitle.setter // setter 
	0x9e630  class func static PlatformAlert.create(with:message:) // method 
	0x9e780  func PlatformAlert.addAction(title:style:handler:) // method 
	0x9e890  func PlatformAlert.show() // method 
	0x9e730  class func PlatformAlert.__allocating_init() // init 
 }

 struct ConversationKit.Participant: HasSortableHandle {

	// Properties
	var state : State
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : Î)
	var remoteIdentifiers : RemoteIdentifiers
	var gradient : [UIColor]
	var isMomentsAvailable : Bool
 }

 enum ConversationKit.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case waiting : ¡)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rung : ¡)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case broadcasting : E 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case left : ¡)
	case joining  
 }

 struct ConversationKit.RemoteIdentifiers {

	// Properties
	var handle : TUHandle // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var idsIdentifier : U // +0x8
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
WARNING: couldn't find address 0x18c9c0003fb68 (0x49c0003fb68) in binary!
	0xf000  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xf42400040970 (0x42400040970) in binary!
	0xfc48  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xf3fc0003fd38 (0x3fc0003fd38) in binary!
	0x48000000c  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0x18c540003fd50 (0x4540003fd50) in binary!
	0xfc18  @objc ParticipantViewLabelContainerView.(null) <stripped>
WARNING: couldn't find address 0xfc0c00040010 (0x40c00040010) in binary!
	0xf3c0  @objc ParticipantViewLabelContainerView.(null) <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18c540003fd50 (0x4540003fd50) in binary!
	0xfc18  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0xfc0c00040010 (0x40c00040010) in binary!
	0xf3c0  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff94768  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4f4fff97020  @objc ParticipantViewLabelContainerViewLayer.(null) <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf7dc00040c28 (0x7dc00040c28) in binary!
	0x38000000c  @objc DisplayLinkCallbackWrapper.(null) <stripped>

	// Swift methods
	0xa7ef0  class func <stripped> // init 
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
	0xa8300  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xa8360  func PlatformDisplayLinkBase.start() // method 
	0xa8380  func PlatformDisplayLinkBase.cancel() // method 
	0xa8510  class func PlatformDisplayLinkBase.__allocating_init() // init 
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
WARNING: couldn't find address 0xfbd40003fac8 (0x3d40003fac8) in binary!
	0x18bf8  @objc EffectsLayoutController.(null) <stripped>
WARNING: couldn't find address 0xf37c0003fcb8 (0x37c0003fcb8) in binary!
	0x58000000c  @objc EffectsLayoutController.(null) <stripped>
WARNING: couldn't find address 0x18bd40003fcd0 (0x3d40003fcd0) in binary!
	0xfb98  @objc EffectsLayoutController.(null) <stripped>

	// Swift methods
	0xaa6a0  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView
	let contactMonogram : MonogramView
	let silhouette : UIImageView
	var contactDetails : ParticipantContactDetails

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18bd40003fcd0 (0x3d40003fcd0) in binary!
	0xfb98  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0xef2c0003ffd0 (0x72c0003ffd0) in binary!
	0xf340  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0xf3340003fc70 (0x3340003fc70) in binary!
	0x28000000c  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0x18b8c0003fc88 (0x38c0003fc88) in binary!
	0xf310  @objc ParticipantContactView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x8cfff9d6a8  @objc ParticipantContactView.(null) <stripped>

	// Swift methods
	0xaa870  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : Participant
	var offlineParticipants : Participant
	let participantIsShownInGrid : Participant
	var didCreateCellForParticipant : ParticipantCell

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18b8c0003fc88 (0x38c0003fc88) in binary!
	0xf310  @objc ParticipantsCollectionViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x8cfff9d6a8  @objc ParticipantsCollectionViewDataSource.(null) <stripped>

	// Swift methods
	0xac9f0  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xb1bc0  func Defaults.enableAudioVisualization.getter // getter 
	0xb1be0  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xb1c00  func Defaults.forceVideoLayerVisible.getter // getter 
	0xb1c20  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xb1c40  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xb1c60  func Defaults.startUplinkMuted.getter // getter 
	0xb1c80  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xb1ca0  func Defaults.supportsVideo.getter // getter 
	0xb1cd0  func Defaults.supportsEffects.getter // getter 
	0xb1d10  func Defaults.useFlattenedUI.getter // getter 
	0xb1d30  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xb1d60  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xb1d90  func Defaults.mimimumActiveDuration.getter // getter 
	0xb1dc0  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xb1df0  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xb1e10  func Defaults.organicSashFontSize.getter // getter 
	0xb1e30  func Defaults.organicCellCornerRadius.getter // getter 
	0xb1e50  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xb1e70  func Defaults.emaTimeScale.getter // getter 
	0xb1ea0  func Defaults.emaTimerFrequency.getter // getter 
	0xb1ed0  func Defaults.emaProminenceWeight1.getter // getter 
	0xb1f00  func Defaults.emaProminenceWeight2.getter // getter 
	0xb1f30  func Defaults.emaProminenceWeight3.getter // getter 
	0xb1f60  func Defaults.emaProminenceWeight4.getter // getter 
	0xb1f90  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xb1fc0  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xb1ff0  func Defaults.shouldCenterRoster.getter // getter 
	0xb2010  func Defaults.allowSelfZoom.getter // getter 
	0xb2020  func Defaults.allowAudioProminence.getter // getter 
	0xb2040  func Defaults.allowVideoProminence.getter // getter 
	0xb20c0  func Defaults.disableAutomaticDrawerHiding.getter // getter 
	0xb2120  func Defaults.allowLocalVideoRecording.getter // getter 
	0xb2130  func Defaults.reduceMotion.getter // getter 
	0xb2490  func Defaults.isInternalInstall.getter // getter 
	0xb2560  func Defaults.bool(for:domain:default:) // method 
	0xb2670  func Defaults.float(for:default:) // method 
	0xb27d0  func Defaults.double(for:default:) // method 
	0xb1b60  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any // +0x10 (0x20)

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10bde0003fb98 (0x3de0003fb98) in binary!
	0xf6f0  @objc StagingAreaAnimator.(null) <stripped>
WARNING: couldn't find address 0x18b240003fc20 (0x3240003fc20) in binary!
	0x68000000c  @objc StagingAreaAnimator.(null) <stripped>
WARNING: couldn't find address 0xfadc0003fee0 (0x2dc0003fee0) in binary!
	0xf290  @objc StagingAreaAnimator.(null) <stripped>
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
	var minCellOverlap : ], // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minCellOverlapThreshold : ], // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxCellOverlap : ], // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maxCellOverlapThreshold : ], // +0x18
 }

 class ConversationKit.MostActiveParticipantViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : Participant // +0x8 (0x8)
	var focusedParticipant : Participant // +0x121580 (0x0)
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate // +0xba1a (0x10)
	let participantView : ParticipantView // +0x121580 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfadc0003fee0 (0x2dc0003fee0) in binary!
	0xf290  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x1114c0003fb38 (0x14c0003fb38) in binary!
	0xf278  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x1113c00040488 (0x13c00040488) in binary!
	0xf260  @objc MostActiveParticipantViewController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x46cfffa5b98  @objc MostActiveParticipantViewController.(null) <stripped>
	0x674fffa60b0  @objc MostActiveParticipantViewController.UHâÂLâÔHæ <stripped>
	0x42cfffa6278  @objc MostActiveParticipantViewController.]√fD <stripped>

	// Swift methods
	0xb6390  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x0
	var viewContent : ViewContent // +0x0
	var lastLayedOutViewSize : CGSize // +0x11bb30
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate // +0x0

	// ObjC -> Swift bridged methods
	0xf240  SpringBoardUtilities.__deallocating_deinit
WARNING: couldn't find address 0x11f2400040638 (0x72400040638) in binary!
	0xf228  @objc ParticipantListViewController.(null) <stripped>
	0x110e0  Colors.InCallControls.ringButtonDisabled.unsafeMutableAddressor
WARNING: couldn't find address 0xf2040003fb40 (0x2040003fb40) in binary!
	0x28000000c  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x1471c0003f778 (0x71c0003f778) in binary!
	0x14710  @objc ParticipantListViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x604fffa91d8  @objc ParticipantListViewController.(null) <stripped>
	0x2e4fffa9460  @objc ParticipantListViewController.Ëã}ˇˇÉ¯uAHç5∫ <stripped>

	// Swift methods
	0xb91e0  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint]

	// Swift methods
	0xbbfe0  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xbc260  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18a3c0003fb38 (0x23c0003fb38) in binary!
	0xfa00  @objc ParticipantAlertView.(null) <stripped>
WARNING: couldn't find address 0xed940003fe38 (0x5940003fe38) in binary!
	0xf1a8  @objc ParticipantAlertView.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x5f4fffbec90  @objc ParticipantAlertView.(null) <stripped>
	0x6ecfffbd6c8  @objc ParticipantAlertView.â√Lã/IãE <stripped>
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
WARNING: couldn't find offset 0xfffee5b0 in binary!
WARNING: couldn't find offset 0xfffee5b0 in binary!
	0x0  @objc MultiwayViewController.FPA)F@A)F0A)F A)FIÉf` <stripped>
WARNING: couldn't find offset 0xffff0030 in binary!
WARNING: couldn't find offset 0xffff0030 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xfffed5d1 in binary!
WARNING: couldn't find offset 0xfffed5d1 in binary!
	0x0  @objc MultiwayViewController.ÔHç5∞ <stripped>
WARNING: couldn't find offset 0xffff0e28 in binary!
WARNING: couldn't find offset 0xffff0e28 in binary!
	0x0  @objc MultiwayViewController.HçΩxˇˇˇLçµÄ˛ˇˇLâˆËJA <stripped>
WARNING: couldn't find offset 0xfffee550 in binary!
WARNING: couldn't find offset 0xfffee550 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xffff0df8 in binary!
WARNING: couldn't find offset 0xffff0df8 in binary!
	0x0  @objc MultiwayViewController.HãU®HcB AäHcKAàHcBMã$Hç5˚ <stripped>
WARNING: couldn't find offset 0xfffeffc0 in binary!
WARNING: couldn't find offset 0xfffeffc0 in binary!
	0x0  @objc MultiwayViewController.¿MãeLâÁË;1 <stripped>
WARNING: couldn't find offset 0xfffee918 in binary!
WARNING: couldn't find offset 0xfffee918 in binary!
	0x0  @objc MultiwayViewController.ZLâÔHâ∆Ë#1 <stripped>
WARNING: couldn't find offset 0xfffee0c0 in binary!
WARNING: couldn't find offset 0xfffee0c0 in binary!
	0x0  @objc MultiwayViewController.Iâ‰I)ƒLâ‰1ˇË 	 <stripped>
WARNING: couldn't find offset 0xffff0d98 in binary!
WARNING: couldn't find offset 0xffff0d98 in binary!
	0x0  @objc MultiwayViewController.ç=íØ <stripped>
WARNING: couldn't find offset 0xfffee4c0 in binary!
WARNING: couldn't find offset 0xfffee4c0 in binary!
	0x0  @objc MultiwayViewController.ˇËR <stripped>
WARNING: couldn't find offset 0xfffee078 in binary!
WARNING: couldn't find offset 0xfffee078 in binary!
	0x0  @objc MultiwayViewController.5{— <stripped>
WARNING: couldn't find offset 0xfffee060 in binary!
WARNING: couldn't find offset 0xfffee060 in binary!
	0x0  @objc MultiwayViewController.UHâÂAWAVAUATSHÅÏ® <stripped>
WARNING: couldn't find offset 0xfffee048 in binary!
WARNING: couldn't find offset 0xfffee048 in binary!
	0x0  @objc MultiwayViewController.ù¯˛ˇˇHâÿã}¿Lâm∏Ë <stripped>
WARNING: couldn't find offset 0xffff4be0 in binary!
WARNING: couldn't find offset 0xffff4be0 in binary!
	0x0  @objc MultiwayViewController.ÊI)∆LâÙ1ˇËbÔˇˇHâE∞Hã@¯HX@L!„Iâ‰I)‹Lâ‰Hçù¯˛ˇˇHâÿã}¿Lâm∏Ë <stripped>
WARNING: couldn't find offset 0xffff0d08 in binary!
WARNING: couldn't find offset 0xffff0d08 in binary!
	0x0  @objc MultiwayViewController.âE®Hã@¯Hã@@HÿL!‡Hâ·H)¡HâM»HâÃIâÊI)∆LâÙ1ˇËbÔˇˇHâE∞Hã@¯HX@L!„Iâ‰I)‹Lâ‰Hçù¯˛ˇˇHâÿã}¿Lâm∏Ë <stripped>
WARNING: couldn't find offset 0xfffefed0 in binary!
WARNING: couldn't find offset 0xfffefed0 in binary!
	0x0  @objc MultiwayViewController.˛ˇHã@¯j[Hã@@HÿjA\L!‡IâÁI)«Lâ¸1ˇËQ <stripped>
	0x1f8000000c  @objc MultiwayViewController.}»Lã}∏Hç5{— <stripped>
WARNING: couldn't find offset 0xffff0cc0 in binary!
WARNING: couldn't find offset 0xffff0cc0 in binary!
	0x0  @objc MultiwayViewController.1ˇËQ <stripped>
WARNING: couldn't find offset 0xffff0ca8 in binary!
WARNING: couldn't find offset 0xffff0ca8 in binary!
	0x0  @objc MultiwayViewController.Ëπ3 <stripped>
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find offset 0xfffee3d0 in binary!
	0x0  @objc MultiwayViewController.Ë;1 <stripped>
WARNING: couldn't find offset 0xfffee3b8 in binary!
WARNING: couldn't find offset 0xfffee3b8 in binary!
	0x0  @objc MultiwayViewController.ZLãE∏SËä, <stripped>
WARNING: couldn't find offset 0xfffee3a0 in binary!
WARNING: couldn't find offset 0xfffee3a0 in binary!
	0x0  @objc MultiwayViewController.â˝HâE†Hç=ÎÕ <stripped>
WARNING: couldn't find offset 0xfffed3d9 in binary!
WARNING: couldn't find offset 0xfffed3d9 in binary!
	0x0  @objc MultiwayViewController.Ë°3 <stripped>
WARNING: couldn't find offset 0xffff0c30 in binary!
WARNING: couldn't find offset 0xffff0c30 in binary!
	0x0  @objc MultiwayViewController.]√Hç=ˇΩ <stripped>
WARNING: couldn't find offset 0xffff77a9 in binary!
WARNING: couldn't find offset 0xffff77a9 in binary!
	0x0  @objc MultiwayViewController.â⁄Ëô$ <stripped>
WARNING: couldn't find offset 0xfffedf10 in binary!
WARNING: couldn't find offset 0xfffedf10 in binary!
	0x0  @objc MultiwayViewController. <stripped>
WARNING: couldn't find offset 0xfffedef8 in binary!
WARNING: couldn't find offset 0xfffedef8 in binary!
	0x0  @objc MultiwayViewController.(C)ÖPˇˇˇ(C )Ö`ˇˇˇ(C0)Öpˇˇˇ(C@)EÄ(CP)Eê(C`)E†(Cp)E∞Lâ˜Ë‹" <stripped>
WARNING: couldn't find offset 0xfffefda8 in binary!
WARNING: couldn't find offset 0xfffefda8 in binary!
	0x0  @objc MultiwayViewController.HÉƒ HâE∏HâU¿HâﬂˇÛ <stripped>
WARNING: couldn't find offset 0xfffedec8 in binary!
WARNING: couldn't find offset 0xfffedec8 in binary!
	0x0  @objc MultiwayViewController.LâÙ1ˇËn <stripped>
WARNING: couldn't find offset 0xfffedeb0 in binary!
WARNING: couldn't find offset 0xfffedeb0 in binary!
	0x0  @objc MultiwayViewController.ËÎ- <stripped>
WARNING: couldn't find offset 0xfffede98 in binary!
WARNING: couldn't find offset 0xfffede98 in binary!
	0x0  @objc MultiwayViewController.Hç5©’ <stripped>
WARNING: couldn't find offset 0xfffefd50 in binary!
WARNING: couldn't find offset 0xfffefd50 in binary!
	0x0  @objc MultiwayViewController.¡ <stripped>
	0x100000001c  @objc MultiwayViewController.HãHâﬂËs2 <stripped>
WARNING: couldn't find address 0x5c (0x5c) in binary!
	0xd101000000  @objc MultiwayViewController.(null) <stripped>

	// Swift methods
	0xc4930  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
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
	var participantsMediaPrioritiesDidChange : ParticipantMediaPriorities // +0x12d210 (0x10)
	var participantAudioPowerDidChange : Participant // +0x355e (0x10)
	var audioRouteDidChange : (_:)? // +0x12d210 (0x10)
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
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x130770 (0x28)
	var callCenter : CallCenterProvider // +0x45545f5f (0x28)
	let call : TUCall // +0x12cf9c (0x8)
	let blockedCallerChecker : BlockedCallerChecker // +0x3210 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var conversationUUID : * // +0x0 (0x0)
	var localVideoRecordingTransactionID : String? // +0x12cf9c (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18984000400a8 (0x184000400a8) in binary!
	0xf108  @objc ConversationController.(null) <stripped>
WARNING: couldn't find address 0x1896c0003fa68 (0x16c0003fa68) in binary!
	0xf0f0  @objc ConversationController.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x2dcfffdc098  @objc ConversationController.(null) <stripped>
	0x2b4fffdcb70  @objc ConversationController.HÉƒ[A\A^A_]√Hç=¨Ø <stripped>

	// Swift methods
	0xd9020  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:blockedCallerChecker:includeLocalParticipantInVisibleParticipants:) // init 
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
WARNING: couldn't find offset 0xffff0cc0 in binary!
WARNING: couldn't find offset 0xffff0cc0 in binary!
	0x0  @objc StagingAreaViewController.1ˇËQ <stripped>
WARNING: couldn't find offset 0xffff0ca8 in binary!
WARNING: couldn't find offset 0xffff0ca8 in binary!
	0x0  @objc StagingAreaViewController.Ëπ3 <stripped>
WARNING: couldn't find offset 0xfffee3d0 in binary!
WARNING: couldn't find offset 0xfffee3d0 in binary!
	0x0  @objc StagingAreaViewController.Ë;1 <stripped>
WARNING: couldn't find offset 0xfffee3b8 in binary!
WARNING: couldn't find offset 0xfffee3b8 in binary!
	0x0  @objc StagingAreaViewController.ZLãE∏SËä, <stripped>
WARNING: couldn't find offset 0xfffee3a0 in binary!
WARNING: couldn't find offset 0xfffee3a0 in binary!
	0x0  @objc StagingAreaViewController.â˝HâE†Hç=ÎÕ <stripped>
WARNING: couldn't find offset 0xfffed3d9 in binary!
WARNING: couldn't find offset 0xfffed3d9 in binary!
	0x0  @objc StagingAreaViewController.Ë°3 <stripped>
WARNING: couldn't find offset 0xffff0c30 in binary!
WARNING: couldn't find offset 0xffff0c30 in binary!
	0x0  @objc StagingAreaViewController.]√Hç=ˇΩ <stripped>
WARNING: couldn't find offset 0xffff77a9 in binary!
WARNING: couldn't find offset 0xffff77a9 in binary!
	0x0  @objc StagingAreaViewController.â⁄Ëô$ <stripped>
WARNING: couldn't find offset 0xfffedf10 in binary!
WARNING: couldn't find offset 0xfffedf10 in binary!
	0x0  @objc StagingAreaViewController. <stripped>
WARNING: couldn't find offset 0xfffedef8 in binary!
WARNING: couldn't find offset 0xfffedef8 in binary!
	0x0  @objc StagingAreaViewController.(C)ÖPˇˇˇ(C )Ö`ˇˇˇ(C0)Öpˇˇˇ(C@)EÄ(CP)Eê(C`)E†(Cp)E∞Lâ˜Ë‹" <stripped>
WARNING: couldn't find offset 0xfffefda8 in binary!
WARNING: couldn't find offset 0xfffefda8 in binary!
	0x0  @objc StagingAreaViewController.HÉƒ HâE∏HâU¿HâﬂˇÛ <stripped>
WARNING: couldn't find offset 0xfffedec8 in binary!
WARNING: couldn't find offset 0xfffedec8 in binary!
	0x0  @objc StagingAreaViewController.LâÙ1ˇËn <stripped>
WARNING: couldn't find offset 0xfffedeb0 in binary!
WARNING: couldn't find offset 0xfffedeb0 in binary!
	0x0  @objc StagingAreaViewController.ËÎ- <stripped>
WARNING: couldn't find offset 0xfffede98 in binary!
WARNING: couldn't find offset 0xfffede98 in binary!
	0x0  @objc StagingAreaViewController.Hç5©’ <stripped>
WARNING: couldn't find offset 0xfffefd50 in binary!
WARNING: couldn't find offset 0xfffefd50 in binary!
	0x0  @objc StagingAreaViewController.¡ <stripped>
	0x100000001c  @objc StagingAreaViewController.HãHâﬂËs2 <stripped>
WARNING: couldn't find address 0x5c (0x5c) in binary!
	0xd101000000  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x101000101020021 (0x101020021) in binary!
	0x1901040b11  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x202000001030119 (0x1030119) in binary!
	0x2040802  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0x10408d101030111 (0xd101030111) in binary!
	0x1d0000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400000420 (0xa400000420) in binary!
	0x5a0000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400002424 (0xa400002424) in binary!
	0x10b000000a4  @objc StagingAreaViewController.(null) <stripped>
WARNING: couldn't find address 0xa400000000 (0xa400000000) in binary!
	0x1c030c  @objc StagingAreaViewController.(null) <stripped>
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
	0xf85f0  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	0x102030  class func InCallControlsFramesCache.__allocating_init() // init 
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
	let loggingIdentifier : Î) // +0x0 (0x0)
	var hideBottomBarTimer : NSTimer? // +0x0 (0x8)
	var hideAlertViewTimer : NSTimer? // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : * // +0x0 (0x0)
	var delegate : ParticipantViewDelegate // +0x1346d8 (0x10)
	var isInRoster : Bool // +0x45545f5f (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var customCornerRadius : ], // +0x58c (0x8)
	var isExpanded : Bool // +0x1346d8 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1883c0003f628 (0x3c0003f628) in binary!
	0x10e88  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x11ca40003f600 (0x4a40003f600) in binary!
	0x10e70  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x11c8c0003f830 (0x48c0003f830) in binary!
	0xeb70  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0xf7c40003fbc8 (0x7c40003fbc8) in binary!
	0xef78  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0xef6c0003fde0 (0x76c0003fde0) in binary!
	0xef60  @objc ParticipantView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x384ffff7268  @objc ParticipantView.(null) <stripped>
	0x59cffff7530  @objc ParticipantView.ÑÃuˆ√î¡I9«î√ ÀLâ˜Ëà" <stripped>
	0xffff7918  @objc ParticipantView.A]]√@ <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x534ffff9430  @objc ParticipantView.(null) <stripped>
	0x50cffff97b8  @objc ParticipantView. <stripped>
 }

 struct ConversationKit.InCallControlsParticipantTableViewCellModel {

	// Properties
	var contactDetails : ParticipantContactDetails
WARNING: couldn't find address 0x0 (0x0) in binary!
	var participantIdentifier : Î)
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
WARNING: couldn't find address 0x187bc0003f8b8 (0x7bc0003f8b8) in binary!
	0xf780  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0xeb140003fbb8 (0x3140003fbb8) in binary!
	0xef28  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0xef1c0003f858 (0x71c0003f858) in binary!
	0xb8000000c  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0x109d80003f548 (0x1d80003f548) in binary!
	0xe379  @objc ParticipantVideoOverlayView.(null) <stripped>
WARNING: couldn't find address 0x109c00003f520 (0x1c00003f520) in binary!
	0xe361  @objc ParticipantVideoOverlayView.(null) <stripped>
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
WARNING: couldn't find address 0x109d80003f548 (0x1d80003f548) in binary!
	0xe379  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x109c00003f520 (0x1c00003f520) in binary!
	0xe361  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x192040003f4f8 (0x2040003f4f8) in binary!
	0x19218  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x1923c0003f4d0 (0x23c0003f4d0) in binary!
	0xeeb0  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0x14de40003f4a8 (0x5e40003f4a8) in binary!
	0x18708  @objc MultiwayViewConstraintsController.(null) <stripped>
WARNING: couldn't find address 0xee8c0003f7c8 (0x68c0003f7c8) in binary!
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
	0x10c7c0  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x10ca00  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
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
	var x : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ],
 }

 enum __C.TUConversationParticipantVideoQuality { }

 struct __C.State {

	// Properties
	let rawValue : UInt
 }

 struct __C.CATransform3D {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m11 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m12 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m13 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m14 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m21 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m22 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m23 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m24 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m31 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m32 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m33 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m34 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m41 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m42 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m43 : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var m44 : ],
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
	var width : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ],
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
	var a : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : ],
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : ],
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
	let rawValue : Q3
 }

 enum __C.UIViewAnimatingPosition { }

 class __C.CGColor {

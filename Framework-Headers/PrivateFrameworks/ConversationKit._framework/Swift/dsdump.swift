 protocol ConversationKit.TapInteractionHandler // 1 requirements
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
 protocol ConversationKit.ParticipantsViewController // 10 requirements
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
	// method
 }
 protocol ConversationKit.ParticipantsViewControllerDelegate // 4 requirements
 {
	// getter
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
 protocol ConversationKit.ParticipantGridViewDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.CameraContainer // 6 requirements
 {
	// getter
	// getter
	// method
	// method
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
 protocol ConversationKit.EffectsHandler // 13 requirements
 {
	// method
	// method
	// method
	// method
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// getter
	// method
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
 protocol ConversationKit.CallCenterProvider // 11 requirements
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
 }
 protocol ConversationKit.CallCenterProviderDelegate // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ConversationKit.ParticipantViewDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol ConversationKit.MultiwayTransitioning // 5 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol ConversationKit.StagingAreaTransitioning // 6 requirements
 {
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
 protocol ConversationKit.Conversation // 8 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }
 protocol ConversationKit.ViewAnimating // 2 requirements
 {
	// method
	// method
 }

 struct ConversationKit.Participant {

	// Properties
	let handle : String // +0x0
	let identifier : UInt // +0x10
 }

 struct ConversationKit.RadarRequest {

	// Properties
	let date : Date
	let groupUUID : UUID
	let remoteMembers : Member
	let activeParticipants : Participant
	let isBackedByMessagesGroup : Bool
 }

 struct ConversationKit.Member {

	// Properties
	let handles : [String] // +0x0
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case handles  
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case handle  
	case identifier  
 }

 enum ConversationKit.CodingKeys {

	// Properties
	case date  
	case groupUUID  
	case remoteMembers  
	case activeParticipants  
	case isBackedByMessagesGroup  
 }

 class ConversationKit.TapInteraction : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var view : weak UIView? // +0x8 (0x8)
	let tapGestureRecognizer : UITapGestureRecognizer // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x8130  @objc TapInteraction.view <stripped>
	0x8190  @objc TapInteraction.setView: <stripped>
	0x8200  @objc TapInteraction.numberOfTapsRequired <stripped>
	0x8260  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0x83d0  @objc TapInteraction.init <stripped>
	0x8420  @objc TapInteraction.willMoveToView: <stripped>
	0x8490  @objc TapInteraction.didMoveToView: <stripped>
	0x85a0  @objc TapInteraction.handleRecognizer: <stripped>
	0x8c50  @objc TapInteraction..cxx_destruct <stripped>
 }

 class ConversationKit.InCallControlsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let leadingConstraint : NSLayoutConstraint // +0x10 (0x8)
	let bottomConstraint : NSLayoutConstraint // +0x18 (0x8)
	let widthConstraint : NSLayoutConstraint // +0x20 (0x8)
	let expandedTopPortraitAnchorConstraint : NSLayoutConstraint // +0x28 (0x8)
	let expandedTopLandscapeAnchorConstraint : NSLayoutConstraint // +0x30 (0x8)
	let visibleTopAnchorConstraint : NSLayoutConstraint // +0x38 (0x8)
	var constraints : [NSLayoutConstraint] // +0x40 (0x8)
	var type : InCallControlsLayoutType // +0x48 (0x9)

	// Swift methods
	0xafd0  func <stripped> // method 
	0xb0c0  func <stripped> // method 
 }

 enum ConversationKit.InCallControlsLayoutType {

	// Properties
	case effectsVisible : CGFloat
	case leftFloating : DeviceOrientation
	case hidden  
	case bottomLeftFloating  
 }

 class ConversationKit.SpringBoardUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient? // +0x10 (0x8)

	// Swift methods
	0xb570  func <stripped> // getter 
	0xb5a0  func <stripped> // getter 
	0xb5c0  func <stripped> // getter 
	0xb620  func <stripped> // getter 
	0xb640  func <stripped> // getter 
	0xb800  func <stripped> // method 
	0xba40  func <stripped> // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView
	let backFacingCameraView : ParticipantVideoCameraView
	let visualEffectView : UIVisualEffectView

	// ObjC -> Swift bridged methods
	0xdae0  @objc ParticipantVideoView.initWithFrame: <stripped>
	0xdb80  @objc ParticipantVideoView.initWithCoder: <stripped>
	0xdbc0  @objc ParticipantVideoView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0xdca0  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0xdd20  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
 }

 class ConversationKit.VideoPlayerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let player : AVPlayer

	// ObjC -> Swift bridged methods
	0xdf20  @objc VideoPlayerView.initWithFrame: <stripped>
	0xdff0  @objc VideoPlayerView.initWithCoder: <stripped>
	0xe1f0  @objc VideoPlayerView.itemDidEndNotification: <stripped>
	0xe2a0  @objc VideoPlayerView..cxx_destruct <stripped>
 }

 class ConversationKit.InCallControlsAddParticipantTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let button : InCallControlButton // +0x10 (0x8)
	var isAccessiblityConstraintsEnabled : Bool // +0x18 (0x1)
	var nameLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x20 (0x8)
	var nameLabelLastBaselineLayoutConstraint : NSLayoutConstraint? // +0x28 (0x8)
	var delegate : InCallControlsAddParticipantTableViewCellDelegate // +0x30 (0x10)
	var isEnabled : Bool // +0x40 (0x1)

	// ObjC -> Swift bridged methods
	0xe380  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0xf050  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xf1c0  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0xf240  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0xf540  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0xf5c0  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var gradient : [UIColor] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xf880  @objc AudioVisualizationView.initWithFrame: <stripped>
	0xf920  @objc AudioVisualizationView.initWithCoder: <stripped>
	0xfb90  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0xf730  func <stripped> // getter 
	0xf940  func <stripped> // setter 
	0xf9f0  func <stripped> // setter 
	0xfa30  func <stripped> // method 
	0xfa50  func <stripped> // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x10710  @objc AudioVisualizationLayer.init <stripped>
	0x10ad0  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x10bb0  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x10c00  @objc AudioVisualizationLayer.dealloc <stripped>
	0x10c60  @objc AudioVisualizationLayer.bounds <stripped>
	0x10d30  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x11230  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x10c20  @objc AudioVisualizationLayer..cxx_destruct <stripped>
 }

 class ConversationKit.LocalParticipantViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let widthConstraint : NSLayoutConstraint // +0x10 (0x8)
	let heightConstraint : NSLayoutConstraint // +0x18 (0x8)
	let trailingConstraint : NSLayoutConstraint // +0x20 (0x8)
	let bottomConstraint : NSLayoutConstraint // +0x28 (0x8)
	let centerXConstraint : NSLayoutConstraint // +0x30 (0x8)
	let centerYConstraint : NSLayoutConstraint // +0x38 (0x8)
	var centeredConstraints : [NSLayoutConstraint] // +0x40 (0x8)
	var portraitCenteringConstraints : [NSLayoutConstraint] // +0x48 (0x8)
	var landscapeCenteringConstraints : [NSLayoutConstraint] // +0x50 (0x8)
	var constraints : [NSLayoutConstraint] // +0x58 (0x8)
	var type : LocalParticipantLayoutType // +0x60 (0x11)

	// Swift methods
	0x12df0  func <stripped> // method 
	0x12e80  func <stripped> // method 
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

 class ConversationKit.ParticipantListLayout : UICollectionViewFlowLayout /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var indexPathLayoutAttributes : [IndexPath : UICollectionViewLayoutAttributes] // +0x8 (0x8)
	var lastInvalidatedSize : CGSize? // +0x10 (0x11)
	var calculatedContentSize : CGSize // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x13fb0  @objc ParticipantListLayout.init <stripped>
	0x14090  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x14e40  @objc ParticipantListLayout.prepareLayout <stripped>
	0x14e70  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x14f20  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x15220  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x15790  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x15a00  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x17600  func <stripped> // method 
 }

 class ConversationKit.LargeStagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let containingView : UIView // +0x10 (0x8)
	let constraintManagers : [ViewConstraintManager] // +0x18 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x20 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x28 (0x8)
	var currentSize : CGSize // +0x30 (0x10)
	var currentDeviceOrientation : DeviceOrientation // +0x40 (0x8)

	// Swift methods
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x8 (0x11)
	let participantView : ParticipantView // +0x20 (0x8)
	var accessibilityDisplayName : String // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x17fe0  @objc ParticipantCell.participantView <stripped>
	0x18460  @objc ParticipantCell.initWithFrame: <stripped>
	0x185b0  @objc ParticipantCell.initWithCoder: <stripped>
	0x18680  @objc ParticipantCell.prepareForReuse <stripped>
	0x187b0  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x18830  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x188f0  @objc ParticipantCell..cxx_destruct <stripped>
 }

 class ConversationKit.InCallControlsTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let summaryLabel : UILabel // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)
	let messagesButton : InCallControlButton // +0x18 (0x8)
	var isAccessiblityConstraintsEnabled : Bool // +0x20 (0x1)
	var subtitleLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x28 (0x8)
	var titleLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x30 (0x8)
	var titleLabelLastBaselineLayoutConstraint : NSLayoutConstraint? // +0x38 (0x8)
	var titleLabelFirstBaselineTopLayoutConstraint : NSLayoutConstraint? // +0x40 (0x8)
	var titleLabelLastBaselineBottomLayoutConstraint : NSLayoutConstraint? // +0x48 (0x8)
	var trailingTextLayoutGuide : UILayoutGuide // +0x50 (0x8)
	var trailingTextShowingButtonLayoutConstraint : NSLayoutConstraint? // +0x58 (0x8)
	var trailingTextHidingButtonLayoutConstraint : NSLayoutConstraint? // +0x60 (0x8)
	var delegate : weak InCallControlsTitleCellDelegate? // +0x68 (0x10)

	// ObjC -> Swift bridged methods
	0x18ba0  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x192c0  @objc InCallControlsTitleCell.init <stripped>
	0x1a040  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x1a210  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x1aa50  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x1ab00  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x1ab80  @objc InCallControlsTitleCell..cxx_destruct <stripped>
 }

 enum ConversationKit.Command { }

 class ConversationKit.ParticipantContactDetailsCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contactStore : CNContactStore
	let cache : BoxedDetails

	// Swift methods
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
	0x1bfb0  @objc BoxedDetails.init <stripped>
	0x1c000  @objc BoxedDetails..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.ParticipantContactDetails {

	// Properties
	var contact : CNContact? // +0x0
	var displayName : String // +0x8
	var shortName : String // +0x18
	var initials : String // +0x28
 }

 class ConversationKit.IDSCapabilitiesChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var participantCapabilities : Capabilities // +0x10 (0x8)
	var delegate : IDSCapabilitiesCheckerDelegate // +0x18 (0x10)
	let participantDestinations : ParticipantDestination // +0x28 (0x8)
	let lookupManager : IDSLookupManager // +0x30 (0x28)

	// ObjC -> Swift bridged methods
	0x1e470  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x1dd80  func <stripped> // method 
 }

 struct ConversationKit.ParticipantDestination {

	// Properties
	var identifier : UUID
	var destination : String
 }

 enum ConversationKit.Capabilities {

	// Properties
	case known : (faceTimeAudio: Bool, faceTimeVideo: Bool, multiway: Bool)
	case unknown  
 }

 class ConversationKit.GradientView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var colors : [UIColor] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x21530  @objc GradientView.init <stripped>
	0x21610  @objc GradientView.initWithFrame: <stripped>
	0x216b0  @objc GradientView.initWithCoder: <stripped>
	0x21730  @objc GradientView..cxx_destruct <stripped>
 }

 class ConversationKit.LargeMultiwayControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let containingView : UIView // +0x10 (0x8)
	let constraintManagers : [ViewConstraintManager] // +0x18 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x20 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x28 (0x8)
	var currentSize : CGSize // +0x30 (0x10)
	var currentDeviceOrientation : DeviceOrientation // +0x40 (0x8)

	// Swift methods
 }

 class ConversationKit.InCallControlsReportAProblemTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let reportAProblemLabel : UILabel // +0x8 (0x8)
	let icon : UIImageView // +0x10 (0x8)
	var isAccessiblityConstraintsEnabled : Bool // +0x18 (0x1)
	var reportAProblemLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x20 (0x8)
	var reportAProblemLabelLastBaselineLayoutConstraint : NSLayoutConstraint? // +0x28 (0x8)
	var enabled : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
	0x23780  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x238f0  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x23bc0  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x23c40  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantGridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantViews : IdentifiableParticipantView // +0x8 (0x8)
	let unfocusedParticipantOverlay : UIView // +0x10 (0x8)
	var currentlyFocusedParticipantIdentifier : UUID? // +0x18 (0x11)
	var mostRecentAnimationIndex : Int // +0x30 (0x8)
	var delegate : ParticipantGridViewDelegate // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x251d0  @objc ParticipantGridView.layoutSubviews <stripped>
	0x25410  @objc ParticipantGridView.init <stripped>
	0x25590  @objc ParticipantGridView.initWithCoder: <stripped>
	0x2c660  @objc ParticipantGridView.initWithFrame: <stripped>
	0x2c6a0  @objc ParticipantGridView..cxx_destruct <stripped>
 }

 struct ConversationKit.IdentifiableParticipantView {

	// Properties
	var identifier : UUID
	var view : ParticipantView
	var priority : Int
 }

 class ConversationKit.LocalParticipantView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let participantView : ParticipantView // +0x8 (0x8)
	var style : ParticipantView.Style // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x2f240  @objc LocalParticipantView.initWithCoder: <stripped>
	0x2f590  @objc LocalParticipantView.initWithFrame: <stripped>
	0x2f5d0  @objc LocalParticipantView..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.InCallControlsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let effectsButton : InCallControlButton // +0x8 (0x8)
	let muteButton : InCallControlButton // +0x10 (0x8)
	let flipCameraButton : InCallControlButton // +0x18 (0x8)
	let joinLeaveButton : InCallControlButton // +0x20 (0x8)
	let audioRouteButton : InCallControlButton // +0x28 (0x8)
	let toggleCameraButton : InCallControlButton // +0x30 (0x8)
	let buttonsByRow : [[InCallControlButton]] // +0x38 (0x8)
	var joinLeaveConfiguration : JoinLeaveConfiguration // +0x40 (0x1)
	let buttonLabelWidthConstraints : [NSLayoutConstraint] // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x356a0  @objc InCallControlsView.initWithCoder: <stripped>
	0x358f0  @objc InCallControlsView.layoutSubviews <stripped>
	0x35950  @objc InCallControlsView.initWithFrame: <stripped>
	0x35990  @objc InCallControlsView..cxx_destruct <stripped>

	// Swift methods
 }

 enum ConversationKit.JoinLeaveConfiguration {

	// Properties
	case join  
	case leave  
 }

 class ConversationKit.ParticipantListViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let controlsLeadingConstraint : NSLayoutConstraint // +0x10 (0x8)
	let containerLeadingConstraint : NSLayoutConstraint // +0x18 (0x8)
	let trailingConstraint : NSLayoutConstraint // +0x20 (0x8)
	let bottomConstraint : NSLayoutConstraint // +0x28 (0x8)
	let heightConstraint : NSLayoutConstraint // +0x30 (0x8)
	var constraints : [NSLayoutConstraint] // +0x38 (0x8)
	var type : ParticipantListLayoutType // +0x40 (0x9)

	// Swift methods
	0x37dd0  func <stripped> // method 
	0x37de0  func <stripped> // method 
 }

 enum ConversationKit.ParticipantListLayoutType {

	// Properties
	case nextToControls : CGFloat
	case bottom  
 }

 struct ConversationKit.ParticipantPresentationContext {

	// Properties
	let handle : TUHandle // +0x0
	let videoQuality : TUConversationParticipantVideoQuality // +0x8
	let visibility : Int // +0x10
	let prominence : Int // +0x18
 }

 class ConversationKit.DefaultObjectCache {
 class ConversationKit.BuzzedAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x38790  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x39380  @objc BuzzedAnimator.animateTransition: <stripped>
	0x39420  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x39bd0  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x39c90  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x39ca0  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x39d20  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x39db0  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x39e80  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x3a760  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x3a100  func <stripped> // method 
 }

 enum ConversationKit.Drawer {

	// Properties
	case hotdog  
	case endCall  
	case joinCall  
	case effects  
	case effectsSelected  
	case expandDrawer  
	case audioMute  
	case toggleCameraDisc  
	case toggleCameraPill  
	case messages  
	case swapCamera  
	case openMessages  
	case facetimeIcon  
	case ringBackground  
	case addParticipant  
	case facetimeAudio  
	case glow  
	case reportAProblem  
 }

 struct ConversationKit.ImageNames { }

 enum ConversationKit.ParticipantView {

	// Properties
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

 enum ConversationKit.Roster {

	// Properties
	case onCanvas  
 }

 class ConversationKit.SmallMultiwayControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	let participantListHeightConstraint : NSLayoutConstraint? // +0x18 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x20 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x28 (0x8)

	// Swift methods
 }

 class ConversationKit.ParticipantGridViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : [Participant] // +0x8 (0x8)
	var participantsBeforeFocus : [Participant]? // +0x10 (0x8)
	var participantPriorities : [UUID : Int] // +0x18 (0x8)
	let forceAudioPriorityButton : UIButton // +0x20 (0x8)
	var focusedParticipant : Participant? // +0x28 (0x60)
	var sashedParticipant : Participant? // +0x88 (0x60)
	var selectedParticipant : Participant? // +0xe8 (0x60)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x148 (0x10)
	var participantGridViewControllerDelegate : ParticipantGridViewControllerDelegate // +0x158 (0x10)

	// ObjC -> Swift bridged methods
	0x455c0  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x45650  @objc ParticipantGridViewController.loadView <stripped>
	0x45a90  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x45c90  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x492a0  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x49300  @objc ParticipantGridViewController..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.MostActiveParticipantsController {
 struct ConversationKit.ActivityDetails {

	// Properties
	var participantIdentifier : A
	var currentEMA : Float
	var currentTimeScale : Float
	var isActive : Bool
	var prominenceWeight : Float
 }

 struct ConversationKit.ParticipantViewModel {

	// Properties
	var shouldShowVideo : Bool
	var shouldShowBlurredVideo : Bool
	var shouldShowAudioVisualization : Bool
	var shouldShowBottomBar : Bool
	var shouldShowSpinnerIcon : Bool
	var shouldPauseVideo : Bool
	var shouldUseSolidBackground : Bool
	var shouldUseRoundedCorners : Bool
	var overlayIcon : ImageName?
	var overlayTitle : String?
	var overlaySubtitle : String?
	var bottomBarText : String?
	var contactGradient : [UIColor]
	var fake_videoURL : URL?
	var participantIdentifier : UUID
	var contactDetails : ParticipantContactDetails
	var videoTransform : CATransform3D?
	var videoProviders : [Participant.VideoProviderType : ParticipantVideoProvider]
	var handle : TUHandle?
 }

 class ConversationKit.InCallControlButton : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)
	var toggledConstraints : ToggledConstraints // +0x10 (0x20)
	let paragraphStyle : NSParagraphStyle // +0x30 (0x8)
	let style : Style // +0x38 (0x1)
	let label : UILabel // +0x40 (0x8)
	let discView : UIView // +0x48 (0x8)
	var image : UIImage? // +0x50 (0x8)
	var colorConfiguration : ElementColors // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0x5e000  @objc InCallControlButton.isSelected <stripped>
	0x5e020  @objc InCallControlButton.setSelected: <stripped>
	0x5e040  @objc InCallControlButton.isHighlighted <stripped>
	0x5e0e0  @objc InCallControlButton.setHighlighted: <stripped>
	0x5fca0  @objc InCallControlButton.initWithCoder: <stripped>
	0x5fd90  @objc InCallControlButton.layoutSubviews <stripped>
	0x5fdf0  @objc InCallControlButton.initWithFrame: <stripped>
	0x5fe30  @objc InCallControlButton..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.ToggledConstraints {

	// Properties
	var visibleImage : [NSLayoutConstraint] // +0x0
	var hiddenImage : [NSLayoutConstraint] // +0x8
	var visibleText : [NSLayoutConstraint] // +0x10
	var hiddenText : [NSLayoutConstraint] // +0x18
 }

 enum ConversationKit.Style {

	// Properties
	case disc  
	case pill  
 }

 struct ConversationKit.ElementColors {

	// Properties
	let glyph : UIColor // +0x0
	let glyphAlpha : CGFloat // +0x8
	let text : UIColor // +0x10
	let textAlpha : CGFloat // +0x18
	let background : UIColor // +0x20
	let backgroundAlpha : CGFloat // +0x28
 }

 class ConversationKit.CallCenter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let tuCallCenter : TUCallCenter // +0x8 (0x8)
	var delegate : weak CallCenterProviderDelegate? // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0x61fe0  @objc CallCenter.init <stripped>
	0x62020  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	var text : String // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x63440  @objc MonogramView.init <stripped>
	0x63580  @objc MonogramView.initWithFrame: <stripped>
	0x63650  @objc MonogramView.initWithCoder: <stripped>
	0x63af0  @objc MonogramView.drawRect: <stripped>
	0x63b90  @objc MonogramView..cxx_destruct <stripped>
 }

 class ConversationKit.InCallControlsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var groupName : String? // +0x8 (0x10)
	var representedLegacyCallIdentifier : String? // +0x18 (0x10)
	let participantsTableViewController : InCallControlsParticipantsTableViewController // +0x28 (0x8)
	var localParticipant : Participant // +0x30 (0x60)
	var viewContent : ViewContent // +0x90 (0x20)
	var mode : InCallControlsMode // +0xb0 (0x1)
	var topInset : CGFloat // +0xb8 (0x8)
	var isExpanded : Bool // +0xc0 (0x1)
	var audioIsEnabled : Bool // +0xc1 (0x1)
	var videoIsEnabled : Bool // +0xc2 (0x1)
	var effectsAreAvailable : Bool // +0xc3 (0x1)
	var effectsAreEnabled : Bool // +0xc4 (0x1)
	var shouldShowJoinButton : Bool // +0xc5 (0x1)
	var delegate : weak InCallControlsViewControllerDelegate? // +0xc8 (0x8)
	var participantDelegate : weak InCallControlsViewControllerParticipantDelegate? // +0xd0 (0x10)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0xe0 (0x10)

	// ObjC -> Swift bridged methods
	0x64650  @objc InCallControlsViewController.isExpanded <stripped>
	0x64690  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x64a50  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x64ad0  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x64be0  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x64c20  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x655a0  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x655e0  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x656b0  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x65720  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x657e0  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x65820  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x65a20  @objc InCallControlsViewController.audioButton <stripped>
	0x65a80  @objc InCallControlsViewController.delegate <stripped>
	0x65b20  @objc InCallControlsViewController.setDelegate: <stripped>
	0x65c90  @objc InCallControlsViewController.description <stripped>
	0x66eb0  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x67130  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x68af0  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x68b80  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x68c30  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x68c90  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x68f60  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x68f80  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x69140  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x691b0  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x691e0  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x692d0  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x69300  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x699d0  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x6a070  @objc InCallControlsViewController.updateToRepresentLegacyCall: <stripped>
	0x6a0f0  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x6a130  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x6a190  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x6a1b0  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x6a1d0  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x6a1f0  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x6a210  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x6a230  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x6a250  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x6a270  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x6a2d0  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x6a340  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x6a410  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x6a470  @objc InCallControlsViewController..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.ViewContent {

	// Properties
	let hotdog : UIImageView // +0x0
	let controlsView : InCallControlsView // +0x8
	let controlsViewTopConstraint : NSLayoutConstraint // +0x10
	let viewsToHideInUnexpandedState : [UIView] // +0x18
 }

 enum ConversationKit.DeviceOrientation { }

 class ConversationKit.InCallControlsParticipantsTableViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let capabilitiesChecker : IDSCapabilitiesChecker // +0x8 (0x8)
	var participants : [Participant] // +0x10 (0x8)
	let isLegacy : Bool // +0x18 (0x1)
	var groupName : String? // +0x20 (0x10)
	var mode : InCallControlsMode // +0x30 (0x1)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x38 (0x10)
	var inCallControlsParticipantsTableViewControllerDelegate : InCallControlsParticipantsTableViewControllerDelegate // +0x48 (0x10)

	// ObjC -> Swift bridged methods
	0x6f2e0  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x6f7c0  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x6f840  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x6fa20  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x70520  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x70960  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x70c80  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x70cc0  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x70d20  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

	// Swift methods
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
	case buzz : UUID
	case showMessages  
	case addParticipant  
	case reportAProblem  
 }

 class ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let nameLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let cameraIcon : UIImageView // +0x18 (0x8)
	let avatarView : ParticipantContactView // +0x20 (0x8)
	let ringButton : InCallControlButton // +0x28 (0x8)
	var isAccessiblityConstraintsEnabled : Bool // +0x30 (0x1)
	var nameLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x38 (0x8)
	var subtitleLabelFirstBaselineLayoutConstraint : NSLayoutConstraint? // +0x40 (0x8)
	var subtitleLabelLastBaselineLayoutConstraint : NSLayoutConstraint? // +0x48 (0x8)
	var constraintsForCameraIconVisibleState : [Bool : [NSLayoutConstraint]] // +0x50 (0x8)
	var constraintsForRingButtonVisibleState : [Bool : [NSLayoutConstraint]] // +0x58 (0x8)
	var callDelegate : ()? // +0x60 (0x10)
	var delegate : weak InCallControlsParticipantTableViewCellDelegate? // +0x70 (0x10)

	// ObjC -> Swift bridged methods
	0x72f10  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x74960  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x74ca0  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x75250  @objc InCallControlsParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x752f0  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x75370  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0x79f10  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0x7a700  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0x7a750  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0x7b100  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0x7b150  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0x7a730  func <stripped> // method 
	0x7a7d0  func <stripped> // method 
	0x7abf0  func <stripped> // method 
	0x7acb0  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0x7b4c0  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0x7bce0  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0x7bd50  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0x7c4a0  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0x7c900  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0x7c9c0  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0x7ca30  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0x7b1d0  func <stripped> // setter 
	0x7bd90  func <stripped> // method 
	0x7c4c0  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0x7cbc0  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0x7d090  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0x7d0b0  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0x7d6d0  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0x7d750  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0x7d7f0  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0x7d0e0  func <stripped> // method 
	0x7d6b0  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0x7daa0  @objc ReportAProblemView.init <stripped>
	0x7e6b0  @objc ReportAProblemView.initWithFrame: <stripped>
	0x7e7d0  @objc ReportAProblemView.initWithCoder: <stripped>
	0x7e930  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0x7ecc0  @objc ReportAProblemView.didTapButton: <stripped>
	0x7ed80  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0x7da30  func <stripped> // setter 
	0x7e980  func <stripped> // method 
	0x7ec70  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x18 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x20 (0x8)

	// Swift methods
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint] // +0x10 (0x8)
	let effectsBrowserViewTopAnchor : NSLayoutConstraint // +0x18 (0x8)

	// Swift methods
	0x80ba0  func <stripped> // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var encoder.storage : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0x80f50  func <stripped> // getter 
	0x81dc0  func <stripped> // method 
 }

 enum ConversationKit.CameraPosition {

	// Properties
	case front  
	case back  
	case unspecified  
 }

 class ConversationKit.InCallControlsDragController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let inCallControlsView : UIView // +0x8 (0x8)
	let constraintsController : MultiwayViewConstraintsController // +0x10 (0x8)
	let panGestureRecognizer : UIPanGestureRecognizer // +0x18 (0x8)
	var animation : DragAnimation // +0x20 (0x40)
	var delegate : weak InCallControlsDragControllerDelegate? // +0x60 (0x8)
	var disabledScrollViews : [UIScrollView] // +0x68 (0x8)

	// ObjC -> Swift bridged methods
	0x82990  @objc InCallControlsDragController.delegate <stripped>
	0x82a10  @objc InCallControlsDragController.setDelegate: <stripped>
	0x82b80  @objc InCallControlsDragController.isDragging <stripped>
	0x82e20  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0x82e60  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0x83fd0  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0x84a30  @objc InCallControlsDragController.init <stripped>
	0x84a70  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0x82be0  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
 }

 struct ConversationKit.DragAnimation {

	// Properties
	var animator : UIViewPropertyAnimator // +0x0
	var validAnimationRange : ClosedRange<CGFloat> // +0x8
	var gestureOffsetToTopOfControls : CGFloat // +0x18
	var initialTranslationInView : CGFloat // +0x20
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

 struct ConversationKit.ParticipantMediaPriorities {

	// Properties
	var remoteIdentifiers : Participant.RemoteIdentifiers // +0x0
	var audioPriority : Int // +0x18
	var videoPriority : Int // +0x20
 }

 class ConversationKit.CrossFadeAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x86e00  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0x87020  @objc CrossFadeAnimator.animateTransition: <stripped>
	0x870c0  @objc CrossFadeAnimator.init <stripped>
 }

 struct ConversationKit.MediaInfo {

	// Properties
	var audioToken : Int // +0x0
	var videoInfo : VideoInfo // +0x8
 }

 struct ConversationKit.VideoInfo {

	// Properties
	var providers : VideoProviderType // +0x0
	var state : VideoState // +0x8
	var orientation : DeviceOrientation // +0x10
	var cameraPosition : CameraPosition // +0x18
 }

 struct ConversationKit.VideoState {

	// Properties
	var isReceivingVideoFrames : Bool // +0x0
	var isVideoSuspended : Bool // +0x1
	var isVideoPaused : Bool // +0x2
	var isVideoDegraded : Bool // +0x3
	var isVideoMirrored : Bool // +0x4
 }

 enum ConversationKit.VideoProviderType {

	// Properties
	case grid  
	case list  
	case localPIP  
 }

 enum ConversationKit.State {

	// Properties
	case waiting : Date
	case rung : Date
	case broadcasting : MediaInfo
	case left : Date
	case fake : URL
	case joining  
 }

 struct ConversationKit.Participant: HasSortableHandle {

	// Properties
	var state : State
	var identifier : UUID
	var remoteIdentifiers : RemoteIdentifiers
	var gradient : [UIColor]?
 }

 struct ConversationKit.RemoteIdentifiers {

	// Properties
	var handle : TUHandle // +0x0
	var idsIdentifier : UInt? // +0x8
 }

 class ConversationKit.ParticipantViewLabelContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel

	// ObjC -> Swift bridged methods
	0x8dc90  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0x8dcc0  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0x8dda0  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0x8de60  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0x8e040  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0x8e140  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0x8e200  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0x8e310  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0x8fc50  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0x8fca0  class func <stripped> // init 
 }

 class ConversationKit.PlatformDisplayLink : PlatformDisplayLinkBase {

	// Properties
	var observers : WeakPlatformDisplayLinkObserver
	var isRunning : Bool
 }

 class ConversationKit.PlatformDisplayLinkBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let callbackWrapper : DisplayLinkCallbackWrapper
	var displayLink.storage : CADisplayLink?

	// Swift methods
	0x900b0  func <stripped> // getter 
	0x90110  func <stripped> // method 
	0x90130  func <stripped> // method 
 }

 struct ConversationKit.WeakPlatformDisplayLinkObserver {

	// Properties
	var displayLinkObserver : PlatformDisplayLinkObserver // +0x0
 }

 class ConversationKit.EffectsLayoutController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var containingViewController : weak UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x91140  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0x911d0  @objc EffectsLayoutController.init <stripped>
	0x91210  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0x91080  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var gradientView : GradientView // +0x8 (0x8)
	var contactMonogram : MonogramView // +0x10 (0x8)
	var contactSilhouetteImageView : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0x91f20  @objc ParticipantContactView.initWithFrame: <stripped>
	0x92060  @objc ParticipantContactView.layoutSubviews <stripped>
	0x921a0  @objc ParticipantContactView.initWithCoder: <stripped>
	0x921f0  @objc ParticipantContactView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x97ba0  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0x97be0  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

	// Swift methods
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.ParticipantView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x8 (0x11)
	var lastConfigurationHashValue : Int? // +0x20 (0x9)
	var contentView : UIView // +0x30 (0x8)
	var associatedVideoProvider : ParticipantVideoProvider? // +0x38 (0x28)
	var videoTransform : CATransform3D? // +0x60 (0x81)
	var audioVisualizationView : AudioVisualizationView // +0xe8 (0x8)
	var contactGlowView : UIImageView? // +0xf0 (0x8)
	var contactView : ParticipantContactView // +0xf8 (0x8)
	let videoView : ParticipantVideoView // +0x100 (0x8)
	var pausedVideoView : UIView? // +0x108 (0x8)
	let loggingIdentifier : UUID // +0x110 (0x10)
	let overlayBackdropView : UIVisualEffectView? // +0x120 (0x8)
	let overlaySpinner : UIActivityIndicatorView // +0x128 (0x8)
	let overlayIconView : UIImageView // +0x130 (0x8)
	let overlaySubtitleLabel : UILabel // +0x138 (0x8)
	var overlayTitleLabelContainerView : ParticipantViewLabelContainerView // +0x140 (0x8)
	let bottomBar : UIVisualEffectView // +0x148 (0x8)
	let bottomBarLabel : UILabel // +0x150 (0x8)
	let bottomBarButton : UIButton // +0x158 (0x8)
	let squareLayoutGuide : UILayoutGuide // +0x160 (0x8)
	let avatarToLabelLayoutGuide : UILayoutGuide // +0x168 (0x8)
	let overlayViewTopLayoutGuide : UILayoutGuide // +0x170 (0x8)
	let overlayViewBottomLayoutGuide : UILayoutGuide // +0x178 (0x8)
	var overlayConstraints : OverallLayoutState // +0x180 (0x8)
	var labelState : OverlayLabelsState // +0x188 (0x1)
	var overallLayoutState : OverallLayoutState // +0x189 (0x2)
	let backgroundBackdropView : UIView // +0x190 (0x8)
	let debugProminenceLabel : UILabel // +0x198 (0x8)
	var bottomBarHideTimer : NSTimer? // +0x1a0 (0x8)
	var style : Style // +0x1a8 (0x8)
	var delegate : ParticipantViewDelegate // +0x1b0 (0x10)

	// ObjC -> Swift bridged methods
	0x9cf30  @objc ParticipantView.overlayBackdropView <stripped>
	0x9cf80  @objc ParticipantView.overlayIconView <stripped>
	0x9cfd0  @objc ParticipantView.overlaySubtitleLabel <stripped>
	0x9d020  @objc ParticipantView.bottomBar <stripped>
	0x9d070  @objc ParticipantView.bottomBarLabel <stripped>
	0x9e530  @objc ParticipantView.style <stripped>
	0x9e590  @objc ParticipantView.setStyle: <stripped>
	0xa4140  @objc ParticipantView.dealloc <stripped>
	0xa43a0  @objc ParticipantView.layoutSubviews <stripped>
	0xa4430  @objc ParticipantView.didTapExpandButton <stripped>
	0xa48b0  @objc ParticipantView.initWithCoder: <stripped>
	0xa4950  @objc ParticipantView.accessibilityIsShowingVideo <stripped>
	0xa49c0  @objc ParticipantView.initWithFrame: <stripped>
	0xa4160  @objc ParticipantView..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.OverallLayoutState {

	// Properties
	var sizeState : Size // +0x0
	var labelState : OverlayLabelsState // +0x1
 }

 enum ConversationKit.Size {

	// Properties
	case regular  
	case small  
 }

 enum ConversationKit.OverlayLabelsState {

	// Properties
	case none  
	case single  
	case double  
 }

 enum ConversationKit.Style { }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var demo_requiredParticipantsStep : Int
	var demo_didOriginateFromFaceTime : Bool
	var demo_requiredParticipantIdentifiers : [UUID]
	var demo_fakeParticipantIdentifiers : [UUID]
	var demo_currentRequiredParticipantHandles : [String]

	// Swift methods
	0xa7c50  func <stripped> // getter 
	0xa7ca0  func <stripped> // method 
	0xa7d40  func <stripped> // method 
	0xa7de0  func <stripped> // getter 
	0xa7e10  func <stripped> // getter 
	0xa7e40  func <stripped> // getter 
	0xa7e70  func <stripped> // getter 
	0xa7ea0  func <stripped> // getter 
	0xa7ed0  func <stripped> // getter 
	0xa7f00  func <stripped> // getter 
	0xa7f30  func <stripped> // getter 
	0xa7f60  func <stripped> // getter 
	0xa8390  func <stripped> // method 
	0xa84f0  func <stripped> // method 
	0xa8650  func <stripped> // method 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa8bb0  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xa9db0  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xa9e50  @objc StagingAreaAnimator.init <stripped>
 }

 class ConversationKit.MostActiveParticipantViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : [Participant] // +0x8 (0x8)
	var focusedParticipant : Participant? // +0x10 (0x60)
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate? // +0x70 (0x10)
	var participantView : ParticipantView // +0x80 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x88 (0x8)

	// ObjC -> Swift bridged methods
	0xad650  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xad7d0  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xadc70  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xadcf0  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xadd50  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xaf210  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xaf4d0  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xaf6e0  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xaf880  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xb0050  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xb00b0  @objc ParticipantListViewController..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0xb3ff0  func <stripped> // method 
 }

 class ConversationKit.MultiwayViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversationController : ConversationController // +0x8 (0x8)
	let mostActiveParticipantsController : MostActiveParticipantsController<UUID> // +0x10 (0x8)
	var avcEffects : AVCEffects? // +0x18 (0x8)
	var effectsCaptureInfo : EffectsCaptureInfo // +0x20 (0x48)
	var viewContent : ViewContent // +0x68 (0x50)
	var inCallControlsDismissTimer : NSTimer? // +0xb8 (0x8)
	var hideInactiveParticipantsTimer : NSTimer? // +0xc0 (0x8)
	var effectsLayoutController : EffectsLayoutController? // +0xc8 (0x8)
	var deviceOrientation : DeviceOrientation // +0xd0 (0x8)
	var delegate : weak MultiwayViewControllerDelegate? // +0xd8 (0x8)
	let shouldInitializeEffects : Bool // +0xe0 (0x1)
	var effectsEnabled : Bool // +0xe1 (0x1)
	var isPipped : Bool // +0xe2 (0x1)

	// ObjC -> Swift bridged methods
	0xb4fe0  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xb5030  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xb5090  @objc MultiwayViewController.call <stripped>
	0xb50f0  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xb5110  @objc MultiwayViewController.deviceOrientation <stripped>
	0xb5180  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xb5cb0  @objc MultiwayViewController.delegate <stripped>
	0xb5d10  @objc MultiwayViewController.setDelegate: <stripped>
	0xb5e80  @objc MultiwayViewController.effectsEnabled <stripped>
	0xb5ed0  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xb5f70  @objc MultiwayViewController.pipViewController <stripped>
	0xb6190  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xb6350  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xb99d0  @objc MultiwayViewController.initWithCoder: <stripped>
	0xb9a60  @objc MultiwayViewController.dealloc <stripped>
	0xbac70  @objc MultiwayViewController.viewDidLoad <stripped>
	0xbaed0  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xbb140  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xbb420  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xbb4f0  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xbb5e0  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xbba40  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xbbf70  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xbbfb0  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xbbff0  @objc MultiwayViewController.muteVideo <stripped>
	0xbc030  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xbc3a0  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xbca20  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xbcad0  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xbcbe0  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xb9a80  @objc MultiwayViewController..cxx_destruct <stripped>

	// Swift methods
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
	var localParticipant : Participant // +0x8 (0x60)
	var remoteParticipants : [Participant] // +0x68 (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x70 (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x78 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x80 (0x8)
	var recentPresentationContexts : [TUHandle : ParticipantPresentationContext] // +0x88 (0x8)
	var conversationState : TUConversationState // +0x90 (0x8)
	var deviceOrientation : DeviceOrientation // +0x98 (0x8)
	var broadcastingState : BroadcastingState // +0xa0 (0x10)
	var didAddVisibleParticipant : (_:_:)? // +0xb0 (0x10)
	var didRemoveVisibleParticipant : (_:_:)? // +0xc0 (0x10)
	var didUpdateVisibleParticipant : (_:_:)? // +0xd0 (0x10)
	var visibleParticipantDidBecomeActive : (_:_:)? // +0xe0 (0x10)
	var didStartVideoForVisibleParticipant : (_:_:)? // +0xf0 (0x10)
	var participantsMediaPrioritiesDidChange : (_:)? // +0x100 (0x10)
	var participantAudioPowerDidChange : (_:_:)? // +0x110 (0x10)
	var audioRouteDidChange : (_:)? // +0x120 (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x130 (0x10)
	var didUpdateLocalParticipant : (_:_:)? // +0x140 (0x10)
	var didStartVideoForLocalParticipant : (_:_:)? // +0x150 (0x10)
	var conversationStateDidChange : (_:)? // +0x160 (0x10)
	var enableVideoOnJoin : Bool // +0x170 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x178 (0x28)
	var callCenter : CallCenterProvider // +0x1a0 (0x28)
	let call : TUCall // +0x1c8 (0x8)
	var conversationUUID : UUID? // +0x1d0 (0x11)
	var availableParticipantColors : [[UIColor]] // +0x1e8 (0x8)

	// ObjC -> Swift bridged methods
	0xcbae0  @objc ConversationController.description <stripped>
	0xd54a0  @objc ConversationController.init <stripped>
	0xd54e0  @objc ConversationController..cxx_destruct <stripped>

	// Swift methods
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

 class ConversationKit.StagingAreaViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantLabel : UILabel // +0x8 (0x8)
	var secondaryParticipantLabel : UILabel // +0x10 (0x8)
	var localPreviewFrontView : UIView // +0x18 (0x8)
	var localPreviewBackView : UIView // +0x20 (0x8)
	var audioVisualizationView : UIView // +0x28 (0x8)
	var controlsViewController : InCallControlsViewController // +0x30 (0x8)
	var constraintController : MultiwayViewConstraintsController? // +0x38 (0x8)
	var controlsDragController : InCallControlsDragController? // +0x40 (0x8)
	var effectsEnabled : Bool // +0x48 (0x1)
	var avcEffects : AVCEffects? // +0x50 (0x8)
	var effectsCaptureInfo : EffectsCaptureInfo // +0x58 (0x48)
	var effectsViewController : UIViewController? // +0xa0 (0x8)
	var effectsBrowserViewController : UIViewController? // +0xa8 (0x8)
	var effectsLayoutController : EffectsLayoutController? // +0xb0 (0x8)
	let conversationController : ConversationController // +0xb8 (0x8)
	let videoDeviceController : TUVideoDeviceController // +0xc0 (0x8)
	var numberFormatter : NSNumberFormatter // +0xc8 (0x8)
	var scheduledUpdateTimer : NSTimer? // +0xd0 (0x8)
	var isWaitingToConnect : Bool // +0xd8 (0x1)
	var hasJoined : Bool // +0xd9 (0x1)
	var delegate : weak MultiwayViewControllerDelegate? // +0xe0 (0x8)
	var stagingAreaDelegate : weak StagingAreaViewControllerDelegate? // +0xe8 (0x8)
	var call : TUCall // +0xf0 (0x8)
	var deviceOrientation : DeviceOrientation // +0xf8 (0x8)

	// ObjC -> Swift bridged methods
	0xe0ee0  @objc StagingAreaViewController.effectsEnabled <stripped>
	0xe0f50  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0xe1190  @objc StagingAreaViewController.hasJoined <stripped>
	0xe11f0  @objc StagingAreaViewController.setHasJoined: <stripped>
	0xe1250  @objc StagingAreaViewController.delegate <stripped>
	0xe1290  @objc StagingAreaViewController.setDelegate: <stripped>
	0xe1340  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0xe13f0  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0xe15a0  @objc StagingAreaViewController.call <stripped>
	0xe1620  @objc StagingAreaViewController.setCall: <stripped>
	0xe1760  @objc StagingAreaViewController.deviceOrientation <stripped>
	0xe17d0  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0xe1af0  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0xe29c0  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0xe2c90  @objc StagingAreaViewController.initWithCoder: <stripped>
	0xe5820  @objc StagingAreaViewController.viewDidLoad <stripped>
	0xe5bb0  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0xe5e20  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0xe5f30  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0xe5f50  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0xe6630  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0xe66d0  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0xe6790  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0xe6840  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0xe6f90  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xe70a0  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0xe7100  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0xe1b20  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
 }

 struct ConversationKit.EffectsCaptureInfo {

	// Properties
	var cameraViewController : UIViewController // +0x0
	var presentationFrame : CGRect // +0x8
	var contentsFrame : CGRect // +0x28
 }

 class ConversationKit.InCallControlsFramesCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var inCallControlsViewFrames : InCallControlsViewFrames // +0x10 (0x30)

	// Swift methods
	0xea8e0  class func <stripped> // init 
 }

 struct ConversationKit.InCallControlsViewFrames {

	// Properties
	var containingFrame : CGRect? // +0x0
	var frames : [InCallControlsState : CGRect] // +0x28
 }

 struct ConversationKit.InCallControlsParticipantTableViewCellModel {

	// Properties
	var contactDetails : ParticipantContactDetails
	var participantIdentifier : UUID
	var name : String
	var subtitle : String
	var shouldShowRingButton : Bool
	var shouldShowCameraIcon : Bool
	var shouldEnableRingButton : Bool
	var contactGradient : [UIColor]
	var nameLabelColor : UIColor
 }

 enum ConversationKit.BroadcastingState {

	// Properties
	case audio : (muted: Bool)
	case audioVideo : (muted: Bool, cameraPosition: CameraPosition, deviceOrientation: DeviceOrientation)
 }

 enum ConversationKit.InCallControlsState { }

 class ConversationKit.MultiwayViewConstraintsController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var participantListState : ParticipantListState // +0x8 (0x1)
	var localParticipantState : LocalParticipantState // +0x10 (0x8)
	var inCallControlsState : InCallControlsState // +0x18 (0x8)
	var floatingControlsState : FloatingControlsState // +0x20 (0x1)
	var viewStateEffects : OverallLayoutState // +0x28 (0x8)
	let viewControllerLayout : ViewControllerLayout // +0x30 (0x28)
	let inCallControlsFramesCache : InCallControlsFramesCache // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0xedfd0  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0xee010  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0xee100  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0xee190  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0xf00d0  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0xf0850  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0xf08f0  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0xf0970  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0xf09b0  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0xf0bd0  @objc MultiwayViewConstraintsController.init <stripped>
	0xf0c60  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

	// Swift methods
 }

 struct ConversationKit.OverallLayoutState {

	// Properties
	var listState : ParticipantListState // +0x0
	var controlsState : InCallControlsState // +0x8
	var localState : LocalParticipantState // +0x10
 }

 enum ConversationKit.FloatingControlsState {

	// Properties
	case hidden  
	case visible  
 }

 enum ConversationKit.LocalParticipantState { }

 enum ConversationKit.ParticipantListState {

	// Properties
	case hidden  
	case visible  
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 enum __C.TUConversationParticipantVideoQuality { }

 struct __C.CATransform3D {

	// Properties
	var m11 : CGFloat
	var m12 : CGFloat
	var m13 : CGFloat
	var m14 : CGFloat
	var m21 : CGFloat
	var m22 : CGFloat
	var m23 : CGFloat
	var m24 : CGFloat
	var m31 : CGFloat
	var m32 : CGFloat
	var m33 : CGFloat
	var m34 : CGFloat
	var m41 : CGFloat
	var m42 : CGFloat
	var m43 : CGFloat
	var m44 : CGFloat
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.State {

	// Properties
	let rawValue : UInt
 }

 enum __C.TUConversationState { }

 enum __C.TURouteDeviceType { }

 enum __C.Position { }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.UIViewAnimatingPosition { }

 enum __C.State { }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 class __C.CGColor {
 struct __C.State {

	// Properties
	let rawValue : UInt
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.TUConversationState { }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 class __C.CGColor {
 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CATransform3D {

	// Properties
	var m11 : CGFloat
	var m12 : CGFloat
	var m13 : CGFloat
	var m14 : CGFloat
	var m21 : CGFloat
	var m22 : CGFloat
	var m23 : CGFloat
	var m24 : CGFloat
	var m31 : CGFloat
	var m32 : CGFloat
	var m33 : CGFloat
	var m34 : CGFloat
	var m41 : CGFloat
	var m42 : CGFloat
	var m43 : CGFloat
	var m44 : CGFloat
 }

 struct __C.State {

	// Properties
	let rawValue : UInt
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.Position { }

 enum __C.State { }

 enum __C.UIViewAnimatingPosition { }

 class __C.CGColor {
 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.TUConversationState { }

 enum __C.TURouteDeviceType { }

 enum __C.TUConversationState { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

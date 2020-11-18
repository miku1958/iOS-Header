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
	0x7580  @objc TapInteraction.view <stripped>
	0x75e0  @objc TapInteraction.setView: <stripped>
	0x7650  @objc TapInteraction.numberOfTapsRequired <stripped>
	0x76b0  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0x7820  @objc TapInteraction.init <stripped>
	0x7870  @objc TapInteraction.willMoveToView: <stripped>
	0x78e0  @objc TapInteraction.didMoveToView: <stripped>
	0x79f0  @objc TapInteraction.handleRecognizer: <stripped>
	0x80a0  @objc TapInteraction..cxx_destruct <stripped>
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
	0xa420  func <stripped> // method 
	0xa510  func <stripped> // method 
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
	0xa9c0  func <stripped> // getter 
	0xa9f0  func <stripped> // getter 
	0xaa10  func <stripped> // getter 
	0xaa70  func <stripped> // getter 
	0xaa90  func <stripped> // getter 
	0xac50  func <stripped> // method 
	0xae90  func <stripped> // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView
	let backFacingCameraView : ParticipantVideoCameraView
	let visualEffectView : UIVisualEffectView

	// ObjC -> Swift bridged methods
	0xcf30  @objc ParticipantVideoView.initWithFrame: <stripped>
	0xcfd0  @objc ParticipantVideoView.initWithCoder: <stripped>
	0xd010  @objc ParticipantVideoView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0xd0f0  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0xd170  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
 }

 class ConversationKit.VideoPlayerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let player : AVPlayer

	// ObjC -> Swift bridged methods
	0xd370  @objc VideoPlayerView.initWithFrame: <stripped>
	0xd440  @objc VideoPlayerView.initWithCoder: <stripped>
	0xd640  @objc VideoPlayerView.itemDidEndNotification: <stripped>
	0xd6f0  @objc VideoPlayerView..cxx_destruct <stripped>
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
	0xd7d0  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0xe4a0  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xe610  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0xe690  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0xe990  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0xea10  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var gradient : [UIColor] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xecd0  @objc AudioVisualizationView.initWithFrame: <stripped>
	0xed70  @objc AudioVisualizationView.initWithCoder: <stripped>
	0xefe0  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0xeb80  func <stripped> // getter 
	0xed90  func <stripped> // setter 
	0xee40  func <stripped> // setter 
	0xee80  func <stripped> // method 
	0xeea0  func <stripped> // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0xfb60  @objc AudioVisualizationLayer.init <stripped>
	0xff20  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x10000  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x10050  @objc AudioVisualizationLayer.dealloc <stripped>
	0x100b0  @objc AudioVisualizationLayer.bounds <stripped>
	0x10180  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x10680  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x10070  @objc AudioVisualizationLayer..cxx_destruct <stripped>
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
	0x12240  func <stripped> // method 
	0x122d0  func <stripped> // method 
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
	0x13400  @objc ParticipantListLayout.init <stripped>
	0x134e0  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x14290  @objc ParticipantListLayout.prepareLayout <stripped>
	0x142c0  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x14370  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x14670  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x14be0  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x14e50  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x16a50  func <stripped> // method 
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
	0x17430  @objc ParticipantCell.participantView <stripped>
	0x178b0  @objc ParticipantCell.initWithFrame: <stripped>
	0x17a00  @objc ParticipantCell.initWithCoder: <stripped>
	0x17ad0  @objc ParticipantCell.prepareForReuse <stripped>
	0x17c00  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x17c80  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x17d40  @objc ParticipantCell..cxx_destruct <stripped>
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
	0x17ff0  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x18710  @objc InCallControlsTitleCell.init <stripped>
	0x19490  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x19660  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x19ea0  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x19f50  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x19fd0  @objc InCallControlsTitleCell..cxx_destruct <stripped>
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
	0x1b400  @objc BoxedDetails.init <stripped>
	0x1b450  @objc BoxedDetails..cxx_destruct <stripped>

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
	0x1d8c0  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x1d1d0  func <stripped> // method 
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
	0x20980  @objc GradientView.init <stripped>
	0x20a60  @objc GradientView.initWithFrame: <stripped>
	0x20b00  @objc GradientView.initWithCoder: <stripped>
	0x20b80  @objc GradientView..cxx_destruct <stripped>
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
	0x22bd0  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x22d40  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x23010  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x23090  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantGridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantViews : IdentifiableParticipantView // +0x8 (0x8)
	let unfocusedParticipantOverlay : UIView // +0x10 (0x8)
	var currentlyFocusedParticipantIdentifier : UUID? // +0x18 (0x11)
	var mostRecentAnimationIndex : Int // +0x30 (0x8)
	var delegate : ParticipantGridViewDelegate // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x24620  @objc ParticipantGridView.layoutSubviews <stripped>
	0x24860  @objc ParticipantGridView.init <stripped>
	0x249e0  @objc ParticipantGridView.initWithCoder: <stripped>
	0x2bab0  @objc ParticipantGridView.initWithFrame: <stripped>
	0x2baf0  @objc ParticipantGridView..cxx_destruct <stripped>
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
	0x2e690  @objc LocalParticipantView.initWithCoder: <stripped>
	0x2e9e0  @objc LocalParticipantView.initWithFrame: <stripped>
	0x2ea20  @objc LocalParticipantView..cxx_destruct <stripped>

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
	0x34af0  @objc InCallControlsView.initWithCoder: <stripped>
	0x34d40  @objc InCallControlsView.layoutSubviews <stripped>
	0x34da0  @objc InCallControlsView.initWithFrame: <stripped>
	0x34de0  @objc InCallControlsView..cxx_destruct <stripped>

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
	0x37220  func <stripped> // method 
	0x37230  func <stripped> // method 
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
	0x37be0  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x387d0  @objc BuzzedAnimator.animateTransition: <stripped>
	0x38870  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x39020  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x390e0  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x390f0  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x39170  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x39200  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x392d0  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x39bb0  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x39550  func <stripped> // method 
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
	0x44a10  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x44aa0  @objc ParticipantGridViewController.loadView <stripped>
	0x44ee0  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x450e0  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x486f0  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x48750  @objc ParticipantGridViewController..cxx_destruct <stripped>

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
	0x5d450  @objc InCallControlButton.isSelected <stripped>
	0x5d470  @objc InCallControlButton.setSelected: <stripped>
	0x5d490  @objc InCallControlButton.isHighlighted <stripped>
	0x5d530  @objc InCallControlButton.setHighlighted: <stripped>
	0x5f0f0  @objc InCallControlButton.initWithCoder: <stripped>
	0x5f1e0  @objc InCallControlButton.layoutSubviews <stripped>
	0x5f240  @objc InCallControlButton.initWithFrame: <stripped>
	0x5f280  @objc InCallControlButton..cxx_destruct <stripped>

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
	0x61430  @objc CallCenter.init <stripped>
	0x61470  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	var text : String // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x62890  @objc MonogramView.init <stripped>
	0x629d0  @objc MonogramView.initWithFrame: <stripped>
	0x62aa0  @objc MonogramView.initWithCoder: <stripped>
	0x62f40  @objc MonogramView.drawRect: <stripped>
	0x62fe0  @objc MonogramView..cxx_destruct <stripped>
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
	0x63aa0  @objc InCallControlsViewController.isExpanded <stripped>
	0x63ae0  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x63ea0  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x63f20  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x64030  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x64070  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x649f0  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x64a30  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x64b00  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x64b70  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x64c30  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x64c70  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x64e70  @objc InCallControlsViewController.audioButton <stripped>
	0x64ed0  @objc InCallControlsViewController.delegate <stripped>
	0x64f70  @objc InCallControlsViewController.setDelegate: <stripped>
	0x650e0  @objc InCallControlsViewController.description <stripped>
	0x66250  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x664d0  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x67e90  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x67f20  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x67fd0  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x68030  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x68300  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x68320  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x684e0  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x68550  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x68580  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x68670  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x686a0  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x68d70  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x69250  @objc InCallControlsViewController.updateWithLegacyCall: <stripped>
	0x692d0  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x69310  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x69370  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x69390  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x693b0  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x693d0  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x693f0  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x69410  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x69430  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x69450  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x694b0  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x69520  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x695f0  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x69650  @objc InCallControlsViewController..cxx_destruct <stripped>

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
	0x6e350  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x6e830  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x6e8b0  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x6ea90  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x6f570  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x6f9b0  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x6fcd0  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x6fd10  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x6fd70  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

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
	0x71f60  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x739b0  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x73cf0  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x742a0  @objc InCallControlsParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x74340  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x743c0  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0x78f60  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0x79750  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0x797a0  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0x7a150  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0x7a1a0  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0x79780  func <stripped> // method 
	0x79820  func <stripped> // method 
	0x79c40  func <stripped> // method 
	0x79d00  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0x7a510  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0x7ad30  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0x7ada0  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0x7b4f0  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0x7b950  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0x7ba10  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0x7ba80  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0x7a220  func <stripped> // setter 
	0x7ade0  func <stripped> // method 
	0x7b510  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0x7bc10  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0x7c0e0  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0x7c100  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0x7c720  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0x7c7a0  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0x7c840  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0x7c130  func <stripped> // method 
	0x7c700  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0x7caf0  @objc ReportAProblemView.init <stripped>
	0x7d700  @objc ReportAProblemView.initWithFrame: <stripped>
	0x7d820  @objc ReportAProblemView.initWithCoder: <stripped>
	0x7d980  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0x7dd10  @objc ReportAProblemView.didTapButton: <stripped>
	0x7ddd0  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0x7ca80  func <stripped> // setter 
	0x7d9d0  func <stripped> // method 
	0x7dcc0  func <stripped> // method 
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
	0x7fbf0  func <stripped> // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var encoder.storage : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0x7ffa0  func <stripped> // getter 
	0x80e10  func <stripped> // method 
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
	0x819e0  @objc InCallControlsDragController.delegate <stripped>
	0x81a60  @objc InCallControlsDragController.setDelegate: <stripped>
	0x81bd0  @objc InCallControlsDragController.isDragging <stripped>
	0x81e70  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0x81eb0  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0x83020  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0x83a80  @objc InCallControlsDragController.init <stripped>
	0x83ac0  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0x81c30  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
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
	0x85e50  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0x86070  @objc CrossFadeAnimator.animateTransition: <stripped>
	0x86110  @objc CrossFadeAnimator.init <stripped>
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
	0x8cce0  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0x8cd10  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0x8cdf0  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0x8ceb0  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0x8d090  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0x8d190  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0x8d250  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0x8d360  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0x8eca0  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0x8ecf0  class func <stripped> // init 
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
	0x8f100  func <stripped> // getter 
	0x8f160  func <stripped> // method 
	0x8f180  func <stripped> // method 
 }

 struct ConversationKit.WeakPlatformDisplayLinkObserver {

	// Properties
	var displayLinkObserver : PlatformDisplayLinkObserver // +0x0
 }

 class ConversationKit.EffectsLayoutController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var containingViewController : weak UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x90190  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0x90220  @objc EffectsLayoutController.init <stripped>
	0x90260  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0x900d0  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var gradientView : GradientView // +0x8 (0x8)
	var contactMonogram : MonogramView // +0x10 (0x8)
	var contactSilhouetteImageView : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0x90f70  @objc ParticipantContactView.initWithFrame: <stripped>
	0x910b0  @objc ParticipantContactView.layoutSubviews <stripped>
	0x911f0  @objc ParticipantContactView.initWithCoder: <stripped>
	0x91240  @objc ParticipantContactView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x96bf0  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0x96c30  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

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
	0x9bf80  @objc ParticipantView.overlayBackdropView <stripped>
	0x9bfd0  @objc ParticipantView.overlayIconView <stripped>
	0x9c020  @objc ParticipantView.overlaySubtitleLabel <stripped>
	0x9c070  @objc ParticipantView.bottomBar <stripped>
	0x9c0c0  @objc ParticipantView.bottomBarLabel <stripped>
	0x9d580  @objc ParticipantView.style <stripped>
	0x9d5e0  @objc ParticipantView.setStyle: <stripped>
	0xa3190  @objc ParticipantView.dealloc <stripped>
	0xa33f0  @objc ParticipantView.layoutSubviews <stripped>
	0xa3480  @objc ParticipantView.didTapExpandButton <stripped>
	0xa3900  @objc ParticipantView.initWithCoder: <stripped>
	0xa39a0  @objc ParticipantView.accessibilityIsShowingVideo <stripped>
	0xa3a10  @objc ParticipantView.initWithFrame: <stripped>
	0xa31b0  @objc ParticipantView..cxx_destruct <stripped>

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
	0xa6ca0  func <stripped> // getter 
	0xa6cf0  func <stripped> // method 
	0xa6d90  func <stripped> // method 
	0xa6e30  func <stripped> // getter 
	0xa6e60  func <stripped> // getter 
	0xa6e90  func <stripped> // getter 
	0xa6ec0  func <stripped> // getter 
	0xa6ef0  func <stripped> // getter 
	0xa6f20  func <stripped> // getter 
	0xa6f50  func <stripped> // getter 
	0xa6f80  func <stripped> // getter 
	0xa6fb0  func <stripped> // getter 
	0xa73e0  func <stripped> // method 
	0xa7540  func <stripped> // method 
	0xa76a0  func <stripped> // method 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa7c00  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xa8e00  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xa8ea0  @objc StagingAreaAnimator.init <stripped>
 }

 class ConversationKit.MostActiveParticipantViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : [Participant] // +0x8 (0x8)
	var focusedParticipant : Participant? // +0x10 (0x60)
	var participantsViewControllerDelegate : ParticipantsViewControllerDelegate? // +0x70 (0x10)
	var participantView : ParticipantView // +0x80 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x88 (0x8)

	// ObjC -> Swift bridged methods
	0xac6a0  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xac820  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xaccc0  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xacd40  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xacda0  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xae260  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xae520  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xae730  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xae8d0  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xaf0a0  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xaf100  @objc ParticipantListViewController..cxx_destruct <stripped>

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
	0xb3040  func <stripped> // method 
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
	0xb4030  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xb4080  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xb40e0  @objc MultiwayViewController.call <stripped>
	0xb4140  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xb4160  @objc MultiwayViewController.deviceOrientation <stripped>
	0xb41d0  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xb4d00  @objc MultiwayViewController.delegate <stripped>
	0xb4d60  @objc MultiwayViewController.setDelegate: <stripped>
	0xb4ed0  @objc MultiwayViewController.effectsEnabled <stripped>
	0xb4f20  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xb4fc0  @objc MultiwayViewController.pipViewController <stripped>
	0xb51e0  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xb53a0  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xb8a20  @objc MultiwayViewController.initWithCoder: <stripped>
	0xb8ab0  @objc MultiwayViewController.dealloc <stripped>
	0xb9cc0  @objc MultiwayViewController.viewDidLoad <stripped>
	0xb9f20  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xba190  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xba470  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xba540  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xba630  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xbaa90  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xbafc0  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xbb000  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xbb040  @objc MultiwayViewController.muteVideo <stripped>
	0xbb080  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xbb3f0  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xbba70  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xbbb20  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xbbc30  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xb8ad0  @objc MultiwayViewController..cxx_destruct <stripped>

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
	0xcab30  @objc ConversationController.description <stripped>
	0xd44f0  @objc ConversationController.init <stripped>
	0xd4530  @objc ConversationController..cxx_destruct <stripped>

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
	0xdff30  @objc StagingAreaViewController.effectsEnabled <stripped>
	0xdffa0  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0xe01e0  @objc StagingAreaViewController.hasJoined <stripped>
	0xe0240  @objc StagingAreaViewController.setHasJoined: <stripped>
	0xe02a0  @objc StagingAreaViewController.delegate <stripped>
	0xe02e0  @objc StagingAreaViewController.setDelegate: <stripped>
	0xe0390  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0xe0440  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0xe05f0  @objc StagingAreaViewController.call <stripped>
	0xe0670  @objc StagingAreaViewController.setCall: <stripped>
	0xe07b0  @objc StagingAreaViewController.deviceOrientation <stripped>
	0xe0820  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0xe0b40  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0xe1a10  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0xe1ce0  @objc StagingAreaViewController.initWithCoder: <stripped>
	0xe4870  @objc StagingAreaViewController.viewDidLoad <stripped>
	0xe4c00  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0xe4e70  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0xe4f80  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0xe4fa0  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0xe5680  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0xe5720  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0xe57e0  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0xe5890  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0xe5fe0  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xe60f0  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0xe6150  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0xe0b70  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	0xe9930  class func <stripped> // init 
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
	0xed020  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0xed060  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0xed150  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0xed1e0  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0xef120  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0xef8a0  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0xef940  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0xef9c0  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0xefa00  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0xefc20  @objc MultiwayViewConstraintsController.init <stripped>
	0xefcb0  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

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

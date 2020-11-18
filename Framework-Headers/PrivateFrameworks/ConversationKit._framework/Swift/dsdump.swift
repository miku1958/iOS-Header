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
 protocol ConversationKit.ParticipantViewDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ConversationKit.ViewAnimating // 2 requirements
 {
	// method
	// method
 }

 enum __C.SymbolWeight { }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.SymbolScale { }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 enum __C.TUConversationParticipantVideoQuality { }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.State {

	// Properties
	let rawValue : UInt
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

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 class __C.CFUserNotification {
 class __C.CFString {
 enum __C.State { }

 struct __C.AnimationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.TURouteDeviceType { }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.Position { }

 enum __C.UIUserInterfaceIdiom { }

 enum __C.TUConversationState { }

 struct __C.CGGradientDrawingOptions {

	// Properties
	let rawValue : UInt32
 }

 enum __C.UIViewAnimatingPosition { }

 class __C.CGColor {
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

 struct ConversationKit.Participant {

	// Properties
	let handle : String // +0x0
	let identifier : UInt // +0x10
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
	var view : weak UIView? // +0x8 (0x8)
	let tapGestureRecognizer : UITapGestureRecognizer // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xb370  @objc TapInteraction.view <stripped>
	0xb3f0  @objc TapInteraction.setView: <stripped>
	0xb5d0  @objc TapInteraction.numberOfTapsRequired <stripped>
	0xb630  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0xb8b0  @objc TapInteraction.init <stripped>
	0xb900  @objc TapInteraction.willMoveToView: <stripped>
	0xb980  @objc TapInteraction.didMoveToView: <stripped>
	0xbaa0  @objc TapInteraction.handleRecognizer: <stripped>
	0xc1f0  @objc TapInteraction..cxx_destruct <stripped>
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
	0xe1d0  func InCallControlsViewConstraintManager.type.getter // getter 
	0xe200  func InCallControlsViewConstraintManager.type.setter // setter 
	0xe240  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xe2c0  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xe620  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xe710  func InCallControlsViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.InCallControlsLayoutType {

	// Properties
	case effectsVisible : CGFloat
	case leftFloating : DeviceOrientation
	case hidden  
	case bottomLeftFloating  
 }

 class ConversationKit.TUBlockedCallerChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib, BlockedCallerChecker {
	// Swift methods
	0xf1e0  func TUBlockedCallerChecker.blockListContains(_:with:) // method 
	0xf2d0  class func TUBlockedCallerChecker.__allocating_init() // init 
 }

 class ConversationKit.SpringBoardUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xf470  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient? // +0x10 (0x8)

	// Swift methods
	0xf510  func RemoteParticipantVideoProvider.token.getter // getter 
	0xf540  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xf560  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xf570  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xf590  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xf620  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xf840  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
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
	let minimumZoomFactor : Float // +0x8 (0x4)
	let maximumZoomFactor : Float // +0xc (0x4)
	var currentZoomFactor : Float // +0x10 (0x4)
	var initialZoomFactor : Float // +0x14 (0x4)

	// ObjC -> Swift bridged methods
	0x138f0  @objc PipZoomControl.init <stripped>

	// Swift methods
	0x13910  func PipZoomControl.zoomToFactor(zoomFactor:) // method 
	0x13a30  func PipZoomControl.addControl(to:withControlFrame:) // method 
	0x13a40  func PipZoomControl.removeControl(from:) // method 
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
	0x13b60  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0x14d00  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x14ee0  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0x14f70  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0x15270  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x152f0  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle // +0x8 (0x1)
	var gradient : [UIColor] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x156c0  @objc AudioVisualizationView.init <stripped>
	0x157d0  @objc AudioVisualizationView.initWithFrame: <stripped>
	0x158a0  @objc AudioVisualizationView.initWithCoder: <stripped>
	0x15e40  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0x15420  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x154c0  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x15960  func AudioVisualizationView.scale.getter // getter 
	0x159b0  func AudioVisualizationView.scale.setter // setter 
	0x15a10  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x15ba0  func AudioVisualizationView.gradient.getter // getter 
	0x15be0  func AudioVisualizationView.gradient.setter // setter 
	0x15c40  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x15ce0  func AudioVisualizationView.startAnimation() // method 
	0x15d00  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x16ce0  @objc AudioVisualizationLayer.init <stripped>
	0x17140  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x17280  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x172d0  @objc AudioVisualizationLayer.dealloc <stripped>
	0x17330  @objc AudioVisualizationLayer.bounds <stripped>
	0x17400  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x179f0  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x172f0  @objc AudioVisualizationLayer..cxx_destruct <stripped>
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
	0x18600  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x18630  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x18680  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x18700  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x19920  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x199b0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
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
	var indexPathLayoutAttributes : [IndexPath : UICollectionViewLayoutAttributes] // +0x8 (0x8)
	var lastInvalidatedSize : CGSize? // +0x10 (0x11)
	var calculatedContentSize : CGSize // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0x1aed0  @objc ParticipantListLayout.init <stripped>
	0x1b020  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x1bf40  @objc ParticipantListLayout.prepareLayout <stripped>
	0x1bf70  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x1c030  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x1c120  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x1c690  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x1c920  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x1d8f0  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1dbc0  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 enum ConversationKit.ParticipantViewModel {

	// Properties
	case video : ParticipantDetails
	case videoWithOverlay : ParticipantDetails
	case monogram : ParticipantDetails
 }

 struct ConversationKit.ParticipantDetails {

	// Properties
	var identifier : UUID
	var displayName : String
	var isMomentsAvailable : Bool
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
	0x24a80  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x130050 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
	0x25eb0  @objc ParticipantCell.participantView <stripped>
	0x26490  @objc ParticipantCell.initWithFrame: <stripped>
	0x26620  @objc ParticipantCell.initWithCoder: <stripped>
	0x267a0  @objc ParticipantCell.prepareForReuse <stripped>
	0x26980  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x26a10  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x26ae0  @objc ParticipantCell..cxx_destruct <stripped>
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
	0x26cc0  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x276b0  @objc InCallControlsTitleCell.init <stripped>
	0x284e0  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x28700  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x29000  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x290c0  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x29140  @objc InCallControlsTitleCell..cxx_destruct <stripped>
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
	0x2ab80  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
	0x2ac10  @objc BoxedDetails.init <stripped>
	0x2ac60  @objc BoxedDetails..cxx_destruct <stripped>

	// Swift methods
 }

 class ConversationKit.ParticipantViewButton : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)
	let blurView : UIVisualEffectView // +0x10 (0x8)
	let discView : UIView // +0x18 (0x8)
	var image : UIImage? // +0x20 (0x8)
	var colorConfiguration : ElementColors // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x2bfc0  @objc ParticipantViewButton.isSelected <stripped>
	0x2c030  @objc ParticipantViewButton.setSelected: <stripped>
	0x2c0f0  @objc ParticipantViewButton.isHighlighted <stripped>
	0x2c1a0  @objc ParticipantViewButton.setHighlighted: <stripped>
	0x2cf90  @objc ParticipantViewButton.initWithCoder: <stripped>
	0x2d0f0  @objc ParticipantViewButton.layoutSubviews <stripped>
	0x2d1d0  @objc ParticipantViewButton.initWithFrame: <stripped>
	0x2d210  @objc ParticipantViewButton..cxx_destruct <stripped>

	// Swift methods
	0x2c4a0  class func ParticipantViewButton.__allocating_init(imageName:) // init 
 }

 struct ConversationKit.ElementColors {

	// Properties
	let glyph : UIColor // +0x0
	let glyphAlpha : CGFloat // +0x8
	let background : UIColor // +0x10
	let backgroundAlpha : CGFloat // +0x18
 }

 enum ConversationKit.LayerAnimationCoordinatorKeyPath {

	// Properties
	case size  
 }

 class ConversationKit.IDSCapabilitiesChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var participantCapabilities : Capabilities // +0x10 (0x8)
	var delegate : IDSCapabilitiesCheckerDelegate // +0x18 (0x10)
	var participantDestinations : ParticipantDestination // +0x28 (0x8)
	let lookupManager : IDSLookupManager // +0x30 (0x28)

	// ObjC -> Swift bridged methods
	0x2f760  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x2e030  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2e0f0  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2e120  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2e190  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2e270  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2e4b0  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2e4c0  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2f160  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
 }

 enum ConversationKit.Capabilities {

	// Properties
	case known : (faceTimeAudio: Bool, faceTimeVideo: Bool, multiway: Bool)
	case unknown  
 }

 struct ConversationKit.ParticipantDestination {

	// Properties
	var identifier : UUID
	var destination : String
 }

 class ConversationKit.GradientView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var colors : [UIColor] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x32130  @objc GradientView.init <stripped>
	0x322e0  @objc GradientView.initWithFrame: <stripped>
	0x323d0  @objc GradientView.initWithCoder: <stripped>
	0x32480  @objc GradientView..cxx_destruct <stripped>
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
	0x33090  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
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
	0x34cd0  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x34e90  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x35160  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x351e0  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantGridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantViews : IdentifiableParticipantView
	let unfocusedParticipantOverlay : UIView
	let organicLayoutConfiguration : OrganicLayout.Configuration
	var currentlyFocusedParticipantIdentifier : UUID?
	var mostRecentAnimationIndex : Int
	var delegate : ParticipantGridViewDelegate

	// ObjC -> Swift bridged methods
	0x369d0  @objc ParticipantGridView.init <stripped>
	0x36b90  @objc ParticipantGridView.initWithCoder: <stripped>
	0x36d90  @objc ParticipantGridView.initWithFrame: <stripped>
	0x37580  @objc ParticipantGridView.layoutSubviews <stripped>
	0x3dce0  @objc ParticipantGridView..cxx_destruct <stripped>
 }

 enum ConversationKit.AnimationStyle {

	// Properties
	case instant  
	case fast  
	case slow  
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
	var isInRoster : Bool // +0x10 (0x1)

	// ObjC -> Swift bridged methods
	0x41400  @objc LocalParticipantView.initWithCoder: <stripped>
	0x41530  @objc LocalParticipantView.initWithFrame: <stripped>
	0x416a0  @objc LocalParticipantView.layoutSubviews <stripped>
	0x41a80  @objc LocalParticipantView..cxx_destruct <stripped>

	// Swift methods
	0x41160  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
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
	0x48430  @objc InCallControlsView.initWithCoder: <stripped>
	0x48690  @objc InCallControlsView.layoutSubviews <stripped>
	0x48770  @objc InCallControlsView.initWithFrame: <stripped>
	0x487b0  @objc InCallControlsView..cxx_destruct <stripped>

	// Swift methods
	0x43770  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
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
	let controlsLeadingConstraint : NSLayoutConstraint // +0x10 (0x8)
	let containerLeadingConstraint : NSLayoutConstraint // +0x18 (0x8)
	let trailingConstraint : NSLayoutConstraint // +0x20 (0x8)
	let bottomConstraint : NSLayoutConstraint // +0x28 (0x8)
	let heightConstraint : NSLayoutConstraint // +0x30 (0x8)
	var constraints : [NSLayoutConstraint] // +0x38 (0x8)
	var type : ParticipantListLayoutType // +0x40 (0x9)

	// Swift methods
	0x4b140  func ParticipantListViewConstraintManager.type.getter // getter 
	0x4b170  func ParticipantListViewConstraintManager.type.setter // setter 
	0x4b1b0  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x4b010  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x4b4f0  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x4b500  func ParticipantListViewConstraintManager.updateConstraints() // method 
 }

 enum ConversationKit.ParticipantListLayoutType {

	// Properties
	case nextToControls : CGFloat
	case bottom  
 }

 struct ConversationKit.ParticipantPresentationContext {

	// Properties
	let idsIdentifier : UInt // +0x0
	let videoQuality : TUConversationParticipantVideoQuality // +0x8
	let visibility : Int // +0x10
	let prominence : Int // +0x18
 }

 class ConversationKit.ParticipantInfoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let nameLabel : ParticipantViewLabelContainerView // +0x10 (0x8)
	let shutterButton : UIButton // +0x18 (0x8)
	let expandButton : ParticipantViewButton // +0x20 (0x8)
	var isSmall : Bool // +0x28 (0x1)
	var isExpanded : Bool // +0x29 (0x1)
	var customCornerRadius : CGFloat // +0x30 (0x8)
	var isMomentsAvailable : Bool // +0x38 (0x1)
	var delegate : ParticipantInfoViewDelegate // +0x40 (0x10)

	// ObjC -> Swift bridged methods
	0x4b890  @objc ParticipantInfoView.nameLabel <stripped>
	0x4bfe0  @objc ParticipantInfoView.isMomentsAvailable <stripped>
	0x4c070  @objc ParticipantInfoView.setIsMomentsAvailable: <stripped>
	0x4cc60  @objc ParticipantInfoView.init <stripped>
	0x4ceb0  @objc ParticipantInfoView.initWithCoder: <stripped>
	0x4d040  @objc ParticipantInfoView.layoutSubviews <stripped>
	0x4d5c0  @objc ParticipantInfoView.didTapExpandButton <stripped>
	0x4d670  @objc ParticipantInfoView.didTapShutterButton <stripped>
	0x4d750  @objc ParticipantInfoView.initWithFrame: <stripped>
	0x4d790  @objc ParticipantInfoView..cxx_destruct <stripped>

	// Swift methods
	0x4bae0  func ParticipantInfoView.isSmall.getter // getter 
	0x4bb00  func ParticipantInfoView.isSmall.setter // setter 
	0x4bb20  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4bd50  func ParticipantInfoView.isExpanded.getter // getter 
	0x4bd70  func ParticipantInfoView.isExpanded.setter // setter 
	0x4bd90  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4bef0  func ParticipantInfoView.customCornerRadius.getter // getter 
	0x4bf20  func ParticipantInfoView.customCornerRadius.setter // setter 
	0x4bf70  func ParticipantInfoView.customCornerRadius.modify // modifyCoroutine 
	0x4c020  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4c0b0  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4c260  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4c390  func ParticipantInfoView.delegate.getter // getter 
	0x4c3d0  func ParticipantInfoView.delegate.setter // setter 
	0x4c450  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4ced0  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4d070  func ParticipantInfoView._layout() // method 
	0x4d570  func ParticipantInfoView.didTapExpandButton() // method 
	0x4d5f0  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView // +0x8 (0x8)
	let backFacingCameraView : ParticipantVideoCameraView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x4db70  @objc ParticipantVideoView.init <stripped>
	0x4dc80  @objc ParticipantVideoView.initWithCoder: <stripped>
	0x4ddd0  @objc ParticipantVideoView.initWithFrame: <stripped>
	0x4e050  @objc ParticipantVideoView.layoutSubviews <stripped>
	0x4e380  @objc ParticipantVideoView..cxx_destruct <stripped>
 }

 struct ConversationKit.ViewModel {

	// Properties
	var videoProvider : ParticipantVideoProvider // +0x0
	var transform : CATransform3D // +0x28
 }

 class ConversationKit.DefaultObjectCache {
 struct ConversationKit.HSLAComponents {

	// Properties
	var hue : CGFloat // +0x0
	var saturation : CGFloat // +0x8
	var lightness : CGFloat // +0x10
	var alpha : CGFloat // +0x18
 }

 struct ConversationKit.RGBAComponents {

	// Properties
	var red : CGFloat // +0x0
	var green : CGFloat // +0x8
	var blue : CGFloat // +0x10
	var alpha : CGFloat // +0x18
 }

 enum ConversationKit.ColorStyle {

	// Properties
	case color  
	case monochrome  
 }

 class ConversationKit.BuzzedAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x4fa80  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x506d0  @objc BuzzedAnimator.animateTransition: <stripped>
	0x50760  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x51130  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x51220  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x51230  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x512b0  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x51340  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x51410  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x51d30  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x50ee0  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x516a0  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
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

 enum ConversationKit.AudioRoute {

	// Properties
	case speaker  
	case bluetooth  
	case airPods  
	case beatsSolo  
	case powerbeats  
	case beatsX  
	case beatsStudio  
	case powerbeatsPro  
	case beatsSoloPro  
	case airPods3  
	case homePod  
	case homePodStereoPair  
	case iPod  
	case iPad  
	case iPadPro  
	case iMac  
	case macBook  
	case genericMac  
	case watch  
 }

 class ConversationKit.SmallMultiwayControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	let participantListHeightConstraint : NSLayoutConstraint // +0x18 (0x8)
	var localParticipantViewHeightConstraint : NSLayoutConstraint // +0x20 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x28 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x30 (0x8)

	// Swift methods
	0x541b0  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
 }

 class ConversationKit.ParticipantGridViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : [Participant] // +0x8 (0x8)
	var participantsBeforeFocus : [Participant]? // +0x10 (0x8)
	var participantPriorities : [UUID : Int] // +0x18 (0x8)
	let forceAudioPriorityButton : UIButton // +0x20 (0x8)
	var focusedParticipant : Participant? // +0x0 (0x0)
	var sashedParticipant : Participant? // +0x77735f5f (0x0)
	var selectedParticipant : Participant? // +0x0 (0x0)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x7079745f (0x10)
	var participantGridViewControllerDelegate : ParticipantGridViewControllerDelegate // +0x45545f5f (0x10)

	// ObjC -> Swift bridged methods
	0x5f670  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x5f700  @objc ParticipantGridViewController.loadView <stripped>
	0x5fb50  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x5fb90  @objc ParticipantGridViewController._canShowWhileLocked <stripped>
	0x5fd60  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x62460  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x624c0  @objc ParticipantGridViewController..cxx_destruct <stripped>

	// Swift methods
	0x5ea00  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x67200  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0x672d0  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
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

 class ConversationKit.InCallControlButton : UIControl /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var discBackgroundEffectView : UIVisualEffectView? // +0x8 (0x8)
	let discBackgroundFlatView : UIView // +0x10 (0x8)
	let imageView : UIImageView? // +0x18 (0x8)
	let paragraphStyle : NSParagraphStyle // +0x20 (0x8)
	let isUsingVisualEffects : Bool // +0x28 (0x1)
	let style : Style // +0x29 (0x1)
	let label : UILabel? // +0x30 (0x8)
	let discView : UIView // +0x38 (0x8)
	var image : UIImage? // +0x40 (0x8)
	var colorConfiguration : InCallControlButtonConfiguration // +0x48 (0x8)
	var contentAlpha : CGFloat // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x75a50  @objc InCallControlButton.isSelected <stripped>
	0x75a90  @objc InCallControlButton.setSelected: <stripped>
	0x75b50  @objc InCallControlButton.isHighlighted <stripped>
	0x75c00  @objc InCallControlButton.setHighlighted: <stripped>
	0x7a910  @objc InCallControlButton.initWithCoder: <stripped>
	0x7aa10  @objc InCallControlButton.layoutSubviews <stripped>
	0x7ad10  @objc InCallControlButton.initWithFrame: <stripped>
	0x7ad50  @objc InCallControlButton..cxx_destruct <stripped>

	// Swift methods
 }

 enum ConversationKit.Style {

	// Properties
	case disc  
	case flatDisc  
	case pill  
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
	let tuCallCenter : TUCallCenter // +0x8 (0x8)
	var delegate : weak CallCenterProviderDelegate? // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0x7e370  @objc CallCenter.init <stripped>
	0x7e3b0  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
	0x7c490  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	let colorStyle : ColorStyle // +0x28 (0x1)
	var text : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x7fdc0  @objc MonogramView.init <stripped>
	0x7ff00  @objc MonogramView.initWithFrame: <stripped>
	0x80000  @objc MonogramView.initWithCoder: <stripped>
	0x80530  @objc MonogramView.drawRect: <stripped>
	0x805d0  @objc MonogramView..cxx_destruct <stripped>

	// Swift methods
	0x7fae0  class func MonogramView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.InCallControlsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var groupName : String?
	var representedLegacyCallIdentifier : String?
	var controlsButtonRowCount : Int
	var tableViewSeparator : UIView?
	var participantsTableViewController : InCallControlsParticipantsTableViewController?
	var localParticipant : Participant
	var viewContent : ViewContent
	var mode : InCallControlsMode
	var topInset : CGFloat
	var isExpanded : Bool
	var audioIsEnabled : Bool
	var videoIsEnabled : Bool
	var effectsAreAvailable : Bool
	var effectsAreEnabled : Bool
	var shouldShowJoinButton : Bool
	var delegate : weak CNKFaceTimeInCallControlsViewControllerDelegate?
	var participantDelegate : weak InCallControlsViewControllerParticipantDelegate?
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate?

	// ObjC -> Swift bridged methods
	0x819b0  @objc InCallControlsViewController.isExpanded <stripped>
	0x819f0  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x81df0  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x81e70  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x81f80  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x81fc0  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x829d0  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x82a10  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x82aa0  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x82ae0  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x82b90  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x82c00  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x82ec0  @objc InCallControlsViewController.audioButton <stripped>
	0x82f60  @objc InCallControlsViewController.delegate <stripped>
	0x82fe0  @objc InCallControlsViewController.setDelegate: <stripped>
	0x834f0  @objc InCallControlsViewController.description <stripped>
	0x84230  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x84540  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x84710  @objc InCallControlsViewController.embedEffectsBrowserViewController: <stripped>
	0x84890  @objc InCallControlsViewController.loadView <stripped>
	0x865b0  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x87df0  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x87ec0  @objc InCallControlsViewController.willMoveToParentViewController: <stripped>
	0x87fb0  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x88010  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x88050  @objc InCallControlsViewController._canShowWhileLocked <stripped>
	0x882e0  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x88330  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x884c0  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x88510  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x88570  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x88690  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x886f0  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x88e10  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x88e90  @objc InCallControlsViewController.updateToRepresentLegacyCall: <stripped>
	0x88f20  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x88f60  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x88fa0  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x88fe0  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x89020  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x89060  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x890a0  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x890e0  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x89120  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x89160  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x89200  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x892c0  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x893a0  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x89400  @objc InCallControlsViewController..cxx_destruct <stripped>

	// Swift methods
	0x837f0  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let hotdog : UIView // +0x0
	let controlsView : InCallControlsView // +0x8
	let controlsViewTopConstraint : NSLayoutConstraint // +0x10
	var viewsToHideInUnexpandedState : [UIView] // +0x18
 }

 struct ConversationKit.LegacyCallConfiguration {

	// Properties
	var identifier : String
	var mode : InCallControlsMode
	var localParticipant : Participant
	var remoteParticipant : Participant?
 }

 enum ConversationKit.DeviceOrientation { }

 class ConversationKit.ParticipantMonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle // +0x8 (0x1)
	let contactView : ParticipantContactView // +0x10 (0x8)
	let glowClippingView : UIView? // +0x18 (0x8)
	let glowView : UIImageView? // +0x20 (0x8)
	let audioVisualizationView : AudioVisualizationView // +0x28 (0x8)
	let titleLabelContainer : ParticipantViewLabelContainerView // +0x30 (0x8)
	let subtitleLabelContainer : ParticipantViewLabelContainerView // +0x38 (0x8)
	var isInRoster : Bool // +0x40 (0x1)
	var customCornerRadius : CGFloat // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x8f610  @objc ParticipantMonogramView.titleLabelContainer <stripped>
	0x8f650  @objc ParticipantMonogramView.subtitleLabelContainer <stripped>
	0x901c0  @objc ParticipantMonogramView.init <stripped>
	0x90310  @objc ParticipantMonogramView.initWithCoder: <stripped>
	0x904b0  @objc ParticipantMonogramView.initWithFrame: <stripped>
	0x90700  @objc ParticipantMonogramView.layoutSubviews <stripped>
	0x90b90  @objc ParticipantMonogramView..cxx_destruct <stripped>

	// Swift methods
	0x8f9c0  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
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
	let glowView : UIView? // +0x10 (0x8)
	let audioVisualizer : UIView // +0x18 (0x8)
	let contactView : UIView // +0x20 (0x8)
	let titleView : ParticipantViewLabelContainerView // +0x28 (0x8)
	let subtitleView : ParticipantViewLabelContainerView // +0x30 (0x8)

	// Swift methods
	0x91790  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
 }

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
	0x94d70  @objc InCallControlsParticipantsTableViewController.handleContentSizeCategoryDidChange: <stripped>
	0x94f70  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x95440  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x95480  @objc InCallControlsParticipantsTableViewController._canShowWhileLocked <stripped>
	0x95500  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x956e0  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x96270  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x966c0  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x96930  @objc InCallControlsParticipantsTableViewController.tableView:heightForRowAtIndexPath: <stripped>
	0x96a50  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x96b00  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x96b60  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

	// Swift methods
	0x92630  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
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
	var callDelegate : ()? // +0x30 (0x10)
	var delegate : weak InCallControlsParticipantTableViewCellDelegate? // +0x40 (0x10)

	// ObjC -> Swift bridged methods
	0x99770  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x9a150  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x9a420  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x9b780  @objc InCallControlsParticipantTableViewCell.layoutSubviews <stripped>
	0x9b810  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x9b890  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0xa3b10  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0xa4340  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0xa4390  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0xa4df0  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0xa4e40  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0xa38b0  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0xa4370  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0xa4410  func ReportAProblemContractViewController.didTapButton() // method 
	0xa4850  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0xa4920  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0xa51a0  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0xa5a10  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0xa5a90  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0xa6250  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0xa6630  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0xa6700  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0xa6770  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa4ea0  func <stripped> // setter 
	0xa5ad0  func <stripped> // method 
	0xa6270  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0xa68f0  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0xa6df0  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0xa6e20  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0xa7440  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0xa74c0  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0xa7560  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0xa6e50  func <stripped> // method 
	0xa7420  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0xa7800  @objc ReportAProblemView.init <stripped>
	0xa84d0  @objc ReportAProblemView.initWithFrame: <stripped>
	0xa85f0  @objc ReportAProblemView.initWithCoder: <stripped>
	0xa8740  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0xa8ab0  @objc ReportAProblemView.didTapButton: <stripped>
	0xa8b80  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0xa7790  func <stripped> // setter 
	0xa8770  func <stripped> // method 
	0xa8a70  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x18 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x20 (0x8)

	// Swift methods
	0xa9510  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint] // +0x10 (0x8)
	let effectsBrowserViewTopAnchor : NSLayoutConstraint // +0x18 (0x8)

	// Swift methods
	0xaa560  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0xaa840  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var $__lazy_storage_$_encoder : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0xaab80  func RadarSession.encoder.getter // getter 
	0xaaa10  class func RadarSession.__allocating_init() // init 
	0xab340  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0xaba50  func RadarSession.addSymptom(withRequest:) // method 
	0xabe40  func RadarSession.cancel() // method 
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
	var delegate : weak CNKFaceTimeInCallControlsDragControllerDelegate? // +0x60 (0x8)
	var disabledScrollViews : [UIScrollView] // +0x68 (0x8)

	// ObjC -> Swift bridged methods
	0xac590  @objc InCallControlsDragController.delegate <stripped>
	0xac610  @objc InCallControlsDragController.setDelegate: <stripped>
	0xac770  @objc InCallControlsDragController.isDragging <stripped>
	0xaca20  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0xaca60  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0xade10  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0xae850  @objc InCallControlsDragController.init <stripped>
	0xae890  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0xac7d0  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
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

 struct ConversationKit.SpringAnimationParameters {

	// Properties
	var duration : Double // +0x0
	var mass : CGFloat // +0x8
	var stiffness : CGFloat // +0x10
	var damping : CGFloat // +0x18
 }

 struct ConversationKit.CubicAnimationParameters {

	// Properties
	let duration : Double // +0x0
	let controlPoint1 : CGPoint // +0x8
	let controlPoint2 : CGPoint // +0x18
 }

 struct ConversationKit.ParticipantMediaPriorities {

	// Properties
	var remoteIdentifiers : Participant.RemoteIdentifiers // +0x0
	var audioPriority : Int // +0x28
	var videoPriority : Int // +0x30
 }

 class ConversationKit.CrossFadeAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb2120  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0xb2340  @objc CrossFadeAnimator.animateTransition: <stripped>
	0xb23d0  @objc CrossFadeAnimator.init <stripped>
 }

 enum ConversationKit.PlatformAlertActionStyle {

	// Properties
	case default  
	case alternate  
	case other  
 }

 class ConversationKit.PlatformAlert : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var currentPresentedUserNotification : CFUserNotificationRef? // +0x10 (0x8)
	let alertDictionary : NSMutableDictionary // +0x18 (0x8)
	var buttonHandlers : PlatformAlertActionStyle // +0x20 (0x8)
	var title : String? // +0x28 (0x10)
	var message : String? // +0x38 (0x10)
	var defaultButtonTitle : String? // +0x48 (0x10)
	var alternateButtonTitle : String? // +0x58 (0x10)
	var otherButtonTitle : String? // +0x68 (0x10)

	// Swift methods
	0xb2910  func PlatformAlert.currentPresentedUserNotification.getter // getter 
	0xb29e0  func PlatformAlert.buttonHandlers.getter // getter 
	0xb2b30  func PlatformAlert.title.setter // setter 
	0xb2cc0  func PlatformAlert.message.setter // setter 
	0xb2e50  func PlatformAlert.defaultButtonTitle.setter // setter 
	0xb2fe0  func PlatformAlert.alternateButtonTitle.setter // setter 
	0xb3170  func PlatformAlert.otherButtonTitle.setter // setter 
	0xb31e0  class func static PlatformAlert.create(with:message:) // method 
	0xb3340  func PlatformAlert.addAction(title:style:handler:) // method 
	0xb3450  func PlatformAlert.show() // method 
	0xb3310  class func PlatformAlert.__allocating_init() // init 
 }

 struct ConversationKit.Participant: HasSortableHandle {

	// Properties
	var state : State
	var identifier : UUID
	var remoteIdentifiers : RemoteIdentifiers
	var gradient : [UIColor]
	var isMomentsAvailable : Bool
 }

 enum ConversationKit.State {

	// Properties
	case waiting : Date
	case rung : Date
	case broadcasting : MediaInfo
	case left : Date
	case joining  
 }

 struct ConversationKit.RemoteIdentifiers {

	// Properties
	var handle : TUHandle // +0x0
	var idsIdentifier : UInt? // +0x8
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
	0xbc5b0  @objc ParticipantViewLabelContainerView.label <stripped>
	0xbd420  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0xbd450  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0xbd5c0  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0xbd6a0  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0xbd870  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0xbd970  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0xbda20  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0xbdb30  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0xbf7e0  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0xbf820  class func <stripped> // init 
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
	0xbfcf0  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xbfd50  func PlatformDisplayLinkBase.start() // method 
	0xbfd70  func PlatformDisplayLinkBase.cancel() // method 
	0xbff00  class func PlatformDisplayLinkBase.__allocating_init() // init 
 }

 struct ConversationKit.WeakPlatformDisplayLinkObserver {

	// Properties
	var displayLinkObserver : weak PlatformDisplayLinkObserver? // +0x0
 }

 struct ConversationKit.SymbolImageDescription {

	// Properties
	var name : String // +0x0
	var scale : UIImageSymbolScale // +0x10
	var textStyle : UIFontTextStyle // +0x18
	var staticWeight : UIImageSymbolWeight? // +0x20
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

 class ConversationKit.EffectsLayoutController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var containingViewController : weak UIViewController? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xc2190  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0xc2210  @objc EffectsLayoutController.init <stripped>
	0xc2250  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0xc20c0  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let contactMonogram : MonogramView // +0x10 (0x8)
	let silhouette : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0xc3260  @objc ParticipantContactView.init <stripped>
	0xc33a0  @objc ParticipantContactView.initWithCoder: <stripped>
	0xc3530  @objc ParticipantContactView.initWithFrame: <stripped>
	0xc38d0  @objc ParticipantContactView.layoutSubviews <stripped>
	0xc3930  @objc ParticipantContactView..cxx_destruct <stripped>

	// Swift methods
	0xc2270  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0xc8c40  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0xc8c80  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0xc4a80  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xca2e0  func Defaults.enableAudioVisualization.getter // getter 
	0xca2f0  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xca300  func Defaults.forceVideoLayerVisible.getter // getter 
	0xca320  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xca330  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xca340  func Defaults.startUplinkMuted.getter // getter 
	0xca350  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xca370  func Defaults.supportsVideo.getter // getter 
	0xca3a0  func Defaults.supportsEffects.getter // getter 
	0xca3e0  func Defaults.useFlattenedUI.getter // getter 
	0xca400  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xca430  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xca460  func Defaults.mimimumActiveDuration.getter // getter 
	0xca490  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xca4c0  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xca4d0  func Defaults.organicSashFontSize.getter // getter 
	0xca4f0  func Defaults.organicCellCornerRadius.getter // getter 
	0xca510  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xca530  func Defaults.emaTimeScale.getter // getter 
	0xca560  func Defaults.emaTimerFrequency.getter // getter 
	0xca590  func Defaults.emaProminenceWeight1.getter // getter 
	0xca5c0  func Defaults.emaProminenceWeight2.getter // getter 
	0xca5f0  func Defaults.emaProminenceWeight3.getter // getter 
	0xca620  func Defaults.emaProminenceWeight4.getter // getter 
	0xca650  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xca680  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xca6b0  func Defaults.shouldCenterRoster.getter // getter 
	0xca6c0  func Defaults.allowSelfZoom.getter // getter 
	0xca9f0  func Defaults.bool(for:default:) // method 
	0xcab50  func Defaults.float(for:default:) // method 
	0xcacb0  func Defaults.double(for:default:) // method 
	0xca270  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xcb0e0  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xcc370  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xcc400  @objc StagingAreaAnimator.init <stripped>
 }

 struct ConversationKit.OrganicLayout {

	// Properties
	let overlap : CGFloat // +0x0
	let frames : [CGRect] // +0x8
 }

 enum ConversationKit.DeviceType {

	// Properties
	case phone  
	case pad  
	case mac  
 }

 struct ConversationKit.Configuration {

	// Properties
	var minCellOverlap : CGFloat // +0x0
	var minCellOverlapThreshold : CGFloat // +0x8
	var maxCellOverlap : CGFloat // +0x10
	var maxCellOverlapThreshold : CGFloat // +0x18
	var bottomInset4Up : CGFloat // +0x20
	var bottomInset3Up : CGFloat // +0x28
	var topPriorityScale4Up : CGFloat // +0x30
	var topPriorityScale3Up : CGFloat // +0x38
	var topPriorityMaxHeight4Up : CGFloat // +0x40
	var topPriorityMaxHeight3Up : CGFloat // +0x48
	var midPriorityRemainderScale4Up : CGFloat // +0x50
	var midPriorityRemainderScale3Up : CGFloat // +0x58
	var midPriorityMaxScale4Up : CGFloat // +0x60
	var midPriorityMaxScale3Up : CGFloat // +0x68
	var lowPriorityMaxScale4Up : CGFloat // +0x70
 }

 class ConversationKit.MostActiveParticipantViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participants : [Participant] // +0x8 (0x8)
	var focusedParticipant : Participant? // +0x45545f5f (0x0)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x0 (0x10)
	let participantView : ParticipantView // +0x14a5d0 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x35de (0x8)

	// ObjC -> Swift bridged methods
	0xd0630  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xd07d0  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xd0810  @objc MostActiveParticipantViewController._canShowWhileLocked <stripped>
	0xd0cd0  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xd0da0  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xd0e00  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
	0xcfef0  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xd2b60  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xd2e20  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xd30d0  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xd3260  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xd32a0  @objc ParticipantListViewController._canShowWhileLocked <stripped>
	0xd3a90  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xd3af0  @objc ParticipantListViewController..cxx_destruct <stripped>

	// Swift methods
	0xd2900  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0xd6540  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xd67f0  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd7040  @objc ParticipantAlertView.init <stripped>
	0xd7150  @objc ParticipantAlertView.initWithCoder: <stripped>
	0xd72a0  @objc ParticipantAlertView.initWithFrame: <stripped>
	0xd7320  @objc ParticipantAlertView..cxx_destruct <stripped>
 }

 struct ConversationKit.ViewModel {

	// Properties
	let text : String // +0x0
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
	var pipZoomControl : PipZoomControl? // +0xd0 (0x8)
	var shouldShowZoomControls : Bool // +0xd8 (0x1)
	var deviceOrientation : DeviceOrientation // +0xe0 (0x8)
	var delegate : weak CNKFaceTimeMultiwayConversationViewControllerDelegate? // +0xe8 (0x8)
	var effectsEnabled : Bool // +0xf0 (0x1)
	var isPipped : Bool // +0xf1 (0x1)

	// ObjC -> Swift bridged methods
	0xd9000  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xd9070  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xd90d0  @objc MultiwayViewController.call <stripped>
	0xe0150  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xd9130  @objc MultiwayViewController.deviceOrientation <stripped>
	0xd91a0  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xd9fe0  @objc MultiwayViewController.delegate <stripped>
	0xda060  @objc MultiwayViewController.setDelegate: <stripped>
	0xda1c0  @objc MultiwayViewController.effectsEnabled <stripped>
	0xda210  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xda2a0  @objc MultiwayViewController.pipViewController <stripped>
	0xda4a0  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xda6a0  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xde420  @objc MultiwayViewController.initWithCoder: <stripped>
	0xde5d0  @objc MultiwayViewController.dealloc <stripped>
	0xdf730  @objc MultiwayViewController.viewDidLoad <stripped>
	0xdf9b0  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xdfc60  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xdff40  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xe0010  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xe00f0  @objc MultiwayViewController.willMoveToParentViewController: <stripped>
	0xe0150  @objc MultiwayViewController._canShowWhileLocked <stripped>
	0xe0220  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xe0e80  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xe1590  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xe15e0  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xe1630  @objc MultiwayViewController.muteVideo <stripped>
	0xe1730  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xe1a90  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xe1b90  @objc MultiwayViewController.hideEffectsBrowser <stripped>
	0xe2190  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xe2240  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xe2320  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xde5f0  @objc MultiwayViewController..cxx_destruct <stripped>

	// Swift methods
	0xda6d0  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
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
	var localParticipant : Participant // +0x0 (0x0)
	var remoteParticipants : [Participant] // +0x0 (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x0 (0x1)
	var carPlayDisconnectRequiresLocalVideoEnable : Bool // +0x0 (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x0 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x0 (0x8)
	var $__lazy_storage_$_momentsController : TUMomentsController? // +0x0 (0x8)
	var lastRegisteredMomentsProvider : TUMomentsProvider? // +0x0 (0x8)
	var blockedCallerLookupQueue : OS_dispatch_queue // +0x0 (0x8)
	var recentPresentationContexts : [UInt : ParticipantPresentationContext] // +0x0 (0x8)
	var scheduledIsChangingMirroredVideoResetDates : [UUID : Date] // +0x0 (0x8)
	var conversationState : TUConversationState // +0x14dbb0 (0x8)
	var deviceOrientation : DeviceOrientation // +0x0 (0x8)
	var broadcastingState : BroadcastingState // +0x6569665f (0x10)
	var didAddVisibleParticipant : (_:_:)? // +0x31e8 (0x10)
	var didRemoveVisibleParticipant : (_:_:)? // +0x14dbb0 (0x10)
	var didUpdateVisibleParticipant : (_:_:)? // +0x0 (0x10)
	var visibleParticipantDidBecomeActive : (_:_:)? // +0x0 (0x10)
	var didStartVideoForVisibleParticipant : (_:_:)? // +0x0 (0x10)
	var participantsMediaPrioritiesDidChange : (_:)? // +0x77735f5f (0x10)
	var participantAudioPowerDidChange : (_:_:)? // +0x6975625f (0x10)
	var audioRouteDidChange : (_:)? // +0x45545f5f (0x10)
	var cameraZoomAvailabiltyDidChange : (_:)? // +0x0 (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x150d98 (0x10)
	var didUpdateLocalParticipant : (_:_:)? // +0x244 (0x10)
	var didStartVideoForLocalParticipant : (_:_:)? // +0x150d98 (0x10)
	var conversationStateDidChange : (_:)? // +0x0 (0x10)
	var blockedParticipantsAdded : (_:)? // +0x0 (0x10)
	var blocklistCheckedHandles : Set<TUHandle>? // +0x0 (0x8)
	var needsUserConfirmationForBlockedCaller : Bool // +0x14a5d0 (0x1)
	var enableVideoOnJoin : Bool // +0x0 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x77735f5f (0x28)
	var callCenter : CallCenterProvider // +0x77735f5f (0x28)
	let call : TUCall // +0x45545f5f (0x8)
	let blockedCallerChecker : BlockedCallerChecker // +0x7373615f (0x28)
	var conversationUUID : UUID? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xf5000  @objc ConversationController.description <stripped>
	0xf6fc0  @objc ConversationController.dealloc <stripped>
	0x100470  @objc ConversationController.init <stripped>
	0xf6fe0  @objc ConversationController..cxx_destruct <stripped>

	// Swift methods
	0xed970  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:blockedCallerChecker:includeLocalParticipantInVisibleParticipants:) // init 
 }

 struct ConversationKit.InCallControlsTitleCellModel {

	// Properties
	let groupName : String? // +0x0
	let participants : [Participant] // +0x10
	let shouldShowMessagesButton : Bool // +0x18
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
	var delegate : weak CNKFaceTimeMultiwayConversationViewControllerDelegate? // +0xe0 (0x8)
	var stagingAreaDelegate : weak CNKStagingAreaViewControllerDelegate? // +0xe8 (0x8)
	var call : TUCall // +0xf0 (0x8)
	var deviceOrientation : DeviceOrientation // +0xf8 (0x8)

	// ObjC -> Swift bridged methods
	0x113a00  @objc StagingAreaViewController.effectsEnabled <stripped>
	0x113a70  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0x113cc0  @objc StagingAreaViewController.hasJoined <stripped>
	0x113d20  @objc StagingAreaViewController.setHasJoined: <stripped>
	0x113d80  @objc StagingAreaViewController.delegate <stripped>
	0x113de0  @objc StagingAreaViewController.setDelegate: <stripped>
	0x113e80  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0x113f10  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0x1140a0  @objc StagingAreaViewController.call <stripped>
	0x114120  @objc StagingAreaViewController.setCall: <stripped>
	0x114260  @objc StagingAreaViewController.deviceOrientation <stripped>
	0x1142d0  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0x114600  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0x115790  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0x115a70  @objc StagingAreaViewController.initWithCoder: <stripped>
	0x118680  @objc StagingAreaViewController.viewDidLoad <stripped>
	0x118a20  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0x118cb0  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0x118dc0  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0x118df0  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0x118e30  @objc StagingAreaViewController._canShowWhileLocked <stripped>
	0x1195f0  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0x1196a0  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0x119780  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0x119840  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0x119b60  @objc StagingAreaViewController.hideEffectsBrowser <stripped>
	0x119fa0  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0x11a0a0  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0x11a100  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0x114630  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	var inCallControlsViewFrames : [Int : [InCallControlsState : CGRect]] // +0x10 (0x8)

	// Swift methods
	0x11e620  class func InCallControlsFramesCache.__allocating_init() // init 
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
	let loggingIdentifier : UUID // +0x0 (0x0)
	var hideBottomBarTimer : NSTimer? // +0x0 (0x8)
	var hideAlertViewTimer : NSTimer? // +0x0 (0x8)
	var participantIdentifier : UUID? // +0x151c8c (0x0)
	var delegate : ParticipantViewDelegate // +0x4d1c (0x10)
	var isInRoster : Bool // +0x0 (0x1)
	var customCornerRadius : CGFloat // +0x151c8c (0x8)
	var isExpanded : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
	0x120950  @objc ParticipantView.bottomBar <stripped>
	0x120c20  @objc ParticipantView.isInRoster <stripped>
	0x120c60  @objc ParticipantView.setIsInRoster: <stripped>
	0x121240  @objc ParticipantView.isExpanded <stripped>
	0x1212f0  @objc ParticipantView.setIsExpanded: <stripped>
	0x121ed0  @objc ParticipantView.initWithFrame: <stripped>
	0x122220  @objc ParticipantView.initWithCoder: <stripped>
	0x1222b0  @objc ParticipantView.dealloc <stripped>
	0x122800  @objc ParticipantView.layoutSubviews <stripped>
	0x1222d0  @objc ParticipantView..cxx_destruct <stripped>
 }

 struct ConversationKit.InCallControlsParticipantTableViewCellModel {

	// Properties
	var contactDetails : ParticipantContactDetails
	var participantIdentifier : UUID
	var name : String
	var subtitle : String
	var ringButtonLabel : String
	var shouldShowRingButton : Bool
	var shouldShowCameraIcon : Bool
	var shouldEnableRingButton : Bool
	var contactGradient : [UIColor]
	var nameLabelColor : UIColor
 }

 class ConversationKit.ParticipantVideoOverlayView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView // +0x8 (0x8)
	let imageView : UIImageView // +0x10 (0x8)
	let monogramView : ParticipantMonogramView // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x1283f0  @objc ParticipantVideoOverlayView.init <stripped>
	0x128520  @objc ParticipantVideoOverlayView.initWithCoder: <stripped>
	0x128690  @objc ParticipantVideoOverlayView.initWithFrame: <stripped>
	0x128aa0  @objc ParticipantVideoOverlayView.layoutSubviews <stripped>
	0x128b00  @objc ParticipantVideoOverlayView..cxx_destruct <stripped>
 }

 enum ConversationKit.ViewModel {

	// Properties
	case icon : ImageName
	case monogram : ParticipantMonogramView.ViewModel
	case empty  
 }

 enum ConversationKit.BroadcastingState {

	// Properties
	case audio : (muted: Bool)
	case audioVideo : (muted: Bool, cameraPosition: CameraPosition, deviceOrientation: DeviceOrientation)
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
	var participantListState : ParticipantListState // +0x8 (0x1)
	var localParticipantState : LocalParticipantState // +0x10 (0x8)
	var inCallControlsState : InCallControlsState // +0x18 (0x8)
	var floatingControlsState : FloatingControlsState // +0x20 (0x1)
	var viewStateEffects : OverallLayoutState // +0x28 (0x8)
	let viewControllerLayout : ViewControllerLayout // +0x30 (0x28)
	let inCallControlsFramesCache : InCallControlsFramesCache // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0x12a610  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0x12a670  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0x12aa10  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0x12aaa0  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0x12cc40  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0x12d400  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0x12d4b0  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0x12d530  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0x12d570  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0x12d6a0  @objc MultiwayViewConstraintsController.init <stripped>
	0x12d6e0  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

	// Swift methods
	0x129ce0  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x129f40  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
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

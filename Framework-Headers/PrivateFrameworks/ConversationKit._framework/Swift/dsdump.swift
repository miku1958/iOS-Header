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
	0xaf00  @objc TapInteraction.view <stripped>
	0xaf80  @objc TapInteraction.setView: <stripped>
	0xb160  @objc TapInteraction.numberOfTapsRequired <stripped>
	0xb1c0  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0xb440  @objc TapInteraction.init <stripped>
	0xb490  @objc TapInteraction.willMoveToView: <stripped>
	0xb510  @objc TapInteraction.didMoveToView: <stripped>
	0xb630  @objc TapInteraction.handleRecognizer: <stripped>
	0xbd80  @objc TapInteraction..cxx_destruct <stripped>
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
	0xdd60  func InCallControlsViewConstraintManager.type.getter // getter 
	0xdd90  func InCallControlsViewConstraintManager.type.setter // setter 
	0xddd0  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xde50  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xe1b0  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xe2a0  func InCallControlsViewConstraintManager.updateConstraints() // method 
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
	0xed70  func TUBlockedCallerChecker.blockListContains(_:with:) // method 
	0xee60  class func TUBlockedCallerChecker.__allocating_init() // init 
 }

 class ConversationKit.SpringBoardUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xf000  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient? // +0x10 (0x8)

	// Swift methods
	0xf0a0  func RemoteParticipantVideoProvider.token.getter // getter 
	0xf0d0  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xf0f0  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xf100  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xf120  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xf1b0  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xf3d0  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
	0xf5c0  func RemoteParticipantVideoProvider.isEqual(to:) // method 
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
	0x13480  @objc PipZoomControl.init <stripped>

	// Swift methods
	0x134a0  func PipZoomControl.zoomToFactor(zoomFactor:) // method 
	0x13550  func PipZoomControl.addControl(to:withControlFrame:) // method 
	0x13560  func PipZoomControl.removeControl(from:) // method 
	0x13570  func PipZoomControl.isZoomControlSupported.getter // getter 
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
	0x13670  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0x14810  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x149f0  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0x14a80  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0x14d80  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x14e00  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle // +0x8 (0x1)
	var gradient : [UIColor] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x151d0  @objc AudioVisualizationView.init <stripped>
	0x152e0  @objc AudioVisualizationView.initWithFrame: <stripped>
	0x153b0  @objc AudioVisualizationView.initWithCoder: <stripped>
	0x15950  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0x14f30  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x14fd0  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x15470  func AudioVisualizationView.scale.getter // getter 
	0x154c0  func AudioVisualizationView.scale.setter // setter 
	0x15520  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x156b0  func AudioVisualizationView.gradient.getter // getter 
	0x156f0  func AudioVisualizationView.gradient.setter // setter 
	0x15750  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x157f0  func AudioVisualizationView.startAnimation() // method 
	0x15810  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x167f0  @objc AudioVisualizationLayer.init <stripped>
	0x16c50  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x16d90  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x16de0  @objc AudioVisualizationLayer.dealloc <stripped>
	0x16e40  @objc AudioVisualizationLayer.bounds <stripped>
	0x16f10  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x17500  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x16e00  @objc AudioVisualizationLayer..cxx_destruct <stripped>
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
	0x18110  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x18140  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x18190  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x18210  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x19430  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x194c0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
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
	0x1a940  @objc ParticipantListLayout.init <stripped>
	0x1aa90  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x1b9b0  @objc ParticipantListLayout.prepareLayout <stripped>
	0x1b9e0  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x1baa0  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x1bb90  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x1c100  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x1c390  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x1d360  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1d630  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
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
	0x244f0  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x12e590 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
	0x25920  @objc ParticipantCell.participantView <stripped>
	0x25f00  @objc ParticipantCell.initWithFrame: <stripped>
	0x26090  @objc ParticipantCell.initWithCoder: <stripped>
	0x26210  @objc ParticipantCell.prepareForReuse <stripped>
	0x263f0  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x26480  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x26550  @objc ParticipantCell..cxx_destruct <stripped>
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
	0x26730  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x27120  @objc InCallControlsTitleCell.init <stripped>
	0x27f50  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x28170  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x28a70  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x28b30  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x28bb0  @objc InCallControlsTitleCell..cxx_destruct <stripped>
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
	0x2a5f0  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
	0x2a680  @objc BoxedDetails.init <stripped>
	0x2a6d0  @objc BoxedDetails..cxx_destruct <stripped>

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
	0x2ba30  @objc ParticipantViewButton.isSelected <stripped>
	0x2baa0  @objc ParticipantViewButton.setSelected: <stripped>
	0x2bb60  @objc ParticipantViewButton.isHighlighted <stripped>
	0x2bc10  @objc ParticipantViewButton.setHighlighted: <stripped>
	0x2ca00  @objc ParticipantViewButton.initWithCoder: <stripped>
	0x2cb60  @objc ParticipantViewButton.layoutSubviews <stripped>
	0x2cc40  @objc ParticipantViewButton.initWithFrame: <stripped>
	0x2cc80  @objc ParticipantViewButton..cxx_destruct <stripped>

	// Swift methods
	0x2bf10  class func ParticipantViewButton.__allocating_init(imageName:) // init 
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
	0x2f1d0  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x2daa0  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2db60  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2db90  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2dc00  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2dce0  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2df20  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2df30  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2ebd0  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
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
	0x31ba0  @objc GradientView.init <stripped>
	0x31d50  @objc GradientView.initWithFrame: <stripped>
	0x31e40  @objc GradientView.initWithCoder: <stripped>
	0x31ef0  @objc GradientView..cxx_destruct <stripped>
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
	0x32b00  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
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
	0x34740  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x34900  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x34bd0  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x34c50  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
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
	0x36440  @objc ParticipantGridView.init <stripped>
	0x36600  @objc ParticipantGridView.initWithCoder: <stripped>
	0x36800  @objc ParticipantGridView.initWithFrame: <stripped>
	0x36ff0  @objc ParticipantGridView.layoutSubviews <stripped>
	0x3d750  @objc ParticipantGridView..cxx_destruct <stripped>
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
	0x40e70  @objc LocalParticipantView.initWithCoder: <stripped>
	0x40fa0  @objc LocalParticipantView.initWithFrame: <stripped>
	0x41110  @objc LocalParticipantView.layoutSubviews <stripped>
	0x414f0  @objc LocalParticipantView..cxx_destruct <stripped>

	// Swift methods
	0x40bd0  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
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
	0x47ea0  @objc InCallControlsView.initWithCoder: <stripped>
	0x48100  @objc InCallControlsView.layoutSubviews <stripped>
	0x481e0  @objc InCallControlsView.initWithFrame: <stripped>
	0x48220  @objc InCallControlsView..cxx_destruct <stripped>

	// Swift methods
	0x431e0  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
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
	0x4ab10  func ParticipantListViewConstraintManager.type.getter // getter 
	0x4ab40  func ParticipantListViewConstraintManager.type.setter // setter 
	0x4ab80  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x4a9e0  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x4aec0  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x4aed0  func ParticipantListViewConstraintManager.updateConstraints() // method 
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
	0x4b260  @objc ParticipantInfoView.nameLabel <stripped>
	0x4b9b0  @objc ParticipantInfoView.isMomentsAvailable <stripped>
	0x4ba40  @objc ParticipantInfoView.setIsMomentsAvailable: <stripped>
	0x4c630  @objc ParticipantInfoView.init <stripped>
	0x4c880  @objc ParticipantInfoView.initWithCoder: <stripped>
	0x4ca10  @objc ParticipantInfoView.layoutSubviews <stripped>
	0x4cf90  @objc ParticipantInfoView.didTapExpandButton <stripped>
	0x4d040  @objc ParticipantInfoView.didTapShutterButton <stripped>
	0x4d120  @objc ParticipantInfoView.initWithFrame: <stripped>
	0x4d160  @objc ParticipantInfoView..cxx_destruct <stripped>

	// Swift methods
	0x4b4b0  func ParticipantInfoView.isSmall.getter // getter 
	0x4b4d0  func ParticipantInfoView.isSmall.setter // setter 
	0x4b4f0  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4b720  func ParticipantInfoView.isExpanded.getter // getter 
	0x4b740  func ParticipantInfoView.isExpanded.setter // setter 
	0x4b760  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4b8c0  func ParticipantInfoView.customCornerRadius.getter // getter 
	0x4b8f0  func ParticipantInfoView.customCornerRadius.setter // setter 
	0x4b940  func ParticipantInfoView.customCornerRadius.modify // modifyCoroutine 
	0x4b9f0  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4ba80  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4bc30  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4bd60  func ParticipantInfoView.delegate.getter // getter 
	0x4bda0  func ParticipantInfoView.delegate.setter // setter 
	0x4be20  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4c8a0  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4ca40  func ParticipantInfoView._layout() // method 
	0x4cf40  func ParticipantInfoView.didTapExpandButton() // method 
	0x4cfc0  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView // +0x8 (0x8)
	let backFacingCameraView : ParticipantVideoCameraView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x4d540  @objc ParticipantVideoView.init <stripped>
	0x4d650  @objc ParticipantVideoView.initWithCoder: <stripped>
	0x4d7a0  @objc ParticipantVideoView.initWithFrame: <stripped>
	0x4da20  @objc ParticipantVideoView.layoutSubviews <stripped>
	0x4dd50  @objc ParticipantVideoView..cxx_destruct <stripped>
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
	0x4f450  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x500a0  @objc BuzzedAnimator.animateTransition: <stripped>
	0x50130  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x50b00  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x50bf0  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x50c00  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x50c80  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x50d10  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x50de0  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x51700  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x508b0  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x51070  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
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
	0x53b80  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
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
	0x5f040  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x5f0d0  @objc ParticipantGridViewController.loadView <stripped>
	0x5f520  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x5f560  @objc ParticipantGridViewController._canShowWhileLocked <stripped>
	0x5f730  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x61e30  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x61e90  @objc ParticipantGridViewController..cxx_destruct <stripped>

	// Swift methods
	0x5e3d0  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x67260  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0x67330  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
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
	0x75ab0  @objc InCallControlButton.isSelected <stripped>
	0x75af0  @objc InCallControlButton.setSelected: <stripped>
	0x75bb0  @objc InCallControlButton.isHighlighted <stripped>
	0x75c60  @objc InCallControlButton.setHighlighted: <stripped>
	0x7a970  @objc InCallControlButton.initWithCoder: <stripped>
	0x7aa70  @objc InCallControlButton.layoutSubviews <stripped>
	0x7ad70  @objc InCallControlButton.initWithFrame: <stripped>
	0x7adb0  @objc InCallControlButton..cxx_destruct <stripped>

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
	0x7e3d0  @objc CallCenter.init <stripped>
	0x7e410  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
	0x7c4f0  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	let colorStyle : ColorStyle // +0x28 (0x1)
	var text : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x7fe20  @objc MonogramView.init <stripped>
	0x7ff60  @objc MonogramView.initWithFrame: <stripped>
	0x80060  @objc MonogramView.initWithCoder: <stripped>
	0x80590  @objc MonogramView.drawRect: <stripped>
	0x80630  @objc MonogramView..cxx_destruct <stripped>

	// Swift methods
	0x7fb40  class func MonogramView.__allocating_init(colorStyle:) // init 
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
	0x81a10  @objc InCallControlsViewController.isExpanded <stripped>
	0x81a50  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x81e50  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x81ed0  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x81fe0  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x82020  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x82a30  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x82a70  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x82b00  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x82b40  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x82bf0  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x82c60  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x82f20  @objc InCallControlsViewController.audioButton <stripped>
	0x82fc0  @objc InCallControlsViewController.delegate <stripped>
	0x83040  @objc InCallControlsViewController.setDelegate: <stripped>
	0x83550  @objc InCallControlsViewController.description <stripped>
	0x84290  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x845a0  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x84770  @objc InCallControlsViewController.embedEffectsBrowserViewController: <stripped>
	0x848f0  @objc InCallControlsViewController.loadView <stripped>
	0x86610  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x87e50  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x87f20  @objc InCallControlsViewController.willMoveToParentViewController: <stripped>
	0x88010  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x88070  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x880b0  @objc InCallControlsViewController._canShowWhileLocked <stripped>
	0x88340  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x88390  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x88520  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x88570  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x885d0  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x886f0  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x88750  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x88e70  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x88ef0  @objc InCallControlsViewController.updateToRepresentLegacyCall: <stripped>
	0x88f80  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x88fc0  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x89000  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x89040  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x89080  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x890c0  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x89100  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x89140  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x89180  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x891c0  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x89260  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x89320  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x89400  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x89460  @objc InCallControlsViewController..cxx_destruct <stripped>

	// Swift methods
	0x83850  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
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
	0x8f670  @objc ParticipantMonogramView.titleLabelContainer <stripped>
	0x8f6b0  @objc ParticipantMonogramView.subtitleLabelContainer <stripped>
	0x90220  @objc ParticipantMonogramView.init <stripped>
	0x90370  @objc ParticipantMonogramView.initWithCoder: <stripped>
	0x90510  @objc ParticipantMonogramView.initWithFrame: <stripped>
	0x90760  @objc ParticipantMonogramView.layoutSubviews <stripped>
	0x90bf0  @objc ParticipantMonogramView..cxx_destruct <stripped>

	// Swift methods
	0x8fa20  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
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
	0x917f0  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
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
	0x94dd0  @objc InCallControlsParticipantsTableViewController.handleContentSizeCategoryDidChange: <stripped>
	0x94fd0  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x954a0  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x954e0  @objc InCallControlsParticipantsTableViewController._canShowWhileLocked <stripped>
	0x95560  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x95740  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x962d0  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x96720  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x96990  @objc InCallControlsParticipantsTableViewController.tableView:heightForRowAtIndexPath: <stripped>
	0x96ab0  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x96b60  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x96bc0  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

	// Swift methods
	0x92690  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
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
	0x997d0  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x9a1b0  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x9a480  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x9b7e0  @objc InCallControlsParticipantTableViewCell.layoutSubviews <stripped>
	0x9b870  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x9b8f0  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0xa3b70  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0xa43a0  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0xa43f0  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0xa4c40  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0xa4c90  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0xa3910  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0xa43d0  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0xa4470  func ReportAProblemContractViewController.didTapButton() // method 
	0xa48b0  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0xa4980  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0xa4ff0  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0xa5860  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0xa58e0  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0xa60a0  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0xa6480  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0xa6550  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0xa65c0  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa4cf0  func <stripped> // setter 
	0xa5920  func <stripped> // method 
	0xa60c0  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0xa6740  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0xa6c40  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0xa6c70  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0xa7290  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0xa7310  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0xa73b0  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0xa6ca0  func <stripped> // method 
	0xa7270  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0xa7650  @objc ReportAProblemView.init <stripped>
	0xa8320  @objc ReportAProblemView.initWithFrame: <stripped>
	0xa8440  @objc ReportAProblemView.initWithCoder: <stripped>
	0xa8590  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0xa8900  @objc ReportAProblemView.didTapButton: <stripped>
	0xa89d0  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0xa75e0  func <stripped> // setter 
	0xa85c0  func <stripped> // method 
	0xa88c0  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x18 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x20 (0x8)

	// Swift methods
	0xa9360  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint] // +0x10 (0x8)
	let effectsBrowserViewTopAnchor : NSLayoutConstraint // +0x18 (0x8)

	// Swift methods
	0xaa3b0  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0xaa690  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var $__lazy_storage_$_encoder : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0xaa9d0  func RadarSession.encoder.getter // getter 
	0xaa860  class func RadarSession.__allocating_init() // init 
	0xab190  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0xab8a0  func RadarSession.addSymptom(withRequest:) // method 
	0xabc90  func RadarSession.cancel() // method 
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
	0xac3e0  @objc InCallControlsDragController.delegate <stripped>
	0xac460  @objc InCallControlsDragController.setDelegate: <stripped>
	0xac5c0  @objc InCallControlsDragController.isDragging <stripped>
	0xac870  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0xac8b0  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0xadc60  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0xae6a0  @objc InCallControlsDragController.init <stripped>
	0xae6e0  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0xac620  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
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
	0xb1f70  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0xb2190  @objc CrossFadeAnimator.animateTransition: <stripped>
	0xb2220  @objc CrossFadeAnimator.init <stripped>
 }

 enum ConversationKit.PlatformAlertActionStyle {

	// Properties
	case default  
	case cancel  
	case destructive  
 }

 class ConversationKit.PlatformAlertController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0xb28e0  @objc PlatformAlertController.initWithNibName:bundle: <stripped>
	0xb29c0  @objc PlatformAlertController.initWithCoder: <stripped>

	// Swift methods
	0xb2670  class func static PlatformAlertController.create(with:message:) // method 
	0xb26d0  func PlatformAlertController.addAction(title:style:handler:) // method 
	0xb27b0  func PlatformAlertController.show(from:) // method 
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
	0xba5a0  @objc ParticipantViewLabelContainerView.label <stripped>
	0xbb410  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0xbb440  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0xbb5b0  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0xbb690  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0xbb860  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0xbb960  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0xbba10  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0xbbb20  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0xbd7d0  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0xbd810  class func <stripped> // init 
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
	0xbdce0  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xbdd40  func PlatformDisplayLinkBase.start() // method 
	0xbdd60  func PlatformDisplayLinkBase.cancel() // method 
	0xbdef0  class func PlatformDisplayLinkBase.__allocating_init() // init 
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
	0xc0180  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0xc0200  @objc EffectsLayoutController.init <stripped>
	0xc0240  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0xc00b0  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let contactMonogram : MonogramView // +0x10 (0x8)
	let silhouette : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0xc1250  @objc ParticipantContactView.init <stripped>
	0xc1390  @objc ParticipantContactView.initWithCoder: <stripped>
	0xc1520  @objc ParticipantContactView.initWithFrame: <stripped>
	0xc18c0  @objc ParticipantContactView.layoutSubviews <stripped>
	0xc1920  @objc ParticipantContactView..cxx_destruct <stripped>

	// Swift methods
	0xc0260  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0xc6c30  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0xc6c70  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0xc2a70  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc82d0  func Defaults.enableAudioVisualization.getter // getter 
	0xc82e0  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xc82f0  func Defaults.forceVideoLayerVisible.getter // getter 
	0xc8310  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xc8320  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xc8330  func Defaults.startUplinkMuted.getter // getter 
	0xc8340  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xc8360  func Defaults.supportsVideo.getter // getter 
	0xc8390  func Defaults.supportsEffects.getter // getter 
	0xc83d0  func Defaults.useFlattenedUI.getter // getter 
	0xc83f0  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xc8420  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xc8450  func Defaults.mimimumActiveDuration.getter // getter 
	0xc8480  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xc84b0  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xc84c0  func Defaults.organicSashFontSize.getter // getter 
	0xc84e0  func Defaults.organicCellCornerRadius.getter // getter 
	0xc8500  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xc8520  func Defaults.emaTimeScale.getter // getter 
	0xc8550  func Defaults.emaTimerFrequency.getter // getter 
	0xc8580  func Defaults.emaProminenceWeight1.getter // getter 
	0xc85b0  func Defaults.emaProminenceWeight2.getter // getter 
	0xc85e0  func Defaults.emaProminenceWeight3.getter // getter 
	0xc8610  func Defaults.emaProminenceWeight4.getter // getter 
	0xc8640  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xc8670  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xc86a0  func Defaults.shouldCenterRoster.getter // getter 
	0xc89b0  func Defaults.bool(for:default:) // method 
	0xc8b10  func Defaults.float(for:default:) // method 
	0xc8c70  func Defaults.double(for:default:) // method 
	0xc8260  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc90a0  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xca330  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xca3c0  @objc StagingAreaAnimator.init <stripped>
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
	var focusedParticipant : Participant? // +0x6665725f (0x0)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x45545f5f (0x10)
	let participantView : ParticipantView // +0x0 (0x8)
	var widthConstraint : NSLayoutConstraint? // +0x1487e0 (0x8)

	// ObjC -> Swift bridged methods
	0xce5f0  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xce790  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xcec70  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xced40  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xceda0  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
	0xcdeb0  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xd0b00  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xd0dc0  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xd1070  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xd1200  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xd1240  @objc ParticipantListViewController._canShowWhileLocked <stripped>
	0xd1a30  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xd1a90  @objc ParticipantListViewController..cxx_destruct <stripped>

	// Swift methods
	0xd08a0  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0xd44e0  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xd4790  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd4fe0  @objc ParticipantAlertView.init <stripped>
	0xd50f0  @objc ParticipantAlertView.initWithCoder: <stripped>
	0xd5240  @objc ParticipantAlertView.initWithFrame: <stripped>
	0xd52c0  @objc ParticipantAlertView..cxx_destruct <stripped>
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
	0xd6fa0  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xd7010  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xd7070  @objc MultiwayViewController.call <stripped>
	0xde2a0  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xd70d0  @objc MultiwayViewController.deviceOrientation <stripped>
	0xd7140  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xd7f80  @objc MultiwayViewController.delegate <stripped>
	0xd8000  @objc MultiwayViewController.setDelegate: <stripped>
	0xd8160  @objc MultiwayViewController.effectsEnabled <stripped>
	0xd81b0  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xd8240  @objc MultiwayViewController.pipViewController <stripped>
	0xd8440  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xd8640  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xdc570  @objc MultiwayViewController.initWithCoder: <stripped>
	0xdc720  @objc MultiwayViewController.dealloc <stripped>
	0xdd880  @objc MultiwayViewController.viewDidLoad <stripped>
	0xddb00  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xdddb0  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xde090  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xde160  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xde240  @objc MultiwayViewController.willMoveToParentViewController: <stripped>
	0xde2a0  @objc MultiwayViewController._canShowWhileLocked <stripped>
	0xde370  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xdefd0  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xdf6e0  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xdf730  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xdf780  @objc MultiwayViewController.muteVideo <stripped>
	0xdf880  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xdfbe0  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xdfce0  @objc MultiwayViewController.hideEffectsBrowser <stripped>
	0xe02e0  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xe0390  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xe0470  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xdc740  @objc MultiwayViewController..cxx_destruct <stripped>

	// Swift methods
	0xd8670  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
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
	var remoteParticipants : [Participant] // +0x77735f5f (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x0 (0x1)
	var carPlayDisconnectRequiresLocalVideoEnable : Bool // +0x45545f5f (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x0 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x0 (0x8)
	var $__lazy_storage_$_momentsController : TUMomentsController? // +0x0 (0x8)
	var lastRegisteredMomentsProvider : TUMomentsProvider? // +0x0 (0x8)
	var blockedCallerLookupQueue : OS_dispatch_queue // +0x0 (0x8)
	var recentPresentationContexts : [UInt : ParticipantPresentationContext] // +0x0 (0x8)
	var scheduledIsChangingMirroredVideoResetDates : [UUID : Date] // +0x0 (0x8)
	var conversationState : TUConversationState // +0x0 (0x8)
	var deviceOrientation : DeviceOrientation // +0x0 (0x8)
	var broadcastingState : BroadcastingState // +0x6569665f (0x10)
	var didAddVisibleParticipant : (_:_:)? // +0x14bd10 (0x10)
	var didRemoveVisibleParticipant : (_:_:)? // +0x3188 (0x10)
	var didUpdateVisibleParticipant : (_:_:)? // +0x14bd10 (0x10)
	var visibleParticipantDidBecomeActive : (_:_:)? // +0x0 (0x10)
	var didStartVideoForVisibleParticipant : (_:_:)? // +0x0 (0x10)
	var participantsMediaPrioritiesDidChange : (_:)? // +0x0 (0x10)
	var participantAudioPowerDidChange : (_:_:)? // +0x77735f5f (0x10)
	var audioRouteDidChange : (_:)? // +0x6975625f (0x10)
	var cameraZoomAvailabiltyDidChange : (_:)? // +0x45545f5f (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x0 (0x10)
	var didUpdateLocalParticipant : (_:_:)? // +0x14ee98 (0x10)
	var didStartVideoForLocalParticipant : (_:_:)? // +0x244 (0x10)
	var conversationStateDidChange : (_:)? // +0x14ee98 (0x10)
	var blockedParticipantsAdded : (_:)? // +0x0 (0x10)
	var blocklistCheckedHandles : Set<TUHandle>? // +0x0 (0x8)
	var needsUserConfirmationForBlockedCaller : Bool // +0x352e (0x1)
	var enableVideoOnJoin : Bool // +0x0 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x0 (0x28)
	var callCenter : CallCenterProvider // +0x0 (0x28)
	let call : TUCall // +0x1487e0 (0x8)
	let blockedCallerChecker : BlockedCallerChecker // +0x77735f5f (0x28)
	var conversationUUID : UUID? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xf31d0  @objc ConversationController.description <stripped>
	0xf5200  @objc ConversationController.dealloc <stripped>
	0xfe950  @objc ConversationController.init <stripped>
	0xf5220  @objc ConversationController..cxx_destruct <stripped>

	// Swift methods
	0xebc00  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:blockedCallerChecker:includeLocalParticipantInVisibleParticipants:) // init 
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
	0x1120f0  @objc StagingAreaViewController.effectsEnabled <stripped>
	0x112160  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0x1123b0  @objc StagingAreaViewController.hasJoined <stripped>
	0x112410  @objc StagingAreaViewController.setHasJoined: <stripped>
	0x112470  @objc StagingAreaViewController.delegate <stripped>
	0x1124d0  @objc StagingAreaViewController.setDelegate: <stripped>
	0x112570  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0x112600  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0x112790  @objc StagingAreaViewController.call <stripped>
	0x112810  @objc StagingAreaViewController.setCall: <stripped>
	0x112950  @objc StagingAreaViewController.deviceOrientation <stripped>
	0x1129c0  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0x112cf0  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0x113e40  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0x114120  @objc StagingAreaViewController.initWithCoder: <stripped>
	0x116d30  @objc StagingAreaViewController.viewDidLoad <stripped>
	0x1170d0  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0x117360  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0x117470  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0x1174a0  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0x1174e0  @objc StagingAreaViewController._canShowWhileLocked <stripped>
	0x117ca0  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0x117d50  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0x117e30  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0x117ef0  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0x118210  @objc StagingAreaViewController.hideEffectsBrowser <stripped>
	0x118650  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0x118750  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0x1187b0  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0x112d20  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	0x11cbd0  class func InCallControlsFramesCache.__allocating_init() // init 
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
	var participantIdentifier : UUID? // +0x14fd78 (0x0)
	var delegate : ParticipantViewDelegate // +0x4c9c (0x10)
	var isInRoster : Bool // +0x0 (0x1)
	var customCornerRadius : CGFloat // +0x14fd78 (0x8)
	var isExpanded : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
	0x11ef00  @objc ParticipantView.bottomBar <stripped>
	0x11f1d0  @objc ParticipantView.isInRoster <stripped>
	0x11f210  @objc ParticipantView.setIsInRoster: <stripped>
	0x11f7f0  @objc ParticipantView.isExpanded <stripped>
	0x11f8a0  @objc ParticipantView.setIsExpanded: <stripped>
	0x120480  @objc ParticipantView.initWithFrame: <stripped>
	0x1207d0  @objc ParticipantView.initWithCoder: <stripped>
	0x120860  @objc ParticipantView.dealloc <stripped>
	0x120db0  @objc ParticipantView.layoutSubviews <stripped>
	0x120880  @objc ParticipantView..cxx_destruct <stripped>
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
	0x1269a0  @objc ParticipantVideoOverlayView.init <stripped>
	0x126ad0  @objc ParticipantVideoOverlayView.initWithCoder: <stripped>
	0x126c40  @objc ParticipantVideoOverlayView.initWithFrame: <stripped>
	0x127050  @objc ParticipantVideoOverlayView.layoutSubviews <stripped>
	0x1270b0  @objc ParticipantVideoOverlayView..cxx_destruct <stripped>
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
	0x128bc0  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0x128c20  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0x128fc0  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0x129050  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0x12b1f0  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0x12b9b0  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0x12ba60  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0x12bae0  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0x12bb20  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0x12bc50  @objc MultiwayViewConstraintsController.init <stripped>
	0x12bc90  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

	// Swift methods
	0x128290  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x1284f0  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
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

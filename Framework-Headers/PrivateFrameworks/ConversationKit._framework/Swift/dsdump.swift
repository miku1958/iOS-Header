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

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
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
	0xa7e0  @objc TapInteraction.view <stripped>
	0xa860  @objc TapInteraction.setView: <stripped>
	0xaa40  @objc TapInteraction.numberOfTapsRequired <stripped>
	0xaaa0  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0xad20  @objc TapInteraction.init <stripped>
	0xad70  @objc TapInteraction.willMoveToView: <stripped>
	0xadf0  @objc TapInteraction.didMoveToView: <stripped>
	0xaf10  @objc TapInteraction.handleRecognizer: <stripped>
	0xb660  @objc TapInteraction..cxx_destruct <stripped>
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
	0xd640  func InCallControlsViewConstraintManager.type.getter // getter 
	0xd670  func InCallControlsViewConstraintManager.type.setter // setter 
	0xd6b0  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xd730  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xda90  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xdb80  func InCallControlsViewConstraintManager.updateConstraints() // method 
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
	0xe730  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient? // +0x10 (0x8)

	// Swift methods
	0xe7d0  func RemoteParticipantVideoProvider.token.getter // getter 
	0xe800  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xe820  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xe830  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xe850  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xe8e0  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xeb00  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
	0xecf0  func RemoteParticipantVideoProvider.isEqual(to:) // method 
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
	0x12bb0  @objc PipZoomControl.init <stripped>

	// Swift methods
	0x12bd0  func PipZoomControl.zoomToFactor(zoomFactor:) // method 
	0x12c80  func PipZoomControl.addControl(to:withControlFrame:) // method 
	0x12c90  func PipZoomControl.removeControl(from:) // method 
	0x12ca0  func PipZoomControl.isZoomControlSupported.getter // getter 
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
	0x12da0  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0x13f40  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x14120  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0x141b0  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0x144b0  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x14530  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle // +0x8 (0x1)
	var gradient : [UIColor] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14900  @objc AudioVisualizationView.init <stripped>
	0x14a10  @objc AudioVisualizationView.initWithFrame: <stripped>
	0x14ae0  @objc AudioVisualizationView.initWithCoder: <stripped>
	0x15080  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0x14660  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x14700  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x14ba0  func AudioVisualizationView.scale.getter // getter 
	0x14bf0  func AudioVisualizationView.scale.setter // setter 
	0x14c50  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x14de0  func AudioVisualizationView.gradient.getter // getter 
	0x14e20  func AudioVisualizationView.gradient.setter // setter 
	0x14e80  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x14f20  func AudioVisualizationView.startAnimation() // method 
	0x14f40  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x15f20  @objc AudioVisualizationLayer.init <stripped>
	0x16380  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x164c0  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x16510  @objc AudioVisualizationLayer.dealloc <stripped>
	0x16570  @objc AudioVisualizationLayer.bounds <stripped>
	0x16640  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x16c30  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x16530  @objc AudioVisualizationLayer..cxx_destruct <stripped>
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
	0x17840  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x17870  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x178c0  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x17940  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x18b60  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x18bf0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
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
	0x1a070  @objc ParticipantListLayout.init <stripped>
	0x1a1c0  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x1b0e0  @objc ParticipantListLayout.prepareLayout <stripped>
	0x1b110  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x1b1d0  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x1b2c0  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x1b830  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x1bac0  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x1ca90  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1cd60  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
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
	0x23c20  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x128800 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
	0x25050  @objc ParticipantCell.participantView <stripped>
	0x25630  @objc ParticipantCell.initWithFrame: <stripped>
	0x257c0  @objc ParticipantCell.initWithCoder: <stripped>
	0x25940  @objc ParticipantCell.prepareForReuse <stripped>
	0x25b20  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x25bb0  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x25c80  @objc ParticipantCell..cxx_destruct <stripped>
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
	0x25e60  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x26850  @objc InCallControlsTitleCell.init <stripped>
	0x27680  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x278a0  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x281a0  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x28260  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x282e0  @objc InCallControlsTitleCell..cxx_destruct <stripped>
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
	0x29d20  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
	0x29db0  @objc BoxedDetails.init <stripped>
	0x29e00  @objc BoxedDetails..cxx_destruct <stripped>

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
	0x2b160  @objc ParticipantViewButton.isSelected <stripped>
	0x2b1d0  @objc ParticipantViewButton.setSelected: <stripped>
	0x2b290  @objc ParticipantViewButton.isHighlighted <stripped>
	0x2b340  @objc ParticipantViewButton.setHighlighted: <stripped>
	0x2c130  @objc ParticipantViewButton.initWithCoder: <stripped>
	0x2c290  @objc ParticipantViewButton.layoutSubviews <stripped>
	0x2c370  @objc ParticipantViewButton.initWithFrame: <stripped>
	0x2c3b0  @objc ParticipantViewButton..cxx_destruct <stripped>

	// Swift methods
	0x2b640  class func ParticipantViewButton.__allocating_init(imageName:) // init 
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
	0x2e870  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x2d140  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2d200  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2d230  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2d2a0  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2d380  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2d5c0  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2d5d0  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2e270  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
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
	0x31240  @objc GradientView.init <stripped>
	0x313f0  @objc GradientView.initWithFrame: <stripped>
	0x314e0  @objc GradientView.initWithCoder: <stripped>
	0x31590  @objc GradientView..cxx_destruct <stripped>
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
	0x321a0  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
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
	0x33de0  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x33fa0  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x34270  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x342f0  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
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
	0x35ae0  @objc ParticipantGridView.init <stripped>
	0x35ca0  @objc ParticipantGridView.initWithCoder: <stripped>
	0x35ea0  @objc ParticipantGridView.initWithFrame: <stripped>
	0x36690  @objc ParticipantGridView.layoutSubviews <stripped>
	0x3cdf0  @objc ParticipantGridView..cxx_destruct <stripped>
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
	0x40510  @objc LocalParticipantView.initWithCoder: <stripped>
	0x40640  @objc LocalParticipantView.initWithFrame: <stripped>
	0x407b0  @objc LocalParticipantView.layoutSubviews <stripped>
	0x40b90  @objc LocalParticipantView..cxx_destruct <stripped>

	// Swift methods
	0x40270  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
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
	0x47540  @objc InCallControlsView.initWithCoder: <stripped>
	0x477a0  @objc InCallControlsView.layoutSubviews <stripped>
	0x47880  @objc InCallControlsView.initWithFrame: <stripped>
	0x478c0  @objc InCallControlsView..cxx_destruct <stripped>

	// Swift methods
	0x42880  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
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
	0x4a1b0  func ParticipantListViewConstraintManager.type.getter // getter 
	0x4a1e0  func ParticipantListViewConstraintManager.type.setter // setter 
	0x4a220  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x4a080  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x4a560  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x4a570  func ParticipantListViewConstraintManager.updateConstraints() // method 
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
	var isMomentsAvailable : Bool // +0x2a (0x1)
	var delegate : ParticipantInfoViewDelegate // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x4a900  @objc ParticipantInfoView.nameLabel <stripped>
	0x4ae70  @objc ParticipantInfoView.isMomentsAvailable <stripped>
	0x4af00  @objc ParticipantInfoView.setIsMomentsAvailable: <stripped>
	0x4ba70  @objc ParticipantInfoView.init <stripped>
	0x4bca0  @objc ParticipantInfoView.initWithCoder: <stripped>
	0x4be30  @objc ParticipantInfoView.layoutSubviews <stripped>
	0x4c3b0  @objc ParticipantInfoView.didTapExpandButton <stripped>
	0x4c460  @objc ParticipantInfoView.didTapShutterButton <stripped>
	0x4c540  @objc ParticipantInfoView.initWithFrame: <stripped>
	0x4c580  @objc ParticipantInfoView..cxx_destruct <stripped>

	// Swift methods
	0x4ab50  func ParticipantInfoView.isSmall.getter // getter 
	0x4ab70  func ParticipantInfoView.isSmall.setter // setter 
	0x4ab90  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4adc0  func ParticipantInfoView.isExpanded.getter // getter 
	0x4ade0  func ParticipantInfoView.isExpanded.setter // setter 
	0x4ae00  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4aeb0  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4af40  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4b0f0  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4b220  func ParticipantInfoView.delegate.getter // getter 
	0x4b260  func ParticipantInfoView.delegate.setter // setter 
	0x4b2e0  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4bcc0  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4be60  func ParticipantInfoView._layout() // method 
	0x4c360  func ParticipantInfoView.didTapExpandButton() // method 
	0x4c3e0  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView // +0x8 (0x8)
	let backFacingCameraView : ParticipantVideoCameraView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x4c960  @objc ParticipantVideoView.init <stripped>
	0x4ca70  @objc ParticipantVideoView.initWithCoder: <stripped>
	0x4cbc0  @objc ParticipantVideoView.initWithFrame: <stripped>
	0x4ce40  @objc ParticipantVideoView.layoutSubviews <stripped>
	0x4d100  @objc ParticipantVideoView..cxx_destruct <stripped>
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
	0x4e800  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x4f450  @objc BuzzedAnimator.animateTransition: <stripped>
	0x4f4e0  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x4feb0  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x4ffa0  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x4ffb0  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x50030  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x500c0  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x50190  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x50ab0  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x4fc60  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x50420  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
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
	case powerbeats2  
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
	0x52ef0  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
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
	0x5e3b0  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x5e440  @objc ParticipantGridViewController.loadView <stripped>
	0x5e890  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x5e8d0  @objc ParticipantGridViewController._canShowWhileLocked <stripped>
	0x5eaa0  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x611a0  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x61200  @objc ParticipantGridViewController..cxx_destruct <stripped>

	// Swift methods
	0x5d740  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x657a0  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0x65870  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
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
	0x73ff0  @objc InCallControlButton.isSelected <stripped>
	0x74030  @objc InCallControlButton.setSelected: <stripped>
	0x740f0  @objc InCallControlButton.isHighlighted <stripped>
	0x741a0  @objc InCallControlButton.setHighlighted: <stripped>
	0x78eb0  @objc InCallControlButton.initWithCoder: <stripped>
	0x78fb0  @objc InCallControlButton.layoutSubviews <stripped>
	0x792b0  @objc InCallControlButton.initWithFrame: <stripped>
	0x792f0  @objc InCallControlButton..cxx_destruct <stripped>

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
	0x7c340  @objc CallCenter.init <stripped>
	0x7c380  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
	0x7aa30  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	let colorStyle : ColorStyle // +0x28 (0x1)
	var text : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x7dd70  @objc MonogramView.init <stripped>
	0x7deb0  @objc MonogramView.initWithFrame: <stripped>
	0x7dfb0  @objc MonogramView.initWithCoder: <stripped>
	0x7e4e0  @objc MonogramView.drawRect: <stripped>
	0x7e580  @objc MonogramView..cxx_destruct <stripped>

	// Swift methods
	0x7da90  class func MonogramView.__allocating_init(colorStyle:) // init 
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
	0x7f960  @objc InCallControlsViewController.isExpanded <stripped>
	0x7f9a0  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x7fda0  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x7fe20  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x7ff30  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x7ff70  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x80980  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x809c0  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x80a50  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x80a90  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x80b40  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x80bb0  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x80e70  @objc InCallControlsViewController.audioButton <stripped>
	0x80f10  @objc InCallControlsViewController.delegate <stripped>
	0x80f90  @objc InCallControlsViewController.setDelegate: <stripped>
	0x814a0  @objc InCallControlsViewController.description <stripped>
	0x821e0  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x824f0  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x826c0  @objc InCallControlsViewController.embedEffectsBrowserViewController: <stripped>
	0x82840  @objc InCallControlsViewController.loadView <stripped>
	0x84560  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x85da0  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x85e70  @objc InCallControlsViewController.willMoveToParentViewController: <stripped>
	0x85f60  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x85fc0  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x86000  @objc InCallControlsViewController._canShowWhileLocked <stripped>
	0x86290  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x862e0  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x86470  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x864c0  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x86520  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x86640  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x866a0  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x86dc0  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x86e40  @objc InCallControlsViewController.updateToRepresentLegacyCall: <stripped>
	0x86ed0  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x86f10  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x86f50  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x86f90  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x86fd0  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x87010  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x87050  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x87090  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x870d0  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x87110  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x871b0  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x87270  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x87350  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x873b0  @objc InCallControlsViewController..cxx_destruct <stripped>

	// Swift methods
	0x817a0  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
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
	let glowView : UIImageView? // +0x18 (0x8)
	let audioVisualizationView : AudioVisualizationView // +0x20 (0x8)
	let titleLabelContainer : ParticipantViewLabelContainerView // +0x28 (0x8)
	let subtitleLabelContainer : ParticipantViewLabelContainerView // +0x30 (0x8)
	var isInRoster : Bool // +0x38 (0x1)

	// ObjC -> Swift bridged methods
	0x8d5c0  @objc ParticipantMonogramView.titleLabelContainer <stripped>
	0x8d600  @objc ParticipantMonogramView.subtitleLabelContainer <stripped>
	0x8de60  @objc ParticipantMonogramView.init <stripped>
	0x8df80  @objc ParticipantMonogramView.initWithCoder: <stripped>
	0x8e0f0  @objc ParticipantMonogramView.initWithFrame: <stripped>
	0x8e300  @objc ParticipantMonogramView.layoutSubviews <stripped>
	0x8e790  @objc ParticipantMonogramView..cxx_destruct <stripped>

	// Swift methods
	0x8d7a0  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
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
	0x8f380  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
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
	0x92960  @objc InCallControlsParticipantsTableViewController.handleContentSizeCategoryDidChange: <stripped>
	0x92b60  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x93030  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x93070  @objc InCallControlsParticipantsTableViewController._canShowWhileLocked <stripped>
	0x930f0  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x932d0  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x93e60  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x942b0  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x94520  @objc InCallControlsParticipantsTableViewController.tableView:heightForRowAtIndexPath: <stripped>
	0x94640  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x946f0  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x94750  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

	// Swift methods
	0x90220  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
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
	0x97360  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x97d40  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x98010  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x99370  @objc InCallControlsParticipantTableViewCell.layoutSubviews <stripped>
	0x99400  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x99480  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0xa1700  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0xa1f30  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0xa1f80  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0xa29e0  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0xa2a30  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0xa14a0  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0xa1f60  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0xa2000  func ReportAProblemContractViewController.didTapButton() // method 
	0xa2440  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0xa2510  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0xa2d90  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0xa3600  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0xa3680  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0xa3e40  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0xa4220  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0xa42f0  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0xa4360  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa2a90  func <stripped> // setter 
	0xa36c0  func <stripped> // method 
	0xa3e60  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0xa44e0  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0xa49e0  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0xa4a10  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0xa5030  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0xa50b0  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0xa5150  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0xa4a40  func <stripped> // method 
	0xa5010  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0xa53f0  @objc ReportAProblemView.init <stripped>
	0xa60c0  @objc ReportAProblemView.initWithFrame: <stripped>
	0xa61e0  @objc ReportAProblemView.initWithCoder: <stripped>
	0xa6330  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0xa66a0  @objc ReportAProblemView.didTapButton: <stripped>
	0xa6770  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0xa5380  func <stripped> // setter 
	0xa6360  func <stripped> // method 
	0xa6660  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x18 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x20 (0x8)

	// Swift methods
	0xa7100  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint] // +0x10 (0x8)
	let effectsBrowserViewTopAnchor : NSLayoutConstraint // +0x18 (0x8)

	// Swift methods
	0xa8150  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0xa8430  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var $__lazy_storage_$_encoder : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0xa8770  func RadarSession.encoder.getter // getter 
	0xa8600  class func RadarSession.__allocating_init() // init 
	0xa8f30  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0xa9640  func RadarSession.addSymptom(withRequest:) // method 
	0xa9a30  func RadarSession.cancel() // method 
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
	0xaa180  @objc InCallControlsDragController.delegate <stripped>
	0xaa200  @objc InCallControlsDragController.setDelegate: <stripped>
	0xaa360  @objc InCallControlsDragController.isDragging <stripped>
	0xaa610  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0xaa650  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0xab900  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0xac340  @objc InCallControlsDragController.init <stripped>
	0xac380  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0xaa3c0  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
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
	0xafc10  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0xafe30  @objc CrossFadeAnimator.animateTransition: <stripped>
	0xafec0  @objc CrossFadeAnimator.init <stripped>
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
	0xb7940  @objc ParticipantViewLabelContainerView.label <stripped>
	0xb87b0  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0xb87e0  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0xb8950  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0xb8a30  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0xb8c00  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0xb8d00  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0xb8db0  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0xb8ec0  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0xbab70  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0xbabb0  class func <stripped> // init 
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
	0xbb080  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xbb0e0  func PlatformDisplayLinkBase.start() // method 
	0xbb100  func PlatformDisplayLinkBase.cancel() // method 
	0xbb290  class func PlatformDisplayLinkBase.__allocating_init() // init 
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
	0xbd520  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0xbd5a0  @objc EffectsLayoutController.init <stripped>
	0xbd5e0  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0xbd450  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let contactMonogram : MonogramView // +0x10 (0x8)
	let silhouette : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0xbe5f0  @objc ParticipantContactView.init <stripped>
	0xbe730  @objc ParticipantContactView.initWithCoder: <stripped>
	0xbe8c0  @objc ParticipantContactView.initWithFrame: <stripped>
	0xbec60  @objc ParticipantContactView.layoutSubviews <stripped>
	0xbecc0  @objc ParticipantContactView..cxx_destruct <stripped>

	// Swift methods
	0xbd600  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0xc3fd0  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0xc4010  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0xbfe10  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc5670  func Defaults.enableAudioVisualization.getter // getter 
	0xc5680  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xc5690  func Defaults.forceVideoLayerVisible.getter // getter 
	0xc56b0  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xc56c0  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xc56d0  func Defaults.startUplinkMuted.getter // getter 
	0xc56e0  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xc5700  func Defaults.supportsVideo.getter // getter 
	0xc5730  func Defaults.supportsEffects.getter // getter 
	0xc5770  func Defaults.useFlattenedUI.getter // getter 
	0xc5790  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xc57c0  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xc57f0  func Defaults.mimimumActiveDuration.getter // getter 
	0xc5820  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xc5850  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xc5860  func Defaults.organicSashFontSize.getter // getter 
	0xc5880  func Defaults.organicCellCornerRadius.getter // getter 
	0xc58a0  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xc58c0  func Defaults.emaTimeScale.getter // getter 
	0xc58f0  func Defaults.emaTimerFrequency.getter // getter 
	0xc5920  func Defaults.emaProminenceWeight1.getter // getter 
	0xc5950  func Defaults.emaProminenceWeight2.getter // getter 
	0xc5980  func Defaults.emaProminenceWeight3.getter // getter 
	0xc59b0  func Defaults.emaProminenceWeight4.getter // getter 
	0xc59e0  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xc5a10  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xc5a40  func Defaults.shouldCenterRoster.getter // getter 
	0xc5d50  func Defaults.bool(for:default:) // method 
	0xc5eb0  func Defaults.float(for:default:) // method 
	0xc6010  func Defaults.double(for:default:) // method 
	0xc5600  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc6440  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xc76d0  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xc7760  @objc StagingAreaAnimator.init <stripped>
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
	var widthConstraint : NSLayoutConstraint? // +0x142bd0 (0x8)

	// ObjC -> Swift bridged methods
	0xcb990  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xcbb30  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xcc010  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xcc0e0  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xcc140  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
	0xcb250  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xcdea0  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xce160  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xce410  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xce5a0  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xce5e0  @objc ParticipantListViewController._canShowWhileLocked <stripped>
	0xcedd0  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xcee30  @objc ParticipantListViewController..cxx_destruct <stripped>

	// Swift methods
	0xcdc40  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0xd1880  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xd1b30  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd2380  @objc ParticipantAlertView.init <stripped>
	0xd2490  @objc ParticipantAlertView.initWithCoder: <stripped>
	0xd25e0  @objc ParticipantAlertView.initWithFrame: <stripped>
	0xd2660  @objc ParticipantAlertView..cxx_destruct <stripped>
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
	0xd4340  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xd43b0  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xd4410  @objc MultiwayViewController.call <stripped>
	0xdb440  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xd4470  @objc MultiwayViewController.deviceOrientation <stripped>
	0xd44e0  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xd5320  @objc MultiwayViewController.delegate <stripped>
	0xd53a0  @objc MultiwayViewController.setDelegate: <stripped>
	0xd5500  @objc MultiwayViewController.effectsEnabled <stripped>
	0xd5550  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xd55e0  @objc MultiwayViewController.pipViewController <stripped>
	0xd57e0  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xd59a0  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xd9730  @objc MultiwayViewController.initWithCoder: <stripped>
	0xd98e0  @objc MultiwayViewController.dealloc <stripped>
	0xdaa40  @objc MultiwayViewController.viewDidLoad <stripped>
	0xdacc0  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xdaf50  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xdb230  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xdb300  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xdb3e0  @objc MultiwayViewController.willMoveToParentViewController: <stripped>
	0xdb440  @objc MultiwayViewController._canShowWhileLocked <stripped>
	0xdb510  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xdc170  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xdc880  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xdc8d0  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xdc920  @objc MultiwayViewController.muteVideo <stripped>
	0xdca20  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xdcd80  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xdce80  @objc MultiwayViewController.hideEffectsBrowser <stripped>
	0xdd480  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xdd530  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xdd610  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xd9900  @objc MultiwayViewController..cxx_destruct <stripped>

	// Swift methods
	0xd59d0  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
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
	var localParticipant : Participant // +0x142bd0 (0x0)
	var remoteParticipants : [Participant] // +0x0 (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x0 (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x0 (0x8)
	var momentsController : TUMomentsController? // +0x0 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x0 (0x8)
	var recentPresentationContexts : [UInt : ParticipantPresentationContext] // +0x0 (0x8)
	var scheduledIsChangingMirroredVideoResetDates : [UUID : Date] // +0x0 (0x8)
	var conversationState : TUConversationState // +0x6569665f (0x8)
	var deviceOrientation : DeviceOrientation // +0x338e (0x8)
	var broadcastingState : BroadcastingState // +0x0 (0x10)
	var didAddVisibleParticipant : (_:_:)? // +0x45545f5f (0x10)
	var didRemoveVisibleParticipant : (_:_:)? // +0x0 (0x10)
	var didUpdateVisibleParticipant : (_:_:)? // +0x145f60 (0x10)
	var visibleParticipantDidBecomeActive : (_:_:)? // +0x30ac (0x10)
	var didStartVideoForVisibleParticipant : (_:_:)? // +0x145f60 (0x10)
	var participantsMediaPrioritiesDidChange : (_:)? // +0x0 (0x10)
	var participantAudioPowerDidChange : (_:_:)? // +0x0 (0x10)
	var audioRouteDidChange : (_:)? // +0x0 (0x10)
	var cameraZoomAvailabiltyDidChange : (_:)? // +0x77735f5f (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x6975625f (0x10)
	var didUpdateLocalParticipant : (_:_:)? // +0x45545f5f (0x10)
	var didStartVideoForLocalParticipant : (_:_:)? // +0x0 (0x10)
	var conversationStateDidChange : (_:)? // +0x14900c (0x10)
	var enableVideoOnJoin : Bool // +0x0 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x244 (0x28)
	var callCenter : CallCenterProvider // +0x0 (0x28)
	let call : TUCall // +0x77735f5f (0x8)
	var conversationUUID : UUID? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xefad0  @objc ConversationController.description <stripped>
	0xf18d0  @objc ConversationController.dealloc <stripped>
	0xfa220  @objc ConversationController.init <stripped>
	0xf18f0  @objc ConversationController..cxx_destruct <stripped>

	// Swift methods
	0xe8b50  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:includeLocalParticipantInVisibleParticipants:) // init 
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
	0x10c580  @objc StagingAreaViewController.effectsEnabled <stripped>
	0x10c5f0  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0x10c840  @objc StagingAreaViewController.hasJoined <stripped>
	0x10c8a0  @objc StagingAreaViewController.setHasJoined: <stripped>
	0x10c900  @objc StagingAreaViewController.delegate <stripped>
	0x10c960  @objc StagingAreaViewController.setDelegate: <stripped>
	0x10ca00  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0x10ca90  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0x10cc20  @objc StagingAreaViewController.call <stripped>
	0x10cca0  @objc StagingAreaViewController.setCall: <stripped>
	0x10cde0  @objc StagingAreaViewController.deviceOrientation <stripped>
	0x10ce50  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0x10d180  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0x10e110  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0x10e3f0  @objc StagingAreaViewController.initWithCoder: <stripped>
	0x111000  @objc StagingAreaViewController.viewDidLoad <stripped>
	0x1113a0  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0x111630  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0x111740  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0x111770  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0x1117b0  @objc StagingAreaViewController._canShowWhileLocked <stripped>
	0x111f70  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0x112020  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0x112100  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0x1121c0  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0x1124e0  @objc StagingAreaViewController.hideEffectsBrowser <stripped>
	0x112920  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0x112a20  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0x112a80  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0x10d1b0  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	var inCallControlsViewFrames : InCallControlsViewFrames // +0x10 (0x30)

	// Swift methods
	0x116f30  class func InCallControlsFramesCache.__allocating_init() // init 
 }

 struct ConversationKit.InCallControlsViewFrames {

	// Properties
	var containingFrame : CGRect? // +0x0
	var frames : [InCallControlsState : CGRect] // +0x28
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
	var participantIdentifier : UUID? // +0x0 (0x0)
	var delegate : ParticipantViewDelegate // +0x0 (0x10)
	var isInRoster : Bool // +0x0 (0x1)
	var customCornerRadius : CGFloat // +0x6e755f5f (0x8)
	var isExpanded : Bool // +0x666e695f (0x1)

	// ObjC -> Swift bridged methods
	0x119200  @objc ParticipantView.bottomBar <stripped>
	0x1194d0  @objc ParticipantView.isInRoster <stripped>
	0x119510  @objc ParticipantView.setIsInRoster: <stripped>
	0x119a70  @objc ParticipantView.isExpanded <stripped>
	0x119b20  @objc ParticipantView.setIsExpanded: <stripped>
	0x11a700  @objc ParticipantView.initWithFrame: <stripped>
	0x11aa50  @objc ParticipantView.initWithCoder: <stripped>
	0x11aae0  @objc ParticipantView.dealloc <stripped>
	0x11b030  @objc ParticipantView.layoutSubviews <stripped>
	0x11ab00  @objc ParticipantView..cxx_destruct <stripped>
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
	0x120c20  @objc ParticipantVideoOverlayView.init <stripped>
	0x120d50  @objc ParticipantVideoOverlayView.initWithCoder: <stripped>
	0x120ec0  @objc ParticipantVideoOverlayView.initWithFrame: <stripped>
	0x1212d0  @objc ParticipantVideoOverlayView.layoutSubviews <stripped>
	0x121330  @objc ParticipantVideoOverlayView..cxx_destruct <stripped>
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
	0x122e40  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0x122ea0  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0x123240  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0x1232d0  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0x1254a0  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0x125c70  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0x125d20  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0x125da0  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0x125de0  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0x125f10  @objc MultiwayViewConstraintsController.init <stripped>
	0x125f50  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

	// Swift methods
	0x122510  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x122770  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
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

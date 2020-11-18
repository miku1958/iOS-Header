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
	0xa290  @objc TapInteraction.view <stripped>
	0xa310  @objc TapInteraction.setView: <stripped>
	0xa4f0  @objc TapInteraction.numberOfTapsRequired <stripped>
	0xa550  @objc TapInteraction.setNumberOfTapsRequired: <stripped>
	0xa7d0  @objc TapInteraction.init <stripped>
	0xa820  @objc TapInteraction.willMoveToView: <stripped>
	0xa8a0  @objc TapInteraction.didMoveToView: <stripped>
	0xa9c0  @objc TapInteraction.handleRecognizer: <stripped>
	0xb110  @objc TapInteraction..cxx_destruct <stripped>
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
	0xd0f0  func InCallControlsViewConstraintManager.type.getter // getter 
	0xd120  func InCallControlsViewConstraintManager.type.setter // setter 
	0xd160  func InCallControlsViewConstraintManager.type.modify // modifyCoroutine 
	0xd1e0  class func InCallControlsViewConstraintManager.__allocating_init(containingGuide:containingView:controlsView:type:) // init 
	0xd540  func InCallControlsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0xd630  func InCallControlsViewConstraintManager.updateConstraints() // method 
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
	0xe1e0  class func SpringBoardUtilities.__allocating_init() // init 
 }

 class ConversationKit.RemoteParticipantVideoProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ParticipantVideoProvider {

	// Properties
	let avcRemoteVideoClient : AVCRemoteVideoClient? // +0x10 (0x8)

	// Swift methods
	0xe280  func RemoteParticipantVideoProvider.token.getter // getter 
	0xe2b0  func RemoteParticipantVideoProvider.hasReceivedVideoFrames.getter // getter 
	0xe2d0  func RemoteParticipantVideoProvider.isVideoMirrored.getter // getter 
	0xe2e0  func RemoteParticipantVideoProvider.videoAttributeOrientation.getter // getter 
	0xe300  func RemoteParticipantVideoProvider.videoAttributeCamera.getter // getter 
	0xe390  class func RemoteParticipantVideoProvider.__allocating_init(avcRemoteVideoClient:) // init 
	0xe5b0  func RemoteParticipantVideoProvider.setLayer(_:for:) // method 
	0xe7a0  func RemoteParticipantVideoProvider.isEqual(to:) // method 
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
	0x12660  @objc PipZoomControl.init <stripped>

	// Swift methods
	0x12680  func PipZoomControl.zoomToFactor(zoomFactor:) // method 
	0x12730  func PipZoomControl.addControl(to:withControlFrame:) // method 
	0x12740  func PipZoomControl.removeControl(from:) // method 
	0x12750  func PipZoomControl.isZoomControlSupported.getter // getter 
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
	0x12850  @objc InCallControlsAddParticipantTableViewCell.button <stripped>
	0x139f0  @objc InCallControlsAddParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x13bd0  @objc InCallControlsAddParticipantTableViewCell.initWithCoder: <stripped>
	0x13c60  @objc InCallControlsAddParticipantTableViewCell.didTapButton: <stripped>
	0x13f60  @objc InCallControlsAddParticipantTableViewCell.traitCollectionDidChange: <stripped>
	0x13fe0  @objc InCallControlsAddParticipantTableViewCell..cxx_destruct <stripped>
 }

 class ConversationKit.AudioVisualizationView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let colorStyle : ColorStyle // +0x8 (0x1)
	var gradient : [UIColor] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x143b0  @objc AudioVisualizationView.init <stripped>
	0x144c0  @objc AudioVisualizationView.initWithFrame: <stripped>
	0x14590  @objc AudioVisualizationView.initWithCoder: <stripped>
	0x14b30  @objc AudioVisualizationView..cxx_destruct <stripped>

	// Swift methods
	0x14110  func AudioVisualizationView.audioVisualizationLayer.getter // getter 
	0x141b0  class func AudioVisualizationView.__allocating_init(colorStyle:) // init 
	0x14650  func AudioVisualizationView.scale.getter // getter 
	0x146a0  func AudioVisualizationView.scale.setter // setter 
	0x14700  func AudioVisualizationView.scale.modify // modifyCoroutine 
	0x14890  func AudioVisualizationView.gradient.getter // getter 
	0x148d0  func AudioVisualizationView.gradient.setter // setter 
	0x14930  func AudioVisualizationView.gradient.modify // modifyCoroutine 
	0x149d0  func AudioVisualizationView.startAnimation() // method 
	0x149f0  func AudioVisualizationView.stopAnimation() // method 
 }

 class ConversationKit.AudioVisualizationLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	var isAnimating : Bool // +0x8 (0x1)
	var scale : Float // +0xc (0x4)
	var scaleBuffer : CircularBuffer<Float> // +0x10 (0x18)
	let rings : [AudioVisualizationRingLayer] // +0x28 (0x8)
	var color : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x159d0  @objc AudioVisualizationLayer.init <stripped>
	0x15e30  @objc AudioVisualizationLayer.initWithLayer: <stripped>
	0x15f70  @objc AudioVisualizationLayer.initWithCoder: <stripped>
	0x15fc0  @objc AudioVisualizationLayer.dealloc <stripped>
	0x16020  @objc AudioVisualizationLayer.bounds <stripped>
	0x160f0  @objc AudioVisualizationLayer.setBounds: <stripped>
	0x166e0  @objc AudioVisualizationLayer.addAnimation:forKey: <stripped>
	0x15fe0  @objc AudioVisualizationLayer..cxx_destruct <stripped>
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
	0x172f0  func LocalParticipantViewConstraintManager.type.getter // getter 
	0x17320  func LocalParticipantViewConstraintManager.type.setter // setter 
	0x17370  func LocalParticipantViewConstraintManager.type.modify // modifyCoroutine 
	0x173f0  class func LocalParticipantViewConstraintManager.__allocating_init(containingGuide:containingView:localPIPView:controlsView:type:) // init 
	0x18610  func LocalParticipantViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x186a0  func LocalParticipantViewConstraintManager.updateConstraints() // method 
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
	0x19b20  @objc ParticipantListLayout.init <stripped>
	0x19c70  @objc ParticipantListLayout.initWithCoder: <stripped>
	0x1ab90  @objc ParticipantListLayout.prepareLayout <stripped>
	0x1abc0  @objc ParticipantListLayout.collectionViewContentSize <stripped>
	0x1ac80  @objc ParticipantListLayout.shouldInvalidateLayoutForBoundsChange: <stripped>
	0x1ad70  @objc ParticipantListLayout.layoutAttributesForItemAtIndexPath: <stripped>
	0x1b2e0  @objc ParticipantListLayout.layoutAttributesForElementsInRect: <stripped>
	0x1b570  @objc ParticipantListLayout..cxx_destruct <stripped>
 }

 class ConversationKit.GridViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0x1c540  class func GridViewConstraintManager.__allocating_init(containingGuide:gridView:) // init 
	0x1c810  func GridViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
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
	0x236d0  class func LargeStagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:deviceOrientation:) // init 
 }

 class ConversationKit.ParticipantCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var participantIdentifier : UUID? // +0x1286c0 (0x0)
	let participantView : ParticipantView // +0x0 (0x8)
	var accessibilityDisplayName : String // +0x0 (0x10)

	// ObjC -> Swift bridged methods
	0x24b00  @objc ParticipantCell.participantView <stripped>
	0x250e0  @objc ParticipantCell.initWithFrame: <stripped>
	0x25270  @objc ParticipantCell.initWithCoder: <stripped>
	0x253f0  @objc ParticipantCell.prepareForReuse <stripped>
	0x255d0  @objc ParticipantCell.accessibilityDisplayName <stripped>
	0x25660  @objc ParticipantCell.setAccessibilityDisplayName: <stripped>
	0x25730  @objc ParticipantCell..cxx_destruct <stripped>
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
	0x25910  @objc InCallControlsTitleCell.messagesButton <stripped>
	0x26300  @objc InCallControlsTitleCell.init <stripped>
	0x27130  @objc InCallControlsTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x27350  @objc InCallControlsTitleCell.initWithCoder: <stripped>
	0x27c50  @objc InCallControlsTitleCell.traitCollectionDidChange: <stripped>
	0x27d10  @objc InCallControlsTitleCell.didTapMessagesButton: <stripped>
	0x27d90  @objc InCallControlsTitleCell..cxx_destruct <stripped>
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
	0x297d0  class func ParticipantContactDetailsCache.__allocating_init(contactStore:) // init 
 }

 class ConversationKit.BoxedDetails : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let details : ParticipantContactDetails

	// ObjC -> Swift bridged methods
	0x29860  @objc BoxedDetails.init <stripped>
	0x298b0  @objc BoxedDetails..cxx_destruct <stripped>

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
	0x2ac10  @objc ParticipantViewButton.isSelected <stripped>
	0x2ac80  @objc ParticipantViewButton.setSelected: <stripped>
	0x2ad40  @objc ParticipantViewButton.isHighlighted <stripped>
	0x2adf0  @objc ParticipantViewButton.setHighlighted: <stripped>
	0x2bbe0  @objc ParticipantViewButton.initWithCoder: <stripped>
	0x2bd40  @objc ParticipantViewButton.layoutSubviews <stripped>
	0x2be20  @objc ParticipantViewButton.initWithFrame: <stripped>
	0x2be60  @objc ParticipantViewButton..cxx_destruct <stripped>

	// Swift methods
	0x2b0f0  class func ParticipantViewButton.__allocating_init(imageName:) // init 
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
	0x2e320  @objc IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification: <stripped>

	// Swift methods
	0x2cbf0  func IDSCapabilitiesChecker.participantCapabilities.getter // getter 
	0x2ccb0  func IDSCapabilitiesChecker.delegate.getter // getter 
	0x2cce0  func IDSCapabilitiesChecker.delegate.setter // setter 
	0x2cd50  func IDSCapabilitiesChecker.delegate.modify // modifyCoroutine 
	0x2ce30  class func IDSCapabilitiesChecker.__allocating_init(participants:lookupManager:) // init 
	0x2d070  func IDSCapabilitiesChecker.update(withParticipants:) // method 
	0x2d080  func IDSCapabilitiesChecker.updateCapabilities(withParticipants:) // method 
	0x2dd20  func IDSCapabilitiesChecker.handleLookupManagerDidChangeNotification(_:) // method 
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
	0x30cf0  @objc GradientView.init <stripped>
	0x30ea0  @objc GradientView.initWithFrame: <stripped>
	0x30f90  @objc GradientView.initWithCoder: <stripped>
	0x31040  @objc GradientView..cxx_destruct <stripped>
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
	0x31c50  class func LargeMultiwayControllerLayout.__allocating_init(containingView:participantListView:gridView:controlsView:localParticipantView:effectsView:effectsBrowserView:deviceOrientation:) // init 
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
	0x33890  @objc InCallControlsReportAProblemTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x33a50  @objc InCallControlsReportAProblemTableViewCell.initWithCoder: <stripped>
	0x33d20  @objc InCallControlsReportAProblemTableViewCell.traitCollectionDidChange: <stripped>
	0x33da0  @objc InCallControlsReportAProblemTableViewCell..cxx_destruct <stripped>
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
	0x35590  @objc ParticipantGridView.init <stripped>
	0x35750  @objc ParticipantGridView.initWithCoder: <stripped>
	0x35950  @objc ParticipantGridView.initWithFrame: <stripped>
	0x36140  @objc ParticipantGridView.layoutSubviews <stripped>
	0x3c8a0  @objc ParticipantGridView..cxx_destruct <stripped>
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
	0x3ffc0  @objc LocalParticipantView.initWithCoder: <stripped>
	0x400f0  @objc LocalParticipantView.initWithFrame: <stripped>
	0x40260  @objc LocalParticipantView.layoutSubviews <stripped>
	0x40640  @objc LocalParticipantView..cxx_destruct <stripped>

	// Swift methods
	0x3fd20  class func LocalParticipantView.__allocating_init(isInRoster:) // init 
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
	0x46ff0  @objc InCallControlsView.initWithCoder: <stripped>
	0x47250  @objc InCallControlsView.layoutSubviews <stripped>
	0x47330  @objc InCallControlsView.initWithFrame: <stripped>
	0x47370  @objc InCallControlsView..cxx_destruct <stripped>

	// Swift methods
	0x42330  class func InCallControlsView.__allocating_init(frame:capabilities:) // init 
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
	0x49c60  func ParticipantListViewConstraintManager.type.getter // getter 
	0x49c90  func ParticipantListViewConstraintManager.type.setter // setter 
	0x49cd0  func ParticipantListViewConstraintManager.type.modify // modifyCoroutine 
	0x49b30  class func ParticipantListViewConstraintManager.__allocating_init(containingGuide:rosterView:controlsView:type:) // init 
	0x4a010  func ParticipantListViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
	0x4a020  func ParticipantListViewConstraintManager.updateConstraints() // method 
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
	0x4a3b0  @objc ParticipantInfoView.nameLabel <stripped>
	0x4ab00  @objc ParticipantInfoView.isMomentsAvailable <stripped>
	0x4ab90  @objc ParticipantInfoView.setIsMomentsAvailable: <stripped>
	0x4b780  @objc ParticipantInfoView.init <stripped>
	0x4b9d0  @objc ParticipantInfoView.initWithCoder: <stripped>
	0x4bb60  @objc ParticipantInfoView.layoutSubviews <stripped>
	0x4c0e0  @objc ParticipantInfoView.didTapExpandButton <stripped>
	0x4c190  @objc ParticipantInfoView.didTapShutterButton <stripped>
	0x4c270  @objc ParticipantInfoView.initWithFrame: <stripped>
	0x4c2b0  @objc ParticipantInfoView..cxx_destruct <stripped>

	// Swift methods
	0x4a600  func ParticipantInfoView.isSmall.getter // getter 
	0x4a620  func ParticipantInfoView.isSmall.setter // setter 
	0x4a640  func ParticipantInfoView.isSmall.modify // modifyCoroutine 
	0x4a870  func ParticipantInfoView.isExpanded.getter // getter 
	0x4a890  func ParticipantInfoView.isExpanded.setter // setter 
	0x4a8b0  func ParticipantInfoView.isExpanded.modify // modifyCoroutine 
	0x4aa10  func ParticipantInfoView.customCornerRadius.getter // getter 
	0x4aa40  func ParticipantInfoView.customCornerRadius.setter // setter 
	0x4aa90  func ParticipantInfoView.customCornerRadius.modify // modifyCoroutine 
	0x4ab40  func ParticipantInfoView.isMomentsAvailable.getter // getter 
	0x4abd0  func ParticipantInfoView.isMomentsAvailable.setter // setter 
	0x4ad80  func ParticipantInfoView.isMomentsAvailable.modify // modifyCoroutine 
	0x4aeb0  func ParticipantInfoView.delegate.getter // getter 
	0x4aef0  func ParticipantInfoView.delegate.setter // setter 
	0x4af70  func ParticipantInfoView.delegate.modify // modifyCoroutine 
	0x4b9f0  func ParticipantInfoView.configure(with:isMomentsAvailable:shouldHideShutterButton:) // method 
	0x4bb90  func ParticipantInfoView._layout() // method 
	0x4c090  func ParticipantInfoView.didTapExpandButton() // method 
	0x4c110  func ParticipantInfoView.didTapShutterButton() // method 
 }

 class ConversationKit.ParticipantVideoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let frontFacingCameraView : ParticipantVideoCameraView // +0x8 (0x8)
	let backFacingCameraView : ParticipantVideoCameraView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x4c690  @objc ParticipantVideoView.init <stripped>
	0x4c7a0  @objc ParticipantVideoView.initWithCoder: <stripped>
	0x4c8f0  @objc ParticipantVideoView.initWithFrame: <stripped>
	0x4cb70  @objc ParticipantVideoView.layoutSubviews <stripped>
	0x4ce30  @objc ParticipantVideoView..cxx_destruct <stripped>
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
	0x4e530  @objc BuzzedAnimator.transitionDuration: <stripped>
	0x4f180  @objc BuzzedAnimator.animateTransition: <stripped>
	0x4f210  @objc BuzzedAnimator.init <stripped>
 }

 struct ConversationKit.DefaultParticipantMediaProviderCreator: ParticipantMediaProviderCreator {

	// Properties
	var avcRemoteVideoClientDelegate : weak AVCRemoteVideoClientDelegate? // +0x0
 }

 class ConversationKit.AudioVisualizationRingLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {

	// Properties
	let opacityMultiple : Float // +0x8 (0x4)

	// ObjC -> Swift bridged methods
	0x4fbe0  @objc AudioVisualizationRingLayer.initWithLayer: <stripped>
	0x4fcd0  @objc AudioVisualizationRingLayer.initWithCoder: <stripped>
	0x4fce0  @objc AudioVisualizationRingLayer.opacity <stripped>
	0x4fd60  @objc AudioVisualizationRingLayer.setOpacity: <stripped>
	0x4fdf0  @objc AudioVisualizationRingLayer.bounds <stripped>
	0x4fec0  @objc AudioVisualizationRingLayer.setBounds: <stripped>
	0x507e0  @objc AudioVisualizationRingLayer.init <stripped>

	// Swift methods
	0x4f990  class func AudioVisualizationRingLayer.__allocating_init(opacityMultiple:) // init 
	0x50150  func AudioVisualizationRingLayer.addBoundsSizeAnimation(_:forKey:) // method 
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
	0x52c20  class func SmallMultiwayControllerLayout.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:) // init 
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
	0x5e0e0  @objc ParticipantGridViewController.initWithCoder: <stripped>
	0x5e170  @objc ParticipantGridViewController.loadView <stripped>
	0x5e5c0  @objc ParticipantGridViewController.viewDidLoad <stripped>
	0x5e600  @objc ParticipantGridViewController._canShowWhileLocked <stripped>
	0x5e7d0  @objc ParticipantGridViewController.forceBumpPriority <stripped>
	0x60ed0  @objc ParticipantGridViewController.initWithNibName:bundle: <stripped>
	0x60f30  @objc ParticipantGridViewController..cxx_destruct <stripped>

	// Swift methods
	0x5d470  class func ParticipantGridViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantVideoCameraView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x654d0  @objc ParticipantVideoCameraView.initWithFrame: <stripped>
	0x655a0  @objc ParticipantVideoCameraView.initWithCoder: <stripped>
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
	0x73d20  @objc InCallControlButton.isSelected <stripped>
	0x73d60  @objc InCallControlButton.setSelected: <stripped>
	0x73e20  @objc InCallControlButton.isHighlighted <stripped>
	0x73ed0  @objc InCallControlButton.setHighlighted: <stripped>
	0x78be0  @objc InCallControlButton.initWithCoder: <stripped>
	0x78ce0  @objc InCallControlButton.layoutSubviews <stripped>
	0x78fe0  @objc InCallControlButton.initWithFrame: <stripped>
	0x79020  @objc InCallControlButton..cxx_destruct <stripped>

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
	0x7c070  @objc CallCenter.init <stripped>
	0x7c0b0  @objc CallCenter..cxx_destruct <stripped>

	// Swift methods
	0x7a760  class func CallCenter.__allocating_init(callCenter:) // init 
 }

 class ConversationKit.MonogramView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var lastSizeForFont : CGSize? // +0x8 (0x11)
	var font : UIFont? // +0x20 (0x8)
	let colorStyle : ColorStyle // +0x28 (0x1)
	var text : String // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x7daa0  @objc MonogramView.init <stripped>
	0x7dbe0  @objc MonogramView.initWithFrame: <stripped>
	0x7dce0  @objc MonogramView.initWithCoder: <stripped>
	0x7e210  @objc MonogramView.drawRect: <stripped>
	0x7e2b0  @objc MonogramView..cxx_destruct <stripped>

	// Swift methods
	0x7d7c0  class func MonogramView.__allocating_init(colorStyle:) // init 
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
	0x7f690  @objc InCallControlsViewController.isExpanded <stripped>
	0x7f6d0  @objc InCallControlsViewController.setIsExpanded: <stripped>
	0x7fad0  @objc InCallControlsViewController.audioIsEnabled <stripped>
	0x7fb50  @objc InCallControlsViewController.setAudioIsEnabled: <stripped>
	0x7fc60  @objc InCallControlsViewController.videoIsEnabled <stripped>
	0x7fca0  @objc InCallControlsViewController.setVideoIsEnabled: <stripped>
	0x806b0  @objc InCallControlsViewController.effectsAreAvailable <stripped>
	0x806f0  @objc InCallControlsViewController.setEffectsAreAvailable: <stripped>
	0x80780  @objc InCallControlsViewController.effectsAreEnabled <stripped>
	0x807c0  @objc InCallControlsViewController.setEffectsAreEnabled: <stripped>
	0x80870  @objc InCallControlsViewController.shouldShowJoinButton <stripped>
	0x808e0  @objc InCallControlsViewController.setShouldShowJoinButton: <stripped>
	0x80ba0  @objc InCallControlsViewController.audioButton <stripped>
	0x80c40  @objc InCallControlsViewController.delegate <stripped>
	0x80cc0  @objc InCallControlsViewController.setDelegate: <stripped>
	0x811d0  @objc InCallControlsViewController.description <stripped>
	0x81f10  @objc InCallControlsViewController.initWithActiveCall: <stripped>
	0x82220  @objc InCallControlsViewController.initWithCoder: <stripped>
	0x823f0  @objc InCallControlsViewController.embedEffectsBrowserViewController: <stripped>
	0x82570  @objc InCallControlsViewController.loadView <stripped>
	0x84290  @objc InCallControlsViewController.viewDidLoad <stripped>
	0x85ad0  @objc InCallControlsViewController.viewDidAppear: <stripped>
	0x85ba0  @objc InCallControlsViewController.willMoveToParentViewController: <stripped>
	0x85c90  @objc InCallControlsViewController.traitCollectionDidChange: <stripped>
	0x85cf0  @objc InCallControlsViewController.viewDidLayoutSubviews <stripped>
	0x85d30  @objc InCallControlsViewController._canShowWhileLocked <stripped>
	0x85fc0  @objc InCallControlsViewController.didTapEffectsButton: <stripped>
	0x86010  @objc InCallControlsViewController.didTapFlipCameraButton: <stripped>
	0x861a0  @objc InCallControlsViewController.didTapJoinLeaveButton: <stripped>
	0x861f0  @objc InCallControlsViewController.didTapToggleCameraButton: <stripped>
	0x86250  @objc InCallControlsViewController.didTapMuteButton: <stripped>
	0x86370  @objc InCallControlsViewController.didTapAudioRouteButton: <stripped>
	0x863d0  @objc InCallControlsViewController.updateControlsVisibilityForExpandedState: <stripped>
	0x86af0  @objc InCallControlsViewController.updateAudioRouteButtonFor: <stripped>
	0x86b70  @objc InCallControlsViewController.updateToRepresentLegacyCall: <stripped>
	0x86c00  @objc InCallControlsViewController.accessibilityHotdog <stripped>
	0x86c40  @objc InCallControlsViewController.accessibilityJoinLeaveButton <stripped>
	0x86c80  @objc InCallControlsViewController.accessibilityEffectsButton <stripped>
	0x86cc0  @objc InCallControlsViewController.accessibilityEffectsLabel <stripped>
	0x86d00  @objc InCallControlsViewController.accessibilityCameraButton <stripped>
	0x86d40  @objc InCallControlsViewController.accessibilityCameraLabel <stripped>
	0x86d80  @objc InCallControlsViewController.accessibilityMuteAudioButton <stripped>
	0x86dc0  @objc InCallControlsViewController.accessibilityMuteAudioLabel <stripped>
	0x86e00  @objc InCallControlsViewController.accessibilityRouteButton <stripped>
	0x86e40  @objc InCallControlsViewController.accessibilityRouteLabel <stripped>
	0x86ee0  @objc InCallControlsViewController.accessibilityDisableVideoButton <stripped>
	0x86fa0  @objc InCallControlsViewController.accessibilityDisableVideoLabel <stripped>
	0x87080  @objc InCallControlsViewController.initWithNibName:bundle: <stripped>
	0x870e0  @objc InCallControlsViewController..cxx_destruct <stripped>

	// Swift methods
	0x814d0  class func InCallControlsViewController.__allocating_init(localParticipant:remoteParticipants:mode:representedLegacyCallIdentifier:) // init 
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
	0x8d2f0  @objc ParticipantMonogramView.titleLabelContainer <stripped>
	0x8d330  @objc ParticipantMonogramView.subtitleLabelContainer <stripped>
	0x8db90  @objc ParticipantMonogramView.init <stripped>
	0x8dcb0  @objc ParticipantMonogramView.initWithCoder: <stripped>
	0x8de20  @objc ParticipantMonogramView.initWithFrame: <stripped>
	0x8e030  @objc ParticipantMonogramView.layoutSubviews <stripped>
	0x8e4c0  @objc ParticipantMonogramView..cxx_destruct <stripped>

	// Swift methods
	0x8d4d0  class func ParticipantMonogramView.__allocating_init(colorStyle:) // init 
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
	0x8f0b0  class func ParticipantMonogramViewLayout.__allocating_init(audioVisualizer:contactView:titleView:subtitleView:glowView:) // init 
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
	0x92690  @objc InCallControlsParticipantsTableViewController.handleContentSizeCategoryDidChange: <stripped>
	0x92890  @objc InCallControlsParticipantsTableViewController.initWithCoder: <stripped>
	0x92d60  @objc InCallControlsParticipantsTableViewController.viewDidLoad <stripped>
	0x92da0  @objc InCallControlsParticipantsTableViewController._canShowWhileLocked <stripped>
	0x92e20  @objc InCallControlsParticipantsTableViewController.numberOfSectionsInTableView: <stripped>
	0x93000  @objc InCallControlsParticipantsTableViewController.tableView:numberOfRowsInSection: <stripped>
	0x93b90  @objc InCallControlsParticipantsTableViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x93fe0  @objc InCallControlsParticipantsTableViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x94250  @objc InCallControlsParticipantsTableViewController.tableView:heightForRowAtIndexPath: <stripped>
	0x94370  @objc InCallControlsParticipantsTableViewController.initWithStyle: <stripped>
	0x94420  @objc InCallControlsParticipantsTableViewController.initWithNibName:bundle: <stripped>
	0x94480  @objc InCallControlsParticipantsTableViewController..cxx_destruct <stripped>

	// Swift methods
	0x8ff50  class func InCallControlsParticipantsTableViewController.__allocating_init(participants:mode:isLegacy:groupName:) // init 
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
	0x97090  @objc InCallControlsParticipantTableViewCell.ringButton <stripped>
	0x97a70  @objc InCallControlsParticipantTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x97d40  @objc InCallControlsParticipantTableViewCell.initWithCoder: <stripped>
	0x990a0  @objc InCallControlsParticipantTableViewCell.layoutSubviews <stripped>
	0x99130  @objc InCallControlsParticipantTableViewCell.didTapRing: <stripped>
	0x991b0  @objc InCallControlsParticipantTableViewCell..cxx_destruct <stripped>
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
	0xa1430  @objc ReportAProblemContractViewController.initWithCoder: <stripped>
	0xa1c60  @objc ReportAProblemContractViewController.viewDidLoad <stripped>
	0xa1cb0  @objc ReportAProblemContractViewController.didTapCancel: <stripped>
	0xa2710  @objc ReportAProblemContractViewController.initWithNibName:bundle: <stripped>
	0xa2760  @objc ReportAProblemContractViewController..cxx_destruct <stripped>

	// Swift methods
	0xa11d0  class func ReportAProblemContractViewController.__allocating_init(call:conversation:) // init 
	0xa1c90  func ReportAProblemContractViewController.didTapCancel(_:) // method 
	0xa1d30  func ReportAProblemContractViewController.didTapButton() // method 
	0xa2170  func ReportAProblemContractViewController.handleRadarIdentifierRequest(_:) // method 
	0xa2240  func ReportAProblemContractViewController.handleFailedToGetRadarIdentifier() // method 
 }

 class ConversationKit.ReportAProblemSymptomsViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarSession : RadarSession
	let radarIdentifier : UInt
	let textView : UITextView
	var textViewBottomConstraint : NSLayoutConstraint?

	// ObjC -> Swift bridged methods
	0xa2ac0  @objc ReportAProblemSymptomsViewController.initWithCoder: <stripped>
	0xa3330  @objc ReportAProblemSymptomsViewController.viewDidLoad <stripped>
	0xa33b0  @objc ReportAProblemSymptomsViewController.viewWillAppear: <stripped>
	0xa3b70  @objc ReportAProblemSymptomsViewController.didTapNext: <stripped>
	0xa3f50  @objc ReportAProblemSymptomsViewController.handleKeyboardChangeNotification: <stripped>
	0xa4020  @objc ReportAProblemSymptomsViewController.initWithNibName:bundle: <stripped>
	0xa4090  @objc ReportAProblemSymptomsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa27c0  func <stripped> // setter 
	0xa33f0  func <stripped> // method 
	0xa3b90  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemAcknowledgmentViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let conversation : Conversation
	let radarIdentifier : UInt
	let reportAProblemView : ReportAProblemView

	// ObjC -> Swift bridged methods
	0xa4210  @objc ReportAProblemAcknowledgmentViewController.initWithCoder: <stripped>
	0xa4710  @objc ReportAProblemAcknowledgmentViewController.viewDidLoad <stripped>
	0xa4740  @objc ReportAProblemAcknowledgmentViewController.preferredStatusBarStyle <stripped>
	0xa4d60  @objc ReportAProblemAcknowledgmentViewController.didTapDone: <stripped>
	0xa4de0  @objc ReportAProblemAcknowledgmentViewController.initWithNibName:bundle: <stripped>
	0xa4e80  @objc ReportAProblemAcknowledgmentViewController..cxx_destruct <stripped>

	// Swift methods
	0xa4770  func <stripped> // method 
	0xa4d40  func <stripped> // method 
 }

 class ConversationKit.ReportAProblemView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let textView : UITextView
	let button : UIButton
	var didTapButton : ()?

	// ObjC -> Swift bridged methods
	0xa5120  @objc ReportAProblemView.init <stripped>
	0xa5df0  @objc ReportAProblemView.initWithFrame: <stripped>
	0xa5f10  @objc ReportAProblemView.initWithCoder: <stripped>
	0xa6060  @objc ReportAProblemView.didMoveToSuperview <stripped>
	0xa63d0  @objc ReportAProblemView.didTapButton: <stripped>
	0xa64a0  @objc ReportAProblemView..cxx_destruct <stripped>

	// Swift methods
	0xa50b0  func <stripped> // setter 
	0xa6090  func <stripped> // method 
	0xa6390  func <stripped> // method 
 }

 class ConversationKit.StagingAreaViewControllerLayout : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateConstraints : [MultiwayViewConstraintsController.OverallLayoutState : [NSLayoutConstraint]] // +0x10 (0x8)
	var effectsConstraintManagers : [ViewConstraintManager]? // +0x18 (0x8)
	var currentConstraints : [NSLayoutConstraint] // +0x20 (0x8)

	// Swift methods
	0xa6e30  class func StagingAreaViewControllerLayout.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserView:) // init 
 }

 class ConversationKit.EffectsBrowserViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constantConstraints : [NSLayoutConstraint] // +0x10 (0x8)
	let effectsBrowserViewTopAnchor : NSLayoutConstraint // +0x18 (0x8)

	// Swift methods
	0xa7e80  class func EffectsBrowserViewConstraintManager.__allocating_init(containingGuide:effectsBrowserView:controlsView:) // init 
	0xa8160  func EffectsBrowserViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.RadarSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let session : NSURLSession // +0x10 (0x8)
	var pendingTask : NSURLSessionTask? // +0x18 (0x8)
	var $__lazy_storage_$_encoder : JSONEncoder? // +0x20 (0x8)
	let decoder : JSONDecoder // +0x28 (0x8)

	// Swift methods
	0xa84a0  func RadarSession.encoder.getter // getter 
	0xa8330  class func RadarSession.__allocating_init() // init 
	0xa8c60  func RadarSession.requestRadarIdentifier(withRequest:completion:) // method 
	0xa9370  func RadarSession.addSymptom(withRequest:) // method 
	0xa9760  func RadarSession.cancel() // method 
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
	0xa9eb0  @objc InCallControlsDragController.delegate <stripped>
	0xa9f30  @objc InCallControlsDragController.setDelegate: <stripped>
	0xaa090  @objc InCallControlsDragController.isDragging <stripped>
	0xaa340  @objc InCallControlsDragController.initInCallControlsView:constraintsController: <stripped>
	0xaa380  @objc InCallControlsDragController.resetGestureRecognizer <stripped>
	0xab630  @objc InCallControlsDragController.handlePanGestureRecognizer: <stripped>
	0xac070  @objc InCallControlsDragController.init <stripped>
	0xac0b0  @objc InCallControlsDragController..cxx_destruct <stripped>

	// Swift methods
	0xaa0f0  class func InCallControlsDragController.__allocating_init(inCallControlsView:constraintsController:) // init 
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
	0xaf940  @objc CrossFadeAnimator.transitionDuration: <stripped>
	0xafb60  @objc CrossFadeAnimator.animateTransition: <stripped>
	0xafbf0  @objc CrossFadeAnimator.init <stripped>
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
	0xb7670  @objc ParticipantViewLabelContainerView.label <stripped>
	0xb84e0  @objc ParticipantViewLabelContainerView.initWithFrame: <stripped>
	0xb8510  @objc ParticipantViewLabelContainerView.intrinsicContentSize <stripped>
	0xb8680  @objc ParticipantViewLabelContainerView.initWithCoder: <stripped>
	0xb8760  @objc ParticipantViewLabelContainerView..cxx_destruct <stripped>
 }

 class ConversationKit.ParticipantViewLabelContainerViewLayer : CALayer /System/Library/Frameworks/QuartzCore.framework/QuartzCore {
	// ObjC -> Swift bridged methods
	0xb8930  @objc ParticipantViewLabelContainerViewLayer.init <stripped>
	0xb8a30  @objc ParticipantViewLabelContainerViewLayer.initWithLayer: <stripped>
	0xb8ae0  @objc ParticipantViewLabelContainerViewLayer.initWithCoder: <stripped>
	0xb8bf0  @objc ParticipantViewLabelContainerViewLayer.layoutSublayers <stripped>
 }

 class ConversationKit.DisplayLinkCallbackWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var callback : (_:)?

	// ObjC -> Swift bridged methods
	0xba8a0  @objc DisplayLinkCallbackWrapper.displayLinkCallback: <stripped>

	// Swift methods
	0xba8e0  class func <stripped> // init 
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
	0xbadb0  func PlatformDisplayLinkBase.displayLink.getter // getter 
	0xbae10  func PlatformDisplayLinkBase.start() // method 
	0xbae30  func PlatformDisplayLinkBase.cancel() // method 
	0xbafc0  class func PlatformDisplayLinkBase.__allocating_init() // init 
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
	0xbd250  @objc EffectsLayoutController.initWithContainingViewController: <stripped>
	0xbd2d0  @objc EffectsLayoutController.init <stripped>
	0xbd310  @objc EffectsLayoutController..cxx_destruct <stripped>

	// Swift methods
	0xbd180  class func EffectsLayoutController.__allocating_init(containingViewController:) // init 
 }

 class ConversationKit.ParticipantContactView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let gradientView : GradientView // +0x8 (0x8)
	let contactMonogram : MonogramView // +0x10 (0x8)
	let silhouette : UIImageView // +0x18 (0x8)
	var contactDetails : ParticipantContactDetails? // +0x20 (0x38)

	// ObjC -> Swift bridged methods
	0xbe320  @objc ParticipantContactView.init <stripped>
	0xbe460  @objc ParticipantContactView.initWithCoder: <stripped>
	0xbe5f0  @objc ParticipantContactView.initWithFrame: <stripped>
	0xbe990  @objc ParticipantContactView.layoutSubviews <stripped>
	0xbe9f0  @objc ParticipantContactView..cxx_destruct <stripped>

	// Swift methods
	0xbd330  class func ParticipantContactView.__allocating_init(colorStyle:) // init 
 }

 class ConversationKit.ParticipantsCollectionViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var onlineParticipants : [Participant] // +0x8 (0x8)
	var offlineParticipants : [Participant] // +0x10 (0x8)
	let participantIsShownInGrid : (_:) // +0x18 (0x10)
	var didCreateCellForParticipant : (_:_:)? // +0x28 (0x10)

	// ObjC -> Swift bridged methods
	0xc3d00  @objc ParticipantsCollectionViewDataSource.init <stripped>
	0xc3d40  @objc ParticipantsCollectionViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0xbfb40  class func ParticipantsCollectionViewDataSource.__allocating_init(participants:participantIsShownInGrid:) // init 
 }

 enum ConversationKit.SectionType {

	// Properties
	case online  
	case offline  
 }

 class ConversationKit.Defaults : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc53a0  func Defaults.enableAudioVisualization.getter // getter 
	0xc53b0  func Defaults.enableAudioVisualizationLogging.getter // getter 
	0xc53c0  func Defaults.forceVideoLayerVisible.getter // getter 
	0xc53e0  func Defaults.shouldIngorePoorConnection.getter // getter 
	0xc53f0  func Defaults.showsForceAudioPriorityButton.getter // getter 
	0xc5400  func Defaults.startUplinkMuted.getter // getter 
	0xc5410  func Defaults.shouldEnableEffectsRendering.getter // getter 
	0xc5430  func Defaults.supportsVideo.getter // getter 
	0xc5460  func Defaults.supportsEffects.getter // getter 
	0xc54a0  func Defaults.useFlattenedUI.getter // getter 
	0xc54c0  func Defaults.activelyCommunicatingAudioThreshold.getter // getter 
	0xc54f0  func Defaults.activelyCommunicatingVideoThreshold.getter // getter 
	0xc5520  func Defaults.mimimumActiveDuration.getter // getter 
	0xc5550  func Defaults.mostActiveParticipantChangeInterval.getter // getter 
	0xc5580  func Defaults.shouldShowProminenceDebuggingLabels.getter // getter 
	0xc5590  func Defaults.organicSashFontSize.getter // getter 
	0xc55b0  func Defaults.organicCellCornerRadius.getter // getter 
	0xc55d0  func Defaults.organicCellGlowSizeMultiplier.getter // getter 
	0xc55f0  func Defaults.emaTimeScale.getter // getter 
	0xc5620  func Defaults.emaTimerFrequency.getter // getter 
	0xc5650  func Defaults.emaProminenceWeight1.getter // getter 
	0xc5680  func Defaults.emaProminenceWeight2.getter // getter 
	0xc56b0  func Defaults.emaProminenceWeight3.getter // getter 
	0xc56e0  func Defaults.emaProminenceWeight4.getter // getter 
	0xc5710  func Defaults.emaMinUIUpdateInterval.getter // getter 
	0xc5740  func Defaults.emaLowerBoundTreshold.getter // getter 
	0xc5770  func Defaults.shouldCenterRoster.getter // getter 
	0xc5a80  func Defaults.bool(for:default:) // method 
	0xc5be0  func Defaults.float(for:default:) // method 
	0xc5d40  func Defaults.double(for:default:) // method 
	0xc5330  class func Defaults.__allocating_init() // init 
 }

 class ConversationKit.BoxedValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : Any

	// Swift methods
 }

 class ConversationKit.StagingAreaAnimator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc6170  @objc StagingAreaAnimator.transitionDuration: <stripped>
	0xc7400  @objc StagingAreaAnimator.animateTransition: <stripped>
	0xc7490  @objc StagingAreaAnimator.init <stripped>
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
	var widthConstraint : NSLayoutConstraint? // +0x142ac0 (0x8)

	// ObjC -> Swift bridged methods
	0xcb6c0  @objc MostActiveParticipantViewController.initWithCoder: <stripped>
	0xcb860  @objc MostActiveParticipantViewController.viewDidLayoutSubviews <stripped>
	0xcbd40  @objc MostActiveParticipantViewController.viewDidLoad <stripped>
	0xcbe10  @objc MostActiveParticipantViewController.initWithNibName:bundle: <stripped>
	0xcbe70  @objc MostActiveParticipantViewController..cxx_destruct <stripped>

	// Swift methods
	0xcaf80  class func MostActiveParticipantViewController.__allocating_init(participants:) // init 
 }

 class ConversationKit.ParticipantListViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var collectionViewDataSource : ParticipantsCollectionViewDataSource // +0x8 (0x8)
	var viewContent : ViewContent // +0x10 (0x8)
	var lastLayedOutViewSize : CGSize? // +0x18 (0x11)
	var participantsViewControllerDelegate : weak ParticipantsViewControllerDelegate? // +0x30 (0x10)
	var recentlyVisibleParticipantIdentifiers : Set<UUID> // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0xcdcf0  @objc ParticipantListViewController.initWithCoder: <stripped>
	0xcdfb0  @objc ParticipantListViewController.viewDidLoad <stripped>
	0xce260  @objc ParticipantListViewController.viewDidAppear: <stripped>
	0xce3f0  @objc ParticipantListViewController.viewDidLayoutSubviews <stripped>
	0xce430  @objc ParticipantListViewController._canShowWhileLocked <stripped>
	0xcec20  @objc ParticipantListViewController.initWithNibName:bundle: <stripped>
	0xcec80  @objc ParticipantListViewController..cxx_destruct <stripped>

	// Swift methods
	0xcda30  class func ParticipantListViewController.__allocating_init(localParticipant:remoteParticipants:participantIsShownInGrid:) // init 
 }

 struct ConversationKit.ViewContent {

	// Properties
	let collectionView : UICollectionView // +0x0
 }

 class ConversationKit.EffectsViewConstraintManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let constraints : [NSLayoutConstraint] // +0x10 (0x8)

	// Swift methods
	0xd16e0  class func EffectsViewConstraintManager.__allocating_init(containingGuide:effectsView:) // init 
	0xd1990  func EffectsViewConstraintManager.constraintsForLayout(_:in:deviceOrientation:) // method 
 }

 class ConversationKit.ParticipantAlertView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let visualEffectView : UIVisualEffectView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd21e0  @objc ParticipantAlertView.init <stripped>
	0xd22f0  @objc ParticipantAlertView.initWithCoder: <stripped>
	0xd2440  @objc ParticipantAlertView.initWithFrame: <stripped>
	0xd24c0  @objc ParticipantAlertView..cxx_destruct <stripped>
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
	0xd41a0  @objc MultiwayViewController.inCallControlsDismissTimer <stripped>
	0xd4210  @objc MultiwayViewController.setInCallControlsDismissTimer: <stripped>
	0xd4270  @objc MultiwayViewController.call <stripped>
	0xdb2a0  @objc MultiwayViewController.wantsApplicationDismissalStyle <stripped>
	0xd42d0  @objc MultiwayViewController.deviceOrientation <stripped>
	0xd4340  @objc MultiwayViewController.setDeviceOrientation: <stripped>
	0xd5180  @objc MultiwayViewController.delegate <stripped>
	0xd5200  @objc MultiwayViewController.setDelegate: <stripped>
	0xd5360  @objc MultiwayViewController.effectsEnabled <stripped>
	0xd53b0  @objc MultiwayViewController.setEffectsEnabled: <stripped>
	0xd5440  @objc MultiwayViewController.pipViewController <stripped>
	0xd5640  @objc MultiwayViewController.initWithActiveCall:stagingAreaViewController: <stripped>
	0xd5800  @objc MultiwayViewController.initWithActiveCall: <stripped>
	0xd9590  @objc MultiwayViewController.initWithCoder: <stripped>
	0xd9740  @objc MultiwayViewController.dealloc <stripped>
	0xda8a0  @objc MultiwayViewController.viewDidLoad <stripped>
	0xdab20  @objc MultiwayViewController.viewWillAppear: <stripped>
	0xdadb0  @objc MultiwayViewController.viewDidAppear: <stripped>
	0xdb090  @objc MultiwayViewController.viewDidDisappear: <stripped>
	0xdb160  @objc MultiwayViewController.viewDidLayoutSubviews <stripped>
	0xdb240  @objc MultiwayViewController.willMoveToParentViewController: <stripped>
	0xdb2a0  @objc MultiwayViewController._canShowWhileLocked <stripped>
	0xdb370  @objc MultiwayViewController.updateViewConstraints <stripped>
	0xdbfd0  @objc MultiwayViewController.restartAutoHideInCallControlsDrawerTimer <stripped>
	0xdc6e0  @objc MultiwayViewController.toggleAudioMute <stripped>
	0xdc730  @objc MultiwayViewController.toggleVideoMute <stripped>
	0xdc780  @objc MultiwayViewController.muteVideo <stripped>
	0xdc880  @objc MultiwayViewController.openMessagesConversation <stripped>
	0xdcbe0  @objc MultiwayViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0xdcce0  @objc MultiwayViewController.hideEffectsBrowser <stripped>
	0xdd2e0  @objc MultiwayViewController.setControllerIsPipped: <stripped>
	0xdd390  @objc MultiwayViewController.accessibilityConstraintController <stripped>
	0xdd470  @objc MultiwayViewController.initWithNibName:bundle: <stripped>
	0xd9760  @objc MultiwayViewController..cxx_destruct <stripped>

	// Swift methods
	0xd5830  class func MultiwayViewController.__allocating_init(activeCall:conversationController:) // init 
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
	var localParticipant : Participant // +0x142ac0 (0x0)
	var remoteParticipants : [Participant] // +0x0 (0x8)
	let includeLocalParticipantInVisibleParticipants : Bool // +0x0 (0x1)
	var audioFrequencyController : TUAudioFrequencyController? // +0x0 (0x8)
	var audioCallbackQueue : OS_dispatch_queue // +0x0 (0x8)
	var $__lazy_storage_$_momentsController : TUMomentsController? // +0x0 (0x8)
	var lastRegisteredMomentsProvider : TUMomentsProvider? // +0x0 (0x8)
	var recentPresentationContexts : [UInt : ParticipantPresentationContext] // +0x0 (0x8)
	var scheduledIsChangingMirroredVideoResetDates : [UUID : Date] // +0x0 (0x8)
	var conversationState : TUConversationState // +0x6569665f (0x8)
	var deviceOrientation : DeviceOrientation // +0x341e (0x8)
	var broadcastingState : BroadcastingState // +0x0 (0x10)
	var didAddVisibleParticipant : (_:_:)? // +0x45545f5f (0x10)
	var didRemoveVisibleParticipant : (_:_:)? // +0x0 (0x10)
	var didUpdateVisibleParticipant : (_:_:)? // +0x145ee0 (0x10)
	var visibleParticipantDidBecomeActive : (_:_:)? // +0x30d0 (0x10)
	var didStartVideoForVisibleParticipant : (_:_:)? // +0x145ee0 (0x10)
	var participantsMediaPrioritiesDidChange : (_:)? // +0x0 (0x10)
	var participantAudioPowerDidChange : (_:_:)? // +0x0 (0x10)
	var audioRouteDidChange : (_:)? // +0x0 (0x10)
	var cameraZoomAvailabiltyDidChange : (_:)? // +0x77735f5f (0x10)
	var carPlayConnectedDidChange : (_:)? // +0x6975625f (0x10)
	var didUpdateLocalParticipant : (_:_:)? // +0x45545f5f (0x10)
	var didStartVideoForLocalParticipant : (_:_:)? // +0x0 (0x10)
	var conversationStateDidChange : (_:)? // +0x148fb0 (0x10)
	var enableVideoOnJoin : Bool // +0x0 (0x1)
	var participantMediaProviderCreator : ParticipantMediaProviderCreator // +0x244 (0x28)
	var callCenter : CallCenterProvider // +0x0 (0x28)
	let call : TUCall // +0x77735f5f (0x8)
	var conversationUUID : UUID? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xef980  @objc ConversationController.description <stripped>
	0xf1840  @objc ConversationController.dealloc <stripped>
	0xfa070  @objc ConversationController.init <stripped>
	0xf1860  @objc ConversationController..cxx_destruct <stripped>

	// Swift methods
	0xe89b0  class func ConversationController.__allocating_init(activeCall:callCenter:participantMediaProviderCreator:includeLocalParticipantInVisibleParticipants:) // init 
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
	0x10c3f0  @objc StagingAreaViewController.effectsEnabled <stripped>
	0x10c460  @objc StagingAreaViewController.setEffectsEnabled: <stripped>
	0x10c6b0  @objc StagingAreaViewController.hasJoined <stripped>
	0x10c710  @objc StagingAreaViewController.setHasJoined: <stripped>
	0x10c770  @objc StagingAreaViewController.delegate <stripped>
	0x10c7d0  @objc StagingAreaViewController.setDelegate: <stripped>
	0x10c870  @objc StagingAreaViewController.stagingAreaDelegate <stripped>
	0x10c900  @objc StagingAreaViewController.setStagingAreaDelegate: <stripped>
	0x10ca90  @objc StagingAreaViewController.call <stripped>
	0x10cb10  @objc StagingAreaViewController.setCall: <stripped>
	0x10cc50  @objc StagingAreaViewController.deviceOrientation <stripped>
	0x10ccc0  @objc StagingAreaViewController.setDeviceOrientation: <stripped>
	0x10cff0  @objc StagingAreaViewController.initWithActiveCall: <stripped>
	0x10df80  @objc StagingAreaViewController.initWithActiveCall:hasJoined: <stripped>
	0x10e260  @objc StagingAreaViewController.initWithCoder: <stripped>
	0x110e70  @objc StagingAreaViewController.viewDidLoad <stripped>
	0x111210  @objc StagingAreaViewController.viewWillAppear: <stripped>
	0x1114a0  @objc StagingAreaViewController.viewWillDisappear: <stripped>
	0x1115b0  @objc StagingAreaViewController.viewDidLayoutSubviews <stripped>
	0x1115e0  @objc StagingAreaViewController.updateViewConstraints <stripped>
	0x111620  @objc StagingAreaViewController._canShowWhileLocked <stripped>
	0x111de0  @objc StagingAreaViewController.didTapJoinButton <stripped>
	0x111e90  @objc StagingAreaViewController.didTapLeaveButton <stripped>
	0x111f70  @objc StagingAreaViewController.toggleVideoMute <stripped>
	0x112030  @objc StagingAreaViewController.didTapSwapLocalParticipantCamera <stripped>
	0x112350  @objc StagingAreaViewController.hideEffectsBrowser <stripped>
	0x112790  @objc StagingAreaViewController.viewWillTransitionToSize:withTransitionCoordinator: <stripped>
	0x112890  @objc StagingAreaViewController.initWithNibName:bundle: <stripped>
	0x1128f0  @objc StagingAreaViewController..cxx_destruct <stripped>

	// Swift methods
	0x10d020  class func StagingAreaViewController.__allocating_init(activeCall:hasJoined:) // init 
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
	0x116da0  class func InCallControlsFramesCache.__allocating_init() // init 
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
	0x119070  @objc ParticipantView.bottomBar <stripped>
	0x119340  @objc ParticipantView.isInRoster <stripped>
	0x119380  @objc ParticipantView.setIsInRoster: <stripped>
	0x119930  @objc ParticipantView.isExpanded <stripped>
	0x1199e0  @objc ParticipantView.setIsExpanded: <stripped>
	0x11a5c0  @objc ParticipantView.initWithFrame: <stripped>
	0x11a910  @objc ParticipantView.initWithCoder: <stripped>
	0x11a9a0  @objc ParticipantView.dealloc <stripped>
	0x11aef0  @objc ParticipantView.layoutSubviews <stripped>
	0x11a9c0  @objc ParticipantView..cxx_destruct <stripped>
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
	0x120ae0  @objc ParticipantVideoOverlayView.init <stripped>
	0x120c10  @objc ParticipantVideoOverlayView.initWithCoder: <stripped>
	0x120d80  @objc ParticipantVideoOverlayView.initWithFrame: <stripped>
	0x121190  @objc ParticipantVideoOverlayView.layoutSubviews <stripped>
	0x1211f0  @objc ParticipantVideoOverlayView..cxx_destruct <stripped>
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
	0x122d00  @objc MultiwayViewConstraintsController.localParticipantState <stripped>
	0x122d60  @objc MultiwayViewConstraintsController.setLocalParticipantState: <stripped>
	0x123100  @objc MultiwayViewConstraintsController.inCallControlsState <stripped>
	0x123190  @objc MultiwayViewConstraintsController.setInCallControlsState: <stripped>
	0x125360  @objc MultiwayViewConstraintsController.initWithContainingView:controlsViewController:inCallControlsState:deviceOrientation: <stripped>
	0x125b30  @objc MultiwayViewConstraintsController.inCallControlsViewFrameFor:state: <stripped>
	0x125be0  @objc MultiwayViewConstraintsController.updateFor:deviceOrientation: <stripped>
	0x125c60  @objc MultiwayViewConstraintsController.removeEffectsConstraints <stripped>
	0x125ca0  @objc MultiwayViewConstraintsController.updateConstraintsWith:controlsViewController:effectsView:effectsBrowserViewController: <stripped>
	0x125dd0  @objc MultiwayViewConstraintsController.init <stripped>
	0x125e10  @objc MultiwayViewConstraintsController..cxx_destruct <stripped>

	// Swift methods
	0x1223d0  class func MultiwayViewConstraintsController.__allocating_init(containingView:participantListView:participantListState:gridView:controlsViewController:inCallControlsState:localParticipantView:localParticipantState:effectsView:effectsBrowserViewController:floatingControlsState:floatingControlsView:deviceOrientation:) // init 
	0x122630  class func MultiwayViewConstraintsController.__allocating_init(containingView:controlsViewController:inCallControlsState:effectsView:effectsBrowserViewController:deviceOrientation:) // init 
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

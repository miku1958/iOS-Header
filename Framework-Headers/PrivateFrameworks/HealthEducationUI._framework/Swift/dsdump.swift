 protocol HealthEducationUI.HealthEducationArticleInformationProviding // 7 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol HealthEducationUI.HealthEducationArticleComponentsProviding // 1 requirements
 {
	// getter
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 class HealthEducationUI.DynamicHeightLabelView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_label : UILabel? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x1fe0  @objc DynamicHeightLabelView.initWithFrame: <stripped>
	0x2010  @objc DynamicHeightLabelView.initWithCoder: <stripped>
	0x2370  @objc DynamicHeightLabelView.traitCollectionDidChange: <stripped>
	0x2590  @objc DynamicHeightLabelView..cxx_destruct <stripped>

	// Swift methods
	0x23c0  func <stripped> // method 
	0x24e0  func <stripped> // method 
 }

 class HealthEducationUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
	var linkedURL : URL? // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x3220  @objc LinkedTextView.initWithFrame: <stripped>
	0x3250  @objc LinkedTextView.initWithCoder: <stripped>
	0x34a0  @objc LinkedTextView..cxx_destruct <stripped>

	// Swift methods
	0x32e0  func <stripped> // getter 
 }

 class HealthEducationUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0x40a0  @objc TitleView.initWithFrame: <stripped>
	0x4120  @objc TitleView.initWithCoder: <stripped>
 }

 struct HealthEducationUI.SoundLevelModel {

	// Properties
	let title : String // +0x0
	let description : String // +0x10
	let warningDescription : String? // +0x20
	let showBottomHairline : Bool // +0x30
	let meterViewModel : HorizontalMeterViewModel // +0x38
 }

 class HealthEducationUI.SoundLevelView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let meterLevelView : HorizontalMeterView // +0x8 (0x8)
	var headerStackView : UIStackView? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x47a0  @objc SoundLevelView.initWithCoder: <stripped>
	0x4a00  @objc SoundLevelView.traitCollectionDidChange: <stripped>
	0x4b00  @objc SoundLevelView.initWithFrame: <stripped>
	0x4b80  @objc SoundLevelView..cxx_destruct <stripped>

	// Swift methods
	0x4710  class func SoundLevelView.__allocating_init(model:) // init 
 }

 struct HealthEducationUI.HealthEducationTileViewModel {

	// Properties
	let title : String // +0x0
	let description : String // +0x10
	let backgroundImage : UIImage // +0x20
	let presentation : Presentation // +0x28
 }

 class HealthEducationUI.HealthEducationTileView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let highlightedDuration : Double // +0x8 (0x8)
	let highlightedOverlayAlpha : CGFloat // +0x10 (0x8)
	let highlightedUnderlayAlpha : CGFloat // +0x18 (0x8)
	var $__lazy_storage_$_backgroundImageView : UIImageView? // +0x20 (0x8)
	var $__lazy_storage_$_selectedImageOverlay : UIView? // +0x28 (0x8)
	var $__lazy_storage_$_selectedSashUnderlay : UIView? // +0x30 (0x8)
	var $__lazy_storage_$_sashView : TileSashView? // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x6940  @objc HealthEducationTileView.initWithFrame: <stripped>
	0x69e0  @objc HealthEducationTileView.initWithCoder: <stripped>
	0x74b0  @objc HealthEducationTileView..cxx_destruct <stripped>

	// Swift methods
	0x6a20  func HealthEducationTileView.update(viewModel:) // method 
	0x6df0  func HealthEducationTileView.setHighlighted(_:animated:) // method 
 }

 enum HealthEducationUI.HealthEducationComponent {

	// Properties
	case title : String
	case sectionHeader : String
	case paragraph : String
	case unorderedList : [String]
	case paragraphAndUnorderedList : (String, [String])
	case image : (UIImage, inset: Bool)
	case button : (String, ())
	case customView : UIView
	case caption : String
	case linkedText : (String, URL)
	case paragraphWithLinkedText : (paragraph: String, linkedText: String, linkedURL: URL)
 }

 class HealthEducationUI.ParagraphView : DynamicHeightTextView {
	// ObjC -> Swift bridged methods
	0xb750  @objc ParagraphView.initWithFrame: <stripped>
	0xb7d0  @objc ParagraphView.initWithCoder: <stripped>
 }

 class HealthEducationUI.HealthEducationViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : [HealthEducationComponent] // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xdcd0  @objc HealthEducationViewController.initWithCoder: <stripped>
	0xdd90  @objc HealthEducationViewController.viewDidLoad <stripped>
	0xe800  @objc HealthEducationViewController.initWithNibName:bundle: <stripped>
	0xe880  @objc HealthEducationViewController..cxx_destruct <stripped>

	// Swift methods
	0xd9f0  func HealthEducationViewController.componentViews.getter // getter 
	0xdbb0  class func HealthEducationViewController.__allocating_init(title:components:) // init 
	0xde00  func HealthEducationViewController.setUpScrollingContentView() // method 
 }

 class HealthEducationUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0x10430  @objc SectionHeaderView.initWithFrame: <stripped>
	0x104b0  @objc SectionHeaderView.initWithCoder: <stripped>
 }

 class HealthEducationUI.ImageView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x107b0  @objc ImageView.initWithFrame: <stripped>
	0x107e0  @objc ImageView.initWithCoder: <stripped>
	0x10970  @objc ImageView..cxx_destruct <stripped>

	// Swift methods
	0x10800  func <stripped> // method 
 }

 class HealthEducationUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x116e0  @objc DynamicHeightTextView.initWithFrame: <stripped>
	0x11710  @objc DynamicHeightTextView.initWithCoder: <stripped>
	0x11a50  @objc DynamicHeightTextView.traitCollectionDidChange: <stripped>
	0x11af0  @objc DynamicHeightTextView..cxx_destruct <stripped>

	// Swift methods
	0x111b0  func <stripped> // getter 
	0x11370  func <stripped> // method 
 }

 struct HealthEducationUI.HorizontalMeterViewModel {

	// Properties
	let valueOffsetPercentage : Float // +0x0
	let valueWidthPercentage : Float // +0x4
	let foregroundColor : UIColor // +0x8
	let backgroundColor : UIColor // +0x10
	let cornerRadius : CGFloat // +0x18
 }

 class HealthEducationUI.HorizontalMeterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : HorizontalMeterViewModel // +0x8 (0x20)
	var foregroundViewOffset : NSLayoutConstraint? // +0x28 (0x8)
	var foregroundViewWidth : NSLayoutConstraint? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x12b10  @objc HorizontalMeterView.initWithCoder: <stripped>
	0x12c80  @objc HorizontalMeterView.layoutSubviews <stripped>
	0x12d60  @objc HorizontalMeterView.initWithFrame: <stripped>
	0x12de0  @objc HorizontalMeterView..cxx_destruct <stripped>

	// Swift methods
	0x11e20  class func HorizontalMeterView.__allocating_init(model:) // init 
 }

 enum HealthEducationUI.HealthEducationTextAttributes {

	// Properties
	case custom : [NSAttributedStringKey : Swift.AnyObject]
	case title  
	case sectionHeader  
	case paragraph  
	case button  
	case caption  
	case linkedText  
 }

 class HealthEducationUI.ButtonView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let button : UIButton // +0x8 (0x8)
	var buttonAction : ()? // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0x14e40  @objc ButtonView.initWithFrame: <stripped>
	0x14e70  @objc ButtonView.initWithCoder: <stripped>
	0x14ef0  @objc ButtonView.performActionWithSender: <stripped>
	0x14fd0  @objc ButtonView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x15060  @objc CustomContentView.initWithFrame: <stripped>
	0x150f0  @objc CustomContentView.initWithCoder: <stripped>
	0x151a0  @objc CustomContentView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_descriptionLabel : UILabel? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15550  @objc TileSashView.initWithFrame: <stripped>
	0x15580  @objc TileSashView.initWithCoder: <stripped>
	0x156f0  @objc TileSashView.layoutSubviews <stripped>
	0x15d30  @objc TileSashView.traitCollectionDidChange: <stripped>
	0x15dd0  @objc TileSashView..cxx_destruct <stripped>

	// Swift methods
	0x151f0  func <stripped> // getter 
	0x15210  func <stripped> // getter 
 }

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
	var attributes : HealthEducationTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x1d30  @objc DynamicHeightLabelView.initWithFrame: <stripped>
	0x1d60  @objc DynamicHeightLabelView.initWithCoder: <stripped>
	0x1ea0  @objc DynamicHeightLabelView.traitCollectionDidChange: <stripped>
	0x2140  @objc DynamicHeightLabelView..cxx_destruct <stripped>

	// Swift methods
	0x1ef0  func <stripped> // method 
	0x20b0  func <stripped> // method 
 }

 class HealthEducationUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var linkedURL : ï  // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x2e30  @objc LinkedTextView.initWithFrame: <stripped>
	0x2e60  @objc LinkedTextView.initWithCoder: <stripped>
	0x33f0  @objc LinkedTextView..cxx_destruct <stripped>

	// Swift methods
	0x2e80  func <stripped> // method 
	0x3240  func <stripped> // getter 
 }

 class HealthEducationUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0x3c70  @objc TitleView.initWithFrame: <stripped>
	0x3ce0  @objc TitleView.initWithCoder: <stripped>
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
	0x40e0  @objc SoundLevelView.initWithCoder: <stripped>
	0x42b0  @objc SoundLevelView.traitCollectionDidChange: <stripped>
	0x4420  @objc SoundLevelView.initWithFrame: <stripped>
	0x4330  @objc SoundLevelView..cxx_destruct <stripped>

	// Swift methods
	0x4070  class func SoundLevelView.__allocating_init(model:) // init 
 }

 struct HealthEducationUI.HealthEducationTileViewModel {

	// Properties
	let title : String // +0x0
	let description : String // +0x10
	let backgroundImage : UIImage // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let presentation : ¯  // +0x28
 }

 class HealthEducationUI.HealthEducationTileView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let highlightedDuration : Double // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedOverlayAlpha : 5  // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedUnderlayAlpha : 5  // +0x18 (0x8)
	var $__lazy_storage_$_backgroundImageView : UIImageView? // +0x20 (0x8)
	var $__lazy_storage_$_selectedImageOverlay : UIView? // +0x28 (0x8)
	var $__lazy_storage_$_selectedSashUnderlay : UIView? // +0x30 (0x8)
	var $__lazy_storage_$_sashView : TileSashView // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x6080  @objc HealthEducationTileView.initWithFrame: <stripped>
	0x6120  @objc HealthEducationTileView.initWithCoder: <stripped>
	0x69a0  @objc HealthEducationTileView..cxx_destruct <stripped>

	// Swift methods
	0x5b40  func HealthEducationTileView.sashView.getter // getter 
	0x6160  func HealthEducationTileView.update(viewModel:) // method 
	0x6400  func HealthEducationTileView.setHighlighted(_:animated:) // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case linkedText :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case paragraphWithLinkedText : linkedText
 }

 class HealthEducationUI.ParagraphView : DynamicHeightTextView {
	// ObjC -> Swift bridged methods
	0x9eb0  @objc ParagraphView.initWithFrame: <stripped>
	0x9f20  @objc ParagraphView.initWithCoder: <stripped>
 }

 class HealthEducationUI.HealthEducationViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : HealthEducationComponent // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xc1d0  @objc HealthEducationViewController.initWithCoder: <stripped>
	0xc270  @objc HealthEducationViewController.viewDidLoad <stripped>
	0xcd30  @objc HealthEducationViewController.initWithNibName:bundle: <stripped>
	0xcc50  @objc HealthEducationViewController..cxx_destruct <stripped>

	// Swift methods
	0xbed0  func HealthEducationViewController.componentViews.getter // getter 
	0xc090  class func HealthEducationViewController.__allocating_init(title:components:) // init 
	0xc2d0  func HealthEducationViewController.setUpScrollingContentView() // method 
 }

 class HealthEducationUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0xf000  @objc SectionHeaderView.initWithFrame: <stripped>
	0xf070  @objc SectionHeaderView.initWithCoder: <stripped>
 }

 class HealthEducationUI.ImageView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xf390  @objc ImageView.initWithFrame: <stripped>
	0xf3c0  @objc ImageView.initWithCoder: <stripped>
	0xf5a0  @objc ImageView..cxx_destruct <stripped>

	// Swift methods
	0xf450  func <stripped> // method 
 }

 class HealthEducationUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x10300  @objc DynamicHeightTextView.initWithFrame: <stripped>
	0x10330  @objc DynamicHeightTextView.initWithCoder: <stripped>
	0x10470  @objc DynamicHeightTextView.traitCollectionDidChange: <stripped>
	0x104f0  @objc DynamicHeightTextView..cxx_destruct <stripped>

	// Swift methods
	0xfce0  func <stripped> // method 
	0xfe90  func <stripped> // method 
 }

 struct HealthEducationUI.HorizontalMeterViewModel {

	// Properties
	let valueOffsetPercentage : Float // +0x0
	let valueWidthPercentage : Float // +0x4
	let foregroundColor : UIColor // +0x8
	let backgroundColor : UIColor // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cornerRadius : 5  // +0x18
 }

 class HealthEducationUI.HorizontalMeterView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : HorizontalMeterViewModel // +0x8 (0x20)
	var foregroundViewOffset : NSLayoutConstraint? // +0x28 (0x8)
	var foregroundViewWidth : NSLayoutConstraint? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x109e0  @objc HorizontalMeterView.initWithCoder: <stripped>
	0x10b40  @objc HorizontalMeterView.layoutSubviews <stripped>
	0x10c20  @objc HorizontalMeterView.initWithFrame: <stripped>
	0x10c80  @objc HorizontalMeterView..cxx_destruct <stripped>

	// Swift methods
	0x108a0  class func HorizontalMeterView.__allocating_init(model:) // init 
 }

 enum HealthEducationUI.HealthEducationTextAttributes {

	// Properties
	case custom : Key
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
	0x12b50  @objc ButtonView.initWithFrame: <stripped>
	0x12b80  @objc ButtonView.initWithCoder: <stripped>
	0x12c20  @objc ButtonView.performActionWithSender: <stripped>
	0x12ce0  @objc ButtonView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x12f80  @objc CustomContentView.initWithFrame: <stripped>
	0x13000  @objc CustomContentView.initWithCoder: <stripped>
	0x13090  @objc CustomContentView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_descriptionLabel : UILabel? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x132d0  @objc TileSashView.initWithFrame: <stripped>
	0x13380  @objc TileSashView.initWithCoder: <stripped>
	0x13570  @objc TileSashView.layoutSubviews <stripped>
	0x13a70  @objc TileSashView.traitCollectionDidChange: <stripped>
	0x13af0  @objc TileSashView..cxx_destruct <stripped>

	// Swift methods
 }

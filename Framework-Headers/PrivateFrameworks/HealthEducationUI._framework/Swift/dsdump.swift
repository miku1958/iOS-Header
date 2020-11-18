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
	0x1c80  @objc DynamicHeightLabelView.initWithFrame: <stripped>
	0x1cb0  @objc DynamicHeightLabelView.initWithCoder: <stripped>
	0x1df0  @objc DynamicHeightLabelView.traitCollectionDidChange: <stripped>
	0x2090  @objc DynamicHeightLabelView..cxx_destruct <stripped>

	// Swift methods
	0x1e40  func <stripped> // method 
	0x2000  func <stripped> // method 
 }

 class HealthEducationUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var linkedURL : ï  // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x2d80  @objc LinkedTextView.initWithFrame: <stripped>
	0x2db0  @objc LinkedTextView.initWithCoder: <stripped>
	0x3340  @objc LinkedTextView..cxx_destruct <stripped>

	// Swift methods
	0x2dd0  func <stripped> // method 
	0x3190  func <stripped> // getter 
 }

 class HealthEducationUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0x3bc0  @objc TitleView.initWithFrame: <stripped>
	0x3c30  @objc TitleView.initWithCoder: <stripped>
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
	0x4030  @objc SoundLevelView.initWithCoder: <stripped>
	0x4200  @objc SoundLevelView.traitCollectionDidChange: <stripped>
	0x4370  @objc SoundLevelView.initWithFrame: <stripped>
	0x4280  @objc SoundLevelView..cxx_destruct <stripped>

	// Swift methods
	0x3fc0  class func SoundLevelView.__allocating_init(model:) // init 
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
	0x5fd0  @objc HealthEducationTileView.initWithFrame: <stripped>
	0x6070  @objc HealthEducationTileView.initWithCoder: <stripped>
	0x68f0  @objc HealthEducationTileView..cxx_destruct <stripped>

	// Swift methods
	0x5a90  func HealthEducationTileView.sashView.getter // getter 
	0x60b0  func HealthEducationTileView.update(viewModel:) // method 
	0x6350  func HealthEducationTileView.setHighlighted(_:animated:) // method 
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
	0x9e00  @objc ParagraphView.initWithFrame: <stripped>
	0x9e70  @objc ParagraphView.initWithCoder: <stripped>
 }

 class HealthEducationUI.HealthEducationViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : HealthEducationComponent // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xc120  @objc HealthEducationViewController.initWithCoder: <stripped>
	0xc1c0  @objc HealthEducationViewController.viewDidLoad <stripped>
	0xcc80  @objc HealthEducationViewController.initWithNibName:bundle: <stripped>
	0xcba0  @objc HealthEducationViewController..cxx_destruct <stripped>

	// Swift methods
	0xbe20  func HealthEducationViewController.componentViews.getter // getter 
	0xbfe0  class func HealthEducationViewController.__allocating_init(title:components:) // init 
	0xc220  func HealthEducationViewController.setUpScrollingContentView() // method 
 }

 class HealthEducationUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
	0xef50  @objc SectionHeaderView.initWithFrame: <stripped>
	0xefc0  @objc SectionHeaderView.initWithCoder: <stripped>
 }

 class HealthEducationUI.ImageView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xf2e0  @objc ImageView.initWithFrame: <stripped>
	0xf310  @objc ImageView.initWithCoder: <stripped>
	0xf4f0  @objc ImageView..cxx_destruct <stripped>

	// Swift methods
	0xf3a0  func <stripped> // method 
 }

 class HealthEducationUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x10250  @objc DynamicHeightTextView.initWithFrame: <stripped>
	0x10280  @objc DynamicHeightTextView.initWithCoder: <stripped>
	0x103c0  @objc DynamicHeightTextView.traitCollectionDidChange: <stripped>
	0x10440  @objc DynamicHeightTextView..cxx_destruct <stripped>

	// Swift methods
	0xfc30  func <stripped> // method 
	0xfde0  func <stripped> // method 
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
	0x10930  @objc HorizontalMeterView.initWithCoder: <stripped>
	0x10a90  @objc HorizontalMeterView.layoutSubviews <stripped>
	0x10b70  @objc HorizontalMeterView.initWithFrame: <stripped>
	0x10bd0  @objc HorizontalMeterView..cxx_destruct <stripped>

	// Swift methods
	0x107f0  class func HorizontalMeterView.__allocating_init(model:) // init 
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
	0x12aa0  @objc ButtonView.initWithFrame: <stripped>
	0x12ad0  @objc ButtonView.initWithCoder: <stripped>
	0x12b70  @objc ButtonView.performActionWithSender: <stripped>
	0x12c30  @objc ButtonView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x12ed0  @objc CustomContentView.initWithFrame: <stripped>
	0x12f50  @objc CustomContentView.initWithCoder: <stripped>
	0x12fe0  @objc CustomContentView..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_descriptionLabel : UILabel? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x13220  @objc TileSashView.initWithFrame: <stripped>
	0x132d0  @objc TileSashView.initWithCoder: <stripped>
	0x134c0  @objc TileSashView.layoutSubviews <stripped>
	0x139c0  @objc TileSashView.traitCollectionDidChange: <stripped>
	0x13a40  @objc TileSashView..cxx_destruct <stripped>

	// Swift methods
 }

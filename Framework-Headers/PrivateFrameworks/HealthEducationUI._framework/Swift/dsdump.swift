 protocol HealthEducationUI.HealthEducationArticleDataProviding // 8 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol HealthEducationUI.ReuseIdentifiable // 1 requirements
 {
	// class getter
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 class HealthEducationUI.LinkedTextCollectionViewCell : ParagraphCollectionViewCell {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
	var linkedURL : URL? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x1830  @objc LinkedTextCollectionViewCell.initWithFrame: <stripped>
	0x1860  @objc LinkedTextCollectionViewCell.initWithCoder: <stripped>
	0x1980  @objc LinkedTextCollectionViewCell.prepareForReuse <stripped>
	0x1be0  @objc LinkedTextCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
	0x1a20  func <stripped> // getter 
 }

 class HealthEducationUI.TitleCollectionViewCell : DynamicHeightLabelCollectionViewCell {
	// ObjC -> Swift bridged methods
	0x3190  @objc TitleCollectionViewCell.initWithFrame: <stripped>
	0x3210  @objc TitleCollectionViewCell.initWithCoder: <stripped>
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
	0x3890  @objc SoundLevelView.initWithCoder: <stripped>
	0x3af0  @objc SoundLevelView.traitCollectionDidChange: <stripped>
	0x3bf0  @objc SoundLevelView.initWithFrame: <stripped>
	0x3c70  @objc SoundLevelView..cxx_destruct <stripped>

	// Swift methods
	0x3800  class func SoundLevelView.__allocating_init(model:) // init 
 }

 class HealthEducationUI.DynamicHeightTextViewCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x5960  @objc DynamicHeightTextViewCollectionViewCell.initWithFrame: <stripped>
	0x5990  @objc DynamicHeightTextViewCollectionViewCell.initWithCoder: <stripped>
	0x5cd0  @objc DynamicHeightTextViewCollectionViewCell.traitCollectionDidChange: <stripped>
	0x5dd0  @objc DynamicHeightTextViewCollectionViewCell.prepareForReuse <stripped>
	0x5eb0  @objc DynamicHeightTextViewCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
	0x5440  func <stripped> // getter 
	0x5e00  func <stripped> // method 
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
	0x6620  @objc HealthEducationTileView.initWithFrame: <stripped>
	0x66c0  @objc HealthEducationTileView.initWithCoder: <stripped>
	0x7190  @objc HealthEducationTileView..cxx_destruct <stripped>

	// Swift methods
	0x6700  func HealthEducationTileView.update(viewModel:) // method 
	0x6ad0  func HealthEducationTileView.setHighlighted(_:animated:) // method 
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

 class HealthEducationUI.ParagraphCollectionViewCell : DynamicHeightTextViewCollectionViewCell {
	// ObjC -> Swift bridged methods
	0xb320  @objc ParagraphCollectionViewCell.initWithFrame: <stripped>
	0xb3a0  @objc ParagraphCollectionViewCell.initWithCoder: <stripped>
 }

 class HealthEducationUI.HealthEducationViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let dataSource : HealthEducationDataSource // +0x8 (0x8)
	var $__lazy_storage_$_collectionView : UICollectionView? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd810  @objc HealthEducationViewController.initWithCoder: <stripped>
	0xda60  @objc HealthEducationViewController.viewDidLoad <stripped>
	0xdc80  @objc HealthEducationViewController.traitCollectionDidChange: <stripped>
	0xdd70  @objc HealthEducationViewController.initWithNibName:bundle: <stripped>
	0xddf0  @objc HealthEducationViewController..cxx_destruct <stripped>

	// Swift methods
	0xcfd0  func HealthEducationViewController.collectionView.getter // getter 
	0xd500  class func HealthEducationViewController.__allocating_init(title:components:) // init 
 }

 class HealthEducationUI.SectionHeaderCollectionViewCell : DynamicHeightLabelCollectionViewCell {
	// ObjC -> Swift bridged methods
	0xf350  @objc SectionHeaderCollectionViewCell.initWithFrame: <stripped>
	0xf3d0  @objc SectionHeaderCollectionViewCell.initWithCoder: <stripped>
 }

 class HealthEducationUI.ImageCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xf710  @objc ImageCollectionViewCell.initWithFrame: <stripped>
	0xf740  @objc ImageCollectionViewCell.initWithCoder: <stripped>
	0xf760  @objc ImageCollectionViewCell.prepareForReuse <stripped>
	0xf9a0  @objc ImageCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
	0xf810  func <stripped> // method 
 }

 class HealthEducationUI.DynamicHeightLabelCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_label : UILabel? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthEducationTextAttributes? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x10800  @objc DynamicHeightLabelCollectionViewCell.initWithFrame: <stripped>
	0x10830  @objc DynamicHeightLabelCollectionViewCell.initWithCoder: <stripped>
	0x10b40  @objc DynamicHeightLabelCollectionViewCell.traitCollectionDidChange: <stripped>
	0x10d10  @objc DynamicHeightLabelCollectionViewCell.prepareForReuse <stripped>
	0x10d90  @objc DynamicHeightLabelCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
	0x10240  func <stripped> // method 
	0x101e0  func <stripped> // method 
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
	0x11db0  @objc HorizontalMeterView.initWithCoder: <stripped>
	0x11f20  @objc HorizontalMeterView.layoutSubviews <stripped>
	0x12000  @objc HorizontalMeterView.initWithFrame: <stripped>
	0x12080  @objc HorizontalMeterView..cxx_destruct <stripped>

	// Swift methods
	0x110c0  class func HorizontalMeterView.__allocating_init(model:) // init 
 }

 class HealthEducationUI.HealthEducationDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let components : [HealthEducationComponent] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x130f0  @objc HealthEducationDataSource.init <stripped>
	0x13170  @objc HealthEducationDataSource..cxx_destruct <stripped>

	// Swift methods
	0x12f80  class func HealthEducationDataSource.__allocating_init(components:) // init 
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

 class HealthEducationUI.ButtonCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let button : UIButton // +0x8 (0x8)
	var buttonAction : ()? // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0x14560  @objc ButtonCollectionViewCell.initWithFrame: <stripped>
	0x14590  @objc ButtonCollectionViewCell.initWithCoder: <stripped>
	0x14610  @objc ButtonCollectionViewCell.prepareForReuse <stripped>
	0x14690  @objc ButtonCollectionViewCell.performActionWithSender: <stripped>
	0x14770  @objc ButtonCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.CustomViewCollectionViewCell : UICollectionViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x14800  @objc CustomViewCollectionViewCell.initWithFrame: <stripped>
	0x14890  @objc CustomViewCollectionViewCell.initWithCoder: <stripped>
	0x148f0  @objc CustomViewCollectionViewCell.prepareForReuse <stripped>
	0x149f0  @objc CustomViewCollectionViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthEducationUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_descriptionLabel : UILabel? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14e30  @objc TileSashView.initWithFrame: <stripped>
	0x14e60  @objc TileSashView.initWithCoder: <stripped>
	0x14fd0  @objc TileSashView.layoutSubviews <stripped>
	0x15610  @objc TileSashView.traitCollectionDidChange: <stripped>
	0x156b0  @objc TileSashView..cxx_destruct <stripped>

	// Swift methods
	0x14ad0  func <stripped> // getter 
	0x14af0  func <stripped> // getter 
 }

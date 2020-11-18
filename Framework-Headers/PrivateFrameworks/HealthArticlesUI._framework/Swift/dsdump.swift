 protocol HealthArticlesUI.HealthArticleInformationProviding // 8 requirements
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
 protocol HealthArticlesUI.HealthArticleComponentsProviding // 1 requirements
 {
	// getter
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FeatureKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C._NSRange {

	// Properties
	var location : Int
	var length : Int
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 class HealthArticlesUI.DynamicHeightLabelView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_label : UILabel?
	var text : String?
	var attributes : HealthArticleTextAttributes

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a1c000076a0 (0x21c000076a0) in binary!
	0x2738  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find offset 0x1a28 in binary!
WARNING: couldn't find offset 0x1a28 in binary!
WARNING: couldn't find address 0x1bb2000076b0 (0x3b2000076b0) in binary!
	0x0  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6fcfffec610  @objc DynamicHeightLabelView.(null) <stripped>
	0xfffeccd8  @objc DynamicHeightLabelView.x< <stripped>

	// Swift methods
	0x1b00  func <stripped> // getter 
	0x2050  func <stripped> // method 
	0x21d0  func <stripped> // method 
 }

 class HealthArticlesUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
	var linkContent : LinkContent // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19e400007668 (0x1e400007668) in binary!
	0x2700  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x19fc00007628 (0x1fc00007628) in binary!
	0x18000000c  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x1af400007608 (0x2f400007608) in binary!
	0x28000000c  @objc LinkedTextView.(null) <stripped>

	// Swift methods
	0x3030  func <stripped> // method 
	0x3540  func <stripped> // getter 
 }

 class HealthArticlesUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x199c00007620 (0x19c00007620) in binary!
	0x26b8  @objc TitleView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x694fffeda68  @objc TitleView.(null) <stripped>
 }

 struct HealthArticlesUI.TileViewModel {

	// Properties
	let title : String
	let description : String
	let backgroundImage : UIImage
WARNING: couldn't find address 0x0 (0x0) in binary!
	let presentation : ¡)
 }

 class HealthArticlesUI.HealthArticleTileView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let highlightedDuration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedOverlayAlpha : Ï(
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedUnderlayAlpha : Ï(
	var $__lazy_storage_$_backgroundImageView : UIImageView?
	var $__lazy_storage_$_selectedImageOverlay : UIView?
	var $__lazy_storage_$_selectedSashUnderlay : UIView?
	var $__lazy_storage_$_sashView : TileSashView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x197c00007600 (0x17c00007600) in binary!
	0x2698  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x1994000075c0 (0x194000075c0) in binary!
	0x28000000c  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x194c000075d0 (0x14c000075d0) in binary!
	0x2668  @objc HealthArticleTileView.(null) <stripped>

	// Swift methods
	0x3ff0  func <stripped> // getter 
	0x4010  func <stripped> // getter 
	0x4090  func <stripped> // getter 
	0x4160  func <stripped> // getter 
	0x4580  func <stripped> // method 
	0x47c0  func <stripped> // method 
 }

 enum HealthArticlesUI.HealthArticleComponent {

	// Properties
	case title : String
	case sectionHeader : String
	case paragraph : String
	case orderedList : [String]
	case unorderedList : [String]
	case paragraphAndOrderedList : (String, [String])
	case paragraphAndUnorderedList : (String, [String])
	case image : (UIImage, inset: Bool)
	case button : (String, ())
	case customView : UIView
	case customViewControllerView : UIViewController
	case caption : String
	case linkedText : LinkContent
	case paragraphWithLinkedText : LinkContent
 }

 enum HealthArticlesUI.LinkContent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case linkedURL : Ù'
	case customLinkHandler : (_:)
 }

 class HealthArticlesUI.ParagraphView : DynamicHeightTextView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194c000075d0 (0x14c000075d0) in binary!
	0x2668  @objc ParagraphView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x78cffff3fc8  @objc ParagraphView.(null) <stripped>
 }

 class HealthArticlesUI.HealthArticleViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : HealthArticleComponent // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1950 in binary!
WARNING: couldn't find offset 0x1950 in binary!
WARNING: couldn't find address 0x265400007650 (0x65400007650) in binary!
	0x0  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x1944000077c8 (0x144000077c8) in binary!
	0x2622  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x192c00007558 (0x12c00007558) in binary!
	0x28000000c  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x18e400007568 (0xe400007568) in binary!
	0x2600  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x72cffff87a0  @objc HealthArticleViewController.(null) <stripped>

	// Swift methods
	0xa6e0  func <stripped> // getter 
	0xa8d0  func <stripped> // getter 
	0xa930  class func HealthArticleViewController.__allocating_init(title:components:) // init 
	0xab00  func <stripped> // method 
	0xb270  func <stripped> // method 
 }

 enum HealthArticlesUI.UserInfoKey { }

 class HealthArticlesUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18e400007568 (0xe400007568) in binary!
	0x2600  @objc SectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x72cffff87a0  @objc SectionHeaderView.(null) <stripped>
 }

 struct HealthArticlesUI.HealthArticleTileViewModel {

	// Properties
	let articleIdentifier : String // +0x0
 }

 class HealthArticlesUI.ArticleTileViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : !'
	var $__lazy_storage_$_articleTileView : HealthArticleTileView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18f400007730 (0xf400007730) in binary!
	0x25d2  @objc ArticleTileViewController.(null) <stripped>
WARNING: couldn't find offset 0x18d0 in binary!
WARNING: couldn't find offset 0x18d0 in binary!
WARNING: couldn't find address 0x25d4000075d0 (0x5d4000075d0) in binary!
	0x0  @objc ArticleTileViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5a4ffffb7d8  @objc ArticleTileViewController.(null) <stripped>
	0xffffb950  @objc ArticleTileViewController. <stripped>

	// Swift methods
	0xeda0  func <stripped> // getter 
	0xede0  func <stripped> // setter 
	0xeea0  func <stripped> // modifyCoroutine 
	0xef60  func <stripped> // getter 
	0xf2c0  func <stripped> // method 
	0xf400  func <stripped> // method 
	0xf5d0  func <stripped> // method 
	0xfb70  func <stripped> // method 
	0xfe20  func <stripped> // method 
	0x10500  func <stripped> // method 
 }

 struct HealthArticlesUI.TapAnalyticsEvent {

	// Properties
	let articleDidClick : NSNumber // +0x0
	let articleHKDataType : NSString? // +0x8
	let articleTitle : NSString // +0x10
	let articleLocation : NSString // +0x18
 }

 enum HealthArticlesUI.CodingKeys {

	// Properties
	case articleIdentifier  
 }

 class HealthArticlesUI.ImageView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x188c00007510 (0x8c00007510) in binary!
	0x25a8  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x18a4000074d0 (0xa4000074d0) in binary!
	0x48000000c  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x185c000074e0 (0x5c000074e0) in binary!
	0x2578  @objc ImageView.(null) <stripped>

	// Swift methods
	0x12350  func <stripped> // method 
 }

 class HealthArticlesUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthArticleTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x185c000074e0 (0x5c000074e0) in binary!
	0x2578  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find offset 0x1868 in binary!
WARNING: couldn't find offset 0x1868 in binary!
WARNING: couldn't find address 0x19f2000074f0 (0x1f2000074f0) in binary!
	0x0  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x53cffffdf20  @objc DynamicHeightTextView.(null) <stripped>
	0x45cffffdfd8  @objc DynamicHeightTextView.HƒÄ[]Ã€ <stripped>

	// Swift methods
	0x125e0  func <stripped> // getter 
	0x127a0  func <stripped> // method 
	0x12900  func <stripped> // method 
 }

 enum HealthArticlesUI.HealthArticleTextAttributes {

	// Properties
	case custom : Key
	case title  
	case sectionHeader  
	case paragraph  
	case button  
	case caption  
	case linkedText  
 }

 enum HealthArticlesUI.ArticleMutualExclusionPolicy {

	// Properties
	case custom : String
	case none  
	case category  
 }

 class HealthArticlesUI.ButtonView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let button : UIButton
	var buttonAction : ()?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1824000074a8 (0x24000074a8) in binary!
	0x2540  @objc ButtonView.(null) <stripped>
WARNING: couldn't find offset 0x1830 in binary!
WARNING: couldn't find offset 0x1830 in binary!
WARNING: couldn't find address 0x19ba000077f0 (0x1ba000077f0) in binary!
	0x0  @objc ButtonView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x504ffffe0f8  @objc ButtonView.(null) <stripped>
	0xffffe1d0  @objc ButtonView.èƒ< <stripped>

	// Swift methods
 }

 class HealthArticlesUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17ec00007470 (0x7ec00007470) in binary!
	0x2508  @objc CustomContentView.(null) <stripped>
	0x38000000c  @objc CustomContentView.UH‰å‰ðH‰Ö‰Â]é‰ï <stripped>
WARNING: couldn't find address 0x17bc00007440 (0x7bc00007440) in binary!
	0x24d8  @objc CustomContentView.(null) <stripped>

	// Swift methods
 }

 class HealthArticlesUI.CustomContentViewControllerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customViewController : UIViewController?
	var customView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17bc00007440 (0x7bc00007440) in binary!
	0x24d8  @objc CustomContentViewControllerView.(null) <stripped>
WARNING: couldn't find address 0x17d400007400 (0x7d400007400) in binary!
	0x58000000c  @objc CustomContentViewControllerView.(null) <stripped>
WARNING: couldn't find address 0x178c00007410 (0x78c00007410) in binary!
	0x24a8  @objc CustomContentViewControllerView.(null) <stripped>

	// Swift methods
	0x14ed0  func <stripped> // method 
 }

 class HealthArticlesUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_descriptionLabel : UILabel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x178c00007410 (0x78c00007410) in binary!
	0x24a8  @objc TileSashView.(null) <stripped>
WARNING: couldn't find offset 0x1916 in binary!
WARNING: couldn't find offset 0x1916 in binary!
WARNING: couldn't find address 0x17a400007778 (0x7a400007778) in binary!
	0x0  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x178c000073b8 (0x78c000073b8) in binary!
	0x25029232840  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2049557365  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x65483a5443454a4f (0x25443454a4f) in binary!
	0x12d73656c63  @objc TileSashView.(null) <stripped>

	// Swift methods
	0x15090  func <stripped> // getter 
	0x150b0  func <stripped> // getter 
 }

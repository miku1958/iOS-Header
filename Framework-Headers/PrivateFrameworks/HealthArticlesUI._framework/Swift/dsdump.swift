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
WARNING: couldn't find address 0x192c000085b0 (0x12c000085b0) in binary!
	0x2648  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find offset 0x1938 in binary!
WARNING: couldn't find offset 0x1938 in binary!
WARNING: couldn't find address 0x1ac2000085c0 (0x2c2000085c0) in binary!
	0x0  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x60cfffecc70  @objc DynamicHeightLabelView.(null) <stripped>
	0xfffed338  @objc DynamicHeightLabelView.‰ÃH‹5OÊ <stripped>

	// Swift methods
	0x2250  func <stripped> // getter 
	0x27a0  func <stripped> // method 
	0x2920  func <stripped> // method 
 }

 class HealthArticlesUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
	var linkContent : LinkContent // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18f400008578 (0xf400008578) in binary!
	0x2610  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x190c00008538 (0x10c00008538) in binary!
	0x18000000c  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x1a0400008518 (0x20400008518) in binary!
	0x28000000c  @objc LinkedTextView.(null) <stripped>

	// Swift methods
	0x3780  func <stripped> // method 
	0x3c90  func <stripped> // getter 
 }

 class HealthArticlesUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18ac00008530 (0xac00008530) in binary!
	0x25c8  @objc TitleView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5a4fffee0b8  @objc TitleView.(null) <stripped>
 }

 struct HealthArticlesUI.TileViewModel {

	// Properties
	let title : String
	let description : String
	let backgroundImage : UIImage
WARNING: couldn't find address 0x0 (0x0) in binary!
	let presentation : *
 }

 class HealthArticlesUI.HealthArticleTileView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let highlightedDuration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedOverlayAlpha : /)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedUnderlayAlpha : /)
	var $__lazy_storage_$_backgroundImageView : UIImageView?
	var $__lazy_storage_$_selectedImageOverlay : UIView?
	var $__lazy_storage_$_selectedSashUnderlay : UIView?
	var $__lazy_storage_$_sashView : TileSashView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x188c00008510 (0x8c00008510) in binary!
	0x25a8  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x18a4000084d0 (0xa4000084d0) in binary!
	0x28000000c  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x185c000084e0 (0x5c000084e0) in binary!
	0x2578  @objc HealthArticleTileView.(null) <stripped>

	// Swift methods
	0x4730  func <stripped> // getter 
	0x4750  func <stripped> // getter 
	0x47d0  func <stripped> // getter 
	0x48a0  func <stripped> // getter 
	0x4cc0  func <stripped> // method 
	0x4e40  func <stripped> // method 
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
	case caption : String
	case linkedText : LinkContent
	case paragraphWithLinkedText : LinkContent
 }

 enum HealthArticlesUI.LinkContent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case linkedURL : O(
	case customLinkHandler : (_:)
 }

 class HealthArticlesUI.ParagraphView : DynamicHeightTextView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x185c000084e0 (0x5c000084e0) in binary!
	0x2578  @objc ParagraphView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x684ffff4438  @objc ParagraphView.(null) <stripped>
 }

 class HealthArticlesUI.HealthArticleViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : HealthArticleComponent // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1860 in binary!
WARNING: couldn't find offset 0x1860 in binary!
WARNING: couldn't find address 0x256400008560 (0x56400008560) in binary!
	0x0  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x1854000086c0 (0x54000086c0) in binary!
	0x2532  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x183c00008468 (0x3c00008468) in binary!
	0x28000000c  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x17f400008478 (0x7f400008478) in binary!
	0x2510  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x624ffff8a50  @objc HealthArticleViewController.(null) <stripped>

	// Swift methods
	0xac40  func <stripped> // getter 
	0xae30  func <stripped> // getter 
	0xae90  class func HealthArticleViewController.__allocating_init(title:components:) // init 
	0xb060  func <stripped> // method 
	0xb7d0  func <stripped> // method 
 }

 enum HealthArticlesUI.UserInfoKey { }

 class HealthArticlesUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17f400008478 (0x7f400008478) in binary!
	0x2510  @objc SectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x624ffff8a50  @objc SectionHeaderView.(null) <stripped>
 }

 struct HealthArticlesUI.HealthArticleTileViewModel {

	// Properties
	let articleIdentifier : String // +0x0
 }

 class HealthArticlesUI.ArticleTileViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : ‰'
	var $__lazy_storage_$_articleTileView : HealthArticleTileView

	// ObjC -> Swift bridged methods
	0x24e2  @objc ArticleTileViewController.„ <stripped>
WARNING: couldn't find offset 0x17e0 in binary!
WARNING: couldn't find offset 0x17e0 in binary!
WARNING: couldn't find address 0x24e4000084e0 (0x4e4000084e0) in binary!
	0x0  @objc ArticleTileViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4b4ffffba68  @objc ArticleTileViewController.(null) <stripped>
	0xffffbbe0  @objc ArticleTileViewController.H‰ÃL‰çÿüž <stripped>

	// Swift methods
	0xf140  func <stripped> // getter 
	0xf180  func <stripped> // setter 
	0xf240  func <stripped> // modifyCoroutine 
	0xf300  func <stripped> // getter 
	0xf660  func <stripped> // method 
	0xf7a0  func <stripped> // method 
	0xf970  func <stripped> // method 
	0xff10  func <stripped> // method 
	0x101c0  func <stripped> // method 
	0x108a0  func <stripped> // method 
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
WARNING: couldn't find address 0x179c00008420 (0x79c00008420) in binary!
	0x24b8  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x17b4000083e0 (0x7b4000083e0) in binary!
	0x48000000c  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x176c000083f0 (0x76c000083f0) in binary!
	0x2488  @objc ImageView.(null) <stripped>

	// Swift methods
	0x126d0  func <stripped> // method 
 }

 class HealthArticlesUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthArticleTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x176c000083f0 (0x76c000083f0) in binary!
	0x2488  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find offset 0x1778 in binary!
WARNING: couldn't find offset 0x1778 in binary!
WARNING: couldn't find address 0x190200008400 (0x10200008400) in binary!
	0x0  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x44cffffe1b0  @objc DynamicHeightTextView.(null) <stripped>
	0x36cffffe268  @objc DynamicHeightTextView.L‰ÿPQSRè\? <stripped>

	// Swift methods
	0x12960  func <stripped> // getter 
	0x12b20  func <stripped> // method 
	0x12c80  func <stripped> // method 
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
WARNING: couldn't find address 0x1734000083b8 (0x734000083b8) in binary!
	0x2450  @objc ButtonView.(null) <stripped>
WARNING: couldn't find offset 0x1740 in binary!
WARNING: couldn't find offset 0x1740 in binary!
WARNING: couldn't find address 0x18ca000086d8 (0xca000086d8) in binary!
	0x0  @objc ButtonView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x414ffffe388  @objc ButtonView.(null) <stripped>
	0xffffe470  @objc ButtonView. <stripped>

	// Swift methods
 }

 class HealthArticlesUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16fc00008380 (0x6fc00008380) in binary!
	0x2418  @objc CustomContentView.(null) <stripped>
WARNING: couldn't find address 0x171400008340 (0x71400008340) in binary!
	0x58000000c  @objc CustomContentView.(null) <stripped>
WARNING: couldn't find address 0x16cc00008350 (0x6cc00008350) in binary!
	0x23e8  @objc CustomContentView.(null) <stripped>

	// Swift methods
 }

 class HealthArticlesUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_descriptionLabel : UILabel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x16cc00008350 (0x6cc00008350) in binary!
	0x23e8  @objc TileSashView.(null) <stripped>
WARNING: couldn't find offset 0x1856 in binary!
WARNING: couldn't find offset 0x1856 in binary!
WARNING: couldn't find address 0x16e400008690 (0x6e400008690) in binary!
	0x0  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x16cc000082f8 (0x6cc000082f8) in binary!
	0x25029232840  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2049557365  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x65483a5443454a4f (0x25443454a4f) in binary!
	0x12d73656c63  @objc TileSashView.(null) <stripped>

	// Swift methods
	0x15180  func <stripped> // getter 
	0x151a0  func <stripped> // getter 
 }

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
WARNING: couldn't find address 0x1a3c000076e0 (0x23c000076e0) in binary!
	0x2758  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find address 0x1bd2000076f0 (0x3d2000076f0) in binary!
	0x1a48  @objc DynamicHeightLabelView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x73cfffec510  @objc DynamicHeightLabelView.(null) <stripped>
	0xfffecbd8  @objc DynamicHeightLabelView.√Hç=êœ <stripped>

	// Swift methods
	0x19c0  func <stripped> // getter 
	0x1f10  func <stripped> // method 
	0x2090  func <stripped> // method 
 }

 class HealthArticlesUI.LinkedTextView : ParagraphView {

	// Properties
	var paragraphText : String? // +0x28 (0x10)
	var linkedText : String? // +0x38 (0x10)
	var linkContent : LinkContent // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a04000076a8 (0x204000076a8) in binary!
	0x2720  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x1a1c00007668 (0x21c00007668) in binary!
	0x18000000c  @objc LinkedTextView.(null) <stripped>
WARNING: couldn't find address 0x1b1400007648 (0x31400007648) in binary!
	0x28000000c  @objc LinkedTextView.(null) <stripped>

	// Swift methods
	0x2ef0  func <stripped> // method 
	0x3400  func <stripped> // getter 
 }

 class HealthArticlesUI.TitleView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19bc00007660 (0x1bc00007660) in binary!
	0x26d8  @objc TitleView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6d4fffed968  @objc TitleView.(null) <stripped>
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
	let highlightedOverlayAlpha : Ô(
WARNING: couldn't find address 0x0 (0x0) in binary!
	let highlightedUnderlayAlpha : Ô(
	var $__lazy_storage_$_backgroundImageView : UIImageView?
	var $__lazy_storage_$_selectedImageOverlay : UIView?
	var $__lazy_storage_$_selectedSashUnderlay : UIView?
	var $__lazy_storage_$_sashView : TileSashView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x199c00007640 (0x19c00007640) in binary!
	0x26b8  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x19b400007600 (0x1b400007600) in binary!
	0x28000000c  @objc HealthArticleTileView.(null) <stripped>
WARNING: couldn't find address 0x196c00007610 (0x16c00007610) in binary!
	0x2688  @objc HealthArticleTileView.(null) <stripped>

	// Swift methods
	0x3eb0  func <stripped> // getter 
	0x3ed0  func <stripped> // getter 
	0x3f50  func <stripped> // getter 
	0x4020  func <stripped> // getter 
	0x4440  func <stripped> // method 
	0x4680  func <stripped> // method 
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
	case linkedURL : ˘'
	case customLinkHandler : (_:)
 }

 class HealthArticlesUI.ParagraphView : DynamicHeightTextView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x196c00007610 (0x16c00007610) in binary!
	0x2688  @objc ParagraphView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7ccffff3ec8  @objc ParagraphView.(null) <stripped>
 }

 class HealthArticlesUI.HealthArticleViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let components : HealthArticleComponent // +0x8 (0x8)
	var $__lazy_storage_$_componentViews : [UIView]? // +0x10 (0x8)
	var $__lazy_storage_$_contentView : UIStackView? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1970 in binary!
WARNING: couldn't find offset 0x1970 in binary!
WARNING: couldn't find address 0x267400007690 (0x67400007690) in binary!
	0x0  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x196400007808 (0x16400007808) in binary!
	0x2642  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x194c00007598 (0x14c00007598) in binary!
	0x28000000c  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x1904000075a8 (0x104000075a8) in binary!
	0x2620  @objc HealthArticleViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x76cffff86a0  @objc HealthArticleViewController.(null) <stripped>

	// Swift methods
	0xa5a0  func <stripped> // getter 
	0xa790  func <stripped> // getter 
	0xa7f0  class func HealthArticleViewController.__allocating_init(title:components:) // init 
	0xa9c0  func <stripped> // method 
	0xb130  func <stripped> // method 
 }

 enum HealthArticlesUI.UserInfoKey { }

 class HealthArticlesUI.SectionHeaderView : DynamicHeightLabelView {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1904000075a8 (0x104000075a8) in binary!
	0x2620  @objc SectionHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x76cffff86a0  @objc SectionHeaderView.(null) <stripped>
 }

 struct HealthArticlesUI.HealthArticleTileViewModel {

	// Properties
	let articleIdentifier : String // +0x0
 }

 class HealthArticlesUI.ArticleTileViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var context : A'
	var $__lazy_storage_$_articleTileView : HealthArticleTileView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x191400007770 (0x11400007770) in binary!
	0x25f2  @objc ArticleTileViewController.(null) <stripped>
WARNING: couldn't find offset 0x18f0 in binary!
WARNING: couldn't find offset 0x18f0 in binary!
WARNING: couldn't find address 0x25f400007610 (0x5f400007610) in binary!
	0x0  @objc ArticleTileViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5e4ffffb6d8  @objc ArticleTileViewController.(null) <stripped>
	0xffffb850  @objc ArticleTileViewController.Éƒ[A^√êUHâÂHç=-– <stripped>

	// Swift methods
	0xec60  func <stripped> // getter 
	0xeca0  func <stripped> // setter 
	0xed60  func <stripped> // modifyCoroutine 
	0xee20  func <stripped> // getter 
	0xf180  func <stripped> // method 
	0xf2c0  func <stripped> // method 
	0xf490  func <stripped> // method 
	0xfa30  func <stripped> // method 
	0xfce0  func <stripped> // method 
	0x103c0  func <stripped> // method 
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
WARNING: couldn't find address 0x18ac00007550 (0xac00007550) in binary!
	0x25c8  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x18c400007510 (0xc400007510) in binary!
	0x48000000c  @objc ImageView.(null) <stripped>
WARNING: couldn't find address 0x187c00007520 (0x7c00007520) in binary!
	0x2598  @objc ImageView.(null) <stripped>

	// Swift methods
	0x12210  func <stripped> // method 
 }

 class HealthArticlesUI.DynamicHeightTextView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView? // +0x8 (0x8)
	var text : String? // +0x10 (0x10)
	var attributes : HealthArticleTextAttributes // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x187c00007520 (0x7c00007520) in binary!
	0x2598  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find offset 0x1888 in binary!
WARNING: couldn't find offset 0x1888 in binary!
WARNING: couldn't find address 0x1a1200007530 (0x21200007530) in binary!
	0x0  @objc DynamicHeightTextView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x57cffffdf20  @objc DynamicHeightTextView.(null) <stripped>
	0x49cffffdfd8  @objc DynamicHeightTextView.UHâÂHç=ç– <stripped>

	// Swift methods
	0x124a0  func <stripped> // getter 
	0x12660  func <stripped> // method 
	0x127c0  func <stripped> // method 
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
WARNING: couldn't find address 0x1844000074e8 (0x44000074e8) in binary!
	0x2560  @objc ButtonView.(null) <stripped>
WARNING: couldn't find offset 0x1850 in binary!
WARNING: couldn't find offset 0x1850 in binary!
WARNING: couldn't find address 0x19da00007838 (0x1da00007838) in binary!
	0x0  @objc ButtonView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x544ffffe0f8  @objc ButtonView.(null) <stripped>
	0xffffe1d0  @objc ButtonView.Hç˘I <stripped>

	// Swift methods
 }

 class HealthArticlesUI.CustomContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x180c000074b0 (0xc000074b0) in binary!
	0x2528  @objc CustomContentView.(null) <stripped>
WARNING: couldn't find address 0x182400007470 (0x2400007470) in binary!
	0x38000000c  @objc CustomContentView.(null) <stripped>
WARNING: couldn't find address 0x17dc00007480 (0x7dc00007480) in binary!
	0x24f8  @objc CustomContentView.(null) <stripped>

	// Swift methods
 }

 class HealthArticlesUI.CustomContentViewControllerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var customViewController : UIViewController?
	var customView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17dc00007480 (0x7dc00007480) in binary!
	0x24f8  @objc CustomContentViewControllerView.(null) <stripped>
WARNING: couldn't find address 0x17f400007440 (0x7f400007440) in binary!
	0x58000000c  @objc CustomContentViewControllerView.(null) <stripped>
WARNING: couldn't find address 0x17ac00007450 (0x7ac00007450) in binary!
	0x24c8  @objc CustomContentViewControllerView.(null) <stripped>

	// Swift methods
	0x14e90  func <stripped> // method 
 }

 class HealthArticlesUI.TileSashView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_descriptionLabel : UILabel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17ac00007450 (0x7ac00007450) in binary!
	0x24c8  @objc TileSashView.(null) <stripped>
WARNING: couldn't find offset 0x1936 in binary!
WARNING: couldn't find offset 0x1936 in binary!
WARNING: couldn't find address 0x17c4000077c0 (0x7c4000077c0) in binary!
	0x0  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x17ac000073f8 (0x7ac000073f8) in binary!
	0x25029232840  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2049557365  @objc TileSashView.(null) <stripped>
WARNING: couldn't find address 0x65483a5443454a4f (0x25443454a4f) in binary!
	0x12d73656c63  @objc TileSashView.(null) <stripped>

	// Swift methods
	0x15050  func <stripped> // getter 
	0x15070  func <stripped> // getter 
 }

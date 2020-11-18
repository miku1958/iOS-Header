 protocol HealthArticlesGeneration.ArticlesFeedItemGenerating // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
 }

 class HealthArticlesGeneration.ArticlesGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : · // +0xfeedfacf (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_publisher :  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let generatorContext : © // +0x3 (0x0)
	let readArticleInfo : ReadArticleInformation // +0x19 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x2c (0x8)
	let articlesKVDomain : HKKeyValueDomain // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var articleTileViewControllerType : [ // +0x6100085 (0x8)

	// Swift methods
	0x1a70  func <stripped> // getter 
	0x1e40  func <stripped> // setter 
	0x1e60  func <stripped> // modifyCoroutine 
	0x1f60  func <stripped> // getter 
	0x1f90  func <stripped> // setter 
	0x1fd0  func <stripped> // modifyCoroutine 
	0x2020  class func ArticlesGenerator.__allocating_init(context:managedArticles:articleTileViewControllerType:readArticleInfo:) // init 
	0x20b0  func <stripped> // method 
 }

 class HealthArticlesGeneration.ArticleChangeDetector : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var articlesKVDomain : HKKeyValueDomain // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ? // +0x10 (0x8)
	let observers : HKObserverSet<ArticleChangeDetectorObserver> // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xf89 in binary!
WARNING: couldn't find offset 0xf89 in binary!
WARNING: couldn't find address 0xf8a00004580 (0x78a00004580) in binary!
	0x0  @objc ArticleChangeDetector.(null) <stripped>
WARNING: couldn't find address 0xf8500004500 (0x78500004500) in binary!
	0x38000000c  @objc ArticleChangeDetector.(null) <stripped>
WARNING: couldn't find offset 0xf59 in binary!
WARNING: couldn't find offset 0xf59 in binary!
WARNING: couldn't find address 0xf6d000044f0 (0x76d000044f0) in binary!
	0x0  @objc ArticleChangeDetector.(null) <stripped>

	// Swift methods
	0x31f0  func <stripped> // getter 
	0x3230  func <stripped> // setter 
	0x3280  func <stripped> // modifyCoroutine 
	0x3380  func <stripped> // getter 
	0x33c0  func <stripped> // setter 
	0x3410  func <stripped> // modifyCoroutine 
	0x3540  class func ArticleChangeDetector.__allocating_init(healthStore:) // init 
	0x35b0  func <stripped> // method 
	0x35d0  func <stripped> // method 
	0x35f0  func <stripped> // method 
 }

 enum HealthArticlesGeneration.NotificationUserInfoError {

	// Properties
	case noUserInfo  
	case invalidUserInfoKey  
 }

 class HealthArticlesGeneration.ArticleFeedItemGeneratorWithReadObserver {
 class HealthArticlesGeneration.ArticleFeedItemGenerator : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation, ArticlesFeedItemGenerating {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let context :  // +0x8 (0x28)
	let readArticleInfo : ReadArticleInformation // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x17000 (0x8)
	let articlesKVDomain : HKKeyValueDomain // +0x17000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xf59 in binary!
WARNING: couldn't find offset 0xf59 in binary!
WARNING: couldn't find address 0xf6d000044f0 (0x76d000044f0) in binary!
	0x0  @objc ArticleFeedItemGenerator.(null) <stripped>
WARNING: couldn't find address 0xf55000044d0 (0x755000044d0) in binary!
	0x25029232840  @objc ArticleFeedItemGenerator.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x56e65477365  @objc ArticleFeedItemGenerator.(null) <stripped>

	// Swift methods
	0x81a0  func <stripped> // getter 
	0x81b0  class func ArticleFeedItemGenerator.__allocating_init(context:managedArticles:readArticleInfo:) // init 
	0x84c0  func <stripped> // method 
 }

 enum HealthArticlesGeneration.GenerationError {

	// Properties
	case attemptedToMarkAnUnsubmittedFeedItemAsRead  
 }

 class HealthArticlesGeneration.ArticlesGeneratorPipeline : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : · // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : M // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x65745f5f (0x8)
	let articleChangeDetector : ArticleChangeDetector // +0x0 (0x8)

	// Swift methods
	0x11a90  class func ArticlesGeneratorPipeline.__allocating_init(context:managedArticles:articleTileViewControllerType:articleGeneratorType:) // init 
	0x11b20  class func <stripped> // method 
 }

 struct HealthArticlesGeneration.ReadArticleInformation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let article : —
WARNING: couldn't find address 0x0 (0x0) in binary!
	let readDate : '
 }

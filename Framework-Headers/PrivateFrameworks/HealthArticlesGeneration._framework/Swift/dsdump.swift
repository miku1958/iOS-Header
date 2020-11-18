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
	let domain : § // +0xfeedfacf (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_publisher :  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let generatorContext : ™ // +0x3 (0x0)
	let readArticleInfo : ReadArticleInformation // +0x19 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x2f (0x8)
	let articlesKVDomain : HKKeyValueDomain // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var articleTileViewControllerType : K // +0x6100085 (0x8)

	// Swift methods
	0x1850  func <stripped> // getter 
	0x1c20  func <stripped> // setter 
	0x1c40  func <stripped> // modifyCoroutine 
	0x1d40  func <stripped> // getter 
	0x1d70  func <stripped> // setter 
	0x1db0  func <stripped> // modifyCoroutine 
	0x1e00  class func ArticlesGenerator.__allocating_init(context:managedArticles:articleTileViewControllerType:readArticleInfo:) // init 
	0x1e90  func <stripped> // method 
 }

 class HealthArticlesGeneration.ArticleChangeDetector : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var articlesKVDomain : HKKeyValueDomain // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ù // +0x10 (0x8)
	let observers : HKObserverSet<ArticleChangeDetectorObserver> // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1199 in binary!
WARNING: couldn't find offset 0x1199 in binary!
WARNING: couldn't find address 0x119a00004690 (0x19a00004690) in binary!
	0x0  @objc ArticleChangeDetector.(null) <stripped>
WARNING: couldn't find address 0x1195000045f0 (0x195000045f0) in binary!
	0x38000000c  @objc ArticleChangeDetector.(null) <stripped>
WARNING: couldn't find offset 0x1169 in binary!
WARNING: couldn't find offset 0x1169 in binary!
WARNING: couldn't find address 0x117d000045e0 (0x17d000045e0) in binary!
	0x0  @objc ArticleChangeDetector.(null) <stripped>

	// Swift methods
	0x3e60  func <stripped> // getter 
	0x3ea0  func <stripped> // setter 
	0x3ef0  func <stripped> // modifyCoroutine 
	0x3ff0  func <stripped> // getter 
	0x4030  func <stripped> // setter 
	0x4080  func <stripped> // modifyCoroutine 
	0x41b0  class func ArticleChangeDetector.__allocating_init(healthStore:) // init 
	0x4220  func <stripped> // method 
	0x4240  func <stripped> // method 
	0x4260  func <stripped> // method 
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
	let context : Õ // +0x8 (0x28)
	let readArticleInfo : ReadArticleInformation // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x18000 (0x8)
	let articlesKVDomain : HKKeyValueDomain // +0x18000 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x1169 in binary!
WARNING: couldn't find offset 0x1169 in binary!
WARNING: couldn't find address 0x117d000045e0 (0x17d000045e0) in binary!
	0x0  @objc ArticleFeedItemGenerator.(null) <stripped>
WARNING: couldn't find address 0x1165000045c0 (0x165000045c0) in binary!
	0x25029232840  @objc ArticleFeedItemGenerator.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x56e65477365  @objc ArticleFeedItemGenerator.(null) <stripped>

	// Swift methods
	0x8f00  func <stripped> // getter 
	0x8f10  class func ArticleFeedItemGenerator.__allocating_init(context:managedArticles:readArticleInfo:) // init 
	0x9220  func <stripped> // method 
 }

 enum HealthArticlesGeneration.GenerationError {

	// Properties
	case attemptedToMarkAnUnsubmittedFeedItemAsRead  
 }

 class HealthArticlesGeneration.ArticlesGeneratorPipeline : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let domain : § // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ! // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let managedArticles :  empty-list  // +0x65745f5f (0x8)
	let articleChangeDetector : ArticleChangeDetector // +0x0 (0x8)

	// Swift methods
	0x12900  class func ArticlesGeneratorPipeline.__allocating_init(context:managedArticles:articleTileViewControllerType:articleGeneratorType:) // init 
	0x12990  class func <stripped> // method 
 }

 struct HealthArticlesGeneration.ReadArticleInformation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let article : é
WARNING: couldn't find address 0x0 (0x0) in binary!
	let readDate : ó
 }

 struct __C.Name {

	// Properties
	var _rawValue : NSString
 }

 class HealthPluginHost.PostNotificationOperation : HealthPluginHostOperation {

	// Properties
	let notificationName : NSNotificationName // +0x20 (0x8)
	let userInfo : [AnyHashable : Any]? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x25e0  @objc PostNotificationOperation.init <stripped>
	0x2690  @objc PostNotificationOperation..cxx_destruct <stripped>

	// Swift methods
	0x20a0  class func PostNotificationOperation.__allocating_init(name:userInfo:) // init 
 }

 class HealthPluginHost.FeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	let pluginIdentifier : String? // +0x20 (0x10)
	let dateRange : DateInterval // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x3490  @objc FeedItemGenerationOperation.init <stripped>
	0x3550  @objc FeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x2c70  class func FeedItemGenerationOperation.__allocating_init(pluginIdentifier:dateRange:) // init 
 }

 class HealthPluginHost.SubmitTrainingOperation : HealthPluginHostOperation {

	// Properties
	let trainingEvents : [ModelTrainingEvent] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3cc0  @objc SubmitTrainingOperation.init <stripped>
	0x3d60  @objc SubmitTrainingOperation..cxx_destruct <stripped>

	// Swift methods
	0x36d0  class func SubmitTrainingOperation.__allocating_init(trainingEvents:) // init 
 }

 class HealthPluginHost.SubmitHighlightsAnalyticsOperation : HealthPluginHostOperation {
	// ObjC -> Swift bridged methods
	0x47c0  @objc SubmitHighlightsAnalyticsOperation.init <stripped>
 }

 class HealthPluginHost.SummarySingleDayFeedItemGenerationOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var ongoingProgress : NSProgress? // +0x18 (0x8)
	let store : HealthExperienceStore // +0x20 (0x28)
	let dateRange : DateInterval // +0x3 (0x0)

	// ObjC -> Swift bridged methods
	0x5150  @objc SummarySingleDayFeedItemGenerationOperation.main <stripped>
	0x5340  @objc SummarySingleDayFeedItemGenerationOperation.cancel <stripped>
	0x53c0  @objc SummarySingleDayFeedItemGenerationOperation.init <stripped>
	0x5480  @objc SummarySingleDayFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x48e0  class func SummarySingleDayFeedItemGenerationOperation.__allocating_init(store:dateRange:) // init 
 }

 class HealthPluginHost.HealthPluginHostConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var connection : NSXPCConnection // +0x10 (0x8)

	// Swift methods
	0x60b0  class func HealthPluginHostConnection.__allocating_init() // init 
	0x67b0  func HealthPluginHostConnection.pluginHostProxyWithErrorHandler(_:) // method 
 }

 class HealthPluginHost.PopulateDiscoverFeedOperation : HealthPluginHostOperation {

	// Properties
	let feedKinds : [Feed.Kind] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7730  @objc PopulateDiscoverFeedOperation.init <stripped>
	0x77d0  @objc PopulateDiscoverFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x6e60  class func PopulateDiscoverFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.InteractiveFeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	var lock : UnfairLock // +0x20 (0x8)
	var ongoingProgress : NSProgress? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x83b0  @objc InteractiveFeedItemGenerationOperation.cancel <stripped>
	0x8490  @objc InteractiveFeedItemGenerationOperation.init <stripped>
	0x85a0  @objc InteractiveFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthPluginHost.SubmitFeedPersonalizationAnalyticsOperation : HealthPluginHostOperation {

	// Properties
	let feedsToPopulateWhenFinished : [Feed.Kind] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x8d10  @objc SubmitFeedPersonalizationAnalyticsOperation.init <stripped>
	0x8db0  @objc SubmitFeedPersonalizationAnalyticsOperation..cxx_destruct <stripped>

	// Swift methods
	0x8680  class func SubmitFeedPersonalizationAnalyticsOperation.__allocating_init(feedsToPopulateWhenFinished:) // init 
 }

 class HealthPluginHost.DeleteFeedOperation : HealthPluginHostOperation {

	// Properties
	let feedKinds : [Feed.Kind] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x9640  @objc DeleteFeedOperation.init <stripped>
	0x96e0  @objc DeleteFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x8e50  class func DeleteFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.HealthPluginHostOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_connection : HealthPluginHostConnection? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xa1d0  @objc HealthPluginHostOperation.main <stripped>
	0xa390  @objc HealthPluginHostOperation.init <stripped>
	0xa460  @objc HealthPluginHostOperation..cxx_destruct <stripped>

	// Swift methods
	0x9c10  func HealthPluginHostOperation.connection.getter // getter 
	0x9cb0  func HealthPluginHostOperation.connection.setter // setter 
	0x9cd0  func HealthPluginHostOperation.connection.modify // modifyCoroutine 
	0xa200  func <stripped> // method 
 }

 class HealthPluginHost.CollectFeedPopulationDiagnosticLogsOperation : HealthPluginHostOperation {

	// Properties
	var logURLs : [URL]? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0xa980  @objc CollectFeedPopulationDiagnosticLogsOperation.init <stripped>
	0xaa70  @objc CollectFeedPopulationDiagnosticLogsOperation..cxx_destruct <stripped>

	// Swift methods
	0xa480  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.getter // getter 
	0xa4c0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.setter // setter 
	0xa510  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.modify // modifyCoroutine 
 }

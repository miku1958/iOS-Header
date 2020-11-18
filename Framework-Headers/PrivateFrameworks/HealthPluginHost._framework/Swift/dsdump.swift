 struct __C.Name {

	// Properties
	var _rawValue : NSString
 }

 class HealthPluginHost.PostNotificationOperation : HealthPluginHostOperation {

	// Properties
	let notificationName : NSNotificationName // +0x20 (0x8)
	let userInfo : [AnyHashable : Any]? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x2100  @objc PostNotificationOperation.init <stripped>
	0x21b0  @objc PostNotificationOperation..cxx_destruct <stripped>

	// Swift methods
	0x1bc0  class func PostNotificationOperation.__allocating_init(name:userInfo:) // init 
 }

 class HealthPluginHost.FeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	let pluginIdentifier : String? // +0x20 (0x10)
	let dateRange : DateInterval // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x2fb0  @objc FeedItemGenerationOperation.init <stripped>
	0x3070  @objc FeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x2790  class func FeedItemGenerationOperation.__allocating_init(pluginIdentifier:dateRange:) // init 
 }

 class HealthPluginHost.SubmitTrainingOperation : HealthPluginHostOperation {

	// Properties
	let trainingEvents : [ModelTrainingEvent] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x37e0  @objc SubmitTrainingOperation.init <stripped>
	0x3880  @objc SubmitTrainingOperation..cxx_destruct <stripped>

	// Swift methods
	0x31f0  class func SubmitTrainingOperation.__allocating_init(trainingEvents:) // init 
 }

 class HealthPluginHost.SubmitHighlightsAnalyticsOperation : HealthPluginHostOperation {
	// ObjC -> Swift bridged methods
	0x42e0  @objc SubmitHighlightsAnalyticsOperation.init <stripped>
 }

 class HealthPluginHost.SummarySingleDayFeedItemGenerationOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var ongoingProgress : NSProgress? // +0x18 (0x8)
	let store : HealthExperienceStore // +0x20 (0x28)
	let dateRange : DateInterval // +0x3 (0x0)

	// ObjC -> Swift bridged methods
	0x4c70  @objc SummarySingleDayFeedItemGenerationOperation.main <stripped>
	0x4e60  @objc SummarySingleDayFeedItemGenerationOperation.cancel <stripped>
	0x4ee0  @objc SummarySingleDayFeedItemGenerationOperation.init <stripped>
	0x4fa0  @objc SummarySingleDayFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x4400  class func SummarySingleDayFeedItemGenerationOperation.__allocating_init(store:dateRange:) // init 
 }

 class HealthPluginHost.HealthPluginHostConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var connection : NSXPCConnection // +0x10 (0x8)

	// Swift methods
	0x5bd0  class func HealthPluginHostConnection.__allocating_init() // init 
	0x62d0  func HealthPluginHostConnection.pluginHostProxyWithErrorHandler(_:) // method 
 }

 class HealthPluginHost.PopulateDiscoverFeedOperation : HealthPluginHostOperation {

	// Properties
	let feedKinds : [Feed.Kind] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7250  @objc PopulateDiscoverFeedOperation.init <stripped>
	0x72f0  @objc PopulateDiscoverFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x6980  class func PopulateDiscoverFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.InteractiveFeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	var lock : UnfairLock // +0x20 (0x8)
	var ongoingProgress : NSProgress? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x7ed0  @objc InteractiveFeedItemGenerationOperation.cancel <stripped>
	0x7fb0  @objc InteractiveFeedItemGenerationOperation.init <stripped>
	0x80c0  @objc InteractiveFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthPluginHost.SubmitFeedPersonalizationAnalyticsOperation : HealthPluginHostOperation {

	// Properties
	let feedsToPopulateWhenFinished : [Feed.Kind] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x8830  @objc SubmitFeedPersonalizationAnalyticsOperation.init <stripped>
	0x88d0  @objc SubmitFeedPersonalizationAnalyticsOperation..cxx_destruct <stripped>

	// Swift methods
	0x81a0  class func SubmitFeedPersonalizationAnalyticsOperation.__allocating_init(feedsToPopulateWhenFinished:) // init 
 }

 class HealthPluginHost.HealthPluginHostOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_connection : HealthPluginHostConnection? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x93b0  @objc HealthPluginHostOperation.main <stripped>
	0x9570  @objc HealthPluginHostOperation.init <stripped>
	0x9640  @objc HealthPluginHostOperation..cxx_destruct <stripped>

	// Swift methods
	0x8df0  func HealthPluginHostOperation.connection.getter // getter 
	0x8e90  func HealthPluginHostOperation.connection.setter // setter 
	0x8eb0  func HealthPluginHostOperation.connection.modify // modifyCoroutine 
	0x93e0  func <stripped> // method 
 }

 class HealthPluginHost.CollectFeedPopulationDiagnosticLogsOperation : HealthPluginHostOperation {

	// Properties
	var logURLs : [URL]? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x9b60  @objc CollectFeedPopulationDiagnosticLogsOperation.init <stripped>
	0x9c50  @objc CollectFeedPopulationDiagnosticLogsOperation..cxx_destruct <stripped>

	// Swift methods
	0x9660  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.getter // getter 
	0x96a0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.setter // setter 
	0x96f0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.modify // modifyCoroutine 
 }

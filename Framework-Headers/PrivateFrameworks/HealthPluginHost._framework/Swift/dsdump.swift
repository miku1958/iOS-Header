 struct __C.Name {

	// Properties
	var _rawValue : NSString
 }

 class HealthPluginHost.PostNotificationOperation : HealthPluginHostOperation {

	// Properties
	let notificationName : Name // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userInfo :  empty-list  // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x2130  @objc PostNotificationOperation.init <stripped>
	0x20b0  @objc PostNotificationOperation..cxx_destruct <stripped>

	// Swift methods
	0x1d10  class func PostNotificationOperation.__allocating_init(name:userInfo:) // init 
 }

 class HealthPluginHost.FeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	let pluginIdentifier : String? // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateRange : ý // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x2e20  @objc FeedItemGenerationOperation.init <stripped>
	0x2d80  @objc FeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x2730  class func FeedItemGenerationOperation.__allocating_init(pluginIdentifier:dateRange:) // init 
 }

 class HealthPluginHost.SubmitTrainingOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trainingEvents :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3580  @objc SubmitTrainingOperation.init <stripped>
	0x3510  @objc SubmitTrainingOperation..cxx_destruct <stripped>

	// Swift methods
	0x2fa0  class func SubmitTrainingOperation.__allocating_init(trainingEvents:) // init 
 }

 class HealthPluginHost.SubmitHighlightsAnalyticsOperation : HealthPluginHostOperation {
	// ObjC -> Swift bridged methods
	0x3e90  @objc SubmitHighlightsAnalyticsOperation.init <stripped>
 }

 class HealthPluginHost.SummarySingleDayFeedItemGenerationOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var ongoingProgress : NSProgress? // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : É // +0x20 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateRange : ý // +0x3 (0x0)

	// ObjC -> Swift bridged methods
	0x4620  @objc SummarySingleDayFeedItemGenerationOperation.main <stripped>
	0x4790  @objc SummarySingleDayFeedItemGenerationOperation.cancel <stripped>
	0x48e0  @objc SummarySingleDayFeedItemGenerationOperation.init <stripped>
	0x4840  @objc SummarySingleDayFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x3f40  class func SummarySingleDayFeedItemGenerationOperation.__allocating_init(store:dateRange:) // init 
 }

 class HealthPluginHost.HealthPluginHostConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var connection : NSXPCConnection // +0x10 (0x8)

	// Swift methods
	0x53a0  class func HealthPluginHostConnection.__allocating_init() // init 
	0x5900  func HealthPluginHostConnection.pluginHostProxyWithErrorHandler(_:) // method 
 }

 class HealthPluginHost.PopulateDiscoverFeedOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedKinds :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x6660  @objc PopulateDiscoverFeedOperation.init <stripped>
	0x65f0  @objc PopulateDiscoverFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x5f80  class func PopulateDiscoverFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.InteractiveFeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ) // +0x20 (0x8)
	var ongoingProgress : NSProgress? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x6f60  @objc InteractiveFeedItemGenerationOperation.cancel <stripped>
	0x70d0  @objc InteractiveFeedItemGenerationOperation.init <stripped>
	0x6ff0  @objc InteractiveFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthPluginHost.SubmitFeedPersonalizationAnalyticsOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedsToPopulateWhenFinished :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7780  @objc SubmitFeedPersonalizationAnalyticsOperation.init <stripped>
	0x7710  @objc SubmitFeedPersonalizationAnalyticsOperation..cxx_destruct <stripped>

	// Swift methods
	0x7210  class func SubmitFeedPersonalizationAnalyticsOperation.__allocating_init(feedsToPopulateWhenFinished:) // init 
 }

 class HealthPluginHost.DeleteFeedOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedKinds :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7e80  @objc DeleteFeedOperation.init <stripped>
	0x7e10  @objc DeleteFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x7860  class func DeleteFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.HealthPluginHostOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_connection : HealthPluginHostConnection // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x8630  @objc HealthPluginHostOperation.main <stripped>
	0x8740  @objc HealthPluginHostOperation.init <stripped>
	0x87d0  @objc HealthPluginHostOperation..cxx_destruct <stripped>

	// Swift methods
	0x83d0  func HealthPluginHostOperation.connection.getter // getter 
	0x8470  func HealthPluginHostOperation.connection.setter // setter 
	0x8490  func HealthPluginHostOperation.connection.modify // modifyCoroutine 
	0x8660  func <stripped> // method 
 }

 class HealthPluginHost.CollectFeedPopulationDiagnosticLogsOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logURLs :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x8d40  @objc CollectFeedPopulationDiagnosticLogsOperation.init <stripped>
	0x8ca0  @objc CollectFeedPopulationDiagnosticLogsOperation..cxx_destruct <stripped>

	// Swift methods
	0x87f0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.getter // getter 
	0x8830  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.setter // setter 
	0x8880  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.modify // modifyCoroutine 
 }

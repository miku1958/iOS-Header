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
	0x20e0  @objc PostNotificationOperation.init <stripped>
	0x2060  @objc PostNotificationOperation..cxx_destruct <stripped>

	// Swift methods
	0x1cc0  class func PostNotificationOperation.__allocating_init(name:userInfo:) // init 
 }

 class HealthPluginHost.FeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
	let pluginIdentifier : String? // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateRange : ý // +0xfeedfacf (0x0)

	// ObjC -> Swift bridged methods
	0x2dd0  @objc FeedItemGenerationOperation.init <stripped>
	0x2d30  @objc FeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x26e0  class func FeedItemGenerationOperation.__allocating_init(pluginIdentifier:dateRange:) // init 
 }

 class HealthPluginHost.SubmitTrainingOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trainingEvents :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3530  @objc SubmitTrainingOperation.init <stripped>
	0x34c0  @objc SubmitTrainingOperation..cxx_destruct <stripped>

	// Swift methods
	0x2f50  class func SubmitTrainingOperation.__allocating_init(trainingEvents:) // init 
 }

 class HealthPluginHost.SubmitHighlightsAnalyticsOperation : HealthPluginHostOperation {
	// ObjC -> Swift bridged methods
	0x3e40  @objc SubmitHighlightsAnalyticsOperation.init <stripped>
 }

 class HealthPluginHost.SummarySingleDayFeedItemGenerationOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var ongoingProgress : NSProgress? // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : É // +0x20 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateRange : ý // +0x3 (0x0)

	// ObjC -> Swift bridged methods
	0x45d0  @objc SummarySingleDayFeedItemGenerationOperation.main <stripped>
	0x4740  @objc SummarySingleDayFeedItemGenerationOperation.cancel <stripped>
	0x4890  @objc SummarySingleDayFeedItemGenerationOperation.init <stripped>
	0x47f0  @objc SummarySingleDayFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
	0x3ef0  class func SummarySingleDayFeedItemGenerationOperation.__allocating_init(store:dateRange:) // init 
 }

 class HealthPluginHost.HealthPluginHostConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var connection : NSXPCConnection // +0x10 (0x8)

	// Swift methods
	0x5350  class func HealthPluginHostConnection.__allocating_init() // init 
	0x58b0  func HealthPluginHostConnection.pluginHostProxyWithErrorHandler(_:) // method 
 }

 class HealthPluginHost.PopulateDiscoverFeedOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedKinds :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x6610  @objc PopulateDiscoverFeedOperation.init <stripped>
	0x65a0  @objc PopulateDiscoverFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x5f30  class func PopulateDiscoverFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.InteractiveFeedItemGenerationOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ) // +0x20 (0x8)
	var ongoingProgress : NSProgress? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x6f10  @objc InteractiveFeedItemGenerationOperation.cancel <stripped>
	0x7080  @objc InteractiveFeedItemGenerationOperation.init <stripped>
	0x6fa0  @objc InteractiveFeedItemGenerationOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthPluginHost.SubmitFeedPersonalizationAnalyticsOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedsToPopulateWhenFinished :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7730  @objc SubmitFeedPersonalizationAnalyticsOperation.init <stripped>
	0x76c0  @objc SubmitFeedPersonalizationAnalyticsOperation..cxx_destruct <stripped>

	// Swift methods
	0x71c0  class func SubmitFeedPersonalizationAnalyticsOperation.__allocating_init(feedsToPopulateWhenFinished:) // init 
 }

 class HealthPluginHost.DeleteFeedOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let feedKinds :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x7e30  @objc DeleteFeedOperation.init <stripped>
	0x7dc0  @objc DeleteFeedOperation..cxx_destruct <stripped>

	// Swift methods
	0x7810  class func DeleteFeedOperation.__allocating_init(feedKinds:) // init 
 }

 class HealthPluginHost.HealthPluginHostOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var $__lazy_storage_$_connection : HealthPluginHostConnection // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x85e0  @objc HealthPluginHostOperation.main <stripped>
	0x86f0  @objc HealthPluginHostOperation.init <stripped>
	0x8780  @objc HealthPluginHostOperation..cxx_destruct <stripped>

	// Swift methods
	0x8380  func HealthPluginHostOperation.connection.getter // getter 
	0x8420  func HealthPluginHostOperation.connection.setter // setter 
	0x8440  func HealthPluginHostOperation.connection.modify // modifyCoroutine 
	0x8610  func <stripped> // method 
 }

 class HealthPluginHost.CollectFeedPopulationDiagnosticLogsOperation : HealthPluginHostOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logURLs :  empty-list  // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x8cf0  @objc CollectFeedPopulationDiagnosticLogsOperation.init <stripped>
	0x8c50  @objc CollectFeedPopulationDiagnosticLogsOperation..cxx_destruct <stripped>

	// Swift methods
	0x87a0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.getter // getter 
	0x87e0  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.setter // setter 
	0x8830  func CollectFeedPopulationDiagnosticLogsOperation.logURLs.modify // modifyCoroutine 
 }

 protocol SiriAudioInternal.INLocalSearchProviding // 1 requirements
 {
	// method
 }
 protocol SiriAudioInternal.PodcastLibraryProviding // 0 requirements
 {
 }

 struct SiriAudioInternal.INLocalSearchProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let localSearch : Ý // +0x0
 }

 class SiriAudioInternal.INUpdateMediaAffinityIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x106e in binary!
WARNING: couldn't find offset 0x106e in binary!
WARNING: couldn't find address 0xdc000006b00 (0x5c000006b00) in binary!
	0x0  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x31cffff0ed0  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>

	// Swift methods
	0x6210  func INUpdateMediaAffinityIntentHandler.handle(intent:completion:) // method 
 }

 class SiriAudioInternal.INSearchForMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x104e in binary!
WARNING: couldn't find offset 0x104e in binary!
WARNING: couldn't find address 0xda000006ad8 (0x5a000006ad8) in binary!
	0x0  @objc INSearchForMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x2a4ffff13f0  @objc INSearchForMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x63e0  func INSearchForMediaIntentHandler.handle(intent:completion:) // method 
 }

 class SiriAudioInternal.INAddMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let library : _
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nowPlaying : w
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscription : —

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xd74 in binary!
WARNING: couldn't find offset 0xd74 in binary!
WARNING: couldn't find address 0x103a00006b08 (0x3a00006b08) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xd5c in binary!
WARNING: couldn't find offset 0xd5c in binary!
WARNING: couldn't find address 0xd6800006a90 (0x56800006a90) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x115c00006a68 (0x15c00006a68) in binary!
	0x48000000c  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find address 0xff200006ac0 (0x7f200006ac0) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find address 0xd2000006a28 (0x52000006a28) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x6a80  func INAddMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0x6b20  func INAddMediaIntentHandler.resolveMediaDestination(for:with:) // method 
	0x6b60  func INAddMediaIntentHandler.handle(intent:completion:) // method 
 }

 struct SiriAudioInternal.PodcastLibraryProvider { }

 class SiriAudioInternal.INPlayMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackService : {
	let localSearch : INLocalSearchProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceProvider : M
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nowPlaying : w

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find address 0xff200006ac0 (0x7f200006ac0) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find address 0xd2000006a28 (0x52000006a28) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16f69647541  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x5020206c616e7265 (0x6c616e7265) in binary!
	0x47541697269  @objc INPlayMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x85d0  class func INPlayMediaIntentHandler.__allocating_init(playbackService:localSearch:deviceProvider:nowPlaying:) // init 
	0x8c40  func INPlayMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0xd940  func INPlayMediaIntentHandler.handle(intent:completion:) // method 
	0xfc40  func <stripped> // method 
 }

 enum __C.INMediaItemType { }

 enum __C.INPlaybackQueueLocation { }

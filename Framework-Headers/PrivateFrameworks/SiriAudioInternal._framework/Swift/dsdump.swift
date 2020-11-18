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
	let localSearch : í // +0x0
 }

 class SiriAudioInternal.INUpdateMediaAffinityIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x103e in binary!
WARNING: couldn't find offset 0x103e in binary!
WARNING: couldn't find address 0xd9000007900 (0x59000007900) in binary!
	0x0  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x11cffff1e30  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>

	// Swift methods
	0x5370  func INUpdateMediaAffinityIntentHandler.handle(intent:completion:) // method 
 }

 class SiriAudioInternal.INSearchForMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x101e in binary!
WARNING: couldn't find offset 0x101e in binary!
WARNING: couldn't find address 0xd70000078d8 (0x570000078d8) in binary!
	0x0  @objc INSearchForMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0xa4ffff2340  @objc INSearchForMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x5540  func INSearchForMediaIntentHandler.handle(intent:completion:) // method 
 }

 class SiriAudioInternal.INAddMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let library : o
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nowPlaying : ‡
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscription : §

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xd44 in binary!
WARNING: couldn't find offset 0xd44 in binary!
WARNING: couldn't find address 0x100a00007908 (0xa00007908) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find address 0xd3800007890 (0x53800007890) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x112c00007868 (0x12c00007868) in binary!
	0x48000000c  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xcfc in binary!
WARNING: couldn't find offset 0xcfc in binary!
WARNING: couldn't find address 0xfc2000078c0 (0x7c2000078c0) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x10f0 in binary!
WARNING: couldn't find offset 0x10f0 in binary!
WARNING: couldn't find address 0xcf000007828 (0x4f000007828) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x5bd0  func INAddMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0x5c70  func INAddMediaIntentHandler.resolveMediaDestination(for:with:) // method 
	0x5cb0  func INAddMediaIntentHandler.handle(intent:completion:) // method 
 }

 struct SiriAudioInternal.PodcastLibraryProvider { }

 class SiriAudioInternal.INPlayMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackService : ‹
	let localSearch : INLocalSearchProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	let deviceProvider : ]

	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0xcfc in binary!
WARNING: couldn't find offset 0xcfc in binary!
WARNING: couldn't find address 0xfc2000078c0 (0x7c2000078c0) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x10f0 in binary!
WARNING: couldn't find offset 0x10f0 in binary!
WARNING: couldn't find address 0xcf000007828 (0x4f000007828) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16f69647541  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x5020206c616e7265 (0x6c616e7265) in binary!
	0x47541697269  @objc INPlayMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x75d0  class func INPlayMediaIntentHandler.__allocating_init(playbackService:localSearch:deviceProvider:) // init 
	0x7bc0  func INPlayMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0xbf70  func INPlayMediaIntentHandler.handle(intent:completion:) // method 
	0xe280  func <stripped> // method 
 }

 enum __C.INMediaItemType { }

 enum __C.INPlaybackQueueLocation { }

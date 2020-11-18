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
WARNING: couldn't find address 0xdc000006a60 (0x5c000006a60) in binary!
	0x0  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x27cffff1140  @objc INUpdateMediaAffinityIntentHandler.(null) <stripped>

	// Swift methods
	0x5520  func INUpdateMediaAffinityIntentHandler.handle(intent:completion:) // method 
 }

 class SiriAudioInternal.INSearchForMediaIntentHandler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find offset 0x104e in binary!
WARNING: couldn't find offset 0x104e in binary!
WARNING: couldn't find address 0xda000006a38 (0x5a000006a38) in binary!
	0x0  @objc INSearchForMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x204ffff1660  @objc INSearchForMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x56f0  func INSearchForMediaIntentHandler.handle(intent:completion:) // method 
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
WARNING: couldn't find address 0x103a00006a68 (0x3a00006a68) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xd5c in binary!
WARNING: couldn't find offset 0xd5c in binary!
WARNING: couldn't find address 0xd68000069f0 (0x568000069f0) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x115c000069c8 (0x15c000069c8) in binary!
	0x48000000c  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find offset 0xd2c in binary!
WARNING: couldn't find address 0xff200006a20 (0x7f200006a20) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find address 0xd2000006988 (0x52000006988) in binary!
	0x0  @objc INAddMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x5d90  func INAddMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0x5e30  func INAddMediaIntentHandler.resolveMediaDestination(for:with:) // method 
	0x5e70  func INAddMediaIntentHandler.handle(intent:completion:) // method 
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
WARNING: couldn't find address 0xff200006a20 (0x7f200006a20) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find offset 0x1120 in binary!
WARNING: couldn't find address 0xd2000006988 (0x52000006988) in binary!
	0x0  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x16f69647541  @objc INPlayMediaIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x5020206c616e7265 (0x6c616e7265) in binary!
	0x47541697269  @objc INPlayMediaIntentHandler.(null) <stripped>

	// Swift methods
	0x77c0  class func INPlayMediaIntentHandler.__allocating_init(playbackService:localSearch:deviceProvider:nowPlaying:) // init 
	0x7e30  func INPlayMediaIntentHandler.resolveMediaItems(for:with:) // method 
	0xc9e0  func INPlayMediaIntentHandler.handle(intent:completion:) // method 
	0xece0  func <stripped> // method 
 }

 enum __C.INMediaItemType { }

 enum __C.INPlaybackQueueLocation { }

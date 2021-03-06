//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>
#import <WebCore/AVPlayerItemMetadataCollectorPushDelegate-Protocol.h>
#import <WebCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate>
{
    WeakPtr_be5c5e1c m_player;
    struct GenericTaskQueue<WebCore::Timer> m_taskQueue;
    int m_delayCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithPlayer:(WeakPtr_be5c5e1c *)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (void)metadataLoaded;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end


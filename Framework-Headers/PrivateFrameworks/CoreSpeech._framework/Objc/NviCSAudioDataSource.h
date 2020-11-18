//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/NviAudioDataSource-Protocol.h>

@class CSAudioStream, NSHashTable, NSString, NviContext;
@protocol OS_dispatch_queue;

@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource>
{
    NviContext *_nviCtx;
    NSHashTable *_receivers;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numBytesPerSample;
@property (strong, nonatomic) NviContext *nviCtx; // @synthesize nviCtx=_nviCtx;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property (readonly, nonatomic) unsigned long long sampleRate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_createAudioStreamWithCurrentNviContext;
- (void)addReceiver:(id)arg1;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (id)init;
- (void)removeReceiver:(id)arg1;
- (void)startWithNviContext:(id)arg1 didStartHandler:(CDUnknownBlockType)arg2;
- (void)stopWithDidStopHandler:(CDUnknownBlockType)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>

@class NSString, VCAudioIO;

__attribute__((visibility("hidden")))
@interface VCVoIPRelayInternal : NSObject <VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate>
{
    struct AudioStreamBasicDescription _audioFormat;
    unsigned long long _blockSizeSamples;
    BOOL _canProcessAudio;
    CDUnknownBlockType _clientCaptureBlock;
    CDUnknownBlockType _clientRenderBlock;
    VCAudioIO *_audioIO;
}

@property (nonatomic) struct AudioStreamBasicDescription audioFormat; // @synthesize audioFormat=_audioFormat;
@property (nonatomic) unsigned long long blockSizeSamples; // @synthesize blockSizeSamples=_blockSizeSamples;
@property (nonatomic) BOOL canProcessAudio; // @synthesize canProcessAudio=_canProcessAudio;
@property (copy, nonatomic) CDUnknownBlockType clientCaptureBlock; // @synthesize clientCaptureBlock=_clientCaptureBlock;
@property (copy, nonatomic) CDUnknownBlockType clientRenderBlock; // @synthesize clientRenderBlock=_clientRenderBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (id)init;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


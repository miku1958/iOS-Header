//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString, VCAudioIO, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate>
{
    int _clientPid;
    struct AudioStreamBasicDescription vpioFormat;
    unsigned int _vpioSamplesPerFrame;
    int deviceRole;
    BOOL isValid;
    NSObject<VCMediaStreamDelegate> *delegate;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    struct _opaque_pthread_mutex_t sessionLock;
    int _state;
    VCAudioPayload *_currentAudioPayload;
    VCAudioIO *_audioIO;
    struct SoundDec_t *_decoder;
    struct opaqueCMSimpleQueue *_charQueue;
    struct tagVCMemoryPool *_characterPool;
    id _textStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property int deviceRole; // @synthesize deviceRole;
@property (readonly) unsigned long long hash;
@property BOOL isValid; // @synthesize isValid;
@property (readonly) Class superclass;

- (BOOL)canProcessAudio;
- (void)dealloc;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;
- (void)lock;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(id)arg1;
- (void)setCanProcessAudio:(BOOL)arg1;
- (void)setPause:(BOOL)arg1;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)start;
- (void)startVirtualTTYWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlock;

@end


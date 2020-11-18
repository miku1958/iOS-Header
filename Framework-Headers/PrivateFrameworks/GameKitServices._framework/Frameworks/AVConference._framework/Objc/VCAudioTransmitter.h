//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    struct tagHANDLE *_rtpHandle;
    unsigned int *_packetSent;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
}

- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1;
- (BOOL)sendAudioSamples:(char *)arg1 withPayload:(int)arg2 timestamp:(unsigned int)arg3 byteCount:(int)arg4 marker:(int)arg5 nextInterval:(float)arg6 sentBytes:(int *)arg7 padding:(char *)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10;
- (BOOL)setupEncoders:(struct AudioStreamBasicDescription *)arg1 blockSize:(int)arg2;

@end


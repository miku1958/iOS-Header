//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
    struct AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    unsigned long long _lastTimestamp;
    float _outPacketSizeInSec;
    BOOL _didSendFirstPacket;
    id<CSAudioConverterDelegate> _delegate;
}

@property (weak) id<CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;
- (void).cxx_destruct;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(BOOL)arg2 timestamp:(unsigned long long)arg3;
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)dealloc;
- (void)flush;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (void)reset;

@end

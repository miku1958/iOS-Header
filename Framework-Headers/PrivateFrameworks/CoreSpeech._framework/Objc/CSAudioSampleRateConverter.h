//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioSampleRateConverter : NSObject
{
    struct OpaqueAudioConverter *_sampleRateConverter;
    float _outBufferScaleFactor;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
}

+ (id)downsampler;
+ (id)upsampler;
- (struct OpaqueAudioConverter *)_createSampleRateConverterWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (id)convertSampleRateOfBuffer:(id)arg1;
- (void)dealloc;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end


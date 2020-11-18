//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAudioSettingsValueConstrainer : NSObject
{
    struct AudioStreamBasicDescription _inputASBD;
    struct AudioStreamBasicDescription _outputASBD;
    struct OpaqueAudioConverter *_audioConverter;
    unsigned int _outputDataRate;
    BOOL _needNewConverter;
    BOOL _needAvailableSampleRates;
    BOOL _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

@property (nonatomic) unsigned int outputBitsPerChannel;
@property (nonatomic) unsigned int outputChannelCount;
@property (nonatomic) unsigned int outputDataRate;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) unsigned int outputFormatFlags;
@property (nonatomic) float outputSampleRate;

- (void)_bringUpToDate;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAudioConverter;
- (void)_buildAvailableSampleRates;
- (id)_fetchApplicableOutputDataRates;
- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;

@end


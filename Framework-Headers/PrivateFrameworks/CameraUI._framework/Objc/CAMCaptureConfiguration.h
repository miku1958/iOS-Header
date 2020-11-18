//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMCaptureConfiguration : NSObject
{
    long long _mode;
    long long _device;
    long long _videoConfiguration;
    long long _audioConfiguration;
    long long _flashMode;
    long long _torchMode;
    long long _HDRMode;
    long long _timerDuration;
    long long _irisMode;
    long long _photoModeEffectFilterType;
    long long _squareModeEffectFilterType;
}

@property (readonly, nonatomic) long long HDRMode; // @synthesize HDRMode=_HDRMode;
@property (readonly, nonatomic) long long audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property (readonly, nonatomic) long long device; // @synthesize device=_device;
@property (readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property (readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) long long photoModeEffectFilterType; // @synthesize photoModeEffectFilterType=_photoModeEffectFilterType;
@property (readonly, nonatomic) long long squareModeEffectFilterType; // @synthesize squareModeEffectFilterType=_squareModeEffectFilterType;
@property (readonly, nonatomic) long long timerDuration; // @synthesize timerDuration=_timerDuration;
@property (readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property (readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;

+ (long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)arg1;
+ (long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 emulationMode:(long long)arg3 duringCall:(BOOL)arg4;
+ (id)captureGraphConfigurationUsingConfiguration:(id)arg1;
+ (long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)arg1 mode:(long long)arg2 device:(long long)arg3;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 flashMode:(long long)arg5 torchMode:(long long)arg6 HDRMode:(long long)arg7 irisMode:(long long)arg8 timerDuration:(long long)arg9 photoModeEffectFilterType:(long long)arg10 squareModeEffectFilterType:(long long)arg11;

@end


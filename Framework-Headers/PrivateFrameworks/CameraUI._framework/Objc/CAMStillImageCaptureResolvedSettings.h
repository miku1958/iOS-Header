//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMStillImageCaptureResolvedSettings : NSObject
{
    BOOL _HDREnabled;
    BOOL _portraitEffectEnabled;
    double _lowLightCaptureTime;
}

@property (readonly, nonatomic, getter=isHDREnabled) BOOL HDREnabled; // @synthesize HDREnabled=_HDREnabled;
@property (readonly, nonatomic) double lowLightCaptureTime; // @synthesize lowLightCaptureTime=_lowLightCaptureTime;
@property (readonly, nonatomic, getter=isPortraitEffectEnabled) BOOL portraitEffectEnabled; // @synthesize portraitEffectEnabled=_portraitEffectEnabled;

- (id)initWithHDREnabled:(BOOL)arg1 portraitEffectEnabled:(BOOL)arg2 lowLightCaptureTime:(double)arg3;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMExposureResult : NSObject
{
    BOOL _adjustingExposure;
    BOOL _exposureDidStart;
    BOOL _exposureDidEnd;
    BOOL _deviceSupportsFocus;
    float _exposureTargetBias;
    long long _exposureMode;
    struct CGPoint _pointOfInterest;
}

@property (readonly, nonatomic, getter=isAdjustingExposure) BOOL adjustingExposure; // @synthesize adjustingExposure=_adjustingExposure;
@property (readonly, nonatomic) BOOL deviceSupportsFocus; // @synthesize deviceSupportsFocus=_deviceSupportsFocus;
@property (readonly, nonatomic) BOOL exposureDidEnd; // @synthesize exposureDidEnd=_exposureDidEnd;
@property (readonly, nonatomic) BOOL exposureDidStart; // @synthesize exposureDidStart=_exposureDidStart;
@property (readonly, nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property (readonly, nonatomic) float exposureTargetBias; // @synthesize exposureTargetBias=_exposureTargetBias;
@property (readonly, nonatomic) struct CGPoint pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;

- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(BOOL)arg4 exposureDidStart:(BOOL)arg5 exposureDidEnd:(BOOL)arg6 deviceSupportsFocus:(BOOL)arg7;

@end


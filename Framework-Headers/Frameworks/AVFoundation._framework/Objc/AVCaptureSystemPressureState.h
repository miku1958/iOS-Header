//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSystemPressureStateInternal, NSString;

@interface AVCaptureSystemPressureState : NSObject
{
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) unsigned long long factors;
@property (readonly) NSString *level;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (int)figLevel;
- (id)init;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)recommendedFrameRateRangeForPortrait;
- (id)spiDebugDescription;

@end


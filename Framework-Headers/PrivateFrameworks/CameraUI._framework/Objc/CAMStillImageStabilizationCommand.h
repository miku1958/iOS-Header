//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStillImageStabilizationCommand : CAMCaptureCommand
{
    BOOL __stabilizationEnabled;
}

@property (readonly, nonatomic, getter=_isStabilizationEnabled) BOOL _stabilizationEnabled; // @synthesize _stabilizationEnabled=__stabilizationEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStabilizationEnabled:(BOOL)arg1;

@end

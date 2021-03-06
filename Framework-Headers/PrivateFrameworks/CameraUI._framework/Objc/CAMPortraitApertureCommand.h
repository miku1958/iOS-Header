//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPortraitApertureCommand : CAMCaptureCommand
{
    double _aperture;
}

@property (readonly, nonatomic) double aperture; // @synthesize aperture=_aperture;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAperture:(double)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand
{
    float __rate;
    double __videoZoomFactor;
    double __duration;
}

@property (readonly, nonatomic) double _duration; // @synthesize _duration=__duration;
@property (readonly, nonatomic) float _rate; // @synthesize _rate=__rate;
@property (readonly, nonatomic) double _videoZoomFactor; // @synthesize _videoZoomFactor=__videoZoomFactor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2;
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2;

@end

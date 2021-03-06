//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIScrollDynamics.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics
{
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint _initialRubberbandingOrigin;
    struct CGVector _initialRubberbandingVelocity;
    double _decelerationRate;
}

- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (double)durationUntilStop;
- (id)init;
- (BOOL)isRubberBandingAfterDuration:(double)arg1;
- (struct CGPoint)positionAfterDuration:(double)arg1;
- (double)speedAfterDuration:(double)arg1;
- (struct CGVector)velocityAfterDuration:(double)arg1;

@end


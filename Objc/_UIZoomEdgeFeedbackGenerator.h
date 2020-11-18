//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator
{
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _minimumTemporaryZoomScale;
    double _maximumTemporaryZoomScale;
}

@property (nonatomic) double maximumTemporaryZoomScale; // @synthesize maximumTemporaryZoomScale=_maximumTemporaryZoomScale;
@property (nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property (nonatomic) double minimumTemporaryZoomScale; // @synthesize minimumTemporaryZoomScale=_minimumTemporaryZoomScale;
@property (nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;

- (void)_updateMaximumValue;
- (void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2;
- (id)init;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)zoomScaleUpdated:(double)arg1;

@end


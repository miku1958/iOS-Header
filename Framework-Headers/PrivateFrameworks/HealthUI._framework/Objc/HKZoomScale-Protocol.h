//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKValueRange;

@protocol HKZoomScale <NSObject>
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (HKValueRange *)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)arg1;
- (double)zoomScaleForRange:(struct HKRange)arg1;
@end

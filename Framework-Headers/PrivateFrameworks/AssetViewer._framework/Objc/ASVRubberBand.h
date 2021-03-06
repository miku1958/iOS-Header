//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASVRubberBand : NSObject
{
    float _rubberBandFactor;
    float _minOffset;
    float _maxOffset;
    float _overshoot;
}

@property (nonatomic) float maxOffset; // @synthesize maxOffset=_maxOffset;
@property (nonatomic) float minOffset; // @synthesize minOffset=_minOffset;
@property (nonatomic) float overshoot; // @synthesize overshoot=_overshoot;
@property (nonatomic) float rubberBandFactor; // @synthesize rubberBandFactor=_rubberBandFactor;

- (id)initWithRubberBandFactor:(float)arg1 minOffset:(float)arg2 maxOffset:(float)arg3 overshoot:(float)arg4;
- (float)offsetForRubberBandOffset:(float)arg1;
- (BOOL)offsetIsWithinRubberBandedRange:(float)arg1;
- (float)rubberBandOffsetForOffset:(float)arg1;

@end


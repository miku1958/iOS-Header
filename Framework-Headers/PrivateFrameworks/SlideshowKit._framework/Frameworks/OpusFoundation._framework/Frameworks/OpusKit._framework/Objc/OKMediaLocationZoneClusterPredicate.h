//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate
{
    double _distance;
}

@property (readonly) double distance; // @synthesize distance=_distance;

- (id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3;
- (id)_titleWithPlacemark:(id)arg1;
- (void)dealloc;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithDistance:(double)arg1;
- (id)title;

@end


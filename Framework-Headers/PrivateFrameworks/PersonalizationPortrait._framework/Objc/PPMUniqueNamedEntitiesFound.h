//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMUniqueNamedEntitiesFound : NSObject
{
    PETDistributionEventTracker *_tracker;
}

@property (readonly, nonatomic) PETDistributionEventTracker *tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1;

@end


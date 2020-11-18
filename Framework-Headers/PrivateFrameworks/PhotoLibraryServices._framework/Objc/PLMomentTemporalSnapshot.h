//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject
{
    NSMutableSet *__nodes;
    double __range;
    double __distance;
}

@property (readonly, nonatomic) double distance; // @synthesize distance=__distance;
@property (readonly, nonatomic) NSMutableSet *nodes; // @synthesize nodes=__nodes;
@property (readonly, nonatomic) double range; // @synthesize range=__range;

- (void)dealloc;
- (id)initWithNodes:(id)arg1 inRange:(double)arg2;

@end

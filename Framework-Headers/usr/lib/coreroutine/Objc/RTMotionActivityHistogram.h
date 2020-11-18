//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject
{
    NSMutableDictionary *_bins;
    double _totalInterval;
}

@property (readonly, nonatomic) NSMutableDictionary *bins; // @synthesize bins=_bins;
@property (nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;

- (void).cxx_destruct;
- (void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3;
- (id)binForType:(unsigned long long)arg1;
- (id)binsSortedByInterval;
- (id)init;
- (id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;

@end


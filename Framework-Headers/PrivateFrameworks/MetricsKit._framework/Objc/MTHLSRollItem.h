//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem
{
    unsigned long long _duration;
}

@property (nonatomic) unsigned long long duration; // @synthesize duration=_duration;

- (BOOL)containsOverallPosition:(unsigned long long)arg1;
- (unsigned long long)endOverallPosition;
- (id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3;

@end

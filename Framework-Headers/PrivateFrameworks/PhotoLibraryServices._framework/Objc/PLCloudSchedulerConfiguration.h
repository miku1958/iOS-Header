//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLCloudSchedulerConfiguration : NSObject
{
    NSArray *_triggers;
    NSArray *_scenarioProducers;
    unsigned long long _concurrencyLevel;
}

@property (nonatomic) unsigned long long concurrencyLevel; // @synthesize concurrencyLevel=_concurrencyLevel;
@property (strong, nonatomic) NSArray *scenarioProducers; // @synthesize scenarioProducers=_scenarioProducers;
@property (strong, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;


@end

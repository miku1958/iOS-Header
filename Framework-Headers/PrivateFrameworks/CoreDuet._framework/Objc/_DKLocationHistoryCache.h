//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableSet;

@interface _DKLocationHistoryCache : NSObject
{
    NSMutableArray *_visits;
    NSMutableSet *_visitSet;
    double _earliestTime;
    double _latestTime;
    unsigned long long _index;
    BOOL _needsSorting;
}

@property (readonly) unsigned long long count;
@property (readonly) NSDate *newestExitDate;
@property (readonly) NSDate *oldestEntryDate;

- (void).cxx_destruct;
- (void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3;
- (void)clear;
- (void)clearOldest:(unsigned long long)arg1;
- (id)init;
- (id)lookupLocationIdforDate:(id)arg1;
- (void)sortIfNecessary;

@end


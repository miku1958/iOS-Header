//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSDate, NSString, RTMapItem, RTStateDepictionOneState, RTStateModelLocation;
@protocol GEOMapItem;

@interface RTStateDepiction : NSObject <NSSecureCoding>
{
    long long _numOfDataPts;
    RTStateDepictionOneState *_clusterState;
}

@property (strong, nonatomic) RTStateDepictionOneState *clusterState; // @synthesize clusterState=_clusterState;
@property (copy, nonatomic) NSString *customLabel;
@property (strong, nonatomic) id<GEOMapItem> geoMapItem;
@property (strong, nonatomic) NSDate *geocodeDate;
@property (strong, nonatomic) RTStateModelLocation *location;
@property (strong, nonatomic) RTMapItem *mapItem;
@property (nonatomic) unsigned long long mapItemSource;
@property (nonatomic) long long numOfDataPts; // @synthesize numOfDataPts=_numOfDataPts;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long typeSource;

+ (long long)maximumNumberOfDataPoints;
+ (double)quantizeTimeIntervalSinceReferenceDate:(double)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2;
- (id)_filterEntryExitData:(id)arg1 options:(id)arg2;
- (void)_performErrorCorrection;
- (void)_performIntegrityCheck;
- (id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2;
- (void)addOneVisitsFromStateDepiction:(id)arg1;
- (double)calculateStandardDeviationWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)cleanState:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)exemptFromPurge;
- (id)getAggStateStat;
- (double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2;
- (id)getAllOneVisits;
- (id)getEarliestLatestEntry;
- (id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3;
- (double)getLastVisit;
- (unsigned long long)getNumOfVisitsOverall;
- (id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4;
- (id)getRecentVisits:(double)arg1;
- (void)incrementNumOfDataPtsByInteger:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(unsigned long long)arg3 customLabel:(id)arg4 mapItem:(id)arg5;
- (id)lastEntyExit;
- (void)removeAllVisitsExceptMostRecent;
- (void)removeEntry:(double)arg1 exit:(double)arg2;
- (void)showState;
- (void)submitEntry:(double)arg1 exit:(double)arg2;

@end


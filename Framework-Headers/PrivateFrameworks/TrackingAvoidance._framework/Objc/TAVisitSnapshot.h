//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumber, TACLVisit, TADisplayOnCalculator, TALocationLite;

@interface TAVisitSnapshot : NSObject <NSSecureCoding>
{
    BOOL _isClosed;
    BOOL _latestLocationInsideVisit;
    TACLVisit *_representativeVisit;
    TALocationLite *_latestLocation;
    unsigned long long _loiType;
    NSMutableDictionary *_latestUtAdvertisements;
    NSMutableDictionary *_earliestUtAdvertisements;
    NSMutableOrderedSet *_lruUtAdvertisementCache;
    unsigned long long _uniqueUTBufferSizeCap;
    unsigned long long _displayEventBufferSizeCap;
    NSMutableArray *_displayEvents;
    NSDate *_exitIntervalBeginning;
    TADisplayOnCalculator *_displayOnCalculator;
    NSNumber *_distanceToClosestLoi;
    NSDate *_entryDurationOfConsiderationClosed;
    unsigned long long _maxNSigmaBetweenLastLocationAndVisit;
}

@property (nonatomic) unsigned long long displayEventBufferSizeCap; // @synthesize displayEventBufferSizeCap=_displayEventBufferSizeCap;
@property (strong, nonatomic) NSMutableArray *displayEvents; // @synthesize displayEvents=_displayEvents;
@property (strong, nonatomic) TADisplayOnCalculator *displayOnCalculator; // @synthesize displayOnCalculator=_displayOnCalculator;
@property (strong, nonatomic) NSNumber *distanceToClosestLoi; // @synthesize distanceToClosestLoi=_distanceToClosestLoi;
@property (readonly, nonatomic) NSMutableDictionary *earliestUtAdvertisements; // @synthesize earliestUtAdvertisements=_earliestUtAdvertisements;
@property (strong, nonatomic) NSDate *entryDurationOfConsiderationClosed; // @synthesize entryDurationOfConsiderationClosed=_entryDurationOfConsiderationClosed;
@property (strong, nonatomic) NSDate *exitIntervalBeginning; // @synthesize exitIntervalBeginning=_exitIntervalBeginning;
@property (readonly, nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property (readonly, copy, nonatomic) TALocationLite *latestLocation; // @synthesize latestLocation=_latestLocation;
@property (readonly, nonatomic) BOOL latestLocationInsideVisit; // @synthesize latestLocationInsideVisit=_latestLocationInsideVisit;
@property (readonly, nonatomic) NSMutableDictionary *latestUtAdvertisements; // @synthesize latestUtAdvertisements=_latestUtAdvertisements;
@property (readonly, nonatomic) unsigned long long loiType; // @synthesize loiType=_loiType;
@property (strong, nonatomic) NSMutableOrderedSet *lruUtAdvertisementCache; // @synthesize lruUtAdvertisementCache=_lruUtAdvertisementCache;
@property (nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit; // @synthesize maxNSigmaBetweenLastLocationAndVisit=_maxNSigmaBetweenLastLocationAndVisit;
@property (readonly, nonatomic) TACLVisit *representativeVisit; // @synthesize representativeVisit=_representativeVisit;
@property (nonatomic) unsigned long long uniqueUTBufferSizeCap; // @synthesize uniqueUTBufferSizeCap=_uniqueUTBufferSizeCap;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addScanState:(id)arg1;
- (void)addSystemState:(id)arg1;
- (void)addUTAdvertisement:(id)arg1;
- (void)calculateExitIntervalWithDisplayOnBudget:(double)arg1;
- (void)closeSnapshotCleanup;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)arg1 minDisplayOnDuration:(double)arg2;
- (id)getArrivalDelay;
- (id)getDepartureDelay;
- (double)getDisplayOnTimeUntilEndDate:(id)arg1;
- (double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)arg1;
- (double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)arg1;
- (id)getEntryAdvertisementsWithDisplayOnBudget:(double)arg1;
- (id)getEntryIntervalEvaluatedUntil;
- (id)getExitAdvertisementsWithDisplayOnBudget:(double)arg1;
- (id)getLocationRepresentingSnapshot;
- (id)initWithCoder:(id)arg1;
- (id)initWithTACLVisit:(id)arg1 uniqueUTBufferCap:(unsigned long long)arg2 displayEventBufferSizeCap:(unsigned long long)arg3 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)mostRecentAdvertisementDate;
- (void)pruneDisplayEvents;
- (BOOL)setDepartureVisit:(id)arg1;
- (void)setRepresentativeVisit:(id)arg1;
- (void)updateEntryIntervalWithDisplayOnBudget:(double)arg1 evaluateToEnd:(BOOL)arg2;
- (void)updateLatestLocation:(id)arg1;
- (void)updateLoiType:(id)arg1;

@end


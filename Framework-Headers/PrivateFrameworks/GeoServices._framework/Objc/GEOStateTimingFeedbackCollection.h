//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct {
        unsigned int sessionID:1;
        unsigned int durationInOldState:1;
        unsigned int sessionRelativeTimestamp:1;
    } _has;
}

@property (nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property (strong, nonatomic) NSMutableArray *stateTransitions; // @synthesize stateTransitions=_stateTransitions;

- (void)addStateTransition:(id)arg1;
- (void)clearStateTransitions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionsCount;
- (void)writeTo:(id)arg1;

@end


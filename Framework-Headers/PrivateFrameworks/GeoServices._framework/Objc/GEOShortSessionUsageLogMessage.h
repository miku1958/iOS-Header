//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABExperimentAssignment, GEOStateTimingUsageLogMessage, GEOUserActionUsageLogMessage;

@interface GEOShortSessionUsageLogMessage : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    double _relativeTimestamp;
    unsigned int _sequenceNumber;
    GEOStateTimingUsageLogMessage *_stateTimingLogMessage;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    GEOUserActionUsageLogMessage *_userActionLogMessage;
    struct {
        unsigned int sessionId:1;
        unsigned int relativeTimestamp:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasStateTimingLogMessage;
@property (readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
@property (readonly, nonatomic) BOOL hasUserActionLogMessage;
@property (nonatomic) double relativeTimestamp; // @synthesize relativeTimestamp=_relativeTimestamp;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) GEOStateTimingUsageLogMessage *stateTimingLogMessage; // @synthesize stateTimingLogMessage=_stateTimingLogMessage;
@property (strong, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment; // @synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment;
@property (strong, nonatomic) GEOUserActionUsageLogMessage *userActionLogMessage; // @synthesize userActionLogMessage=_userActionLogMessage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


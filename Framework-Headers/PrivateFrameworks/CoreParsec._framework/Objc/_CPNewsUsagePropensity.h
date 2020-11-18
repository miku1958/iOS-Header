//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPNewsUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPNewsUsagePropensity : PBCodable <_CPNewsUsagePropensity, NSSecureCoding>
{
    int _configuredLookbackTimeInDays;
    float _other;
    int _totalEngagements;
    int _totalSessions;
    long long _collectionStartTimestamp;
    long long _collectionEndTimestamp;
}

@property (nonatomic) long long collectionEndTimestamp; // @synthesize collectionEndTimestamp=_collectionEndTimestamp;
@property (nonatomic) long long collectionStartTimestamp; // @synthesize collectionStartTimestamp=_collectionStartTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays; // @synthesize configuredLookbackTimeInDays=_configuredLookbackTimeInDays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float other; // @synthesize other=_other;
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property (nonatomic) int totalSessions; // @synthesize totalSessions=_totalSessions;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requiresQueryId;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSString;

@interface _CPStartLocalSearchFeedback : PBCodable <NSCopying>
{
    unsigned long long _queryId;
    unsigned long long _timestamp;
    int _indexType;
    NSString *_input;
    int _triggerEvent;
    NSString *_uuid;
    struct {
        unsigned int queryId:1;
        unsigned int indexType:1;
        unsigned int triggerEvent:1;
    } _has;
}

@property (nonatomic) BOOL hasIndexType;
@property (readonly, nonatomic) BOOL hasInput;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) BOOL hasTriggerEvent;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) int indexType; // @synthesize indexType=_indexType;
@property (strong, nonatomic) NSString *input; // @synthesize input=_input;
@property (nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (int)StringAsIndexType:(id)arg1;
- (int)StringAsTriggerEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)indexTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)triggerEventAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


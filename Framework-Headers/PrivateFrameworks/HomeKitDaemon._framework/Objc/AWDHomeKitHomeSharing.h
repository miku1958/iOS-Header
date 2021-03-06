//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _errorCode;
    int _responseType;
    int _stage;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int responseType:1;
        unsigned int stage:1;
    } _has;
}

@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasResponseType;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int responseType; // @synthesize responseType=_responseType;
@property (nonatomic) int stage; // @synthesize stage=_stage;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsResponseType:(id)arg1;
- (int)StringAsStage:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseTypeAsString:(int)arg1;
- (id)stageAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitUpdateEventTrigger : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _requestOrigin;
    unsigned int _resultErrorCode;
    int _updateType;
    struct {
        unsigned int timestamp:1;
        unsigned int requestOrigin:1;
        unsigned int resultErrorCode:1;
        unsigned int updateType:1;
    } _has;
}

@property (nonatomic) BOOL hasRequestOrigin;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property (nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int updateType; // @synthesize updateType=_updateType;

- (int)StringAsRequestOrigin:(id)arg1;
- (int)StringAsUpdateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestOriginAsString:(int)arg1;
- (id)updateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


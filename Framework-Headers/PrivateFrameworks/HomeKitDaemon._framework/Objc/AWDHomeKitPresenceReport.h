//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitPresenceReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _authStatus;
    int _computeStatus;
    int _direction;
    int _reason;
    int _resultErrorCode;
    struct {
        unsigned int timestamp:1;
        unsigned int authStatus:1;
        unsigned int computeStatus:1;
        unsigned int direction:1;
        unsigned int reason:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property (nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
@property (nonatomic) int computeStatus; // @synthesize computeStatus=_computeStatus;
@property (nonatomic) int direction; // @synthesize direction=_direction;
@property (nonatomic) BOOL hasAuthStatus;
@property (nonatomic) BOOL hasComputeStatus;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsAuthStatus:(id)arg1;
- (int)StringAsComputeStatus:(id)arg1;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (id)authStatusAsString:(int)arg1;
- (id)computeStatusAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


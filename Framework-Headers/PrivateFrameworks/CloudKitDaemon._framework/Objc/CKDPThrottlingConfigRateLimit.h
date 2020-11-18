//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying>
{
    int _allowedRequestCount;
    int _intervalLengthSec;
    struct {
        unsigned int allowedRequestCount:1;
        unsigned int intervalLengthSec:1;
    } _has;
}

@property (nonatomic) int allowedRequestCount; // @synthesize allowedRequestCount=_allowedRequestCount;
@property (nonatomic) BOOL hasAllowedRequestCount;
@property (nonatomic) BOOL hasIntervalLengthSec;
@property (nonatomic) int intervalLengthSec; // @synthesize intervalLengthSec=_intervalLengthSec;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

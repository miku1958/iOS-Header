//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPMescalSessionInfoResponse : PBCodable <NSCopying>
{
    NSData *_sessionInfo;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property (readonly, nonatomic) BOOL hasSessionInfo;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) NSData *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property (nonatomic) int status; // @synthesize status=_status;

- (void).cxx_destruct;
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

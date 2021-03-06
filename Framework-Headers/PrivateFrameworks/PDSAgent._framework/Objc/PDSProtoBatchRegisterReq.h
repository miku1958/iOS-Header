//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying>
{
    long long _requestTtl;
    NSMutableArray *_userPushTokenRegRequests;
    struct {
        unsigned int requestTtl:1;
    } _has;
}

@property (nonatomic) BOOL hasRequestTtl;
@property (nonatomic) long long requestTtl; // @synthesize requestTtl=_requestTtl;
@property (strong, nonatomic) NSMutableArray *userPushTokenRegRequests; // @synthesize userPushTokenRegRequests=_userPushTokenRegRequests;

+ (Class)userPushTokenRegRequestsType;
- (void).cxx_destruct;
- (void)addUserPushTokenRegRequests:(id)arg1;
- (void)clearUserPushTokenRegRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userPushTokenRegRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPushTokenRegRequestsCount;
- (void)writeTo:(id)arg1;

@end


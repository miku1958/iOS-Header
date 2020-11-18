//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserCredentials, NSMutableArray, NSString;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying>
{
    NSMutableArray *_problemIds;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
}

@property (readonly, nonatomic) BOOL hasStatusNotificationId;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (strong, nonatomic) NSMutableArray *problemIds; // @synthesize problemIds=_problemIds;
@property (strong, nonatomic) NSString *statusNotificationId; // @synthesize statusNotificationId=_statusNotificationId;
@property (strong, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;

- (void)addProblemId:(id)arg1;
- (void)clearProblemIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemIdsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

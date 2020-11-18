//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_userIds;
}

@property (strong, nonatomic) NSMutableArray *userIds; // @synthesize userIds=_userIds;

+ (id)options;
- (void).cxx_destruct;
- (void)addUserId:(id)arg1;
- (void)clearUserIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)userIdsCount;
- (void)writeTo:(id)arg1;

@end


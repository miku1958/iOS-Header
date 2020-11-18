//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPLikeInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPGetLikesResponse : PBCodable <NSCopying>
{
    CKDPLikeInfo *_likeInfo;
    NSMutableArray *_likes;
}

@property (readonly, nonatomic) BOOL hasLikeInfo;
@property (strong, nonatomic) CKDPLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property (strong, nonatomic) NSMutableArray *likes; // @synthesize likes=_likes;

+ (Class)likeType;
- (void).cxx_destruct;
- (void)addLike:(id)arg1;
- (void)clearLikes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)likeAtIndex:(unsigned long long)arg1;
- (unsigned long long)likesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


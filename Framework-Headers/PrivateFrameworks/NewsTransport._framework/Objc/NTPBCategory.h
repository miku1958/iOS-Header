//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable <NSCopying>
{
    NSMutableArray *_categoryHierarchys;
    NSMutableArray *_curatedTagIds;
    NSString *_entityId;
    NSString *_name;
    NSMutableArray *_recommendedChannels;
    NSMutableArray *_recommendedTopics;
}

@property (strong, nonatomic) NSMutableArray *categoryHierarchys; // @synthesize categoryHierarchys=_categoryHierarchys;
@property (strong, nonatomic) NSMutableArray *curatedTagIds; // @synthesize curatedTagIds=_curatedTagIds;
@property (strong, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property (readonly, nonatomic) BOOL hasEntityId;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *recommendedChannels; // @synthesize recommendedChannels=_recommendedChannels;
@property (strong, nonatomic) NSMutableArray *recommendedTopics; // @synthesize recommendedTopics=_recommendedTopics;

+ (Class)categoryHierarchyType;
+ (Class)curatedTagIdsType;
+ (Class)recommendedChannelsType;
+ (Class)recommendedTopicsType;
- (void).cxx_destruct;
- (void)addCategoryHierarchy:(id)arg1;
- (void)addCuratedTagIds:(id)arg1;
- (void)addRecommendedChannels:(id)arg1;
- (void)addRecommendedTopics:(id)arg1;
- (id)categoryHierarchyAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryHierarchysCount;
- (void)clearCategoryHierarchys;
- (void)clearCuratedTagIds;
- (void)clearRecommendedChannels;
- (void)clearRecommendedTopics;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)curatedTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)curatedTagIdsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedChannelsCount;
- (id)recommendedTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedTopicsCount;
- (void)writeTo:(id)arg1;

@end


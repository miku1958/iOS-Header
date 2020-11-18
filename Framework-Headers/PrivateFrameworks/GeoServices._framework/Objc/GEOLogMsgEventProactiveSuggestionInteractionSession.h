//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>
{
    int _duration;
    int _interactedItemIndex;
    int _listType;
    NSMutableArray *_proactiveItems;
    struct {
        unsigned int duration:1;
        unsigned int interactedItemIndex:1;
        unsigned int listType:1;
    } _has;
}

@property (nonatomic) int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasInteractedItemIndex;
@property (nonatomic) BOOL hasListType;
@property (nonatomic) int interactedItemIndex; // @synthesize interactedItemIndex=_interactedItemIndex;
@property (nonatomic) int listType; // @synthesize listType=_listType;
@property (strong, nonatomic) NSMutableArray *proactiveItems; // @synthesize proactiveItems=_proactiveItems;

+ (Class)proactiveItemType;
- (void).cxx_destruct;
- (int)StringAsListType:(id)arg1;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)proactiveItemsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


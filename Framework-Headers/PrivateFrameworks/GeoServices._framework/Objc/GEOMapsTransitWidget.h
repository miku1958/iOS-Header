//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying>
{
    int _tappedItemIndex;
    NSMutableArray *_transitIncidentItems;
    int _transitMessageType;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    struct {
        unsigned int tappedItemIndex:1;
        unsigned int transitMessageType:1;
        unsigned int everExpanded:1;
        unsigned int initiallyExpanded:1;
    } _has;
}

@property (nonatomic) BOOL everExpanded; // @synthesize everExpanded=_everExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) BOOL hasTransitMessageType;
@property (nonatomic) BOOL initiallyExpanded; // @synthesize initiallyExpanded=_initiallyExpanded;
@property (nonatomic) int tappedItemIndex; // @synthesize tappedItemIndex=_tappedItemIndex;
@property (strong, nonatomic) NSMutableArray *transitIncidentItems; // @synthesize transitIncidentItems=_transitIncidentItems;
@property (nonatomic) int transitMessageType; // @synthesize transitMessageType=_transitMessageType;

+ (Class)transitIncidentItemType;
- (int)StringAsTransitMessageType:(id)arg1;
- (void)addTransitIncidentItem:(id)arg1;
- (void)clearTransitIncidentItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentItemsCount;
- (id)transitMessageTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

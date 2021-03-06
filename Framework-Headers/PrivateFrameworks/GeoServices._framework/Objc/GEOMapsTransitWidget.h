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
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    struct {
        unsigned int has_tappedItemIndex:1;
        unsigned int has_transitMessageType:1;
        unsigned int has_everExpanded:1;
        unsigned int has_initiallyExpanded:1;
    } _flags;
}

@property (nonatomic) BOOL everExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) BOOL hasTransitMessageType;
@property (nonatomic) BOOL initiallyExpanded;
@property (nonatomic) int tappedItemIndex;
@property (strong, nonatomic) NSMutableArray *transitIncidentItems;
@property (nonatomic) int transitMessageType;

+ (BOOL)isValid:(id)arg1;
+ (Class)transitIncidentItemType;
- (void).cxx_destruct;
- (int)StringAsTransitMessageType:(id)arg1;
- (void)addTransitIncidentItem:(id)arg1;
- (void)clearTransitIncidentItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentItemsCount;
- (id)transitMessageTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


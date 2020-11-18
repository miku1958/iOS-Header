//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSData, NSMutableArray, NSString;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    double _turnaroundTime;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSString *_nearbySectionHeader;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    BOOL _isChainResultSet;
    struct {
        unsigned int turnaroundTime:1;
        unsigned int statusCodeInfo:1;
        unsigned int isChainResultSet:1;
    } _has;
}

@property (nonatomic) BOOL hasIsChainResultSet;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasNearbySectionHeader;
@property (nonatomic) BOOL hasStatusCodeInfo;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL hasTurnaroundTime;
@property (nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property (strong, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property (strong, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property (strong, nonatomic) NSString *nearbySectionHeader; // @synthesize nearbySectionHeader=_nearbySectionHeader;
@property (strong, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property (nonatomic) int status; // @synthesize status=_status;
@property (nonatomic) int statusCodeInfo; // @synthesize statusCodeInfo=_statusCodeInfo;
@property (strong, nonatomic) NSMutableArray *suggestionEntryLists; // @synthesize suggestionEntryLists=_suggestionEntryLists;
@property (strong, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property (nonatomic) double turnaroundTime; // @synthesize turnaroundTime=_turnaroundTime;

+ (Class)namedFeaturesType;
+ (Class)placeResultType;
+ (Class)suggestionEntryListsType;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsStatusCodeInfo:(id)arg1;
- (void)addNamedFeatures:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearNamedFeatures;
- (void)clearPlaceResults;
- (void)clearSuggestionEntryLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)statusCodeInfoAsString:(int)arg1;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (void)writeTo:(id)arg1;

@end


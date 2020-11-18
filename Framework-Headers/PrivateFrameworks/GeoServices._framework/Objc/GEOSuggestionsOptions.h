//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _entriesType;
    int _listType;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    BOOL _includeRankingFeatures;
    BOOL _normalizePOIs;
    struct {
        unsigned int entriesType:1;
        unsigned int listType:1;
        unsigned int includeRankingFeatures:1;
        unsigned int normalizePOIs:1;
    } _has;
}

@property (nonatomic) int entriesType; // @synthesize entriesType=_entriesType;
@property (nonatomic) BOOL hasEntriesType;
@property (nonatomic) BOOL hasIncludeRankingFeatures;
@property (nonatomic) BOOL hasListType;
@property (nonatomic) BOOL hasNormalizePOIs;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL includeRankingFeatures; // @synthesize includeRankingFeatures=_includeRankingFeatures;
@property (nonatomic) int listType; // @synthesize listType=_listType;
@property (nonatomic) BOOL normalizePOIs; // @synthesize normalizePOIs=_normalizePOIs;
@property (strong, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property (strong, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsEntriesType:(id)arg1;
- (int)StringAsListType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


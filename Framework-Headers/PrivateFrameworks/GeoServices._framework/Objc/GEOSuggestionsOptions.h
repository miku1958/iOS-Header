//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _entriesType;
    int _listType;
    BOOL _includeRankingFeatures;
    BOOL _normalizePOIs;
    struct {
        unsigned int has_entriesType:1;
        unsigned int has_listType:1;
        unsigned int has_includeRankingFeatures:1;
        unsigned int has_normalizePOIs:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) int entriesType;
@property (nonatomic) BOOL hasEntriesType;
@property (nonatomic) BOOL hasIncludeRankingFeatures;
@property (nonatomic) BOOL hasListType;
@property (nonatomic) BOOL hasNormalizePOIs;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL includeRankingFeatures;
@property (nonatomic) int listType;
@property (nonatomic) BOOL normalizePOIs;
@property (strong, nonatomic) NSData *suggestionEntryMetadata;
@property (strong, nonatomic) NSData *suggestionMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsEntriesType:(id)arg1;
- (int)StringAsListType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


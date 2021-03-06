//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    BOOL _enforceServerResultsOrder;
    BOOL _shouldInterleaveClientResults;
    struct {
        unsigned int has_numVisibleResults:1;
        unsigned int has_suggestionType:1;
        unsigned int has_type:1;
        unsigned int has_enforceServerResultsOrder:1;
        unsigned int has_shouldInterleaveClientResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entries:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL enforceServerResultsOrder;
@property (strong, nonatomic) NSMutableArray *entries;
@property (nonatomic) BOOL hasEnforceServerResultsOrder;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNumVisibleResults;
@property (nonatomic) BOOL hasShouldInterleaveClientResults;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) NSString *name;
@property (nonatomic) int numVisibleResults;
@property (nonatomic) BOOL shouldInterleaveClientResults;
@property (nonatomic) int suggestionType;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entriesType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateSearchableNames;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _isDefaultName;
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alternateSearchableNames:1;
        unsigned int read_interpretedCategory:1;
        unsigned int read_matchedDisplayNameLanguageCode:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int read_normalizedQuery:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *alternateSearchableNames;
@property (readonly, nonatomic) BOOL hasInterpretedCategory;
@property (nonatomic) BOOL hasIsDefaultName;
@property (readonly, nonatomic) BOOL hasMatchedDisplayName;
@property (readonly, nonatomic) BOOL hasMatchedDisplayNameLanguageCode;
@property (readonly, nonatomic) BOOL hasNormalizedQuery;
@property (strong, nonatomic) NSString *interpretedCategory;
@property (nonatomic) BOOL isDefaultName;
@property (strong, nonatomic) NSString *matchedDisplayName;
@property (strong, nonatomic) NSString *matchedDisplayNameLanguageCode;
@property (strong, nonatomic) NSString *normalizedQuery;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateSearchableNameType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addAlternateSearchableName:(id)arg1;
- (id)alternateSearchableNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateSearchableNamesCount;
- (void)clearAlternateSearchableNames;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
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
- (void)writeTo:(id)arg1;

@end

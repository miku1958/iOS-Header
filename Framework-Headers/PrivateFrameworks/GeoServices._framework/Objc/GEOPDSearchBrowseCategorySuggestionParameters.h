//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueIdentifier, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    double _requestLocalTimestamp;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _minimumNumberOfCategories;
    int _preferredTransportType;
    int _suggestionType;
    BOOL _isCarplayRequest;
    BOOL _isFlatCategoryListRequest;
    BOOL _isFromNoQueryState;
    BOOL _isWidgetRequest;
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_minimumNumberOfCategories:1;
        unsigned int has_preferredTransportType:1;
        unsigned int has_suggestionType:1;
        unsigned int has_isCarplayRequest:1;
        unsigned int has_isFlatCategoryListRequest:1;
        unsigned int has_isFromNoQueryState:1;
        unsigned int has_isWidgetRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_venueFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) int *engineTypes;
@property (readonly, nonatomic) unsigned long long engineTypesCount;
@property (nonatomic) BOOL hasIsCarplayRequest;
@property (nonatomic) BOOL hasIsFlatCategoryListRequest;
@property (nonatomic) BOOL hasIsFromNoQueryState;
@property (nonatomic) BOOL hasIsWidgetRequest;
@property (nonatomic) BOOL hasMinimumNumberOfCategories;
@property (nonatomic) BOOL hasPreferredTransportType;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic) BOOL hasSuggestionType;
@property (readonly, nonatomic) BOOL hasVenueFilter;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) BOOL isCarplayRequest;
@property (nonatomic) BOOL isFlatCategoryListRequest;
@property (nonatomic) BOOL isFromNoQueryState;
@property (nonatomic) BOOL isWidgetRequest;
@property (nonatomic) int minimumNumberOfCategories;
@property (nonatomic) int preferredTransportType;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic) int suggestionType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOPDVenueIdentifier *venueFilter;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsPreferredTransportType:(id)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (id)engineTypesAsString:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preferredTransportTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)suggestionTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


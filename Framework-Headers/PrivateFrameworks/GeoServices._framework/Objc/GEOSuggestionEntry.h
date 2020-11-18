//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSData, NSMutableArray, NSString;

@interface GEOSuggestionEntry : PBCodable <NSCopying>
{
    CDStruct_97e972fa *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
}

@property (strong, nonatomic) NSString *calloutTitle; // @synthesize calloutTitle=_calloutTitle;
@property (strong, nonatomic) NSMutableArray *displayLines; // @synthesize displayLines=_displayLines;
@property (readonly, nonatomic) BOOL hasCalloutTitle;
@property (readonly, nonatomic) BOOL hasIconID;
@property (readonly, nonatomic) BOOL hasLatlng;
@property (readonly, nonatomic) BOOL hasSearchQueryDisplayString;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (strong, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property (strong, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property (strong, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property (strong, nonatomic) NSString *searchQueryDisplayString; // @synthesize searchQueryDisplayString=_searchQueryDisplayString;
@property (strong, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property (readonly, nonatomic) CDStruct_97e972fa *textHighlights;
@property (readonly, nonatomic) unsigned long long textHighlightsCount;

- (void)addDisplayLine:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addTextHighlights:(CDStruct_97e972fa)arg1;
- (void)clearDisplayLines;
- (void)clearNamedFeatures;
- (void)clearTextHighlights;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLinesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setTextHighlights:(CDStruct_97e972fa *)arg1 count:(unsigned long long)arg2;
- (CDStruct_97e972fa)textHighlightsAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end


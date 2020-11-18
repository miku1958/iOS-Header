//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    GEOPDAutocompleteEntry *_suggestionEntry;
    int _suggestionEntryIndex;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    int _suggestionsEntryListIndex;
    struct {
        unsigned int sessionID:1;
        unsigned int suggestionEntryIndex:1;
        unsigned int suggestionsEntryListIndex:1;
    } _has;
}

@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasSuggestionEntry;
@property (nonatomic) BOOL hasSuggestionEntryIndex;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL hasSuggestionsEntryListIndex;
@property (nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) GEOPDAutocompleteEntry *suggestionEntry; // @synthesize suggestionEntry=_suggestionEntry;
@property (nonatomic) int suggestionEntryIndex; // @synthesize suggestionEntryIndex=_suggestionEntryIndex;
@property (strong, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property (strong, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property (nonatomic) int suggestionsEntryListIndex; // @synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


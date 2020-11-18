//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    unsigned int _maxResults;
    NSMutableArray *_suggestionEntryMetadatas;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int requestLocalTimestamp:1;
        unsigned int maxResults:1;
    } _has;
}

@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property (nonatomic) double requestLocalTimestamp; // @synthesize requestLocalTimestamp=_requestLocalTimestamp;
@property (strong, nonatomic) NSMutableArray *suggestionEntryMetadatas; // @synthesize suggestionEntryMetadatas=_suggestionEntryMetadatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

+ (Class)suggestionEntryMetadataType;
- (void)addSuggestionEntryMetadata:(id)arg1;
- (void)clearSuggestionEntryMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadatasCount;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSData;

@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_4f8569d5 _has;
}

@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property (strong, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

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


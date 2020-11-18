//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying>
{
    NSMutableArray *_artworks;
    NSMutableArray *_labels;
    NSString *_searchDisplayName;
    NSMutableArray *_systemNames;
}

@property (strong, nonatomic) NSMutableArray *artworks; // @synthesize artworks=_artworks;
@property (readonly, nonatomic) BOOL hasSearchDisplayName;
@property (strong, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property (strong, nonatomic) NSString *searchDisplayName; // @synthesize searchDisplayName=_searchDisplayName;
@property (strong, nonatomic) NSMutableArray *systemNames; // @synthesize systemNames=_systemNames;

+ (id)transitInfoSnippetForPlaceData:(id)arg1;
- (void)addArtwork:(id)arg1;
- (void)addLabel:(id)arg1;
- (void)addSystemName:(id)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)artworksCount;
- (void)clearArtworks;
- (void)clearLabels;
- (void)clearSystemNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)systemNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemNamesCount;
- (void)writeTo:(id)arg1;

@end


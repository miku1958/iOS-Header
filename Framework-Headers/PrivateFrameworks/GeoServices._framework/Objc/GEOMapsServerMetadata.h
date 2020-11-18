//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEOMapsServerMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
}

@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadataTappedOn;
@property (strong, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds; // @synthesize suggestionEntryMetadataDisplayeds=_suggestionEntryMetadataDisplayeds;
@property (strong, nonatomic) NSData *suggestionEntryMetadataTappedOn; // @synthesize suggestionEntryMetadataTappedOn=_suggestionEntryMetadataTappedOn;

- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (void)writeTo:(id)arg1;

@end


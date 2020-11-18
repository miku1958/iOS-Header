//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndex : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    NSMutableArray *_variantEntries;
}

@property (strong, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property (strong, nonatomic) NSMutableArray *textEntries; // @synthesize textEntries=_textEntries;
@property (strong, nonatomic) NSMutableArray *variantEntries; // @synthesize variantEntries=_variantEntries;

- (void)addEntries:(id)arg1;
- (void)addTextEntries:(id)arg1;
- (void)addVariantEntries:(id)arg1;
- (id)artworkIdentifierForShieldType:(long long)arg1 textSpecificIdentifiers:(id *)arg2 variant:(unsigned long long)arg3;
- (void)clearEntries;
- (void)clearTextEntries;
- (void)clearVariantEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)defaultArtworkIdentifierForFeatureType:(int)arg1 variant:(unsigned long long)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textEntriesCount;
- (id)variantEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantEntriesCount;
- (void)writeTo:(id)arg1;

@end


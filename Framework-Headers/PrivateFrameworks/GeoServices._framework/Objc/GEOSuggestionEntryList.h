//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOSuggestionEntryList : PBCodable <NSCopying>
{
    NSString *_localizedSectionHeader;
    NSMutableArray *_suggestionEntries;
}

@property (readonly, nonatomic) BOOL hasLocalizedSectionHeader;
@property (strong, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property (strong, nonatomic) NSMutableArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;

- (void)addSuggestionEntries:(id)arg1;
- (void)clearSuggestionEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntriesCount;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying>
{
    int _acSequenceNumber;
    NSMutableArray *_displayedResults;
    int _searchFieldType;
    NSString *_searchString;
    int _selectedIndex;
    struct {
        unsigned int acSequenceNumber:1;
        unsigned int searchFieldType:1;
        unsigned int selectedIndex:1;
    } _has;
}

@property (nonatomic) int acSequenceNumber; // @synthesize acSequenceNumber=_acSequenceNumber;
@property (strong, nonatomic) NSMutableArray *displayedResults; // @synthesize displayedResults=_displayedResults;
@property (nonatomic) BOOL hasAcSequenceNumber;
@property (nonatomic) BOOL hasSearchFieldType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) int searchFieldType; // @synthesize searchFieldType=_searchFieldType;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;

+ (Class)displayedResultType;
- (void).cxx_destruct;
- (int)StringAsSearchFieldType:(id)arg1;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayedResultsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchFieldTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

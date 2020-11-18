//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    int _keypressStatus;
    NSString *_query;
    NSMutableArray *_queryTokens;
    int _selectedIndex;
    int _trigger;
    struct {
        unsigned int keypressStatus:1;
        unsigned int selectedIndex:1;
        unsigned int trigger:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property (nonatomic) BOOL hasKeypressStatus;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int keypressStatus; // @synthesize keypressStatus=_keypressStatus;
@property (strong, nonatomic) NSString *query; // @synthesize query=_query;
@property (strong, nonatomic) NSMutableArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property (nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (nonatomic) int trigger; // @synthesize trigger=_trigger;

+ (Class)entriesType;
+ (Class)queryTokensType;
- (void).cxx_destruct;
- (int)StringAsKeypressStatus:(id)arg1;
- (int)StringAsTrigger:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)addQueryTokens:(id)arg1;
- (void)clearEntries;
- (void)clearQueryTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keypressStatusAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryTokensCount;
- (BOOL)readFrom:(id)arg1;
- (id)triggerAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


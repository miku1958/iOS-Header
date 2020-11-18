//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying>
{
    double _contactRelevanceScore;
    double _fractionOfMatch;
    int _age;
    int _distanceToSuggestion;
    int _peopleSuggesterRank;
    int _serverEntryType;
    int _suggestionType;
    BOOL _matchedUsingAddress;
    BOOL _matchedUsingEventName;
    BOOL _matchedUsingLabel;
    BOOL _matchedUsingName;
    BOOL _matchedUsingOrganization;
    BOOL _shownToUser;
    struct {
        unsigned int contactRelevanceScore:1;
        unsigned int fractionOfMatch:1;
        unsigned int age:1;
        unsigned int distanceToSuggestion:1;
        unsigned int peopleSuggesterRank:1;
        unsigned int serverEntryType:1;
        unsigned int suggestionType:1;
        unsigned int matchedUsingAddress:1;
        unsigned int matchedUsingEventName:1;
        unsigned int matchedUsingLabel:1;
        unsigned int matchedUsingName:1;
        unsigned int matchedUsingOrganization:1;
        unsigned int shownToUser:1;
    } _has;
}

@property (nonatomic) int age; // @synthesize age=_age;
@property (nonatomic) double contactRelevanceScore; // @synthesize contactRelevanceScore=_contactRelevanceScore;
@property (nonatomic) int distanceToSuggestion; // @synthesize distanceToSuggestion=_distanceToSuggestion;
@property (nonatomic) double fractionOfMatch; // @synthesize fractionOfMatch=_fractionOfMatch;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasContactRelevanceScore;
@property (nonatomic) BOOL hasDistanceToSuggestion;
@property (nonatomic) BOOL hasFractionOfMatch;
@property (nonatomic) BOOL hasMatchedUsingAddress;
@property (nonatomic) BOOL hasMatchedUsingEventName;
@property (nonatomic) BOOL hasMatchedUsingLabel;
@property (nonatomic) BOOL hasMatchedUsingName;
@property (nonatomic) BOOL hasMatchedUsingOrganization;
@property (nonatomic) BOOL hasPeopleSuggesterRank;
@property (nonatomic) BOOL hasServerEntryType;
@property (nonatomic) BOOL hasShownToUser;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) BOOL matchedUsingAddress; // @synthesize matchedUsingAddress=_matchedUsingAddress;
@property (nonatomic) BOOL matchedUsingEventName; // @synthesize matchedUsingEventName=_matchedUsingEventName;
@property (nonatomic) BOOL matchedUsingLabel; // @synthesize matchedUsingLabel=_matchedUsingLabel;
@property (nonatomic) BOOL matchedUsingName; // @synthesize matchedUsingName=_matchedUsingName;
@property (nonatomic) BOOL matchedUsingOrganization; // @synthesize matchedUsingOrganization=_matchedUsingOrganization;
@property (nonatomic) int peopleSuggesterRank; // @synthesize peopleSuggesterRank=_peopleSuggesterRank;
@property (nonatomic) int serverEntryType; // @synthesize serverEntryType=_serverEntryType;
@property (nonatomic) BOOL shownToUser; // @synthesize shownToUser=_shownToUser;
@property (nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;

- (int)StringAsServerEntryType:(id)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverEntryTypeAsString:(int)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


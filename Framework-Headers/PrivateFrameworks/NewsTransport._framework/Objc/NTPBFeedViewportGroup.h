//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBCardStyle, NTPBColor, NTPBDate;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying>
{
    CDStruct_95bda58d _assetURLStringRefs;
    unsigned long long _mergeID;
    unsigned long long _options;
    NSString *_bridgedGroupIdentifier;
    NTPBCardStyle *_cardStyle;
    NTPBDate *_creationDate;
    int _ctaTextRef;
    NTPBCardStyle *_darkCardStyle;
    NTPBColor *_darkStyleTitleColor;
    NTPBDate *_editionFeedEndDate;
    NTPBDate *_editionFeedStartDate;
    NTPBDate *_editionKeyDate;
    int _eyebrowTextRef;
    NSMutableArray *_headlines;
    NSString *_identifier;
    NSMutableArray *_issueIDs;
    int _l2TagIDRef;
    int _sourceIdentifierRef;
    int _subtitleRef;
    NTPBColor *_titleColor;
    int _titleRef;
    int _type;
    BOOL _isFirstFromEdition;
    BOOL _usesPlaceholderHeadlines;
    struct {
        unsigned int mergeID:1;
        unsigned int options:1;
        unsigned int ctaTextRef:1;
        unsigned int eyebrowTextRef:1;
        unsigned int l2TagIDRef:1;
        unsigned int sourceIdentifierRef:1;
        unsigned int subtitleRef:1;
        unsigned int titleRef:1;
        unsigned int type:1;
        unsigned int isFirstFromEdition:1;
        unsigned int usesPlaceholderHeadlines:1;
    } _has;
}

@property (readonly, nonatomic) int *assetURLStringRefs;
@property (readonly, nonatomic) unsigned long long assetURLStringRefsCount;
@property (strong, nonatomic) NSString *bridgedGroupIdentifier; // @synthesize bridgedGroupIdentifier=_bridgedGroupIdentifier;
@property (strong, nonatomic) NTPBCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property (strong, nonatomic) NTPBDate *creationDate; // @synthesize creationDate=_creationDate;
@property (nonatomic) int ctaTextRef; // @synthesize ctaTextRef=_ctaTextRef;
@property (strong, nonatomic) NTPBCardStyle *darkCardStyle; // @synthesize darkCardStyle=_darkCardStyle;
@property (strong, nonatomic) NTPBColor *darkStyleTitleColor; // @synthesize darkStyleTitleColor=_darkStyleTitleColor;
@property (strong, nonatomic) NTPBDate *editionFeedEndDate; // @synthesize editionFeedEndDate=_editionFeedEndDate;
@property (strong, nonatomic) NTPBDate *editionFeedStartDate; // @synthesize editionFeedStartDate=_editionFeedStartDate;
@property (strong, nonatomic) NTPBDate *editionKeyDate; // @synthesize editionKeyDate=_editionKeyDate;
@property (nonatomic) int eyebrowTextRef; // @synthesize eyebrowTextRef=_eyebrowTextRef;
@property (readonly, nonatomic) BOOL hasBridgedGroupIdentifier;
@property (readonly, nonatomic) BOOL hasCardStyle;
@property (readonly, nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasCtaTextRef;
@property (readonly, nonatomic) BOOL hasDarkCardStyle;
@property (readonly, nonatomic) BOOL hasDarkStyleTitleColor;
@property (readonly, nonatomic) BOOL hasEditionFeedEndDate;
@property (readonly, nonatomic) BOOL hasEditionFeedStartDate;
@property (readonly, nonatomic) BOOL hasEditionKeyDate;
@property (nonatomic) BOOL hasEyebrowTextRef;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsFirstFromEdition;
@property (nonatomic) BOOL hasL2TagIDRef;
@property (nonatomic) BOOL hasMergeID;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasSourceIdentifierRef;
@property (nonatomic) BOOL hasSubtitleRef;
@property (readonly, nonatomic) BOOL hasTitleColor;
@property (nonatomic) BOOL hasTitleRef;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUsesPlaceholderHeadlines;
@property (strong, nonatomic) NSMutableArray *headlines; // @synthesize headlines=_headlines;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property (strong, nonatomic) NSMutableArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property (nonatomic) int l2TagIDRef; // @synthesize l2TagIDRef=_l2TagIDRef;
@property (nonatomic) unsigned long long mergeID; // @synthesize mergeID=_mergeID;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (nonatomic) int sourceIdentifierRef; // @synthesize sourceIdentifierRef=_sourceIdentifierRef;
@property (nonatomic) int subtitleRef; // @synthesize subtitleRef=_subtitleRef;
@property (strong, nonatomic) NTPBColor *titleColor; // @synthesize titleColor=_titleColor;
@property (nonatomic) int titleRef; // @synthesize titleRef=_titleRef;
@property (nonatomic) int type; // @synthesize type=_type;
@property (nonatomic) BOOL usesPlaceholderHeadlines; // @synthesize usesPlaceholderHeadlines=_usesPlaceholderHeadlines;

+ (Class)headlinesType;
+ (Class)issueIDsType;
- (void)addAssetURLStringRef:(int)arg1;
- (void)addHeadlines:(id)arg1;
- (void)addIssueIDs:(id)arg1;
- (int)assetURLStringRefAtIndex:(unsigned long long)arg1;
- (void)clearAssetURLStringRefs;
- (void)clearHeadlines;
- (void)clearIssueIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (BOOL)isEqual:(id)arg1;
- (id)issueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)issueIDsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAssetURLStringRefs:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

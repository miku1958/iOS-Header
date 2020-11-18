//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NTPBFeedCellExposure, NTPBTocCellExposureArticleElement;

@interface NTPBTocCellExposure : PBCodable <NSCopying>
{
    int _displayRank;
    NTPBFeedCellExposure *_feedCellExposure;
    int _rankInSection;
    NTPBTocCellExposureArticleElement *_tocCellExposureArticleElement;
    NSData *_tocCellExposureId;
    int _tocCellSection;
    int _type;
    BOOL _isBadged;
    struct {
        unsigned int displayRank:1;
        unsigned int rankInSection:1;
        unsigned int tocCellSection:1;
        unsigned int type:1;
        unsigned int isBadged:1;
    } _has;
}

@property (nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property (strong, nonatomic) NTPBFeedCellExposure *feedCellExposure; // @synthesize feedCellExposure=_feedCellExposure;
@property (nonatomic) BOOL hasDisplayRank;
@property (readonly, nonatomic) BOOL hasFeedCellExposure;
@property (nonatomic) BOOL hasIsBadged;
@property (nonatomic) BOOL hasRankInSection;
@property (readonly, nonatomic) BOOL hasTocCellExposureArticleElement;
@property (readonly, nonatomic) BOOL hasTocCellExposureId;
@property (nonatomic) BOOL hasTocCellSection;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isBadged; // @synthesize isBadged=_isBadged;
@property (nonatomic) int rankInSection; // @synthesize rankInSection=_rankInSection;
@property (strong, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement; // @synthesize tocCellExposureArticleElement=_tocCellExposureArticleElement;
@property (strong, nonatomic) NSData *tocCellExposureId; // @synthesize tocCellExposureId=_tocCellExposureId;
@property (nonatomic) int tocCellSection; // @synthesize tocCellSection=_tocCellSection;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (int)StringAsTocCellSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tocCellSectionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

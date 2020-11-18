//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBIssueTocView : PBCodable <NSCopying>
{
    NSString *_articleId;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    BOOL _adSupportedChannel;
    struct {
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (strong, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property (strong, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property (strong, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property (nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;

- (void).cxx_destruct;
- (int)StringAsParentFeedType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


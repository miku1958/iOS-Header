//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    int _articleViewType;
    float _maxScrollDepth;
    NSString *_referringSite;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int articleViewType:1;
        unsigned int maxScrollDepth:1;
    } _has;
}

@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (nonatomic) int articleViewType; // @synthesize articleViewType=_articleViewType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleViewType;
@property (nonatomic) BOOL hasMaxScrollDepth;
@property (readonly, nonatomic) BOOL hasReferringSite;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasWindowId;
@property (nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
@property (strong, nonatomic) NSString *referringSite; // @synthesize referringSite=_referringSite;
@property (strong, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (strong, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


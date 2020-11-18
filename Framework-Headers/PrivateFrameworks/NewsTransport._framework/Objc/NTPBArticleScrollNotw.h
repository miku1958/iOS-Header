//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    float _maxScrollDepth;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int maxScrollDepth:1;
    } _has;
}

@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasMaxScrollDepth;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasWindowId;
@property (nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
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


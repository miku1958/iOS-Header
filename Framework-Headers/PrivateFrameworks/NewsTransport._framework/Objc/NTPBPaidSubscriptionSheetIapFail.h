//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPaidSubscriptionSheetIapFail : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSString *_failedIapId;
    NSString *_sourceChannelId;
}

@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSString *failedIapId; // @synthesize failedIapId=_failedIapId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasFailedIapId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;

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


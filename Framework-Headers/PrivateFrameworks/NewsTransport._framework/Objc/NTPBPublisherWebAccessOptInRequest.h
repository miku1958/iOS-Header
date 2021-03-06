//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>
{
    NSString *_channelId;
    NSString *_country;
    NSString *_email;
    NSString *_iapId;
    NSString *_language;
    NSString *_purchaseReceipt;
}

@property (strong, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property (strong, nonatomic) NSString *country; // @synthesize country=_country;
@property (strong, nonatomic) NSString *email; // @synthesize email=_email;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasEmail;
@property (readonly, nonatomic) BOOL hasIapId;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasPurchaseReceipt;
@property (strong, nonatomic) NSString *iapId; // @synthesize iapId=_iapId;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSString *purchaseReceipt; // @synthesize purchaseReceipt=_purchaseReceipt;

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


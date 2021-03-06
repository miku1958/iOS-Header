//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying>
{
    long long _dsId;
    NSString *_languageCode;
    NSString *_userStorefrontId;
    struct {
        unsigned int dsId:1;
    } _has;
}

@property (nonatomic) long long dsId; // @synthesize dsId=_dsId;
@property (nonatomic) BOOL hasDsId;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;

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


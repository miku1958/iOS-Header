//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>
{
    NSString *_digitalCardImageUrl;
    NSString *_logoImageUrl;
    NSString *_thumbnailImageUrl;
}

@property (strong, nonatomic) NSString *digitalCardImageUrl; // @synthesize digitalCardImageUrl=_digitalCardImageUrl;
@property (readonly, nonatomic) BOOL hasDigitalCardImageUrl;
@property (readonly, nonatomic) BOOL hasLogoImageUrl;
@property (readonly, nonatomic) BOOL hasThumbnailImageUrl;
@property (strong, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property (strong, nonatomic) NSString *thumbnailImageUrl; // @synthesize thumbnailImageUrl=_thumbnailImageUrl;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

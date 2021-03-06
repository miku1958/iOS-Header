//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADConfigurationResponse : PBCodable <NSCopying>
{
    int _bannerProxyType;
    NSString *_configVersion;
    NSMutableArray *_theConfigurations;
    NSString *_resourceConnectProxyURL;
    NSString *_resourceProxyURL;
    struct {
        unsigned int bannerProxyType:1;
    } _has;
}

@property (nonatomic) int bannerProxyType; // @synthesize bannerProxyType=_bannerProxyType;
@property (strong, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property (nonatomic) BOOL hasBannerProxyType;
@property (readonly, nonatomic) BOOL hasConfigVersion;
@property (readonly, nonatomic) BOOL hasResourceConnectProxyURL;
@property (readonly, nonatomic) BOOL hasResourceProxyURL;
@property (strong, nonatomic) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property (strong, nonatomic) NSString *resourceProxyURL; // @synthesize resourceProxyURL=_resourceProxyURL;
@property (strong, nonatomic) NSMutableArray *theConfigurations; // @synthesize theConfigurations=_theConfigurations;

+ (Class)theConfigurationType;
- (void).cxx_destruct;
- (int)StringAsBannerProxyType:(id)arg1;
- (void)addTheConfiguration:(id)arg1;
- (id)bannerProxyTypeAsString:(int)arg1;
- (void)clearTheConfigurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)theConfigurationsCount;
- (void)writeTo:(id)arg1;

@end


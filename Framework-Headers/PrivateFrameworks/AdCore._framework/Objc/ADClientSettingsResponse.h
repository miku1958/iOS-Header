//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying>
{
    double _expirationDate;
    NSMutableArray *_searchAdsSettingsParams;
    struct {
        unsigned int expirationDate:1;
    } _has;
}

@property (nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (strong, nonatomic) NSMutableArray *searchAdsSettingsParams; // @synthesize searchAdsSettingsParams=_searchAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;
- (void).cxx_destruct;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (void)clearSearchAdsSettingsParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)writeTo:(id)arg1;

@end


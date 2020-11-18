//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PLRevGeoCompoundNameInfo;
@protocol GEOMapItemPrivate;

@interface PLRevGeoLocationInfo : NSObject
{
    BOOL _isValid;
    BOOL _isHome;
    id<GEOMapItemPrivate> _geoMapItem;
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
    NSString *_providerId;
    unsigned long long _providerVersion;
}

@property (strong, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // @synthesize compoundNameInfo=_compoundNameInfo;
@property (strong, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // @synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (strong, nonatomic) id<GEOMapItemPrivate> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL isHome; // @synthesize isHome=_isHome;
@property (readonly, nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property (strong, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property (nonatomic) unsigned long long providerVersion; // @synthesize providerVersion=_providerVersion;

+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (unsigned long long)currentVersion;
+ (BOOL)isValidFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (CDUnknownBlockType)sortedNameAndAreaInfoComparatorWithHomeAtEnd:(BOOL)arg1;
- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long *)arg3;
- (id)dataForInfo;
- (void)dealloc;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)localizedDescription;

@end


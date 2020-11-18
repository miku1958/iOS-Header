//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject
{
    BOOL _forEngagement;
    BOOL _legacyFormats;
    struct LogCategory *_ucat;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_marketingProductNumber;
    NSString *_color;
    NSString *_colorHousing;
    NSString *_colorCoverGlass;
    unsigned long long _version;
    NSDictionary *_additionalQueryParameters;
}

@property (readonly, nonatomic) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property (readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property (readonly, nonatomic) NSString *colorCoverGlass; // @synthesize colorCoverGlass=_colorCoverGlass;
@property (readonly, nonatomic) NSString *colorHousing; // @synthesize colorHousing=_colorHousing;
@property (readonly, nonatomic) BOOL forEngagement; // @synthesize forEngagement=_forEngagement;
@property (readonly, nonatomic) BOOL legacyFormats; // @synthesize legacyFormats=_legacyFormats;
@property (strong, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property (readonly, nonatomic) NSString *marketingProductNumber; // @synthesize marketingProductNumber=_marketingProductNumber;
@property (readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) struct LogCategory *ucat; // @synthesize ucat=_ucat;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (BOOL)deviceWantsLegacyFormats;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(BOOL)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)loggingProductType;

@end


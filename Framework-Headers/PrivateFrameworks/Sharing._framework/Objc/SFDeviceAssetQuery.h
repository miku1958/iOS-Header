//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject
{
    BOOL _legacyAsset;
    BOOL _h264;
    struct LogCategory *_ucat;
    NSString *_assetType;
    unsigned long long _version;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_color;
    NSDictionary *_additionalQueryParameters;
}

@property (readonly, nonatomic) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property (readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property (readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property (readonly, nonatomic) NSString *effectiveProductType;
@property (nonatomic) BOOL h264; // @synthesize h264=_h264;
@property (nonatomic) BOOL legacyAsset; // @synthesize legacyAsset=_legacyAsset;
@property (strong, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property (readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) struct LogCategory *ucat; // @synthesize ucat=_ucat;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (BOOL)deviceWantsH264;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAssetType:(id)arg1 productType:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithHomePodColor:(unsigned long long)arg1 version:(unsigned int)arg2;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)loggingProductType;

@end


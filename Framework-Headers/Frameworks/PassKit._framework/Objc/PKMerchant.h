//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    BOOL _useRawMerchantData;
    BOOL _mapsDataIsFromLocalMatch;
    NSString *_displayName;
    NSURL *_originURL;
    NSString *_webMerchantIdentifier;
    NSString *_webMerchantName;
    long long _adamIdentifier;
    long long _industryCode;
    NSString *_industryCategory;
    NSString *_name;
    NSString *_rawName;
    NSString *_merchantIdentifier;
    NSString *_rawCANL;
    NSString *_rawCity;
    NSString *_rawState;
    NSString *_rawCountry;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    long long _cleanConfidenceLevel;
    long long _fallbackcategory;
    NSString *_fallbackDetailedCategory;
    PKMapsMerchant *_mapsMerchant;
    PKMapsBrand *_mapsBrand;
}

@property (nonatomic) long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property (readonly, nonatomic) NSURL *businessChatURL;
@property (readonly, nonatomic) long long category;
@property (copy, nonatomic) NSString *city; // @synthesize city=_city;
@property (nonatomic) long long cleanConfidenceLevel; // @synthesize cleanConfidenceLevel=_cleanConfidenceLevel;
@property (readonly, nonatomic) NSString *detailedCategory;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *fallbackDetailedCategory; // @synthesize fallbackDetailedCategory=_fallbackDetailedCategory;
@property (nonatomic) long long fallbackcategory; // @synthesize fallbackcategory=_fallbackcategory;
@property (readonly, nonatomic) BOOL hasMapsMatch;
@property (readonly, nonatomic) NSString *heroImageAttribution;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property (nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSURL *logoImageURL;
@property (strong, nonatomic) PKMapsBrand *mapsBrand; // @synthesize mapsBrand=_mapsBrand;
@property (nonatomic) BOOL mapsDataIsFromLocalMatch; // @synthesize mapsDataIsFromLocalMatch=_mapsDataIsFromLocalMatch;
@property (strong, nonatomic) PKMapsMerchant *mapsMerchant; // @synthesize mapsMerchant=_mapsMerchant;
@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *rawCANL; // @synthesize rawCANL=_rawCANL;
@property (copy, nonatomic) NSString *rawCity; // @synthesize rawCity=_rawCity;
@property (copy, nonatomic) NSString *rawCountry; // @synthesize rawCountry=_rawCountry;
@property (copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property (copy, nonatomic) NSString *rawState; // @synthesize rawState=_rawState;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (nonatomic) BOOL useRawMerchantData; // @synthesize useRawMerchantData=_useRawMerchantData;
@property (copy, nonatomic) NSString *webMerchantIdentifier; // @synthesize webMerchantIdentifier=_webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName; // @synthesize webMerchantName=_webMerchantName;
@property (copy, nonatomic) NSString *zip; // @synthesize zip=_zip;

+ (id)recordNamePrefix;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_regenerateDisplayName;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)description;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasBetterVisualPropertiesThanMerchant:(id)arg1;
- (BOOL)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMerchant:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
- (BOOL)shouldBeCombinedWithMerchant:(id)arg1;
- (id)uniqueIdentifier;

@end

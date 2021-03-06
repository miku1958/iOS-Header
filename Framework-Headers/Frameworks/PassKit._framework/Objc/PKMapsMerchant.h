//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, CNPostalAddress, MKWalletMerchantStylingInfo, NSString, NSURL;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    int _resultProviderIdentifier;
    unsigned long long _identifier;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_url;
    double _locationLatitude;
    double _locationLongitude;
    CNPostalAddress *_postalAddress;
    NSURL *_heroImageURL;
    NSString *_heroImageAttributionName;
    long long _category;
    NSString *_detailedCategory;
    MKWalletMerchantStylingInfo *_stylingInfo;
    NSURL *_businessChatURL;
}

@property (copy, nonatomic) NSURL *businessChatURL; // @synthesize businessChatURL=_businessChatURL;
@property (nonatomic) long long category; // @synthesize category=_category;
@property (copy, nonatomic) NSString *detailedCategory; // @synthesize detailedCategory=_detailedCategory;
@property (copy, nonatomic) NSString *heroImageAttributionName; // @synthesize heroImageAttributionName=_heroImageAttributionName;
@property (copy, nonatomic) NSURL *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property (nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property (nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property (nonatomic) int resultProviderIdentifier; // @synthesize resultProviderIdentifier=_resultProviderIdentifier;
@property (strong, nonatomic) MKWalletMerchantStylingInfo *stylingInfo; // @synthesize stylingInfo=_stylingInfo;
@property (copy, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)deleteFromCloudStoreRecord:(id)arg1;
+ (id)recordNamePrefix;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_jsonEncodedPostalAddressString;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)description;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMapsMerchant:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonRepresentation;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;

@end


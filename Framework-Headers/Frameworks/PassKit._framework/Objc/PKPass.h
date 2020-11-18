//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PKBarcode, PKImage, PKNFCPayload, PKPassDisplayProfile, PKPassPersonalization, PKPaymentPass, UIImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding>
{
    BOOL _remotePass;
    BOOL _voided;
    BOOL _hasStoredValue;
    BOOL _revoked;
    unsigned long long _passType;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSString *_deviceName;
    NSString *_passLibraryMachServiceName;
    NSNumber *_sequenceCounter;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedLocations;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    long long _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSSet *_associatedPassTypeIdentifiers;
    PKNFCPayload *_nfcPayload;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

@property (readonly, nonatomic) NSURL *appLaunchURL;
@property (copy, nonatomic) NSSet *associatedPassTypeIdentifiers; // @synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers;
@property (copy, nonatomic) NSString *authenticationToken; // @dynamic authenticationToken;
@property (readonly, nonatomic) PKImage *backFaceImage;
@property (readonly, nonatomic) NSArray *backFieldBuckets;
@property (readonly, nonatomic) PKBarcode *barcode;
@property (copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (copy, nonatomic) PKPassDisplayProfile *displayProfile; // @dynamic displayProfile;
@property (copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property (copy, nonatomic) NSSet *embeddedLocations; // @synthesize embeddedLocations=_embeddedLocations;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) PKImage *footerImage;
@property (readonly, nonatomic) PKImage *frontFaceImage;
@property (readonly, nonatomic) NSArray *frontFieldBuckets;
@property (copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property (nonatomic) BOOL hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property (readonly, copy, nonatomic) UIImage *icon; // @dynamic icon;
@property (readonly, nonatomic) PKImage *iconImage;
@property (strong, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property (readonly, nonatomic) BOOL isPersonalizable;
@property (copy, nonatomic) NSURL *localLocationsURL; // @synthesize localLocationsURL=_localLocationsURL;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) struct CGRect logoRect;
@property (readonly, nonatomic) NSString *logoText;
@property (readonly, nonatomic) NSString *lowercaseLocalizedName;
@property (strong, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property (copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property (readonly, nonatomic, getter=isNFCPayloadEncrypted) BOOL nfcPayloadEncrypted;
@property (readonly) NSString *notificationCenterTitle;
@property (readonly, nonatomic) PKImage *notificationIconImage;
@property (copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property (readonly, nonatomic) PKImage *partialFrontFaceImage;
@property (readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // @synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder;
@property (copy, nonatomic) NSString *passLibraryMachServiceName; // @synthesize passLibraryMachServiceName=_passLibraryMachServiceName;
@property (nonatomic) unsigned long long passType; // @synthesize passType=_passType;
@property (copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property (copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPassPersonalization *personalization;
@property (readonly, nonatomic) PKImage *personalizationLogoImage;
@property (readonly, nonatomic) NSString *pluralLocalizedName;
@property (copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property (nonatomic, getter=isRemotePass) BOOL remotePass; // @synthesize remotePass=_remotePass;
@property (nonatomic, getter=isRevoked) BOOL revoked; // @synthesize revoked=_revoked;
@property (copy, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (nonatomic) long long sharingMethod; // @synthesize sharingMethod=_sharingMethod;
@property (copy, nonatomic) NSString *sharingText; // @synthesize sharingText=_sharingText;
@property (copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property (readonly, nonatomic) NSArray *storeIdentifiers;
@property (readonly, nonatomic) struct CGRect stripRect;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property (readonly, nonatomic) struct CGRect thumbnailRect;
@property (readonly, nonatomic) long long transitType;
@property (readonly, nonatomic) NSString *uniqueID; // @dynamic uniqueID;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (nonatomic, getter=isVoided) BOOL voided; // @synthesize voided=_voided;
@property (copy, nonatomic) NSURL *webLocationsURL; // @synthesize webLocationsURL=_webLocationsURL;
@property (copy, nonatomic) NSURL *webServiceURL; // @dynamic webServiceURL;

+ (Class)classForPassType:(unsigned long long)arg1;
+ (unsigned long long)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (BOOL)availableForAutomaticPresentationUsingBeaconContext;
- (BOOL)availableForAutomaticPresentationUsingVASContext;
- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)diff:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (BOOL)hasLocationRelevancyInfo;
- (BOOL)hasTimeOrLocationRelevancyInfo;
- (BOOL)hasValidNFCPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqualToPassIncludingMetadata:(id)arg1;
- (BOOL)isExpired;
- (BOOL)isRelevantDateOld;
- (BOOL)isUpdatable;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)logoImage;
- (id)stripImage;
- (BOOL)supportsSharing;
- (id)thumbnailImage;

@end


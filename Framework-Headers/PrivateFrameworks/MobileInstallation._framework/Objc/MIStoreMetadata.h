//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>
#import <MobileInstallation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasMessagesExtension;
    BOOL _purchasedRedownload;
    BOOL _launchProhibited;
    BOOL _gameCenterEnabled;
    BOOL _gameCenterEverEnabled;
    BOOL _isAutoDownload;
    BOOL _sideLoadedDeviceBasedVPP;
    BOOL _deviceBasedVPP;
    BOOL _factoryInstall;
    NSString *_iAdAttribution;
    NSString *_iAdConversionDate;
    NSString *_iAdImpressionDate;
    NSString *_artistName;
    NSNumber *_betaExternalVersionIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersionString;
    NSString *_purchaseDate;
    NSString *_appleID;
    NSNumber *_DSPersonID;
    NSNumber *_downloaderID;
    NSNumber *_familyID;
    NSNumber *_purchaserID;
    NSString *_altDSID;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSString *_kind;
    NSString *_label;
    NSString *_ratingLabel;
    NSNumber *_ratingRank;
    NSString *_releaseDate;
    NSString *_assetToken;
    NSString *_softwareVersionBundleID;
    NSNumber *_softwareVersionExternalIdentifier;
    NSString *_sourceApp;
    NSString *_storeCohort;
    NSNumber *_storefront;
    NSString *_variantID;
    NSString *_genre;
    NSNumber *_genreID;
    NSArray *_subGenres;
    NSArray *_categories;
    NSString *_referrerURL;
    NSString *_referrerApp;
    NSString *_enterpriseInstallURL;
    NSString *_redownloadParams;
    NSDictionary *_nameTranscriptions;
    NSString *_md5;
}

@property (strong, nonatomic) NSNumber *DSPersonID; // @synthesize DSPersonID=_DSPersonID;
@property (copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (copy, nonatomic) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property (strong, nonatomic) NSNumber *betaExternalVersionIdentifier; // @synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier;
@property (copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property (copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (nonatomic) BOOL deviceBasedVPP; // @synthesize deviceBasedVPP=_deviceBasedVPP;
@property (strong, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property (copy, nonatomic) NSString *enterpriseInstallURL; // @synthesize enterpriseInstallURL=_enterpriseInstallURL;
@property (nonatomic, getter=isFactoryInstall) BOOL factoryInstall; // @synthesize factoryInstall=_factoryInstall;
@property (strong, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property (nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property (nonatomic) BOOL gameCenterEverEnabled; // @synthesize gameCenterEverEnabled=_gameCenterEverEnabled;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (strong, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property (nonatomic) BOOL hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property (copy, nonatomic) NSString *iAdAttribution; // @synthesize iAdAttribution=_iAdAttribution;
@property (copy, nonatomic) NSString *iAdConversionDate; // @synthesize iAdConversionDate=_iAdConversionDate;
@property (copy, nonatomic) NSString *iAdImpressionDate; // @synthesize iAdImpressionDate=_iAdImpressionDate;
@property (strong, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property (nonatomic) BOOL isAutoDownload; // @synthesize isAutoDownload=_isAutoDownload;
@property (strong, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property (copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property (copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property (copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property (copy, nonatomic) NSDictionary *nameTranscriptions; // @synthesize nameTranscriptions=_nameTranscriptions;
@property (copy, nonatomic) NSString *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload; // @synthesize purchasedRedownload=_purchasedRedownload;
@property (strong, nonatomic) NSNumber *purchaserID; // @synthesize purchaserID=_purchaserID;
@property (copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property (strong, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property (copy, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property (copy, nonatomic) NSString *referrerApp; // @synthesize referrerApp=_referrerApp;
@property (copy, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property (copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property (nonatomic) BOOL sideLoadedDeviceBasedVPP; // @synthesize sideLoadedDeviceBasedVPP=_sideLoadedDeviceBasedVPP;
@property (copy, nonatomic) NSString *softwareVersionBundleID; // @synthesize softwareVersionBundleID=_softwareVersionBundleID;
@property (strong, nonatomic) NSNumber *softwareVersionExternalIdentifier; // @synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier;
@property (copy, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property (copy, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property (strong, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property (copy, nonatomic) NSArray *subGenres; // @synthesize subGenres=_subGenres;
@property (copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;

+ (id)metadataFromDictionary:(id)arg1;
+ (id)metadataFromPlistAtURL:(id)arg1 error:(id *)arg2;
+ (id)metadataFromPlistData:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


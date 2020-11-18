//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    BOOL _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    BOOL _hasMIDBasedSINF;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    BOOL _missingRequiredSINF;
    BOOL _placeholder;
    BOOL _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned long long _vppStateFlags;
}

@property (strong, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property (copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property (copy, nonatomic) SSItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property (copy, nonatomic) NSNumber *familyAccountIdentifier; // @synthesize familyAccountIdentifier=_familyAccountIdentifier;
@property (nonatomic) BOOL hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property (nonatomic) BOOL missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated; // @synthesize profileValidated=_profileValidated;
@property (readonly, nonatomic) NSDate *receiptExpirationDate; // @synthesize receiptExpirationDate=_receiptExpirationDate;
@property (copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property (strong, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property (strong, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property (copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property (readonly, nonatomic) unsigned long long vppStateFlags;

- (id)ITunesMetadataDictionary;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)resetVPPStateFlags;

@end

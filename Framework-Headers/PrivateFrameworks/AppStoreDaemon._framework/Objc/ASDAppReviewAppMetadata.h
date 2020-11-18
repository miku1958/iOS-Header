//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDAppMetadata-Protocol.h>
#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class MIStoreMetadata, NSData, NSNumber, NSString, NSURL;

@interface ASDAppReviewAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    BOOL _beta;
    BOOL _hasMessagesExtension;
    BOOL _launchProhibited;
    NSURL *_artworkURL;
    NSString *_bundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSURL *_messagesArtworkURL;
    NSData *_packageDPInfo;
    NSData *_packageSINF;
    NSURL *_packageURL;
    MIStoreMetadata *_storeMetadata;
    NSString *_variantID;
    NSString *_vendorName;
}

@property (copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property (nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property (nonatomic) BOOL hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property (copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property (copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property (copy, nonatomic) NSURL *messagesArtworkURL; // @synthesize messagesArtworkURL=_messagesArtworkURL;
@property (readonly) long long metadataType;
@property (copy, nonatomic) NSData *packageDPInfo; // @synthesize packageDPInfo=_packageDPInfo;
@property (copy, nonatomic) NSData *packageSINF; // @synthesize packageSINF=_packageSINF;
@property (copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property (copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreMetadata:(id)arg1;

@end

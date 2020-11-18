//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMDeviceWallpaperDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadLockScreenAsset;
    NSString *_payloadHomeScreenAsset;
    NSNumber *_payloadAllowWallpaperModification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowWallpaperModification; // @synthesize payloadAllowWallpaperModification=_payloadAllowWallpaperModification;
@property (copy, nonatomic) NSString *payloadHomeScreenAsset; // @synthesize payloadHomeScreenAsset=_payloadHomeScreenAsset;
@property (copy, nonatomic) NSString *payloadLockScreenAsset; // @synthesize payloadLockScreenAsset=_payloadLockScreenAsset;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withLockScreenAsset:(id)arg2 withHomeScreenAsset:(id)arg3 withAllowWallpaperModification:(id)arg4;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end


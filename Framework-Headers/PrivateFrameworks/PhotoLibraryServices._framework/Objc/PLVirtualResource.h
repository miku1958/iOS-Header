//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLWriteableResource-Protocol.h>

@class NSString;
@protocol PLAssetID, PLCodecIdentity, PLColorSpaceIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLVirtualResource : NSObject <PLWriteableResource>
{
    short _version;
    short _resourceType;
    short _localAvailabilityTarget;
    short _remoteAvailability;
    short _remoteAvailabilityTarget;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    id<PLAssetID> _assetID;
    id<PLResourceDataStore> _dataStore;
    long long _dataStoreSubtype;
    id<PLResourceDataStoreKey> _dataStoreKey;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id<PLCodecIdentity> _codecID;
    id<PLColorSpaceIdentity> _colorSpaceID;
    id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    NSString *_fingerprint;
    long long _dataLength;
}

@property (readonly, copy, nonatomic) id<PLAssetID> assetID; // @synthesize assetID=_assetID;
@property (readonly, nonatomic) id<PLCodecIdentity> codecID;
@property (readonly, nonatomic) id<PLColorSpaceIdentity> colorSpaceID;
@property (readonly, nonatomic) unsigned long long cplType; // @dynamic cplType;
@property (nonatomic) long long dataLength; // @synthesize dataLength=_dataLength;
@property (readonly, nonatomic) id<PLResourceDataStore> dataStore;
@property (readonly, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (readonly, nonatomic) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) short localAvailability;
@property (readonly, nonatomic) short localAvailabilityTarget; // @synthesize localAvailabilityTarget=_localAvailabilityTarget;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) long long orientedHeight; // @dynamic orientedHeight;
@property (readonly, nonatomic) long long orientedWidth; // @dynamic orientedWidth;
@property (readonly, nonatomic) int qualitySortValue;
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) short remoteAvailability;
@property (readonly, nonatomic) short remoteAvailabilityTarget; // @synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget;
@property (readonly, nonatomic) short resourceType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (readonly, nonatomic) long long unorientedHeight;
@property (readonly, nonatomic) long long unorientedWidth;
@property (readonly, nonatomic) short version;

- (void).cxx_destruct;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;
- (BOOL)isDefaultOrientation;
- (BOOL)isDerivative;
- (BOOL)isPrimaryUTI;
- (id)photosCTLJSONDict;
- (void)setCodecID:(id)arg1;
- (void)setColorSpaceID:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setQualitySortValue:(int)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(short)arg1;
- (void)setUniformTypeIdentifierID:(id)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(short)arg1;

@end


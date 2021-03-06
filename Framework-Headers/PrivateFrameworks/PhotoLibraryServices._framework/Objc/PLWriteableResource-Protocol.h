//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLResource-Protocol.h>

@protocol PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@protocol PLWriteableResource <PLResource>

@property (strong, nonatomic) id<PLCodecIdentity> codecID;
@property (strong, nonatomic) id<PLResourceDataStore> dataStore;
@property (strong, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) long long dataStoreSubtype;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) float scale;
@property (strong, nonatomic) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) unsigned int version;

@end


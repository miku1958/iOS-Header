//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHRecyclableObject-Protocol.h>

@class NSString;
@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject>
{
    BOOL _isDegraded;
    BOOL _isPrimaryFormat;
    BOOL _isDefaultOrientation;
    id<PLAssetID> _assetID;
    id<PLResourceDataStore> _dataStore;
    id<PLResourceDataStoreKey> _dataStoreKey;
}

@property (strong, nonatomic) id<PLAssetID> assetID; // @synthesize assetID=_assetID;
@property (strong, nonatomic) id<PLResourceDataStore> dataStore; // @synthesize dataStore=_dataStore;
@property (strong, nonatomic) id<PLResourceDataStoreKey> dataStoreKey; // @synthesize dataStoreKey=_dataStoreKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isDefaultOrientation; // @synthesize isDefaultOrientation=_isDefaultOrientation;
@property (nonatomic) BOOL isDegraded; // @synthesize isDegraded=_isDegraded;
@property (nonatomic) BOOL isPrimaryFormat; // @synthesize isPrimaryFormat=_isPrimaryFormat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;

@end


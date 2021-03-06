//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHCPLAssetResource-Protocol.h>

@class NSDate, NSManagedObjectID, NSString, NSURL, PHPhotoLibrary;
@protocol PLResourceIdentity;

@interface PHAssetResource : NSObject <PHCPLAssetResource>
{
    NSURL *_privateFileURL;
    long long _pixelWidth;
    long long _pixelHeight;
    unsigned long long _fileSize;
    BOOL _locallyAvailable;
    NSDate *_trashedDate;
    BOOL _trashed;
    BOOL _inCloud;
    PHPhotoLibrary *_photoLibrary;
    CDUnknownBlockType _privateFileLoader;
    BOOL _current;
    unsigned int _orientation;
    long long _type;
    NSString *_assetLocalIdentifier;
    NSString *_uniformTypeIdentifier;
    NSString *_originalFilename;
    id<PLResourceIdentity> _backingResourceIdentity;
    NSManagedObjectID *_assetObjectID;
    unsigned long long _cplResourceType;
    NSString *_libraryID;
}

@property (readonly, nonatomic) long long analysisType;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property (readonly, nonatomic) id<PLResourceIdentity> backingResourceIdentity; // @synthesize backingResourceIdentity=_backingResourceIdentity;
@property (nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
@property (readonly, nonatomic, getter=isCurrent) BOOL current; // @synthesize current=_current;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic, getter=isInCloud) BOOL inCloud;
@property (readonly, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
@property (readonly, nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable; // @synthesize locallyAvailable=_locallyAvailable;
@property (nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property (readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) long long pixelHeight;
@property (readonly, nonatomic) long long pixelWidth;
@property (readonly, copy, nonatomic) CDUnknownBlockType privateFileLoader;
@property (readonly, nonatomic) NSURL *privateFileURL;
@property (strong, nonatomic) NSURL *privateFileURL; // @synthesize privateFileURL=_privateFileURL;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;

+ (id)_assetResourcesFromPLResources:(id)arg1 includeMetadata:(BOOL)arg2 mediaMetadataVirtualResources:(id)arg3 asset:(id)arg4 assetHasAdjustments:(BOOL)arg5 includeDerivatives:(BOOL)arg6 includeAdjustmentOverflowDataBlob:(BOOL)arg7;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 includeMetadata:(BOOL)arg3;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 includeMetadata:(BOOL)arg3 includeAdjustmentOverflowDataBlob:(BOOL)arg4;
+ (id)assetResourcesForLivePhoto:(id)arg1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithResource:(id)arg1 asset:(id)arg2 hasAdjustments:(BOOL)arg3;
- (id)initWithType:(long long)arg1 livePhoto:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PHAssetResource : NSObject
{
    BOOL _locallyAvailable;
    BOOL _derivative;
    long long _resourceType;
    NSString *_assetLocalIdentifier;
    NSString *_uniformTypeIdentifier;
    NSString *_originalFilename;
    NSURL *_fileURL;
    NSURL *_privateFileURL;
    CDUnknownBlockType _privateFileLoader;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    long long _fileSize;
}

@property (copy, nonatomic, setter=_setAssetLocalIdentifier:) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property (readonly, nonatomic, getter=isDerivative) BOOL derivative; // @synthesize derivative=_derivative;
@property (nonatomic, setter=_setFileSize:) long long fileSize; // @synthesize fileSize=_fileSize;
@property (strong, nonatomic, setter=_setFileURL:) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly, nonatomic, getter=isLibraryAssetResource) BOOL libraryAssetResource;
@property (nonatomic, getter=isLocallyAvailable, setter=_setIsLocallyAvailable:) BOOL locallyAvailable; // @synthesize locallyAvailable=_locallyAvailable;
@property (copy, nonatomic, setter=_setOriginalFilename:) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property (nonatomic, setter=_setPixelHeight:) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property (nonatomic, setter=_setPixelWidth:) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property (copy, nonatomic, setter=_setPrivateFileLoader:) CDUnknownBlockType privateFileLoader; // @synthesize privateFileLoader=_privateFileLoader;
@property (strong, nonatomic, setter=_setPrivateFileURL:) NSURL *privateFileURL; // @synthesize privateFileURL=_privateFileURL;
@property (readonly, nonatomic) long long type; // @synthesize type=_resourceType;
@property (copy, nonatomic, setter=_setUniformTypeIdentifier:) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;

+ (id)_managedAssetWithRelationshipsPrefetchedForAsset:(id)arg1 inLibrary:(id)arg2 error:(id *)arg3;
+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2;
+ (id)assetResourcesForLivePhoto:(id)arg1;
- (void).cxx_destruct;
- (long long)analysisType;
- (id)description;
- (id)initWithResourceType:(long long)arg1;

@end


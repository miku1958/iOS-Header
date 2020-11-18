//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PHAssetCollection, PXPlacesSnapshotFactory, UIImage;
@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

@interface PXPlacesAlbumCoverProvider : NSObject
{
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    long long _cachedCount;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
    PXPlacesSnapshotFactory *_factory;
    id<PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
    PHAssetCollection *_placesCollection;
    NSMutableDictionary *_cachedPlaceholders;
}

@property (strong, nonatomic) NSMutableDictionary *cachedPlaceholders; // @synthesize cachedPlaceholders=_cachedPlaceholders;
@property (strong, nonatomic) PXPlacesSnapshotFactory *factory; // @synthesize factory=_factory;
@property (strong, nonatomic) id<PXPlacesSnapshotFactoryDelegate> factoryDelegate; // @synthesize factoryDelegate=_factoryDelegate;
@property (strong, nonatomic) PHAssetCollection *placesCollection; // @synthesize placesCollection=_placesCollection;

+ (id)cachedSnapshotPath;
- (void).cxx_destruct;
- (BOOL)_fetchCachedSnapshotImage:(out id *)arg1 andIdentifier:(out id *)arg2;
- (BOOL)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;
- (id)placesAlbumCoverProviderLog;
- (void)preloadCachedSnapshot;
- (void)preloadPlaceholderForTraitCollection:(id)arg1;
- (void)requestAssetCountWithForcedRefresh:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestPlacesAlbumCover:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


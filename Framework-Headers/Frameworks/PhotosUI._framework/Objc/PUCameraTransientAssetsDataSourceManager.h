//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PUTransientDataSourceChangeObserver-Protocol.h>

@class NSString;
@protocol PUDisplayAssetCollection, PUTransientDataSource;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver>
{
    id<PUTransientDataSource> __transientDataSource;
    id<PUDisplayAssetCollection> __containingAssetCollection;
}

@property (readonly, nonatomic) id<PUDisplayAssetCollection> _containingAssetCollection; // @synthesize _containingAssetCollection=__containingAssetCollection;
@property (readonly, nonatomic) id<PUTransientDataSource> _transientDataSource; // @synthesize _transientDataSource=__transientDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateWithTransientDataSource:(id)arg1;
- (id)init;
- (id)initWithTransientDataSource:(id)arg1;
- (void)transientDataSourceDidChange:(id)arg1;

@end

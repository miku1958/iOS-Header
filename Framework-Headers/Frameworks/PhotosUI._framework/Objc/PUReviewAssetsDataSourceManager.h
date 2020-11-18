//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PUReviewDataSourceChangeObserver-Protocol.h>

@class NSString, PUReviewDataSource;
@protocol PUDisplayAssetCollection, PUReviewAssetsDataSourceManagerDelegate;

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver>
{
    id<PUReviewAssetsDataSourceManagerDelegate> _reviewDelegate;
    PUReviewDataSource *__reviewDataSource;
    id<PUDisplayAssetCollection> __containingAssetCollection;
}

@property (readonly, nonatomic) id<PUDisplayAssetCollection> _containingAssetCollection; // @synthesize _containingAssetCollection=__containingAssetCollection;
@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // @synthesize _reviewDataSource=__reviewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PUReviewAssetsDataSourceManagerDelegate> reviewDelegate; // @synthesize reviewDelegate=_reviewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateWithReviewDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithReviewDataSource:(id)arg1;
- (void)reviewDataSourceDidChange:(id)arg1 changeDetails:(id)arg2;

@end


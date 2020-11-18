//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

@class PUAssetViewModel, PUProgressIndicatorView;

__attribute__((visibility("hidden")))
@interface PULoadingIndicatorTileViewController : PUTileViewController
{
    BOOL __shouldShowIndeterminateActivityIndicator;
    PUAssetViewModel *_assetViewModel;
    PUProgressIndicatorView *__indicatorView;
}

@property (strong, nonatomic, setter=_setIndicatorView:) PUProgressIndicatorView *_indicatorView; // @synthesize _indicatorView=__indicatorView;
@property (nonatomic, setter=_setShouldShowIndeterminateActivityIndicator:) BOOL _shouldShowIndeterminateActivityIndicator; // @synthesize _shouldShowIndeterminateActivityIndicator=__shouldShowIndeterminateActivityIndicator;
@property (strong, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;

+ (id)_createIndicatorView;
+ (BOOL)canShowLoadingIndicatorTileForAsset:(id)arg1;
+ (struct CGSize)loadingIndicatorTileSize;
- (void).cxx_destruct;
- (void)_setShouldShowIndeterminateActivityIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateIndicator;
- (void)becomeReusable;

@end

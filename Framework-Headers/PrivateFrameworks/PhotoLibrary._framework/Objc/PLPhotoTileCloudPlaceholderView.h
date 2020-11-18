//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class NSString, PLRoundProgressView, UIButton;
@protocol PLPhotoTileCloudPlaceholderViewDelegate;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView>
{
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    BOOL _indicatorIsVisible;
    BOOL _showingError;
    BOOL _showingLoading;
    struct CGRect _imageRect;
    BOOL _toolbarVisible;
    double _lastViewPhaseChangeDate;
    id<PLPhotoTileCloudPlaceholderViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_retryDownload;
- (void)dealloc;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImageRect:(struct CGRect)arg1;
- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(BOOL)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>
{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenControlBar *__controlBar;
}

@property (strong, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property (strong, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property (strong, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(BOOL)arg2;
- (void)_handleEditButtonTapped:(id)arg1;
- (void)_handleFunEffectsButtonTapped:(id)arg1;
- (void)_handleMarkupButtonTapped:(id)arg1;
- (void)_handleSendButtonTapped:(id)arg1;
- (void)_updateBarLayout;
- (void)_updateControls;
- (void)_updateVisibilityAnimated:(BOOL)arg1;
- (void)becomeReusable;
- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

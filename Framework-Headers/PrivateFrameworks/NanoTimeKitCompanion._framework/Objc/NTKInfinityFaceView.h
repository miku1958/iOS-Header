//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKFaceViewComplicationFactory, NTKInfinityController, NTKInfinityListing, UIColor, UILabel, UIView;

@interface NTKInfinityFaceView : NTKAVListingFaceBaseView
{
    unsigned int _tapPromptedVideoChange:1;
    UIView *_cornerView;
    UILabel *_reviewLabel;
    long long _previousDataMode;
    NTKFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKInfinityController *_controller;
    NTKInfinityListing *_currentQueueListing;
    UIColor *_currentComplicationColor;
}

- (void).cxx_destruct;
- (double)_adjustmentForBottomTimeLayout;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_currentPosterImageView;
- (id)_editingComplicationColor;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleSingleTap:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_performPreloadVideoTask;
- (id)_posterImageView;
- (id)_posterImageViewForStyle:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_selectDefaultListing;
- (BOOL)_shouldFadeToTransitionView;
- (BOOL)_shouldQueueKeepAlive;
- (BOOL)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationWithColor:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePaused;
- (void)_updateReviewLabel;
- (id)_viewForEditOption:(id)arg1;
- (BOOL)_wantsTimeTravelStatusModule;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)handleScreenBlanked;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)updateReviewDirection:(id)arg1;
- (id)videoPlayerView;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUIOverlayWithMaterialRendering-Protocol.h>
#import <VideosUI/VUIScorecardViewDelegate-Protocol.h>
#import <VideosUI/VUISportsScoreboardManagerDelegate-Protocol.h>

@class IKImageElement, IKViewElement, NSOperation, NSString, UICollectionReusableView, UIImage, VUIScorecardView, VUISportsOverlayLayout, VUISportsScoreboardViewModel, VUITextBadgeView;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayView : UIView <VUIScorecardViewDelegate, VUIOverlayWithMaterialRendering, VUISportsScoreboardManagerDelegate>
{
    BOOL _textBadgeHasMaterial;
    BOOL _backgroundImageHasChanged;
    BOOL _isHostSetup;
    UIImage *_backgroundImageForMaterialRendering;
    VUISportsOverlayLayout *_overlayLayout;
    VUISportsScoreboardViewModel *_scoreboardViewModel;
    VUIScorecardView *_scorecardView;
    VUITextBadgeView *_textBadge;
    UIView *_logoView;
    IKViewElement *_viewElement;
    IKImageElement *_logoElement;
    NSOperation *_pendingOperation;
    UIImage *_scorecardViewBackgroundImage;
    UICollectionReusableView *_containingCell;
    struct CGSize _logoSize;
}

@property (strong, nonatomic) UIImage *backgroundImageForMaterialRendering; // @synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering;
@property (nonatomic) BOOL backgroundImageHasChanged; // @synthesize backgroundImageHasChanged=_backgroundImageHasChanged;
@property (weak, nonatomic) UICollectionReusableView *containingCell; // @synthesize containingCell=_containingCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isHostSetup; // @synthesize isHostSetup=_isHostSetup;
@property (strong, nonatomic) IKImageElement *logoElement; // @synthesize logoElement=_logoElement;
@property (nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property (strong, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property (strong, nonatomic) VUISportsOverlayLayout *overlayLayout; // @synthesize overlayLayout=_overlayLayout;
@property (strong, nonatomic) NSOperation *pendingOperation; // @synthesize pendingOperation=_pendingOperation;
@property (strong, nonatomic) VUISportsScoreboardViewModel *scoreboardViewModel; // @synthesize scoreboardViewModel=_scoreboardViewModel;
@property (strong, nonatomic) VUIScorecardView *scorecardView; // @synthesize scorecardView=_scorecardView;
@property (strong, nonatomic) UIImage *scorecardViewBackgroundImage; // @synthesize scorecardViewBackgroundImage=_scorecardViewBackgroundImage;
@property (readonly) Class superclass;
@property (strong, nonatomic) VUITextBadgeView *textBadge; // @synthesize textBadge=_textBadge;
@property (nonatomic) BOOL textBadgeHasMaterial; // @synthesize textBadgeHasMaterial=_textBadgeHasMaterial;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

+ (id)_sharedDrawQueue;
+ (BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect)arg1 currentBackgroundImage:(id)arg2;
+ (id)sharedDrawQueue;
+ (id)sportsOverlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
- (void).cxx_destruct;
- (void)_cancelPendingOperation;
- (void)_redrawScorecardViewWithDuration:(double)arg1;
- (void)_redrawTextBadgeWithDuration:(double)arg1;
- (void)_redrawView:(id)arg1 withDuration:(double)arg2;
- (BOOL)_scorecardViewBackgroundImageNeedsUpdating;
- (BOOL)_scorecardViewRequiresBackgroundImage;
- (void)_setupHosting;
- (void)_teardownHosting;
- (BOOL)_textBadgeBackgroundImageNeedsUpdating;
- (BOOL)_textBadgeRequiresBackgroundImage;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)arg1;
- (void)_updateBadgePosition;
- (BOOL)_updateTextBadge:(id)arg1;
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (void)backgroundImageSizeDidChange:(struct CGSize)arg1;
- (void)dealloc;
- (id)getJSContextDictionary;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)maximumWidthForScorecardView:(id)arg1;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerOverlayView;
- (void)reset;
- (id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)styleForScorecardView:(id)arg1;
- (void)unregisterOverlayView;
- (void)updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize)arg1 performSynchronously:(BOOL)arg2;
- (BOOL)updateScoreView:(id)arg1;
- (void)updateScoreboard:(id)arg1;
- (BOOL)updateTextBadge;
- (void)willMoveToWindow:(id)arg1;

@end


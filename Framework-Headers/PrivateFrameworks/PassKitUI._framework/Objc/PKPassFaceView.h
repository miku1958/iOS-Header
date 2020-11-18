//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/WLEasyToHitCustomView.h>

@class CAFilter, NSArray, NSMutableArray, NSMutableSet, PKLiveRenderedCardFaceView, PKPass, PKPassColorProfile, PKPassFaceTemplate, UIImage, UIImageView, UIView;
@protocol PKPassFaceDelegate;

@interface PKPassFaceView : WLEasyToHitCustomView
{
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    BOOL _showingHeader;
    BOOL _showingBody;
    BOOL _resizablePartialImage;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    double _dimmer;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    PKLiveRenderedCardFaceView *_liveBackgroundView;
    unsigned long long _contentViewCreatedRegions;
    unsigned long long _invariantViewCreatedRegions;
    BOOL _showsLiveRendering;
    BOOL _clipsContent;
    BOOL _allowBackgroundPlaceHolders;
    id<PKPassFaceDelegate> _delegate;
    long long _backgroundMode;
    unsigned long long _visibleRegions;
    double _clippedContentHeight;
    NSArray *_buckets;
    long long _style;
    PKPassFaceTemplate *_faceTemplate;
}

@property (nonatomic) BOOL allowBackgroundPlaceHolders; // @synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders;
@property (nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property (readonly, nonatomic) BOOL bodyContentCreated;
@property (readonly, strong, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property (nonatomic) double clippedContentHeight; // @synthesize clippedContentHeight=_clippedContentHeight;
@property (nonatomic) BOOL clipsContent; // @synthesize clipsContent=_clipsContent;
@property (readonly, nonatomic) PKPassColorProfile *colorProfile;
@property (readonly, nonatomic) struct CGRect contentBounds;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) id<PKPassFaceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) PKPassFaceTemplate *faceTemplate; // @synthesize faceTemplate=_faceTemplate;
@property (strong, nonatomic) NSMutableArray *headerBucketViews; // @synthesize headerBucketViews=_headerBucketViews;
@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) struct UIEdgeInsets shadowInsets;
@property (nonatomic) BOOL showsLiveRendering;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) unsigned long long visibleRegions; // @synthesize visibleRegions=_visibleRegions;

+ (Class)_faceClassForStyle:(long long)arg1;
+ (id)newFrontFaceViewForStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)_createContentViewsForRegions:(unsigned long long)arg1;
- (void)_createDimmingFilterIfNecessary;
- (void)_createInvariantViewsForRegions:(unsigned long long)arg1;
- (void)_flushContentViewsForRegions:(unsigned long long)arg1;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_relevantBuckets;
- (void)_setContentViewsAlpha:(double)arg1;
- (void)_setShowsBackgroundView:(BOOL)arg1;
- (void)_setShowsBodyViews:(BOOL)arg1;
- (void)_setShowsHeaderViews:(BOOL)arg1;
- (long long)_validityStateForPass:(id)arg1;
- (id)_viewSetForContentViewType:(long long)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)createBodyContentViews;
- (void)createBodyInvariantViews;
- (void)createContentViewsWithFade:(BOOL)arg1;
- (void)createHeaderContentViews;
- (void)createHeaderInvariantViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (void)layoutSubviews;
- (id)passFaceTemplate;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeContentView:(id)arg1 ofType:(long long)arg2;
- (void)setDimmer:(double)arg1 animated:(BOOL)arg2;
- (void)setLiveMotionEnabled:(BOOL)arg1;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;

@end


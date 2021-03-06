//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>

@class NSMutableSet, NSString, PXBasicTileAnimator, PXScrollViewController, PXTilingController, PXWidgetBarLayout, PXWidgetBarSpec;
@protocol PXAnonymousView, PXWidgetBarDelegate;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        BOOL view;
        BOOL viewHeight;
        BOOL layout;
    } _needsUpdateFlags;
    struct {
        BOOL didSelectSubtitle;
        BOOL didSelectDisclosureAffordance;
    } _delegateRespondsTo;
    BOOL _allowUserInteractionWithSubtitle;
    PXScrollViewController *_scrollViewController;
    id<PXWidgetBarDelegate> _delegate;
    PXTilingController *_tilingController;
    PXWidgetBarSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
    NSString *_caption;
    NSString *_disclosureTitle;
    PXBasicTileAnimator *__tileAnimator;
    NSMutableSet *__tilesInUse;
    double __viewHeight;
    PXWidgetBarLayout *__layout;
    NSObject<PXAnonymousView> *_view;
}

@property (readonly, nonatomic) PXWidgetBarLayout *_layout; // @synthesize _layout=__layout;
@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property (nonatomic, setter=_setViewHeight:) double _viewHeight; // @synthesize _viewHeight=__viewHeight;
@property (nonatomic) BOOL allowUserInteractionWithSubtitle; // @synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle;
@property (copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXWidgetBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property (strong, nonatomic) PXWidgetBarSpec *spec; // @synthesize spec=_spec;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view; // @synthesize view=_view;
@property (readonly, nonatomic) double viewHeight;

- (void).cxx_destruct;
- (void)_invalidateLayout;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateViewHeightIfNeeded;
- (void)_updateViewIfNeeded;
- (void)checkInTile:(id)arg1;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)checkOutTileWithKind:(long long)arg1;
- (id)createTileAnimator;
- (id)createView;
- (void)didSelectDisclosureAffordance;
- (void)didSelectSubtitle;
- (id)init;
- (id)initWithScrollViewController:(id)arg1;
- (void)invalidateView;
- (void)invalidateViewHeight;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)updateView;

@end


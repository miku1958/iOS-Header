//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetContentViewTransitionCoordinator, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetUnlockDelegate;

@protocol PXWidget <NSObject>

@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;


@optional
+ (void)preloadResources;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id<PXWidgetContentViewTransitionCoordinator>)arg2;
- (void)deviceDidBecomeUnlocked;
- (void)loadContentData;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)requestExitEditWithChangesSavingMode:(long long)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
@end


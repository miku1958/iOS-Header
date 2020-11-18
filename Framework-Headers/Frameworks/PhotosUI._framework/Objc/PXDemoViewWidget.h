//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetUnlockDelegate;

@interface PXDemoViewWidget : NSObject <PXWidget>
{
    BOOL _isExpanded;
    double _height;
    BOOL __didLoadContent;
    id<PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    UIView *__containerView;
    UIView *__contentView;
    long long __animationCount;
    struct CGSize __contentSize;
}

@property (nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property (readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property (readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (nonatomic, setter=_setDidLoadContent:) BOOL _didLoadContent; // @synthesize _didLoadContent=__didLoadContent;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;

- (void).cxx_destruct;
- (struct CGRect)_contentViewFrameForSize:(struct CGSize)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_loadViews;
- (void)_updateContentViewColor;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)init;
- (void)loadContentData;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)userDidSelectDisclosureControl;

@end

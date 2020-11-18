//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSArray, NSString, PHMemory, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <PXWidget>
{
    BOOL _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    struct NSObject *_contentView;
    id<PXWidgetDelegate> _widgetDelegate;
    NSArray *_features;
    NSArray *_featureViews;
    PHMemory *_memory;
}

@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (strong, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property (strong, nonatomic) NSArray *features; // @synthesize features=_features;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;

- (void).cxx_destruct;
- (struct CGSize)_layoutTokenViewsWithWidth:(double)arg1;
- (void)_loadContentData;
- (struct NSObject *)_loadContentView;
- (void)_loadFeaturesFromPhotosGraphData:(id)arg1;
- (void)_showReportFeedback;
- (id)_tokenViewsWithSuperview:(struct NSObject *)arg1;
- (void)loadContentData;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;

@end


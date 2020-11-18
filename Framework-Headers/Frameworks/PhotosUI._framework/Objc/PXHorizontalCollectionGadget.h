//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXMutableHorizontalCollectionGadget-Protocol.h>

@class NSDictionary, NSString, PXGadgetOrbContext, PXGadgetSpec;
@protocol PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;

@interface PXHorizontalCollectionGadget : PXGadgetViewController <PXMutableHorizontalCollectionGadget, PXGadget>
{
    BOOL _visibleGadgetsLoaded;
    BOOL _isPerformingChanges;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id<PXGadgetDelegate> _delegate;
    id<PXHorizontalCollectionGadgetDelegate> _horizontalGadgetDelegate;
    NSString *_collectionTitle;
    unsigned long long _collectionAccessoryButtonType;
    NSString *_collectionAccessoryButtonTitle;
    const struct __CFString *_collectionAccessoryButtonEventTrackerKey;
    double _collectionHeight;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpans;
    unsigned long long _gadgetType;
    unsigned long long _headerStyle;
    CDUnknownBlockType _accessoryButtonAction;
    PXGadgetOrbContext *_previewOrbContext;
    long long _currentColumnSpan;
    struct CGSize _cachedMaxHeightForColumnWidth;
    struct CGRect _visibleContentRect;
}

@property (copy, nonatomic) CDUnknownBlockType accessoryButtonAction; // @synthesize accessoryButtonAction=_accessoryButtonAction;
@property (readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (nonatomic) struct CGSize cachedMaxHeightForColumnWidth; // @synthesize cachedMaxHeightForColumnWidth=_cachedMaxHeightForColumnWidth;
@property (readonly, nonatomic) const struct __CFString *collectionAccessoryButtonEventTrackerKey; // @synthesize collectionAccessoryButtonEventTrackerKey=_collectionAccessoryButtonEventTrackerKey;
@property (readonly, copy, nonatomic) NSString *collectionAccessoryButtonTitle; // @synthesize collectionAccessoryButtonTitle=_collectionAccessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long collectionAccessoryButtonType; // @synthesize collectionAccessoryButtonType=_collectionAccessoryButtonType;
@property (readonly, nonatomic) double collectionHeight; // @synthesize collectionHeight=_collectionHeight;
@property (readonly, copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property (copy, nonatomic) NSDictionary *columnSpans; // @synthesize columnSpans=_columnSpans;
@property (nonatomic) long long currentColumnSpan; // @synthesize currentColumnSpan=_currentColumnSpan;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property (readonly, nonatomic) BOOL hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property (weak, nonatomic) id<PXHorizontalCollectionGadgetDelegate> horizontalGadgetDelegate; // @synthesize horizontalGadgetDelegate=_horizontalGadgetDelegate;
@property (nonatomic) BOOL isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PXGadgetOrbContext *previewOrbContext; // @synthesize previewOrbContext=_previewOrbContext;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAssetsDrop;
@property (readonly, nonatomic) BOOL supportsHighlighting;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property (nonatomic) BOOL visibleGadgetsLoaded; // @synthesize visibleGadgetsLoaded=_visibleGadgetsLoaded;

- (void).cxx_destruct;
- (long long)_columnSpanForTraitCollection:(id)arg1;
- (struct CGSize)_ensureCachedHeightForColumnWidth:(double)arg1;
- (void)_updateCollectionViewPaging;
- (void)_updateColumnSettings;
- (long long)anchorPosition;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject *)contentViewController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)debugURLsForDiagnostics;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (BOOL)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (id)gridPresentation;
- (BOOL)hasLoadedContentData;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithProviders:(id)arg1;
- (BOOL)isRootGadgetViewController;
- (void)loadContentData;
- (id)oneUpPresentation;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (void)setCollectionAccessoryButtonEventTrackerKey:(struct __CFString *)arg1;
- (void)setCollectionAccessoryButtonTitle:(id)arg1;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionHeight:(double)arg1;
- (void)setCollectionTitle:(id)arg1;
- (void)setLayout:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateIfNeeded;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (struct CGRect)visibleBounds;

@end


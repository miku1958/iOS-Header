//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleStripCollectionViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXPeopleStripCollectionViewController, PXPhotosDetailsContext, PXSectionedSelectionManager, PXSharingSuggestionDataSource, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetUnlockDelegate;

@interface PXSharingSuggestionWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, PXWidget>
{
    BOOL _userInteractionEnabled;
    id<PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPeopleStripCollectionViewController *_collectionViewController;
    PXSharingSuggestionDataSource *_dataSource;
    unsigned long long _options;
    unsigned long long _sharingStream;
    double _cellMinInteritemSpacing;
    double _cellMinLineSpacing;
    double _targetPrefetchWidth;
    struct CGSize _contentSize;
    struct CGSize _cellSize;
}

@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic) double cellMinInteritemSpacing; // @synthesize cellMinInteritemSpacing=_cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing; // @synthesize cellMinLineSpacing=_cellMinLineSpacing;
@property (nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property (strong, nonatomic) PXPeopleStripCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property (strong, nonatomic) PXSharingSuggestionDataSource *dataSource; // @synthesize dataSource=_dataSource;
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
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) unsigned long long sharingStream; // @synthesize sharingStream=_sharingStream;
@property (strong, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic) double targetPrefetchWidth; // @synthesize targetPrefetchWidth=_targetPrefetchWidth;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;

- (void).cxx_destruct;
- (BOOL)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize *)arg2 interitemSpacing:(double *)arg3;
- (void)_loadContainerView;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_prepareDataSource;
- (struct UIEdgeInsets)_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (struct CGSize)_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)initWithSharingStream:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)loadContentData;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets)sectionInset;
- (struct CGSize)sizeForItem;
- (id)traitCollection;
- (void)unloadContentData;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSDate, NSString, PXGadgetSpec, PXInboxAggregateDataSource, PXInboxAggregateDataSourceManager, PXInboxTableViewCellLayoutCoordinator, PXPhotoKitUIMediaProvider, UITableView;
@protocol PXGadgetDelegate, PXInboxModel, PXNavigableForYouViewController;

@interface PXInboxViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget>
{
    BOOL _hasContentToDisplay;
    BOOL _visible;
    long long _priority;
    id<PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    UITableView *_tableView;
    id<PXNavigableForYouViewController> _forYouNavigationDelegate;
    NSDate *_lastSeenDate;
    PXInboxAggregateDataSource *_dataSource;
    PXInboxAggregateDataSourceManager *_dataSourceManager;
    PXInboxTableViewCellLayoutCoordinator *_cellLayoutCoordinator;
    double _currentRowHeight;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    id<PXInboxModel> _lastSelectedModel;
    struct _NSRange _dataSourceIndexRange;
    struct CGRect _visibleContentRect;
}

@property (readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property (strong, nonatomic) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator; // @synthesize cellLayoutCoordinator=_cellLayoutCoordinator;
@property (nonatomic) double currentRowHeight; // @synthesize currentRowHeight=_currentRowHeight;
@property (strong, nonatomic) PXInboxAggregateDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) struct _NSRange dataSourceIndexRange; // @synthesize dataSourceIndexRange=_dataSourceIndexRange;
@property (strong, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<PXNavigableForYouViewController> forYouNavigationDelegate; // @synthesize forYouNavigationDelegate=_forYouNavigationDelegate;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (strong, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property (strong, nonatomic) id<PXInboxModel> lastSelectedModel; // @synthesize lastSelectedModel=_lastSelectedModel;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAssetsDrop;
@property (readonly, nonatomic) BOOL supportsHighlighting;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property (nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;

+ (id)createInboxDataSourceManager;
+ (void)preloadResources;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_createDividerView;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (struct PXSimpleIndexPath)_dataSourceIndexPathFromTableViewIndexPath:(id)arg1;
- (void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg1;
- (double)_dividerHeight;
- (BOOL)_isModelUnseen:(id)arg1;
- (unsigned long long)_numberOfRows;
- (BOOL)_shouldHandleAllIndexes;
- (void)_startOneUpPresentationForModel:(id)arg1;
- (id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_updateSeenState;
- (void)_updateTableViewFrameAndBounds;
- (struct NSObject *)contentViewController;
- (void)gadgetControllerHasAppeared;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (void)ppt_performBlockAfterLoadingCompletes:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end


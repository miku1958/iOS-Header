//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXForYouMemoriesViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>

@class NSMutableDictionary, NSString, PXGadgetSpec, PXMemoriesFeedWidgetDataSourceManager;
@protocol PXGadgetDelegate, PXUIViewControllerZoomTransitionEndPoint;

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXGadget>
{
    CDStruct_d97c9657 _updateFlags;
    BOOL _hasAppeared;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id<PXGadgetDelegate> _delegate;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSMutableDictionary *_viewControllerEntries;
    long long _currentVisibility;
    id<PXUIViewControllerZoomTransitionEndPoint> _currentTransitionEndPoint;
    unsigned long long _currentNumberOfColumns;
}

@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) unsigned long long currentNumberOfColumns; // @synthesize currentNumberOfColumns=_currentNumberOfColumns;
@property (strong, nonatomic) id<PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint; // @synthesize currentTransitionEndPoint=_currentTransitionEndPoint;
@property (nonatomic) long long currentVisibility; // @synthesize currentVisibility=_currentVisibility;
@property (readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *viewControllerEntries; // @synthesize viewControllerEntries=_viewControllerEntries;
@property (nonatomic) struct CGRect visibleContentRect;

+ (struct _NSRange)dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(long long)arg2;
+ (unsigned long long)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(unsigned long long)arg2 numberOfMemories:(unsigned long long)arg3;
+ (long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(unsigned long long)arg2;
- (void).cxx_destruct;
- (long long)_columnSpanForRowType:(unsigned long long)arg1;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_dismissIfNeeded;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)arg1;
- (struct CGRect)_frameForRowType:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(long long)arg2;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)arg1;
- (BOOL)_shouldPageForRowType:(unsigned long long)arg1;
- (void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2;
- (void)_updateIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateScrollingBehaviorForRowType:(unsigned long long)arg1;
- (void)_updateScrollingBehaviorIfNeeded;
- (void)_updateVisibilityIfNeeded;
- (id)contentViewController;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareToNavigateToDetailsForMemoryUUID:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (id)showAllMemoriesFeedAnimated:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end


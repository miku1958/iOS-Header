//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXGadgetProviderDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, PXGadgetDataSource, PXGadgetNavigationHelper;
@protocol OS_dispatch_group, OS_dispatch_queue, PXGadgetDelegate, PXGadgetTransition;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate>
{
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
    NSObject<OS_dispatch_group> *_deferredGadgetLoadingGroup;
    NSObject<OS_dispatch_queue> *_deferredGadgetQueue;
    BOOL _isPerformingChanges;
    BOOL _dataSourceNeedsUpdate;
    BOOL _canLoadRemainingDataForProviders;
    BOOL _hasLoadedPriorities;
    BOOL _loadingInitialGadgets;
    BOOL _needsToLoadAllProviders;
    id<PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_cachedProviders;
}

@property (copy, nonatomic) NSArray *cachedProviders; // @synthesize cachedProviders=_cachedProviders;
@property (nonatomic) BOOL canLoadRemainingDataForProviders; // @synthesize canLoadRemainingDataForProviders=_canLoadRemainingDataForProviders;
@property (readonly, nonatomic) PXGadgetDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CDUnknownBlockType gadgetProviderSortComparator;
@property (readonly, nonatomic) NSArray *gadgetProviders;
@property (readonly, nonatomic) CDUnknownBlockType gadgetSortComparator;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (nonatomic) BOOL hasLoadedPriorities; // @synthesize hasLoadedPriorities=_hasLoadedPriorities;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL loadingInitialGadgets; // @synthesize loadingInitialGadgets=_loadingInitialGadgets;
@property (nonatomic) BOOL needsToLoadAllProviders; // @synthesize needsToLoadAllProviders=_needsToLoadAllProviders;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder; // @synthesize nextGadgetResponder=_nextGadgetResponder;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;

+ (id)gadgetDataSourceManagerLog;
- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (void)_loadPriorityForProviders:(id)arg1;
- (void)_updateDataSource;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)createInitialDataSource;
- (void)didLoadDataForPriorities;
- (void)didPerformChanges;
- (void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)gadgetViewControllerHostingGadget:(id)arg1;
- (id)hiddenGadgetProviders;
- (id)init;
- (id)initWithQueueName:(id)arg1;
- (void)invalidateGadgets;
- (void)loadRemainingGadgetsIfNeeded;
- (void)loadRemainingGadgetsIfNeeded:(CDUnknownBlockType)arg1;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)noContentGadget;
- (void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeCachedProviders;
- (void)willPerformChanges;

@end

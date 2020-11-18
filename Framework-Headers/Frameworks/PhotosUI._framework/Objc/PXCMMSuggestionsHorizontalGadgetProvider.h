//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSDate, NSString, PXCMMSuggestionsDataSourceManager, PXCPLStatusProvider;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
    PXCPLStatusProvider *_cplStatusProvider;
    BOOL _cmmIsAvailable;
    id<PXCMMWorkflowPresenting> _workflowPresenter;
    NSDate *_cachedPriorityDate;
}

@property (strong, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long priorityType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;

- (void).cxx_destruct;
- (void)_configureDataSourceManager;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithWorkflowPresenter:(id)arg1;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)resetPriorityDate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)supportsDynamicRanking;

@end

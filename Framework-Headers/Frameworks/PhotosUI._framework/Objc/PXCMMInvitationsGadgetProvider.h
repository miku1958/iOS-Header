//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXCMMInvitationGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate>
{
    PXCMMInvitationsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    id<PXCMMWorkflowPresenting> _workflowPresenter;
}

@property (readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;

- (void).cxx_destruct;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)invitationForGadget:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end


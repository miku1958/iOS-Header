//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/RMGroupFetchedResultsControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STTimeAllowancesViewModelCoordinator-Protocol.h>

@class NSManagedObjectID, NSNumber, NSString, RMAskForTimeClient, RMGroupFetchedResultsController, STTimeAllowancesViewModel;
@protocol RMPersistenceControllerProtocol;

@interface STTimeAllowancesViewModelCoordinator : NSObject <RMGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator>
{
    STTimeAllowancesViewModel *_viewModel;
    NSString *_organizationIdentifier;
    NSNumber *_userDSID;
    id<RMPersistenceControllerProtocol> _persistenceController;
    RMAskForTimeClient *_askForTimeClient;
    RMGroupFetchedResultsController *_groupFetchResultsController;
    NSManagedObjectID *_userObjectID;
}

@property (readonly, nonatomic) RMAskForTimeClient *askForTimeClient; // @synthesize askForTimeClient=_askForTimeClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RMGroupFetchedResultsController *groupFetchResultsController; // @synthesize groupFetchResultsController=_groupFetchResultsController;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property (readonly, nonatomic) id<RMPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property (copy, nonatomic) NSManagedObjectID *userObjectID; // @synthesize userObjectID=_userObjectID;
@property (readonly) STTimeAllowancesViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (id)_alwaysAllowActivationIdentifier;
- (id)_alwaysAllowConfigurationIdentifier;
- (id)_bedtimeActivationIdentifier;
- (id)_bedtimeConfigurationIdentifier;
- (id)_budgetConfigurationIdentifier;
- (void)_deleteActivationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_iCloudAccountPredicate;
- (BOOL)_isPersonalOrganization;
- (void)_registerForPersistenceStoreNotifications;
- (void)_saveActivationDictionary:(id)arg1 configurationDictionaries:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)respondToAskForTime:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveAllAllowancesEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


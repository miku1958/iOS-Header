//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EDDatabaseChangeHookResponder-Protocol.h>
#import <Message/EDProtectedDataReconciliationHookResponder-Protocol.h>

@class EDPersistenceHookRegistry, MFLibraryMessageReconciler, MFLibraryThreadReconciler, NSString;
@protocol EDReconciliationQueryProvider, EFScheduler, MFAccountsProvider;

@interface MFLibraryReconciler : NSObject <EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder>
{
    EDPersistenceHookRegistry *_hookRegistry;
    id<EFScheduler> _reconciliationCleanupScheduler;
    id<EDReconciliationQueryProvider> _queryProvider;
    id<MFAccountsProvider> _accountsProvider;
    MFLibraryMessageReconciler *_messageReconciler;
    MFLibraryThreadReconciler *_threadReconciler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 queryProvider:(id)arg2 accountsProvider:(id)arg3;
- (void)persistenceDidReconcileProtectedData;

@end


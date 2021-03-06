//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/BBDataProvider.h>

#import <BulletinBoard/BBRemoteDataProviderServerProxy-Protocol.h>

@class NSObject, NSString;
@protocol BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate, OS_dispatch_queue;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy>
{
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id<BBRemoteDataProviderClientProxy> _clientProxy;
    BOOL _connected;
    BOOL _serverIsReady;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    id<BBRemoteDataProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendClientRequest:(CDUnknownBlockType)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)calloutToServer:(CDUnknownBlockType)arg1;
- (BOOL)canPerformMigration;
- (BOOL)checkResponds:(BOOL)arg1 forSelector:(SEL)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getClearedInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)invalidateBulletins;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)modifyBulletin:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (id)sectionIdentifier;
- (void)setClearedInfo:(id)arg1;
- (void)setClientProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSectionInfo:(id)arg1;
- (void)setServerIsReady:(BOOL)arg1;
- (void)startWatchdog;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PKXPCService;

@interface PKCloudStoreService : NSObject
{
    PKXPCService *_remoteService;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)allTransactionsAndStoreLocally:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)removeTransactionsWithRecordNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


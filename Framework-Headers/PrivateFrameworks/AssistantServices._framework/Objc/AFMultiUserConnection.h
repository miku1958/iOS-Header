//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFMultiUserConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_multiUserServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getConformingSharedUserIds:(CDUnknownBlockType)arg1;
- (void)getFirstNameForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSharedUserProfileLimitWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSXPCListenerDelegate-Protocol.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListener;
@protocol FLFollowUpControllerDelegate;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate>
{
    NSString *_clientIdentifier;
    NSString *_machServiceName;
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
    id<FLFollowUpControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FLFollowUpControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didActivateHSA2LoginNotification:(id)arg1;
- (void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_postHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postHSA2PasswordResetNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;
- (BOOL)clearNotificationForItem:(id)arg1 error:(id *)arg2;
- (BOOL)clearPendingFollowUpItems:(id *)arg1;
- (void)clearPendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfPendingFollowUpItems:(id *)arg1;
- (void)countOfPendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 xpcEndpoint:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pendingFollowUpItems:(id *)arg1;
- (void)pendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)postFollowUpItem:(id)arg1 error:(id *)arg2;

@end


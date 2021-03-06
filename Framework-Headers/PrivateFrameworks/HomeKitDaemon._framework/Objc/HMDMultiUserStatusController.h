//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol HMDMultiUserStatusControllerDelegate, OS_dispatch_queue;

@interface HMDMultiUserStatusController : HMFObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;
    long long _multiUserState;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDMultiUserStatusControllerDelegate> _delegate;
    unsigned long long _haveActiveSignedInAccount;
    unsigned long long _dataSyncState;
}

@property unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HMDMultiUserStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long haveActiveSignedInAccount; // @synthesize haveActiveSignedInAccount=_haveActiveSignedInAccount;
@property long long multiUserState; // @synthesize multiUserState=_multiUserState;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)didChangeHasActiveAccountState:(BOOL)arg1;
- (void)didUpdateDataSyncState:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end


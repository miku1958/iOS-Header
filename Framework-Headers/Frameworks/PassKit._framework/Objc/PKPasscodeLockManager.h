//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/MCProfileConnectionObserver-Protocol.h>

@class MCProfileConnection, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver>
{
    MCProfileConnection *_profileConnection;
    BOOL _isPasscodeSet;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPasscodeSet;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeObserver:(id)arg1;

@end


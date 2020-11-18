//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCReachabilityDelegate-Protocol.h>

@class BRCThrottler, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate>
{
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    BRCThrottler *_throttler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)addPerformer:(id)arg1;
+ (void)removePerformer:(id)arg1;
- (void).cxx_destruct;
- (void)_close;
- (id)_key;
- (id)initWithAccountID:(id)arg1;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)perform;
- (void)resumeAndAutoClose;

@end

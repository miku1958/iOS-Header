//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/BKSProcessDelegate-Protocol.h>

@class BKSProcess, BKSProcessAssertion, NSCountedSet, NSString;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface AMSKeepAliveSession : NSObject <BKSProcessDelegate>
{
    BOOL _interrupted;
    NSString *_assertionName;
    NSCountedSet *_activeNames;
    NSString *_logKey;
    BKSProcessAssertion *_taskAssertion;
    NSObject<OS_os_transaction> *_osTransaction;
    BKSProcess *_process;
    long long _timerId;
}

@property (strong, nonatomic) NSCountedSet *activeNames; // @synthesize activeNames=_activeNames;
@property (readonly, nonatomic) NSString *assertionName; // @synthesize assertionName=_assertionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interrupted; // @synthesize interrupted=_interrupted;
@property (readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property (strong, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property (strong, nonatomic) BKSProcess *process; // @synthesize process=_process;
@property (readonly) Class superclass;
@property (strong, nonatomic) BKSProcessAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property (nonatomic) long long timerId; // @synthesize timerId=_timerId;

+ (void)_afterDelay:(long long)arg1 coalesce:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)_deactivateSession;
+ (void)_reapplyAssertion;
+ (id)_sharedSessionQueue;
+ (void)addKeepAliveForName:(id)arg1;
+ (void)interrupt;
+ (void)removeKeepAliveForName:(id)arg1;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)dealloc;
- (id)init;
- (void)processWillExpire:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol NSObject, OS_os_transaction, OS_voucher;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    unsigned long long _options;
    NSString *_reason;
    NSObject<OS_os_transaction> *_transaction;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    id<NSObject> _xpcBoost;
    BKSProcessAssertion *_processAssertion;
    CDUnknownBlockType _expirationHandler;
    struct os_unfair_lock_s _lock;
    _Atomic BOOL _ended;
    unsigned char _adoptPreviousVoucher;
}

+ (void)_dumpExpiringActivitives;
+ (id)_expirationHandlerExecutionQueue;
+ (void)_expireAllActivies;
+ (id)_expiringActivities;
+ (id)_expiringAssertionManagementQueue;
+ (id)_expiringTaskExecutionQueue;
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_end;
- (void)_fireExpirationHandler;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (void)_reactivate;
- (void)dealloc;
- (id)debugDescription;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAssertionManager, NSString, NSUUID;
@protocol OS_dispatch_source;

@interface HDAssertion : NSObject
{
    HDAssertionManager *_manager;
    long long _state;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    double _expirationDate;
    struct os_unfair_lock_s _lock;
    NSUUID *_UUID;
    NSString *_assertionIdentifier;
    NSString *_ownerIdentifier;
    double _timeout;
}

@property (readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy, nonatomic) NSString *assertionIdentifier; // @synthesize assertionIdentifier=_assertionIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property (readonly) long long rawState;
@property (readonly) double remainingTime;
@property (readonly) long long state;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (void)_invalidateAndRelease:(BOOL)arg1;
- (void)_invalidationTimerDidFire;
- (long long)_takeWithManager:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (void)invalidate;

@end


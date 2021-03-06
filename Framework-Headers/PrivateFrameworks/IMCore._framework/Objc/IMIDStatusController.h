//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSRecursiveLock;

@interface IMIDStatusController : NSObject
{
    NSRecursiveLock *_servicesLock;
    NSMutableSet *_servicesRegistered;
}

@property (strong, nonatomic) NSRecursiveLock *_servicesLock; // @synthesize _servicesLock;
@property (strong, nonatomic) NSMutableSet *_servicesRegistered; // @synthesize _servicesRegistered;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(BOOL)arg3;
- (long long)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (long long)_idStatusForID:(id)arg1 onService:(id)arg2;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (id)init;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (long long)statusForID:(id)arg1 onService:(id)arg2;

@end


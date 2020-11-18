//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject
{
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
}

- (void)cancelTimer;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3;
- (id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2;
- (void)invalidate;
- (BOOL)isValid;

@end


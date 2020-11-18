//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : NSObject
{
    SBSLockScreenContentAssertion *_actualAssertion;
}

@property (strong, nonatomic) SBSLockScreenContentAssertion *actualAssertion; // @synthesize actualAssertion=_actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;

@end


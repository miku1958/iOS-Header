//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLPowerAssertion : NSObject
{
}

+ (void)_doProtected:(CDUnknownBlockType)arg1;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (BOOL)hasEnoughPower;
+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMMigrationDeferredExitManager : NSObject
{
}

+ (id)_serialQueue;
- (id)_deferralDuration;
- (void)_exitClean;
- (BOOL)_isDeferringExit;
- (void)_resetGlobalState;
- (void)cancelDeferredExitWithConnection:(id)arg1;
- (void)deferExitWithConnection:(id)arg1;
- (void)migrationDidEnd;
- (void)migrationDidStart;

@end


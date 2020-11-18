//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSProcessInternal-Protocol.h>

@class BSMachPortTaskNameRight, FBSProcessHandle, NSString;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding>
{
    int _pid;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_launchdLabel;
    long long _type;
    BSMachPortTaskNameRight *_taskNameRight;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_launchdLabel;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // @dynamic running;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_taskNameRight;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)currentProcess;
- (id)_initForCurrentProcess;
- (id)_initWithPID:(int)arg1 bundleID:(id)arg2;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end


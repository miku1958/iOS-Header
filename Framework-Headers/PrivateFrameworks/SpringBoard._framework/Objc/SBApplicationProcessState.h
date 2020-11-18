//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class FBApplicationProcess, FBProcessState, NSString;

@interface SBApplicationProcessState : NSObject <BSDescriptionProviding>
{
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    BOOL _isBeingDebugged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long taskState;
@property (readonly, nonatomic) long long visibility;

- (void).cxx_destruct;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

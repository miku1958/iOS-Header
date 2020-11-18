//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/NSCopying-Protocol.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying>
{
    BOOL _running;
    BOOL _foreground;
    BOOL _debugging;
    int _pid;
    long long _taskState;
    long long _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDebugging) BOOL debugging; // @synthesize debugging=_debugging;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground; // @synthesize foreground=_foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly) Class superclass;
@property (nonatomic) long long taskState; // @synthesize taskState=_taskState;
@property (nonatomic) long long visibility; // @synthesize visibility=_visibility;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithPid:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

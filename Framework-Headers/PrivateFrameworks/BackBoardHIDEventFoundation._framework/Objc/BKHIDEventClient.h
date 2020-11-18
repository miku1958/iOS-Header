//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BSDescriptionProviding-Protocol.h>

@class BSMachPortSendRight, BSPortDeathSentinel, BSProcessDeathWatcher, NSString;
@protocol BKHIDEventClientDelegate, OS_dispatch_queue;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<BKHIDEventClientDelegate> _queue_delegate;
    BSMachPortSendRight *_queue_sendRight;
    BSProcessDeathWatcher *_queue_pidWatcher;
    BSPortDeathSentinel *_queue_portSentinel;
    NSString *_queue_procName;
    int _queue_pid;
    BOOL _queue_invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BKHIDEventClientDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int pid; // @synthesize pid=_queue_pid;
@property (readonly, nonatomic) BSMachPortSendRight *sendRight; // @synthesize sendRight=_queue_sendRight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_deathByPid;
- (BOOL)_deathBySendRight;
- (void)_queue_invalidate;
- (void)_queue_performDelegateCallout:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 processName:(id)arg4;
- (void)invalidate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

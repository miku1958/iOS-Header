//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;

@interface STKUserEventMonitor : NSObject
{
    AWAttentionAwarenessConfiguration *_queue_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
    BOOL _enabled;
    id<STKUserEventMonitorDelegate> _delegate;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
}

@property (strong, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property (weak, nonatomic) id<STKUserEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;

- (void).cxx_destruct;
- (id)_initWithAttentionAwarenessClient:(id)arg1;
- (id)_queue;
- (void)_queue_handleAttentionAwarenessEvent:(id)arg1;
- (void)_resume;
- (void)_suspend;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end


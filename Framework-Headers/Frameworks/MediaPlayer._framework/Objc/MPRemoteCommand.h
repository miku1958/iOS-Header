//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private, OS_dispatch_queue;

@interface MPRemoteCommand : NSObject <_MPStateDumpPropertyListTransformable>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_handlers;
    BOOL _enabled;
    BOOL _observing;
    BOOL _skipSerializedEventDelivery;
    unsigned int _mediaRemoteCommandType;
    id<MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
    id<MPRemoteCommandDelegate_Private> _delegate;
}

@property (weak, nonatomic) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate; // @synthesize commandCenterDelegate=_commandCenterDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPRemoteCommandDelegate_Private> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) BOOL hasTargets;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType; // @synthesize mediaRemoteCommandType=_mediaRemoteCommandType;
@property (nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property (nonatomic) BOOL skipSerializedEventDelivery; // @synthesize skipSerializedEventDelivery=_skipSerializedEventDelivery;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isSupportedAndEnabled) BOOL supportedAndEnabled;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)_stateDumpObject;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)addTargetWithHandler:(CDUnknownBlockType)arg1;
- (void *)createCommandInfoRepresentation;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)invokeCommandWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isEnabledForContentItemIdentifier:(id)arg1;
- (BOOL)isSupportedForContentItemIdentifier:(id)arg1;
- (id)newCommandEvent;
- (id)newCommandEventWithCommandType:(unsigned int)arg1 options:(id)arg2;
- (id)newCommandEventWithContentItemIdentifier:(id)arg1;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)arg1;
- (id)newSeekCommandEventWithType:(unsigned long long)arg1;
- (void)notifyPropagatablePropertyChanged;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;

@end


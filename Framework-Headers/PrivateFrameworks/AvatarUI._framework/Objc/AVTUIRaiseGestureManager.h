//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/CMWakeGestureDelegate-Protocol.h>

@class CMWakeGestureManager, NSString;
@protocol AVTUIRaiseGestureManagerDelegate, OS_dispatch_queue;

@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate>
{
    id<AVTUIRaiseGestureManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CMWakeGestureManager *_wakeGestureManager;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTUIRaiseGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CMWakeGestureManager *wakeGestureManager; // @synthesize wakeGestureManager=_wakeGestureManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2;
- (void)startRaiseGestureUpdates;
- (void)stopRaiseGestureUpdates;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end

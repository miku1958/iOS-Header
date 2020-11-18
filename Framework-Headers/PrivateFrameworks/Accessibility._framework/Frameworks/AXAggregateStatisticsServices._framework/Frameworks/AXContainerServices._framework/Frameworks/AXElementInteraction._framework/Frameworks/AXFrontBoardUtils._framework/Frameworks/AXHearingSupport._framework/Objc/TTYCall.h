//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/AVCVirtualTTYDeviceDelegate-Protocol.h>

@class AVCVirtualTTYDevice, NSString, TTYConversation, TUCall;
@protocol OS_dispatch_queue, TTYCallDelegate;

@interface TTYCall : NSObject <AVCVirtualTTYDeviceDelegate>
{
    NSObject<OS_dispatch_queue> *_callQueue;
    id<TTYCallDelegate> _delegate;
    TTYConversation *_conversation;
    TUCall *_call;
    AVCVirtualTTYDevice *_ttyDevice;
}

@property (strong, nonatomic) TUCall *call; // @synthesize call=_call;
@property (strong, nonatomic) TTYConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<TTYCallDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) AVCVirtualTTYDevice *ttyDevice; // @synthesize ttyDevice=_ttyDevice;

- (void).cxx_destruct;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)dealloc;
- (void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)deviceDidStop:(id)arg1;
- (id)initWithCall:(id)arg1;
- (void)mediaServerDied;
- (void)recreateTTYDevice:(id)arg1;
- (void)registerNotifications;
- (void)sendCharacter:(unsigned short)arg1;
- (void)start;
- (void)stop;

@end


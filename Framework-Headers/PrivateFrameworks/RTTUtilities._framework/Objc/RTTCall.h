//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/AVCVirtualTTYDeviceDelegate-Protocol.h>

@class AVCVirtualTTYDevice, AXDispatchTimer, NSDictionary, NSMutableString, NSString, RTTConversation, TUCall;
@protocol OS_dispatch_queue, RTTCallDelegate;

@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate>
{
    long long _ttyMode;
    NSObject<OS_dispatch_queue> *_callQueue;
    NSMutableString *_garbageCollection;
    AXDispatchTimer *_garbageCharacterStripperTimer;
    BOOL _isViewControllerVisible;
    id<RTTCallDelegate> _delegate;
    RTTConversation *_conversation;
    TUCall *_call;
    AVCVirtualTTYDevice *_ttyDevice;
    NSDictionary *_substitutions;
}

@property (strong, nonatomic) TUCall *call; // @synthesize call=_call;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callQueue; // @synthesize callQueue=_callQueue;
@property (strong, nonatomic) RTTConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTTCallDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isViewControllerVisible; // @synthesize isViewControllerVisible=_isViewControllerVisible;
@property (strong, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property (readonly) Class superclass;
@property (strong, nonatomic) AVCVirtualTTYDevice *ttyDevice; // @synthesize ttyDevice=_ttyDevice;

- (void).cxx_destruct;
- (BOOL)_handleInitialGarbageTextFromTTY:(id)arg1 device:(id)arg2;
- (id)_processText:(id)arg1 withDevice:(id)arg2;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2;
- (void)dealloc;
- (void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)device:(id)arg1 didReceiveText:(id)arg2;
- (void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)deviceDidStop:(id)arg1;
- (id)initWithCall:(id)arg1;
- (BOOL)isLocallyHosted;
- (void)mediaServerDied;
- (void)recreateTTYDevice:(id)arg1;
- (void)registerNotifications;
- (void)sendString:(id)arg1;
- (void)start;
- (void)stop;
- (void)toggleSystemOutputMute:(BOOL)arg1;

@end


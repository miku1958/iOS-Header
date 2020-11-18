//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCTextReceiverDelegate-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate>
{
    int _clientPid;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    id _sendDelegate;
    id _mediaStreamDelegate;
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didReceiveCharacter:(unsigned short)arg1;
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)pause;
- (void)resume;
- (void)sendCharacter:(unsigned short)arg1;
- (id)sendDelegate;
- (void)setPause:(BOOL)arg1;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)start;
- (void)stop;

@end


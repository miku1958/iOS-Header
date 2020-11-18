//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AXAccessQueue, NSMutableArray;
@protocol AXUIMessageSenderDelegate_ServiceFramework;

@interface AXUIMessageSender_ServiceFramework : NSObject
{
    BOOL _sendingMessage;
    id<AXUIMessageSenderDelegate_ServiceFramework> _delegate;
    NSMutableArray *_messageQueue;
    AXAccessQueue *_messageSchedulingSerializationQueue;
}

@property (nonatomic) id<AXUIMessageSenderDelegate_ServiceFramework> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property (strong, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue; // @synthesize messageSchedulingSerializationQueue=_messageSchedulingSerializationQueue;
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage; // @synthesize sendingMessage=_sendingMessage;

- (void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void *)arg2;
- (void)_performBlock:(CDUnknownBlockType)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(BOOL)arg3;
- (void)_sendXPCMessage:(id)arg1 context:(void *)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void *)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void *)arg3 error:(id *)arg4;

@end


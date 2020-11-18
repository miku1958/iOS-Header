//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask
{
    long long _maximumMessageSize;
    long long _closeCode;
    NSData *_closeReason;
}

@property (readonly) long long closeCode; // @synthesize closeCode=_closeCode;
@property (readonly, copy) NSData *closeReason; // @synthesize closeReason=_closeReason;
@property long long maximumMessageSize; // @synthesize maximumMessageSize=_maximumMessageSize;

- (void).cxx_destruct;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;

@end

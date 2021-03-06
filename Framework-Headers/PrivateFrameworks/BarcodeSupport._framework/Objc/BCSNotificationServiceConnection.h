//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject
{
    CDUnknownBlockType _interruptionHandler;
    NSXPCConnection *_serviceConnection;
}

@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (strong, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;

- (void).cxx_destruct;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)startNFCReaderWithDelegate:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)stopNFCReaderWithErrorHandler:(CDUnknownBlockType)arg1;

@end


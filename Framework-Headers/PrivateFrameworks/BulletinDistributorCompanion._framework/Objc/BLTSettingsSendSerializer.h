//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingsSendSerializerPassthrough.h>

@class BLTSendQueueSerializer, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough
{
    NSObject<OS_dispatch_queue> *_queue;
    BLTSendQueueSerializer *_queueSerializer;
    NSMutableArray *_completionHandlers;
    NSMutableDictionary *_ackHandlers;
    CDUnknownBlockType _acknowledgementBlock;
    unsigned long long _ackHandlerCount;
    unsigned long long _responseCount;
}

- (void).cxx_destruct;
- (void)handleFileURL:(id)arg1;
- (id)init;
- (void)sendNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2 withTimeout:(id)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7 spoolToFile:(BOOL)arg8;

@end


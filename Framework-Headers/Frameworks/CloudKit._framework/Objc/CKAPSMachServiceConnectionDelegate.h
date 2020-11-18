//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;
    CKAPSMachServiceConnectionKey *_key;
}

@property (weak, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CKAPSMachServiceConnectionKey *key; // @synthesize key=_key;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (id)initWithConnection:(id)arg1 key:(id)arg2;

@end

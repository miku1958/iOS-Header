//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSString;
@protocol HMDDataStreamProtocolDelegate;

@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    NSMapTable *_sockets;
    id<HMDDataStreamProtocolDelegate> _dataStream;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, weak) id<HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMapTable *sockets; // @synthesize sockets=_sockets;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)protocolName;
- (void).cxx_destruct;
- (void)_closeAllSocketsWithError:(id)arg1;
- (void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)initWithDataStream:(id)arg1;
- (void)registerSocket:(id)arg1;
- (void)sendData:(id)arg1 socket:(id)arg2;
- (void)unregisterSocket:(id)arg1;

@end

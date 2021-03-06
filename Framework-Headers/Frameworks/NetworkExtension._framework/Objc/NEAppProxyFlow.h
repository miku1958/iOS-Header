//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEFlowMetaData, NSData, NSString;
@protocol OS_dispatch_queue, OS_nw_interface;

@interface NEAppProxyFlow : NSObject
{
    BOOL _isBound;
    NEFlowMetaData *_metaData;
    NSString *_remoteHostname;
    struct _NEFlow *_flow;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_interface> *__networkInterface;
}

@property (strong) NSObject<OS_nw_interface> *_networkInterface; // @synthesize _networkInterface=__networkInterface;
@property (strong) NSData *applicationData;
@property struct _NEFlow *flow; // @synthesize flow=_flow;
@property BOOL isBound; // @synthesize isBound=_isBound;
@property (readonly) NEFlowMetaData *metaData; // @synthesize metaData=_metaData;
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) NSString *remoteHostname; // @synthesize remoteHostname=_remoteHostname;

+ (id)copyRemoteEndpointFromFlow:(struct _NEFlow *)arg1;
+ (struct __CFError *)copyVPNFlowErrorFromFlowError:(id)arg1;
+ (id)flowErrorForVPNFlowError:(long long)arg1;
- (void).cxx_destruct;
- (void)clearEventHandlers;
- (void)closeReadWithError:(id)arg1;
- (void)closeWriteWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMetadata:(id)arg1;

@end


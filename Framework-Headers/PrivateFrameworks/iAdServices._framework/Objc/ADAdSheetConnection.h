//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol ADAdSheetConnectionDelegate, OS_dispatch_queue;

@interface ADAdSheetConnection : NSObject
{
    id<ADAdSheetConnectionDelegate> _delegate;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_adSheetConnection;
}

@property (strong, nonatomic) NSXPCConnection *adSheetConnection; // @synthesize adSheetConnection=_adSheetConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property (weak, nonatomic) id<ADAdSheetConnectionDelegate> delegate;
@property (strong, nonatomic) NSMutableArray *performWhenConnectedBlocks; // @synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks;

- (void)_considerConnectingToAdSheet;
- (void)considerConnectingToAdSheet;
- (void)dealloc;
- (id)init;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (id)rpcProxy;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)withAssertion:(id)arg1 performWhenConnected:(CDUnknownBlockType)arg2;

@end

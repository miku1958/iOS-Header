//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKTransientPassAssertionServerProtocol-Protocol.h>

@class NPKTransientPassRequest, NSXPCConnection;
@protocol NPKTransientPassAssertionConnectionDelegate, OS_dispatch_queue;

@interface NPKTransientPassAssertionConnection : NSObject <NPKTransientPassAssertionServerProtocol>
{
    BOOL _backgrounded;
    id<NPKTransientPassAssertionConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NPKTransientPassRequest *_transientPassRequest;
    NSXPCConnection *_connection;
}

@property (nonatomic, getter=isBackgrounded) BOOL backgrounded; // @synthesize backgrounded=_backgrounded;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (weak, nonatomic) id<NPKTransientPassAssertionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NPKTransientPassRequest *transientPassRequest; // @synthesize transientPassRequest=_transientPassRequest;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)setServiceModeRequested:(BOOL)arg1;
- (void)setTransientPassUniqueID:(id)arg1;

@end


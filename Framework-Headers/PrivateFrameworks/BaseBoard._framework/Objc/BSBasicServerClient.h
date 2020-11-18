//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCServerClient-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface BSBasicServerClient : NSObject <BSXPCServerClient>
{
    NSObject<OS_xpc_object> *_connection;
    int _resumed;
    int _cancelled;
    BOOL _managingResumeState;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wrapperWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)sendMessage:(id)arg1;
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1;
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)suspend;

@end


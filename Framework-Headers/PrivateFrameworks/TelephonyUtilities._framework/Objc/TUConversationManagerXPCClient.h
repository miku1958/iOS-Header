//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUConversationManagerDataSourceDelegate;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource>
{
    BOOL _hasRequestedInitialState;
    int _token;
    id<TUConversationManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_conversationsByGroupUUID;
}

@property (copy, nonatomic) NSDictionary *conversationsByGroupUUID; // @synthesize conversationsByGroupUUID=_conversationsByGroupUUID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUConversationManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (nonatomic) int token; // @synthesize token=_token;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)asynchronousServer;
+ (id)conversationManagerAllowedClasses;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
- (void).cxx_destruct;
- (void)_invokeCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)_requestInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)updateConversationsByGroupUUID:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSourceDelegate-Protocol.h>

@class NSMapTable, NSSet, NSString;
@protocol OS_dispatch_queue, TUConversationManagerDataSource;

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<TUConversationManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

@property (readonly, copy, nonatomic) NSSet *activeConversations;
@property (readonly, nonatomic) id<TUConversationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeConversationWithGroupUUID:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)conversationWithGroupUUID:(id)arg1;
- (void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;

@end

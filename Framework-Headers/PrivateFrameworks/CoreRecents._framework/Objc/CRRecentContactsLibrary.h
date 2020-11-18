//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CRRecentContactsLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_connection;
}

+ (struct NSObject *)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6;
+ (id)defaultInstance;
+ (struct NSObject *)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5;
+ (CDUnknownBlockType)frecencyComparator;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (struct NSObject *)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3;
+ (CDUnknownBlockType)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7;
- (int)_daemonProcessID;
- (id)_newConnection;
- (id)_remoteLibraryWithErrorHandler:(CDUnknownBlockType)arg1;
- (BOOL)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id *)arg4;
- (id)_searchRecentsUsingQuery:(id)arg1;
- (void)_searchRecentsUsingQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_searchRecentsUsingQuery:(id)arg1 error:(id *)arg2;
- (id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (id)copyRecentsForDomain:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)maxDateEventsPerRecentContact;
- (void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(BOOL)arg5;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(BOOL)arg4;
- (BOOL)removeRecentContacts:(id)arg1 error:(out id *)arg2;
- (void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(CDUnknownBlockType)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2;
- (void)start;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextClient, CKContextResponse, NSURL, WBSHistory;
@protocol OS_dispatch_queue;

@interface WBSHistoryContextController : NSObject
{
    CKContextResponse *_cachedResponse;
    NSURL *_pageURLForCachedResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_client;
    WBSHistory *_history;
}

@property (readonly, nonatomic) WBSHistory *history; // @synthesize history=_history;

- (void).cxx_destruct;
- (void)cachedResponseForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(BOOL)arg5 isReaderAvailable:(BOOL)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;
- (void)invalidateCachedResults;

@end


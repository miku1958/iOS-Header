//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGLRUCache;

@interface SGTextMessageConversationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    SGLRUCache *_conversations;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)addMessage:(id)arg1;
- (void)clear;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKRWLock, GKSessionInternal, NSMutableArray;

@interface GKVoiceChatSessionListener : NSObject
{
    NSMutableArray *_conferenceList;
    GKSessionInternal *_gkSession;
    GKRWLock *_rwlock;
}

- (id)currentSessions;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2;
- (void)registerNewGKVoiceChatSession:(id)arg1;
- (void)removeSession:(id)arg1;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;

@end

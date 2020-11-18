//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject
{
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)dequeueObject;
- (id)dequeueObjectRetained;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (BOOL)isEmpty;
- (id)objectEnumerator;
- (id)popObject;
- (id)popObjectRetained;
- (void)pushArray:(id)arg1;
- (void)pushObject:(id)arg1;
- (void)removeAllObjects;
- (id)topObject;

@end


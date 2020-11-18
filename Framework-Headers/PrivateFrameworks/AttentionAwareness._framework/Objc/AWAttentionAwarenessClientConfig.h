//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwarenessClientConfig : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    NSMutableDictionary *_notifyQueues;
    NSMutableDictionary *_notifyBlocks;
    unsigned long long _supportedEvents;
    BOOL _supportedEventsValid;
    unsigned long long _nextTagIndex;
    NSMutableDictionary *_tagMap;
    NSMutableDictionary *_tagRefCount;
}

+ (id)sharedClientConfig;
- (void).cxx_destruct;
- (unsigned long long)addTag:(id)arg1;
- (void)cancelNotification:(struct AWNotification_s *)arg1;
- (void)dealloc;
- (void)decrementTagIndexRefCount:(unsigned long long)arg1;
- (void)incrementTagIndexRefCount:(unsigned long long)arg1;
- (id)init;
- (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedEvents;
- (id)tagForIndex:(unsigned long long)arg1;
- (void)updateState:(BOOL)arg1;

@end


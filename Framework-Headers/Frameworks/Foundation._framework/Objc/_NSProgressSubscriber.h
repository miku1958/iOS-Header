//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressSubscriber-Protocol.h>

@class NSLock, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber>
{
    CDUnknownBlockType _publishingHandler;
    NSString *_subscriberID;
    NSMutableDictionary *_proxiesByPublisherID;
    BOOL _started;
    NSLock *_lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
- (void)dealloc;
- (id)initWithPublishingHandler:(CDUnknownBlockType)arg1;
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
- (oneway void)removePublisherForID:(id)arg1;
- (void)startForCategory:(id)arg1;
- (void)startForFileURL:(id)arg1;
- (void)stop;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressSubscriber-Protocol.h>

@class NSFileAccessNode, NSString, NSXPCConnection;
@protocol NSProgressSubscriber;

__attribute__((visibility("hidden")))
@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber>
{
    id<NSProgressSubscriber> _forwarder;
    id _subscriberID;
    NSString *_bundleID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}

@property (copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSFileAccessNode *itemLocation;
@property (readonly) Class superclass;

- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
- (id)appBundleID;
- (void)dealloc;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4;
- (BOOL)isFromConnection:(id)arg1;
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
- (oneway void)removePublisherForID:(id)arg1;

@end


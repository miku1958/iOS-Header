//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssertionServices/NSObject-Protocol.h>

@class BKSAssertionEvent, NSObject, NSString;
@protocol BKSAssertionClientHandler, OS_dispatch_queue;

@protocol BKSAssertionClientProtocol <NSObject>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;

- (void)registerClientHandler:(id<BKSAssertionClientHandler>)arg1 forAssertionIdentifier:(NSString *)arg2;
- (BOOL)sendCreateEvent:(BKSAssertionEvent *)arg1 error:(id *)arg2;
- (void)sendDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)sendUpdateEvent:(BKSAssertionEvent *)arg1;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg1;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/FCAppActivityMonitor-Protocol.h>
#import <NewsUI/SXAppStateMonitor-Protocol.h>

@class NSHashTable, NSMutableSet, NSNotificationCenter, NSString;

@interface NUExtensionAppActivityMonitor : NSObject <FCAppActivityMonitor, SXAppStateMonitor>
{
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
    NSMutableSet *_foregroundObserverBlocks;
    NSMutableSet *_backgroundObserverBlocks;
}

@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks; // @synthesize backgroundObserverBlocks=_backgroundObserverBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks; // @synthesize foregroundObserverBlocks=_foregroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (void)performOnApplicationDidBecomeActive:(CDUnknownBlockType)arg1;
- (void)performOnApplicationDidEnterBackground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWillEnterForeground:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;

@end


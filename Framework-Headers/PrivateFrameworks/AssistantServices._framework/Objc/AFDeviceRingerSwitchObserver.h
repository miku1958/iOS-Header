//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>

@class AFNotifyObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyObserver *_notifyObserver;
    NSHashTable *_listeners;
    BOOL _isActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;
- (void)addListener:(id)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;

@end


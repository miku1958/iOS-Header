//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import <CoreHAP/HAPTimerDelegate-Protocol.h>

@class HAPTimer, NSMutableSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPTimerDelegate>
{
    struct BonjourBrowser *_bonjourBrowser;
    NSMutableSet *_discoveredAccessoryServers;
    id<HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_pendingBonjourEvents;
    HAPTimer *_bonjourEventTimer;
}

@property (strong, nonatomic) HAPTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *pendingBonjourEvents; // @synthesize pendingBonjourEvents=_pendingBonjourEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (int)_initializeAndStartBonjourBrowser;
- (void)_invalidateUnpairedAccessoryServers;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (void)_processPendingBonjourEvent:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2;
- (int)_server:(id *)arg1 forBonjourDevice:(id)arg2;
- (void)_setReachability:(BOOL)arg1 forServer:(id)arg2;
- (void)_timerDidExpire:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (long long)linkType;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)timerDidFire:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

@class RTKeepAliveTransaction;

__attribute__((visibility("hidden")))
@interface RTStarkManager : RTNotifier
{
    BOOL _trustedConnectionEstablished;
    long long _connectionState;
    RTKeepAliveTransaction *_dirty;
}

@property (nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property (strong, nonatomic) RTKeepAliveTransaction *dirty; // @synthesize dirty=_dirty;
@property (nonatomic) BOOL trustedConnectionEstablished; // @synthesize trustedConnectionEstablished=_trustedConnectionEstablished;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchConnectionStateWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPairedVehiclesDidChange:(id)arg1;
- (void)postConnectionStateNotification;
- (BOOL)updateConnectionState;
- (void)updateTrustedConnectionEstablished;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPredicate, NSSet;
@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject
{
    BOOL __debugLog;
    id<EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
    NSSet *_unconfiguredAccessories;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSPredicate *_accessorySearchPredicate;
}

@property (strong) NSPredicate *accessorySearchPredicate; // @synthesize accessorySearchPredicate=_accessorySearchPredicate;
@property (weak, nonatomic) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSSet *unconfiguredAccessories; // @synthesize unconfiguredAccessories=_unconfiguredAccessories;

- (void).cxx_destruct;
- (void)_handleBrowserDidUpdateState:(id)arg1;
- (void)_handleBrowserFinishedConfiguring:(id)arg1;
- (void)_handleNewAccessoriesNotification:(id)arg1;
- (void)_handlePurgeAccessoriesSetNotification:(id)arg1;
- (void)_handleRemovedAccessoriesNotification:(id)arg1;
- (void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1;
- (void)stopSearchingForUnconfiguredAccessories;

@end


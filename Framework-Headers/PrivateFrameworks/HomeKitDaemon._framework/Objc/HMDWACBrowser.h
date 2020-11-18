//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDWACScannerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFMessageDispatcher, NSMutableDictionary, NSString;
@protocol HMDWACBrowserDelegate, HMDWACScanner, OS_dispatch_queue;

@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id<HMDWACScanner> _wacScanner;
    NSMutableDictionary *_unassociatedAccessories;
    HMFMessageDispatcher *_messageDispatcher;
    BOOL _scanIsActive;
    id<HMDWACBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDWACBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL scanIsActive; // @synthesize scanIsActive=_scanIsActive;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)clearBackoff;
- (id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2;
- (void)requestBackoff;
- (void)scanner:(id)arg1 didAddDevice:(id)arg2;
- (void)scanner:(id)arg1 didError:(id)arg2;
- (void)scanner:(id)arg1 didRemoveDevice:(id)arg2;
- (void)scanner:(id)arg1 didUpdateDevice:(id)arg2;
- (void)scannerDidStop:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)startBrowsingForAccessories;
- (void)stopBrowsingForAccessories;

@end


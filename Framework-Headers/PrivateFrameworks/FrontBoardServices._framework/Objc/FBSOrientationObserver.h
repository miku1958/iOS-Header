//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSOrientationObserverClientDelegate-Protocol.h>

@class FBSOrientationObserverClient, FBSOrientationUpdate, NSString;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable>
{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    CDUnknownBlockType _handler;
    FBSOrientationUpdate *_freshestUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)arg1;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
- (void)dealloc;
- (void)handleOrientationResetForClient:(id)arg1;
- (id)init;
- (void)invalidate;

@end

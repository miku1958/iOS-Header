//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSOrientationObserverClientDelegate-Protocol.h>

@class FBSOrientationObserverClient, NSString;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate>
{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    CDUnknownBlockType _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end


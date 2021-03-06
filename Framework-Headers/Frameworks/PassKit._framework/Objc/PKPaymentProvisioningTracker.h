//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKCancelable-Protocol.h>

@class NSString, PKPaymentProvisioningController;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable>
{
    PKPaymentProvisioningController *_controller;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithPaymentProvisioningController:(id)arg1;

@end


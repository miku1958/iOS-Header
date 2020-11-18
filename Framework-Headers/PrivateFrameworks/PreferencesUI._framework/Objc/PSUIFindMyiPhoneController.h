//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface PSUIFindMyiPhoneController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enablePhoneLocatorWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isFindMyiPhoneEnabled;
- (BOOL)isFindMyiPhoneProvisioned;
- (void)locatorStateDidChange:(id)arg1;
- (id)preferredFindMyiPhoneAccount;

@end


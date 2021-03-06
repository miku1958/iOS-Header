//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPAlert.h>

#import <TelephonyUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class BSProcessHandle, NSSet, NSString, SBSRemoteAlertHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver>
{
    SBSRemoteAlertHandle *_remoteAlertHandle;
    CDUnknownBlockType _dialAction;
    NSString *_buttonTitle;
    NSSet *_handles;
    BSProcessHandle *_processHandle;
}

@property (readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dialAction; // @synthesize dialAction=_dialAction;
@property (readonly, copy, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property (strong, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // @synthesize remoteAlertHandle=_remoteAlertHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultButtonTitle;
- (void)defaultResponse;
- (id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(CDUnknownBlockType)arg3;
- (id)initWithDialRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;
- (id)initWithJoinRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;
- (id)otherButtonTitle;
- (void)otherResponse;
- (id)phoneNumberHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)show;
- (id)title;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWebGeolocationPolicyDecider;

@interface _SFGeolocationPermissionManager : NSObject
{
    UIWebGeolocationPolicyDecider *_policyDecider;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

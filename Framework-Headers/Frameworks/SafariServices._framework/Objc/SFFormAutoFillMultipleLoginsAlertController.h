//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController
{
    UIAlertAction *_cancelAction;
    BOOL _cancelsWhenAppEntersBackground;
}

@property (nonatomic) BOOL cancelsWhenAppEntersBackground; // @synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


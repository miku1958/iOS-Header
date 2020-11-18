//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSString;

@interface WBUPasswordPickerViewController : UINavigationController
{
    NSString *_prompt;
    long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    CDUnknownBlockType _completionHandler;
    BOOL _shouldDismissOnCompletion;
    BOOL _forUserNamesOnly;
    NSArray *_hintStrings;
}

@property (readonly, nonatomic) BOOL forUserNamesOnly; // @synthesize forUserNamesOnly=_forUserNamesOnly;
@property (readonly, copy, nonatomic) NSArray *hintStrings; // @synthesize hintStrings=_hintStrings;
@property (readonly, nonatomic) long long minimumNumberOfCredentialsToShowLikelyMatchesSection; // @synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (nonatomic) BOOL shouldDismissOnCompletion; // @synthesize shouldDismissOnCompletion=_shouldDismissOnCompletion;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_cancel;
- (void)_pickSavedPassword:(id)arg1;
- (void)dealloc;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 hintStrings:(id)arg3 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg4 shouldDismissOnCompletion:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end


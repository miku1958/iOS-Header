//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface WFWordPressLoginViewController : WFPasswordAccountLoginViewController
{
    UITextField *_blogField;
}

@property (readonly, weak, nonatomic) UITextField *blogField; // @synthesize blogField=_blogField;

- (void).cxx_destruct;
- (BOOL)canAttemptLogin;
- (void)configureTextField:(id)arg1 forKey:(id)arg2;
- (id)initWithAccountClass:(Class)arg1;
- (id)loginURL;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

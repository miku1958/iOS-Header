//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

__attribute__((visibility("hidden")))
@interface WFCloudAppLoginViewController : WFPasswordAccountLoginViewController
{
}

- (id)initWithAccountClass:(Class)arg1;
- (id)loginURL;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)usernameIsEmail;
- (void)viewDidLoad;

@end


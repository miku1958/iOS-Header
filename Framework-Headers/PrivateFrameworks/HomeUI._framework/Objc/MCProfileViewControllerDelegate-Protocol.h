//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class MCProfileViewController;

@protocol MCProfileViewControllerDelegate <NSObject>
- (void)profileViewControllerDidSelectRemoveProfile:(MCProfileViewController *)arg1;
- (BOOL)profileViewControllerIsProfileInstalled;

@optional
- (void)profileViewControllerDidSelectUpdateProfile:(MCProfileViewController *)arg1;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFBookmarkInfoViewController;

@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>

@optional
- (void)bookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1 didFinishWithResult:(BOOL)arg2;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(_SFBookmarkInfoViewController *)arg1;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(_SFBookmarkInfoViewController *)arg1;
@end

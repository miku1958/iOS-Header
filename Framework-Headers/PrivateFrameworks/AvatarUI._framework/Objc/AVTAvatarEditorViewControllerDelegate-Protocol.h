//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarEditorViewController;
@protocol AVTAvatarRecord;

@protocol AVTAvatarEditorViewControllerDelegate <NSObject>
- (void)avatarEditorViewController:(AVTAvatarEditorViewController *)arg1 didFinishWithAvatarRecord:(id<AVTAvatarRecord>)arg2;
- (void)avatarEditorViewControllerDidCancel:(AVTAvatarEditorViewController *)arg1;
@end


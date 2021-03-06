//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, UIContextMenuConfiguration, UIContextMenuInteraction, _UIContextMenuStyle;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate_Private <UIContextMenuInteractionDelegate>

@optional
- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 accessoriesForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (BOOL)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 failedToBeginForSecondaryClickAtLocation:(struct CGPoint)arg2;
- (_UIContextMenuStyle *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 styleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willCommitWithAnimator:(id<UIContextMenuInteractionCommitAnimating>)arg2;
- (void)contextMenuInteractionDidEnd:(UIContextMenuInteraction *)arg1;
- (void)contextMenuInteractionWillPresent:(UIContextMenuInteraction *)arg1;
@end


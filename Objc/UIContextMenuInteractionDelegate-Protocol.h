//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/NSObject-Protocol.h>

@class UIContextMenuConfiguration, UIContextMenuInteraction, UITargetedPreview;
@protocol UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate <NSObject>
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;

@optional
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id<UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willEndForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id<UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id<UIContextMenuInteractionCommitAnimating>)arg3;
@end


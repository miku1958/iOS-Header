//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SBHRecentsDocumentExtensionProvider, SBIconView, SBSApplicationShortcutItem, UIView, _UIContextMenuStyle;

@protocol SBIconViewShortcutsDelegate <NSObject>

@optional
- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (NSString *)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(SBIconView *)arg1;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (BOOL)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillBegin:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillFinish:(SBIconView *)arg1;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
- (SBHRecentsDocumentExtensionProvider *)recentDocumentExtensionProviderForIconView:(SBIconView *)arg1;
@end


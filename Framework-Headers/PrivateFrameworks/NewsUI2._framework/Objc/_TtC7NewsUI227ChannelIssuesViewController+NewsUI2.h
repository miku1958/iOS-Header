//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/_TtC7NewsUI227ChannelIssuesViewController.h>

@class NSArray;

@interface _TtC7NewsUI227ChannelIssuesViewController (NewsUI2)

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic, readonly) long long pluginVisibleItemCount;

- (void)deselect;
- (void)initializeWithCompletion:(CDUnknownBlockType)arg1;
- (void)relayoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@end


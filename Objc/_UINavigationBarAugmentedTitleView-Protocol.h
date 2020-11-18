//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UINavigationItem;
@protocol _UINavigationBarTitleViewDataSource;

@protocol _UINavigationBarAugmentedTitleView <NSObject>

@property (readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property (readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property (readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property (readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property (readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property (readonly, nonatomic) double _navigationBarContentHeight;
@property (readonly, nonatomic) BOOL _underlayNavigationBarContent;

- (void)_contentDidChange;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id<_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
@end


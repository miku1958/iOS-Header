//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIStatusBarAction;
@protocol UILayoutItem;

@protocol _UIStatusBarActionable <NSObject>

@property (readonly, nonatomic) struct CGRect absoluteHoverFrame;
@property (strong, nonatomic) _UIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets actionInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets extendedHoverInsets;
@property (strong, nonatomic) _UIStatusBarAction *hoverAction;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, nonatomic) id<UILayoutItem> layoutItem;

@end


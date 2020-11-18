//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIUCBBarButtonVisualProviderIOS.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS
{
    UIView *_selectionBackgroundView;
    UIColor *_selectionBackgroundTintColor;
    UIColor *_selectionTintColor;
}

@property (strong, nonatomic) UIColor *selectionBackgroundTintColor; // @synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor;
@property (strong, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;

- (void).cxx_destruct;
- (void)configureButton:(id)arg1 fromBarItem:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2;

@end

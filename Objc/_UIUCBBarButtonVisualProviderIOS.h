//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_contentButton;
}

+ (id)_defaultTitleAttributes;
- (void).cxx_destruct;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (void)configureButton:(id)arg1 fromBarItem:(id)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2;

@end


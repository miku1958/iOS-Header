//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFNavigationBar.h>

@class _SFBrowserToolbar;

__attribute__((visibility("hidden")))
@interface _SFBrowserNavigationBar : _SFNavigationBar
{
}

@property (readonly, nonatomic) _SFBrowserToolbar *toolbar;

- (double)URLFieldHorizontalMargin;
- (id)newTextField;
- (double)placeholderHorizontalInset;
- (void)tintColorDidChange;
- (id)toolbarPlacedOnTop;
- (void)updateToobarTintColor;

@end


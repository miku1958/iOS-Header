//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt : UIView
{
    UILabel *_label;
    UINavigationBar *_navBar;
}

@property (copy, nonatomic) NSString *prompt;

- (void).cxx_destruct;
- (struct CGRect)_labelFrame;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (id)initWithNavBar:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)promptBounds;

@end


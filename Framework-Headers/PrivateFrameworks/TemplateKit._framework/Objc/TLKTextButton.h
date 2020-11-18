//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIFont;

@interface TLKTextButton : UIButton
{
    unsigned long long _prominence;
    NSString *_title;
}

@property (strong, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)allowsVibrancy;
- (void)didMoveToWindow;
- (id)init;
- (void)tlk_updateForAppearance:(id)arg1;

@end

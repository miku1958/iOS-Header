//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView
{
    double m_pointerOffset;
    int _roundedCorners;
    UIKeyboardMenuView *_menu;
    struct CGRect _keyRect;
}

@property (nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property (nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property (nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
@property (nonatomic) int roundedCorners; // @synthesize roundedCorners=_roundedCorners;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end


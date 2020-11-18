//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl
{
    NSMutableArray *_buttons;
    BOOL _numberButtonsEnabled;
    double _buttonBackgroundAlpha;
}

@property (nonatomic) double buttonBackgroundAlpha; // @synthesize buttonBackgroundAlpha=_buttonBackgroundAlpha;
@property (strong) NSArray *buttons; // @dynamic buttons;
@property (nonatomic) BOOL numberButtonsEnabled; // @synthesize numberButtonsEnabled=_numberButtonsEnabled;

- (void).cxx_destruct;
- (void)_addButton:(id)arg1;
- (void)_layoutGrid;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)dealloc;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (id)initWithButtons:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;

@end


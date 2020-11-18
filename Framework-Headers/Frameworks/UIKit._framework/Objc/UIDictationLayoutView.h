//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDictationView.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView
{
    BOOL _hideSwitcher;
    UIButton *_startButton;
    UIButton *_stopButton;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIButton *_waveTapEndpointButton;
    BOOL _selectionGestureDetected;
}

- (void)dealloc;
- (void)didEndIndirectSelectionGesture;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isShowing;
- (void)keyboardButtonPressed;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1;
- (void)startStopButtonPressed;
- (void)updateLanguageLabel;
- (void)willBeginIndirectSelectionGesture;

@end


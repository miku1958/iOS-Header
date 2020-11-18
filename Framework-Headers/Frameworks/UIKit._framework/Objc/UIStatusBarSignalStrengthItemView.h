//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView
{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    BOOL _showFailure;
    BOOL _useSmallBars;
}

- (id)_signalStrengthBarsImageName;
- (id)_stringForRSSI;
- (BOOL)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(BOOL)arg3 showFailure:(BOOL)arg4 useSmallBars:(BOOL)arg5;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end


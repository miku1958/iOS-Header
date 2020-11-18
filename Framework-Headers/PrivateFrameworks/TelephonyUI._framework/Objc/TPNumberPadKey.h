//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface TPNumberPadKey : UIView
{
    UILabel *_digit;
    UILabel *_letters;
    UILabel *_secondaryLetters;
    NSLayoutConstraint *_digitBaseline;
    NSLayoutConstraint *_letterBaseline;
    NSLayoutConstraint *_secondaryLetterBaseline;
}

@property (readonly, nonatomic, getter=isAsterisk) BOOL asterisk;
@property (strong, nonatomic) UILabel *digit; // @synthesize digit=_digit;
@property (strong, nonatomic) NSLayoutConstraint *digitBaseline; // @synthesize digitBaseline=_digitBaseline;
@property (strong, nonatomic) NSLayoutConstraint *letterBaseline; // @synthesize letterBaseline=_letterBaseline;
@property (strong, nonatomic) UILabel *letters; // @synthesize letters=_letters;
@property (readonly, nonatomic, getter=isPound) BOOL pound;
@property (strong, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // @synthesize secondaryLetterBaseline=_secondaryLetterBaseline;
@property (strong, nonatomic) UILabel *secondaryLetters; // @synthesize secondaryLetters=_secondaryLetters;

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;
+ (void)initialize;
- (void).cxx_destruct;
- (void)doLayoutNow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)setFontStylesForHighlightState:(BOOL)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 shouldCenterDigit:(BOOL)arg4 fontColor:(BOOL)arg5 circleDiameter:(double)arg6;

@end


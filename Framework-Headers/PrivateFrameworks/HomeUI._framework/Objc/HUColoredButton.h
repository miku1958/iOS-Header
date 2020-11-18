//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface HUColoredButton : UIButton
{
    BOOL _backgroundColorFollowsTintColor;
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property (nonatomic) BOOL backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property (nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (void)tintColorDidChange;

@end


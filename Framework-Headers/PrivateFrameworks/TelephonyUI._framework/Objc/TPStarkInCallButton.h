//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, TPStarkInCallButtonRing, UIColor, UILabel;

@interface TPStarkInCallButton : UIButton
{
    BOOL _toggledOn;
    int _inCallButtonType;
    int _specialLayoutType;
    UILabel *_buttonLabel;
    NSLayoutConstraint *_horizontalPositioningConstraint;
    UIColor *_unhighlightedBackgroundColor;
    TPStarkInCallButtonRing *_ringView;
}

@property (strong) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property (strong) NSLayoutConstraint *horizontalPositioningConstraint; // @synthesize horizontalPositioningConstraint=_horizontalPositioningConstraint;
@property (readonly) int inCallButtonType; // @synthesize inCallButtonType=_inCallButtonType;
@property (strong) TPStarkInCallButtonRing *ringView; // @synthesize ringView=_ringView;
@property (nonatomic) int specialLayoutType; // @synthesize specialLayoutType=_specialLayoutType;
@property (nonatomic) BOOL toggledOn; // @synthesize toggledOn=_toggledOn;
@property (strong) UIColor *unhighlightedBackgroundColor; // @synthesize unhighlightedBackgroundColor=_unhighlightedBackgroundColor;

- (void).cxx_destruct;
- (id)initForButtonType:(int)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasRingView:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateToProperIconColor;

@end

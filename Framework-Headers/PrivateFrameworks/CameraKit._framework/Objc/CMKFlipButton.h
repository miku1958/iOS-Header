//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface CMKFlipButton : UIButton
{
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

+ (id)flipButton;
- (void)_commonCMKFlipButtonInitialization;
- (id)_flipImage;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end

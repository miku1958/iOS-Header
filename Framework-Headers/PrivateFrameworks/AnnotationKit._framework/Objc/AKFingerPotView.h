//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface AKFingerPotView : UIButton
{
    UIImageView *_selectedOutline;
    UIImageView *_highlight;
}

@property (strong, nonatomic) UIImageView *highlight; // @synthesize highlight=_highlight;
@property (strong, nonatomic) UIImage *menuImage;
@property (strong, nonatomic) UIImageView *selectedOutline; // @synthesize selectedOutline=_selectedOutline;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end


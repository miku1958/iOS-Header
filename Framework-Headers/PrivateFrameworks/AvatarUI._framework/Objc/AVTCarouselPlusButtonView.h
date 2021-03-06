//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVTUIEnvironment, UIButton;

@interface AVTCarouselPlusButtonView : UIView
{
    BOOL _highlighted;
    BOOL _allowHighlight;
    AVTUIEnvironment *_environment;
    UIButton *_button;
    struct CGSize _maxItemSize;
}

@property (nonatomic) BOOL allowHighlight; // @synthesize allowHighlight=_allowHighlight;
@property (readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (nonatomic) struct CGSize maxItemSize; // @synthesize maxItemSize=_maxItemSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 environment:(id)arg2;
- (void)layoutSubviews;

@end


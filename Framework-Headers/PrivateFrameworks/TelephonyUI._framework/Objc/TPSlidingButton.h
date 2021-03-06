//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelephonyUI/_UIActionSliderDelegate-Protocol.h>

@class NSString, UIButton, UIImageView, _UIActionSlider;
@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate>
{
    int _type;
    _UIActionSlider *_acceptButton;
    UIButton *_sideButtonRight;
    id<TPSlidingButtonDelegateProtocol> _delegate;
    UIImageView *_dialImageView;
}

@property (strong) _UIActionSlider *acceptButton; // @synthesize acceptButton=_acceptButton;
@property (readonly, copy) NSString *debugDescription;
@property id<TPSlidingButtonDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) UIImageView *dialImageView; // @synthesize dialImageView=_dialImageView;
@property (readonly) unsigned long long hash;
@property (strong) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property (readonly) Class superclass;
@property int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)dealloc;
- (id)initWithSlidingButtonType:(int)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end


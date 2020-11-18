//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDictationView.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIDimmingView;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>
{
    UIDimmingView *_dimmingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)endpointButtonPressed;
- (void)finishReturnToKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGPoint)positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (void)setInputViewsHiddenForDictation:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)show;

@end

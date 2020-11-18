//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/UIGestureRecognizerDelegate-Protocol.h>

@class CPSPanButton, NSString;
@protocol CPSPanViewDelegate;

@interface CPSPanView : UIView <UIGestureRecognizerDelegate>
{
    CPSPanButton *_panLeftButton;
    CPSPanButton *_panRightButton;
    CPSPanButton *_panUpButton;
    CPSPanButton *_panDownButton;
    id<CPSPanViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPSPanViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPSPanButton *panDownButton; // @synthesize panDownButton=_panDownButton;
@property (readonly, nonatomic) CPSPanButton *panLeftButton; // @synthesize panLeftButton=_panLeftButton;
@property (readonly, nonatomic) CPSPanButton *panRightButton; // @synthesize panRightButton=_panRightButton;
@property (readonly, nonatomic) CPSPanButton *panUpButton; // @synthesize panUpButton=_panUpButton;
@property (readonly, nonatomic) double sideButtonTopInset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;

@end


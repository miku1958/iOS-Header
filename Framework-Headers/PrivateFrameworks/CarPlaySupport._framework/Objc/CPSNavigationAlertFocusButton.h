//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSButton.h>

@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton
{
    CPSNavigationAlertProgressView *_altFocusProgressView;
}

@property (weak, nonatomic) CPSNavigationAlertProgressView *altFocusProgressView; // @synthesize altFocusProgressView=_altFocusProgressView;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end

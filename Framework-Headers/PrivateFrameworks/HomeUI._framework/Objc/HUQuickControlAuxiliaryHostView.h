//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView
{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;
}

@property (strong, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;

@end


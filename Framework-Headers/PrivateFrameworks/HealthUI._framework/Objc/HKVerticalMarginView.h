//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HKVerticalMarginDelegate;

@interface HKVerticalMarginView : UIView
{
    unsigned long long _offsetOptions;
    id<HKVerticalMarginDelegate> _marginDelegate;
    double _currentKeyboardHeight;
}

@property (nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property (strong, nonatomic) id<HKVerticalMarginDelegate> marginDelegate; // @synthesize marginDelegate=_marginDelegate;
@property (nonatomic) unsigned long long offsetOptions; // @synthesize offsetOptions=_offsetOptions;

- (void).cxx_destruct;
- (double)_bottomOffsetWithController:(id)arg1;
- (double)_findTabBarHeightWithController:(id)arg1;
- (id)_findViewController;
- (double)_topOffsetWithController:(id)arg1;
- (void)dealloc;
- (id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)layoutSubviews;

@end


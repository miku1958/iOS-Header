//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPrintMessageAndSpinnerView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    NSArray *_currentHorizontalConstraints;
}

@property (strong, nonatomic) NSArray *currentHorizontalConstraints; // @synthesize currentHorizontalConstraints=_currentHorizontalConstraints;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (strong, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property (nonatomic) BOOL spinnerHidden;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPerformActionLoadingView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

@property (readonly, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


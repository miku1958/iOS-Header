//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface LoadingLabel : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
- (id)init;
- (void)setHidden:(BOOL)arg1;
- (void)setText:(id)arg1 showingActivity:(BOOL)arg2;
- (void)sizeToFit;
- (id)text;

@end

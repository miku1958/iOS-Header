//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface CNFRegLoadingView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *message; // @dynamic message;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


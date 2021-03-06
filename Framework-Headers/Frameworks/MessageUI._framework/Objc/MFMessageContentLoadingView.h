//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface MFMessageContentLoadingView : UIView
{
    NSString *_loadingTitle;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_loadingLabel;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (nonatomic, getter=isLoadingIndicatorVisible) BOOL loadingIndicatorVisible;
@property (strong, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property (copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLoadingIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end


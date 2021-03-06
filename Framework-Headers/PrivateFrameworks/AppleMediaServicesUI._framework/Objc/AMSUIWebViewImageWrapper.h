//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface AMSUIWebViewImageWrapper : AMSUICommonView
{
    UIView *_view;
    double _inset;
}

@property (nonatomic) double inset; // @synthesize inset=_inset;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 topInset:(double)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end


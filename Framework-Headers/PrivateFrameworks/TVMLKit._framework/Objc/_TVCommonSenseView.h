//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _TVCommonSenseFooterView;

__attribute__((visibility("hidden")))
@interface _TVCommonSenseView : UIView
{
    UIView *_containerView;
    UIView *_headerView;
    NSArray *_infoViews;
    _TVCommonSenseFooterView *_footerView;
}

@property (strong, nonatomic) _TVCommonSenseFooterView *footerView; // @synthesize footerView=_footerView;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


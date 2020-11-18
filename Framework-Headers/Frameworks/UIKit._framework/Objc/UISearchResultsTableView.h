//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableView.h>

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView
{
    double _offsetForNoResultsMessage;
    UIView *_topShadowView;
    UISearchDisplayController *_controller;
}

@property (strong, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;
@property (weak, nonatomic) UISearchDisplayController *controller; // @synthesize controller=_controller;

- (void).cxx_destruct;
- (void)_numberOfRowsDidChange;
- (double)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end


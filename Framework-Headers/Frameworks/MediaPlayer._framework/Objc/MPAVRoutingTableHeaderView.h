//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel;

@interface MPAVRoutingTableHeaderView : UIView
{
    struct UIEdgeInsets _edgeInsets;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
- (void)_init;
- (id)_mirroringCompactDescription;
- (id)_mirroringCompactDescriptionTextAttributes;
- (id)_mirroringTitleTextAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSString, UIColor, UILabel;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView
{
    UILabel *_label;
    UIColor *_color;
    NSString *_debugText;
}

@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (copy, nonatomic) NSString *debugText; // @synthesize debugText=_debugText;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBackButtonContainerView : UIView
{
    CALayer *_edgeMask;
    CALayer *_fillMask;
    BOOL _isRTL;
    UIImage *_edgeMaskImage;
    double _backButtonLeadingMargin;
}

@property (nonatomic) double backButtonLeadingMargin; // @synthesize backButtonLeadingMargin=_backButtonLeadingMargin;
@property (strong, nonatomic) UIImage *edgeMaskImage; // @synthesize edgeMaskImage=_edgeMaskImage;
@property (nonatomic) BOOL isRTL; // @synthesize isRTL=_isRTL;
@property (nonatomic) BOOL maskEnabled;

- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMZoomFactorLabel : UIView
{
    BOOL _showZoomFactorSymbol;
    BOOL _useLeadingZero;
    double _zoomFactor;
    NSString *_contentSizeCategory;
    UILabel *__label;
}

@property (readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (nonatomic) BOOL showZoomFactorSymbol; // @synthesize showZoomFactorSymbol=_showZoomFactorSymbol;
@property (strong, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useLeadingZero; // @synthesize useLeadingZero=_useLeadingZero;
@property (nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;

- (void).cxx_destruct;
- (struct UIEdgeInsets)_labelInsets;
- (void)_updateFont;
- (void)_updateLabelText;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end


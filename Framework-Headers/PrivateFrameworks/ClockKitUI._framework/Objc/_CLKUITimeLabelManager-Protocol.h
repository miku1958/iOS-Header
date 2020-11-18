//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLKFont, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, UIColor, UIView;

@protocol _CLKUITimeLabelManager

@property (nonatomic) BOOL animationsPaused;
@property (readonly, nonatomic) struct CGSize intrinsicSize;
@property (readonly, nonatomic) struct UIEdgeInsets opticalInsets;
@property (nonatomic) BOOL showSeconds;
@property (strong, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIView *view;

- (double)_lastLineBaseline;
- (NSAttributedString *)effectiveAttributedText;
- (CLKFont *)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(void (^)(UILabel *, BOOL))arg1;
- (id)initWithTimeFormatter:(CLKTimeFormatter *)arg1 options:(unsigned long long)arg2 labelFactory:(UILabel * (^)(BOOL))arg3;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(CLKUITimeLabelStyle *)arg1;
- (struct CGSize)sizeThatFits;
- (void)sizeViewToFit;
- (void)updateTimeText;
@end

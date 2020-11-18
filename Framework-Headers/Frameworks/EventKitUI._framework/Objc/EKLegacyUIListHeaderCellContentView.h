//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView
{
    double _date;
    BOOL _indentsForDots;
    BOOL _showWeekNumber;
}

@property (nonatomic) double date;
@property (nonatomic) BOOL indentsForDots;
@property (nonatomic) BOOL showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;

- (id)_normalTextColor;
- (id)_normalTextShadowColor;
- (struct CGRect)_rectForOffetTextShadow:(struct CGRect)arg1;
- (id)_weekNumberFont;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect)arg4;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MusicHairlineView : UIView
{
    UIView *_lineView;
    UIColor *_lineColor;
    long long _verticalAlignment;
}

@property (strong, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property (nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;

@end


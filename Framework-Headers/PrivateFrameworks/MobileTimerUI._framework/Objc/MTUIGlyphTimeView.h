//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MTUIGlyphTimeView : UIView
{
    UILabel *_timeLabel;
    UIImageView *_glyphImageView;
    NSString *_glyphName;
    unsigned long long _style;
}

@property (strong, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property (strong, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (strong, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;

- (void).cxx_destruct;
- (id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4;
- (void)setComponentColor:(id)arg1;
- (void)setupConstraints;
- (void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3;
- (void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2;

@end

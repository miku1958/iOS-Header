//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SFCrossfadingLabel : UILabel
{
    double _fromHue;
    double _fromSaturation;
    double _fromBrightness;
    UIColor *_fromColor;
    long long _mode;
    double _progress;
}

@property (strong, nonatomic) UIColor *fromColor; // @synthesize fromColor=_fromColor;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (nonatomic) double progress; // @synthesize progress=_progress;

- (void).cxx_destruct;
- (void)_updateCrossfade;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _MPDownloadProgressRingView : UIView
{
    double _progress;
}

@property (nonatomic) double progress; // @synthesize progress=_progress;

+ (Class)layerClass;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end


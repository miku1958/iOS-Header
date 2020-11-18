//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface CAUITransportButton : UIButton
{
    int drawingStyle;
    struct CGColor *fillColor;
    struct CGRect imageRect;
}

@property int drawingStyle;
@property struct CGColor *fillColor;

+ (Class)layerClass;
- (void)flash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGPath *)newPathRefForStyle:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIColor.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor
{
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (void).cxx_destruct;
- (struct CGColor *)CGColor;
- (id)CIColor;
- (id)_rgbColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)getWhite:(double *)arg1 alpha:(double *)arg2;
- (unsigned long long)hash;
- (id)initWithCIColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end


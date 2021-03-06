//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>
{
    struct _psdGradientColor gradientColor;
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;
+ (void)initialize;
- (double)colorLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct _psdGradientColor)gradientColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;
- (BOOL)isColorStop;

@end


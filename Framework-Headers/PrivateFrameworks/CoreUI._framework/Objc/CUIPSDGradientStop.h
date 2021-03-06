//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>
{
    double location;
}

+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1;
- (BOOL)isColorStop;
- (BOOL)isDoubleStop;
- (BOOL)isOpacityStop;
- (double)location;
- (void)setLocation:(double)arg1;

@end


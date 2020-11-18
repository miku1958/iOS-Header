//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStroke.h>

@class TSDStrokePattern, TSUColor;

@interface TSDMutableStroke : TSDStroke
{
}

@property (nonatomic) double actualWidth; // @dynamic actualWidth;
@property (nonatomic) int cap; // @dynamic cap;
@property (strong, nonatomic) TSUColor *color; // @dynamic color;
@property (nonatomic) BOOL dontClearBackground; // @dynamic dontClearBackground;
@property (nonatomic) int join; // @dynamic join;
@property (nonatomic) double miterLimit; // @dynamic miterLimit;
@property (strong, nonatomic) TSDStrokePattern *pattern; // @dynamic pattern;
@property (nonatomic) double width; // @dynamic width;

+ (id)emptyStroke;
+ (id)stroke;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end


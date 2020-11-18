//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, CCVegaMark, NSArray, NSObject, NSString;
@protocol CCVegaColorOrGradientInterface, CCVegaMarkItemInterface;

@protocol CCVegaMarkItemInterface

@property (readonly) NSString *align;
@property (readonly) double angle;
@property (readonly) NSString *baseline;
@property (strong, nonatomic) CALayer *caLayer;
@property (readonly) BOOL clip;
@property (readonly) double cornerRadius;
@property (readonly) double dx;
@property (readonly) double dy;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *fill;
@property (readonly) double fillOpacity;
@property (readonly) NSString *font;
@property (readonly) double fontSize;
@property (readonly) NSString *fontStyle;
@property (readonly) NSString *fontWeight;
@property (readonly) double height;
@property (readonly) NSString *interpolate;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly) double opacity;
@property (readonly) NSString *orient;
@property (readonly) NSString *path;
@property (readonly) double radius;
@property (readonly) NSString *shape;
@property (readonly) double size;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *stroke;
@property (readonly) NSString *strokeCap;
@property (readonly) NSArray *strokeDash;
@property (readonly) NSString *strokeJoin;
@property (readonly) double strokeMiterLimit;
@property (readonly) double strokeOpacity;
@property (readonly) double strokeWidth;
@property (readonly) double theta;
@property (readonly) double width;
@property (readonly) double x;
@property (readonly) double x2;
@property (readonly) double y;
@property (readonly) double y2;
@property (readonly) double zindex;

- (struct CGRect)bounds;
- (BOOL)defined;
- (BOOL)getBoolean:(NSString *)arg1 defaultValue:(BOOL)arg2;
- (double)getDouble:(NSString *)arg1 defaultValue:(double)arg2;
- (NSObject *)getObject:(NSString *)arg1 defaultValue:(NSObject *)arg2;
- (NSString *)getString:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (NSObject *)getText;
- (BOOL)isEqual:(NSObject<CCVegaMarkItemInterface> *)arg1;
- (CCVegaMark *)itemAtIndex:(unsigned long long)arg1;
- (struct CGPath *)newPathByCallingShapeFunction;
@end

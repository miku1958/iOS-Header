//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/JSExport-Protocol.h>

@class TMLAffineTransform, TMLPoint, TMLRect, TMLSize;

@protocol TMLRectJSExports <JSExport>

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) TMLPoint *maxpoint;
@property (readonly, nonatomic) double maxx;
@property (readonly, nonatomic) double maxy;
@property (readonly, nonatomic) TMLPoint *midpoint;
@property (readonly, nonatomic) double midx;
@property (readonly, nonatomic) double midy;
@property (readonly, nonatomic) TMLPoint *minpoint;
@property (readonly, nonatomic) double minx;
@property (readonly, nonatomic) double miny;
@property (readonly, nonatomic) TMLPoint *origin;
@property (readonly, nonatomic) TMLSize *size;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;

- (TMLRect *)applyAffineTransform:(TMLAffineTransform *)arg1;
- (TMLRect *)applyScale:(double)arg1;
- (TMLRect *)atOrigin:(TMLPoint *)arg1;
- (TMLRect *)atOriginX:(double)arg1 y:(double)arg2;
- (TMLRect *)inset:(double)arg1:(double)arg2;
- (TMLRect *)integral;
- (TMLRect *)max:(double)arg1:(double)arg2;
- (TMLRect *)min:(double)arg1:(double)arg2;
- (TMLRect *)offset:(double)arg1:(double)arg2;
- (TMLRect *)originInset:(double)arg1:(double)arg2;
- (TMLRect *)withHeight:(double)arg1;
- (TMLRect *)withWidth:(double)arg1;
@end


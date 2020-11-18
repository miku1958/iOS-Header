//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXPath : NSObject
{
    struct CGPath *_CGPath;
    NSMutableArray *_points;
}

@property (strong) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
@property (strong, nonatomic) NSMutableArray *points; // @synthesize points=_points;

+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
+ (id)pathWithRect:(struct CGRect)arg1;
+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void).cxx_destruct;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (struct CGRect)boundingRect;
- (void)closeSubpath;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4;

@end

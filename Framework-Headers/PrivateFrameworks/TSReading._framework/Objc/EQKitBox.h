//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface EQKitBox : NSObject <NSCopying>
{
}

@property (readonly, nonatomic) struct CGColor *color;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double layoutDepth;
@property (readonly, nonatomic) double layoutHeight;
@property (readonly, nonatomic) double layoutVSize;
@property (readonly, nonatomic) double opticalAlignWidth;
@property (readonly, nonatomic) double vsize;
@property (readonly, nonatomic) double width;

- (BOOL)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGRect)erasableBounds;
- (BOOL)isEqual:(id)arg1;
- (BOOL)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformFromDescendant:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitBox.h>

@interface EQKitVSpace : EQKitBox
{
    double mHeight;
    double mDepth;
}

@property (readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property (readonly, nonatomic) double height; // @synthesize height=mHeight;
@property (readonly, nonatomic) double layoutDepth;
@property (readonly, nonatomic) double layoutHeight;

- (BOOL)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end


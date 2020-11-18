//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@class NSAttributedString;

@interface EQKitStringBox : EQKitBox
{
    NSAttributedString *mAttributedString;
    struct __CTLine *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect mErasableBounds;
    BOOL mDimensionsValid;
    struct CGColor *mCGColor;
}

@property (readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=mAttributedString;
@property (readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct __CTLine *line;
@property (readonly, nonatomic) double width;

- (BOOL)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect)erasableBounds;
- (id)init;
- (id)initWithAttributedString:(id)arg1 cgColor:(struct CGColor *)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;

@end


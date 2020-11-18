//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSWPListLabelGeometry : NSObject
{
    double mScale;
    double mBaselineOffset;
    BOOL mScaleWithText;
}

@property (nonatomic) double baselineOffset; // @synthesize baselineOffset=mBaselineOffset;
@property (nonatomic) double scale; // @synthesize scale=mScale;
@property (nonatomic) BOOL scaleWithText; // @synthesize scaleWithText=mScaleWithText;

+ (id)listLabelGeometry;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds *_orientedBounds;
    unsigned long long _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect)canonicalBounds;
- (void).cxx_destruct;
- (struct CGAffineTransform)affineTransform;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (BOOL)isOffice12;
- (float)maxAdjustedValue;
- (void)setAdjustValues:(id)arg1;
- (void)setFileFormat:(unsigned long long)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setShapeType:(int)arg1;

@end


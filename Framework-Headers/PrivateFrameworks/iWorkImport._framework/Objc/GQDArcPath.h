//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDArcPath : GQDPath
{
    struct CGSize mSize;
    double mHeadAngle;
    double mArcWidth;
    double mArrowWidth;
    double mArrowLength;
}

- (double)arcWidth;
- (double)arrowLength;
- (double)arrowWidth;
- (struct CGPath *)createBezierPath;
- (double)headAngle;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (struct CGSize)size;

@end


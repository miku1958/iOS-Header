//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIImageUtilities : NSObject
{
}

+ (id)detectedFacesInImage:(id)arg1 suggestedCropRect:(struct CGRect *)arg2;
+ (struct CGRect)scaleRect:(struct CGRect)arg1 byFactor:(double)arg2 withinContainingRect:(struct CGRect)arg3;
+ (struct CGRect)suggestedCropRectForFaces:(id)arg1 inImage:(id)arg2;

@end

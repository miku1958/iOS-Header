//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUBrushRasterizer : NSObject
{
}

+ (long long)_rasterizeBrushStroke:(id)arg1 toROI:(CDStruct_996ac03c)arg2 maskPtr:(char *)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7;
+ (void)rasterizeBrushStroke:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3;
+ (long long)rasterizeBrushStroke:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3 close:(BOOL)arg4 startIndex:(long long)arg5;

@end


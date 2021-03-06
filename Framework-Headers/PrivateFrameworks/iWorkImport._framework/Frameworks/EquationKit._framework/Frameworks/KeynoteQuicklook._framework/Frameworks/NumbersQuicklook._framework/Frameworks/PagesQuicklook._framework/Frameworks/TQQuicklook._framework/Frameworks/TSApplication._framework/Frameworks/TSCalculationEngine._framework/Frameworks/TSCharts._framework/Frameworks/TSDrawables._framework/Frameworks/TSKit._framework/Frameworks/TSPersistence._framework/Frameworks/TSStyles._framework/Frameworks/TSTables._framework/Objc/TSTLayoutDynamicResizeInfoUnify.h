//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/TSTLayoutDynamicResizeInfo.h>

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo
{
    double mTargetWidth;
    double mTargetHeight;
}

@property (readonly, nonatomic) double targetHeight; // @synthesize targetHeight=mTargetHeight;
@property (readonly, nonatomic) double targetWidth; // @synthesize targetWidth=mTargetWidth;

- (BOOL)applyFixedHeight:(double)arg1;
- (BOOL)applyFixedWidth:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (BOOL)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(long long)arg3 count:(unsigned int)arg4 currentArray:(double *)arg5 minimumArray:(double *)arg6;
- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned int)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;

@end


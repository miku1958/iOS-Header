//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel
{
}

+ (CDStruct_996ac03c)ROIForCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
+ (void)convertFixed16:(const unsigned short *)arg1 toFloat:(float *)arg2 count:(unsigned long long)arg3;
+ (void)convertFloat:(const float *)arg1 toFixed16:(unsigned short *)arg2 count:(unsigned long long)arg3;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;

@end


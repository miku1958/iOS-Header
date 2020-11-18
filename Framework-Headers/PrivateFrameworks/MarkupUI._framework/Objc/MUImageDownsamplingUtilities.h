//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MUImageDownsamplingUtilities : NSObject
{
}

+ (id)_flattenEXIFOrientation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceContent:(id)arg3 withUTI:(id)arg4;
+ (BOOL)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2;
+ (double)_maxDimensionOfSize:(struct CGSize)arg1 fittingToArea:(double)arg2;
+ (struct CGImageSource *)_newImageSourceWithSourceContent:(id)arg1;
+ (id)_preferredFileDisplayNameForSourceContent:(id)arg1;
+ (id)_preferredFileExtensionForContentType:(id)arg1;
+ (void)_shouldFlattenEXIFOrientation:(BOOL *)arg1 andDownsample:(BOOL *)arg2 sourceContent:(id)arg3;
+ (struct CGSize)_sizeFittingArea:(double)arg1 withSize:(struct CGSize)arg2;
+ (id)_sourceContentType:(id)arg1;
+ (id)_uniqueTemporaryDirectory;

@end


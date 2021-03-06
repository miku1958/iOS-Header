//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPDFUtilities : NSObject
{
}

+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary *)arg1;
+ (id)createPDFDateString:(id)arg1;
+ (long long)exifOrientationOfPage:(struct CGPDFPage *)arg1;
+ (struct CGAffineTransform)flattenRotationTransformForPage:(struct CGPDFPage *)arg1 outMediaBox:(struct CGRect *)arg2 outCropBox:(struct CGRect *)arg3;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary *)arg1 inArray:(struct CGPDFArray *)arg2;
+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage *)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCIMAssetFormats : NSObject
{
}

+ (struct CGRect)centeredRectForSourceSize:(struct CGSize)arg1 destinationSize:(struct CGSize)arg2;
+ (BOOL)formatSizeIsShortSide:(long long)arg1;
+ (long long)masterThumbnailFormat;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg1 format:(long long)arg2 capLength:(BOOL)arg3;
+ (struct CGSize)sizeForFormat:(long long)arg1;
+ (long long)wildcatStackFormat;

@end


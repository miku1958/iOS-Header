//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    NSString *mLocalizationKey;
    NSString *mName;
}

@property (readonly, nonatomic, getter=isClosed) BOOL closed;
@property BOOL hasHorizontalFlip; // @synthesize hasHorizontalFlip=mHorizontalFlip;
@property BOOL hasVerticalFlip; // @synthesize hasVerticalFlip=mVerticalFlip;
@property (copy, nonatomic) NSString *localizationKey; // @synthesize localizationKey=mLocalizationKey;
@property (copy, nonatomic) NSString *userDefinedName; // @synthesize userDefinedName=mName;

+ (id)pathSourceForShapeType:(long long)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive *)arg1;
- (void).cxx_destruct;
- (id)bezierPath;
- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (id)interiorWrapPath;
- (id)interiorWrapPathForInset:(double)arg1 joinStyle:(unsigned long long)arg2;
- (BOOL)isCircular;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRectangular;
- (BOOL)isRectangularForever;
- (void)loadSharedFromArchive:(const struct PathSourceArchive *)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)pathFlipTransform;
- (Class)preferredControllerClass;
- (void)saveSharedToArchive:(struct PathSourceArchive *)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end

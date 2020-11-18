//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing>
{
    double mExposure;
    double mSaturation;
    double mContrast;
    double mHighlights;
    double mShadows;
    double mSharpness;
    double mDenoise;
    double mTemperature;
    double mTint;
    double mBottomLevel;
    double mTopLevel;
    double mGamma;
    BOOL mEnhance;
    BOOL mRepresentsSageAdjustments;
}

@property (readonly, nonatomic) double bottomLevel;
@property (readonly, nonatomic) double contrast;
@property (readonly, nonatomic) double denoise;
@property (readonly, nonatomic) BOOL enhance;
@property (readonly, nonatomic) double exposure;
@property (readonly, nonatomic) double gamma;
@property (readonly, nonatomic) double highlights;
@property (readonly, nonatomic) BOOL representsSageAdjustments;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double shadows;
@property (readonly, nonatomic) double sharpness;
@property (readonly, nonatomic) double temperature;
@property (readonly, nonatomic) double tint;
@property (readonly, nonatomic) double topLevel;

+ (BOOL)canMixWithNilObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (void)i_initFromDefaultArchive;
- (id)imageAdjustmentsWithoutEnhance;
- (id)init;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct ImageAdjustmentsArchive *)arg1 archiver:(id)arg2;

@end


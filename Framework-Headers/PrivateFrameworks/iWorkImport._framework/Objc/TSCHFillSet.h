//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, TSUImage;

__attribute__((visibility("hidden")))
@interface TSCHFillSet : NSObject
{
    NSString *mIdentifier;
    NSString *mPListPath;
    NSDictionary *mPListProperties;
    TSUImage *mSwatchImage;
    NSMutableArray *mSeriesSwatchImages;
    struct CGRect *mSeriesSwatchImageRects;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
@property (readonly, nonatomic) NSString *lookupString;
@property (readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=mPListPath;

+ (struct CGSize)defaultSwatchSize;
- (void).cxx_destruct;
- (BOOL)chartAlreadyMatches:(id)arg1;
- (id)colorFromProperties:(id)arg1;
- (id)commandToApplyToChart:(id)arg1 context:(id)arg2;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (void)dealloc;
- (id)fillForPreviewForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (id)fillFromSageProperties:(id)arg1;
- (id)fillsForDefaultSeriesType;
- (id)fillsForSeriesType:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 plistPath:(id)arg2;
- (void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)arg1 swatchSize:(struct CGSize)arg2;
- (id)p_propertyMapsToApplyToChart:(id)arg1 context:(id)arg2;
- (id)p_sagePropertiesForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)p_sagePropertiesForSeriesType:(id)arg1;
- (id)p_tangierToSageProperties;
- (id)plistProperties;
- (void)primeSwatchImageCache;
- (id)propertyMutationTuplesForPreviewOnChart:(id)arg1;
- (id)seriesStylesForSeriesTypes:(id)arg1 context:(id)arg2;
- (id)seriesSwatchImageWithSwatchSize:(struct CGSize)arg1 seriesIndex:(unsigned long long)arg2;
- (id)styleSwapCommandToApplyToChart:(id)arg1 context:(id)arg2;
- (id)swatchFills;
- (id)swatchImageWithSize:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHPropertyValueStorageContainer : NSObject
{
    id<TSCHStyleActAlike> mChartStyle;
    id<TSCHStyleActAlike> mChartNonStyle;
    id<TSCHStyleActAlike> mLegendStyle;
    id<TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mSeriesThemeStyles;
    NSMutableArray *mSeriesPrivateStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    id<TSCHStyleActAlike> mReferenceLineThemeStyle;
    NSMutableDictionary *mReferenceLineStyles;
    NSMutableDictionary *mReferenceLineNonStyles;
}

@property (copy, nonatomic, setter=p_setCategoryAxisNonStyles:) NSArray *p_categoryAxisNonStyles;
@property (copy, nonatomic, setter=p_setCategoryAxisStyles:) NSArray *p_categoryAxisStyles;
@property (strong, nonatomic, setter=p_setChartNonStyle:) id<TSCHStyleActAlike> p_chartNonStyle; // @synthesize p_chartNonStyle=mChartNonStyle;
@property (strong, nonatomic, setter=p_setChartStyle:) id<TSCHStyleActAlike> p_chartStyle; // @synthesize p_chartStyle=mChartStyle;
@property (strong, nonatomic, setter=p_setLegendNonStyle:) id<TSCHStyleActAlike> p_legendNonStyle; // @synthesize p_legendNonStyle=mLegendNonStyle;
@property (strong, nonatomic, setter=p_setLegendStyle:) id<TSCHStyleActAlike> p_legendStyle; // @synthesize p_legendStyle=mLegendStyle;
@property (strong, nonatomic, setter=p_setMutableCategoryAxisNonStyles:) NSMutableArray *p_mutableCategoryAxisNonStyles; // @synthesize p_mutableCategoryAxisNonStyles=mCategoryAxisNonStyles;
@property (strong, nonatomic, setter=p_setMutableCategoryAxisStyles:) NSMutableArray *p_mutableCategoryAxisStyles; // @synthesize p_mutableCategoryAxisStyles=mCategoryAxisStyles;
@property (strong, nonatomic, setter=p_setMutableParagraphStyles:) NSMutableArray *p_mutableParagraphStyles; // @synthesize p_mutableParagraphStyles=mParagraphStyles;
@property (strong, nonatomic, setter=p_setMutableRefLineNonStyles:) NSMutableDictionary *p_mutableRefLineNonStyles; // @synthesize p_mutableRefLineNonStyles=mReferenceLineNonStyles;
@property (strong, nonatomic, setter=p_setMutableRefLineStyles:) NSMutableDictionary *p_mutableRefLineStyles; // @synthesize p_mutableRefLineStyles=mReferenceLineStyles;
@property (strong, nonatomic, setter=p_setMutableSeriesNonStyles:) NSMutableArray *p_mutableSeriesNonStyles; // @synthesize p_mutableSeriesNonStyles=mSeriesNonStyles;
@property (strong, nonatomic, setter=p_setMutableSeriesPrivateStyles:) NSMutableArray *p_mutableSeriesPrivateStyles; // @synthesize p_mutableSeriesPrivateStyles=mSeriesPrivateStyles;
@property (strong, nonatomic, setter=p_setMutableSeriesThemeStyles:) NSMutableArray *p_mutableSeriesThemeStyles; // @synthesize p_mutableSeriesThemeStyles=mSeriesThemeStyles;
@property (strong, nonatomic, setter=p_setMutableValueAxisNonStyles:) NSMutableArray *p_mutableValueAxisNonStyles; // @synthesize p_mutableValueAxisNonStyles=mValueAxisNonStyles;
@property (strong, nonatomic, setter=p_setMutableValueAxisStyles:) NSMutableArray *p_mutableValueAxisStyles; // @synthesize p_mutableValueAxisStyles=mValueAxisStyles;
@property (copy, nonatomic, setter=p_setParagraphStyles:) NSArray *p_paragraphStyles;
@property (copy, nonatomic, setter=p_setReferenceLineNonStyles:) NSDictionary *p_referenceLineNonStyles;
@property (copy, nonatomic, setter=p_setReferenceLineStyles:) NSDictionary *p_referenceLineStyles;
@property (strong, nonatomic, setter=p_setReferenceLineThemeStyle:) id<TSCHStyleActAlike> p_referenceLineThemeStyle; // @synthesize p_referenceLineThemeStyle=mReferenceLineThemeStyle;
@property (copy, nonatomic, setter=p_setSeriesNonStyles:) NSArray *p_seriesNonStyles;
@property (copy, nonatomic, setter=p_setSeriesPrivateStyles:) NSArray *p_seriesPrivateStyles;
@property (copy, nonatomic, setter=p_setSeriesThemeStyles:) NSArray *p_seriesThemeStyles;
@property (copy, nonatomic, setter=p_setValueAxisNonStyles:) NSArray *p_valueAxisNonStyles;
@property (copy, nonatomic, setter=p_setValueAxisStyles:) NSArray *p_valueAxisStyles;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PropertyValueStorageContainerArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct PropertyValueStorageContainerArchive *)arg1 archiver:(id)arg2;

@end


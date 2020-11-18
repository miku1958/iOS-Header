//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject
{
    struct TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
    TSCH3DVector *_containingViewportVector;
}

@property (readonly, nonatomic) tvec2_84d5962d chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (readonly, nonatomic) struct CGSize chartBodyLayoutSize;
@property (readonly, nonatomic) tvec2_3b141483 containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector; // @synthesize containingViewportVector=_containingViewportVector;
@property (readonly, nonatomic) BOOL forcedValid;
@property (readonly, nonatomic) tvec4_ac57c72d infoChartScale;
@property (readonly, nonatomic) CDStruct_b1c75024 layoutSettings;
@property (readonly, nonatomic) struct CGSize layoutSize;
@property (readonly, nonatomic) tvec2_3b141483 modelSize;
@property (readonly, nonatomic) struct CGSize requestChartBodyLayoutSize;
@property (readonly, nonatomic) struct CGSize requestLayoutSize;

+ (id)cacheWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues *)arg1;
- (id).cxx_construct;
- (id)init;
- (id)initWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues *)arg1;
- (void)printDebug;
- (const struct TSCH3DChartSceneAreaLayoutItemCacheValues *)values;

@end


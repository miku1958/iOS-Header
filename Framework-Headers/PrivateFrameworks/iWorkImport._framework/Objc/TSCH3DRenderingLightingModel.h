//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, TSCH3DLightingModel;

__attribute__((visibility("hidden")))
@interface TSCH3DRenderingLightingModel : NSObject
{
    TSCH3DLightingModel *mLightingModel;
    NSNumber *mPercentage;
    BOOL mHasTransparency;
}

@property (readonly, nonatomic) BOOL hasTransparency; // @synthesize hasTransparency=mHasTransparency;
@property (readonly, nonatomic) TSCH3DLightingModel *lightingModel; // @synthesize lightingModel=mLightingModel;

+ (id)p_lightingModelFromFill:(id)arg1 lightings:(id)arg2 returningTransparency:(BOOL *)arg3;
+ (id)renderingLightingModelWithFill:(id)arg1 lightings:(id)arg2;
+ (id)renderingLightingModelWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)dealloc;
- (id)initWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;

@end


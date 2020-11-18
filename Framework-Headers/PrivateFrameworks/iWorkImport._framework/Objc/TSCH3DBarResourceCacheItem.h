//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DBarExtrusionGeometry, TSCH3DBarNormalResource, TSCH3DBarTexCoordResource, TSCH3DBarVertexResource;

__attribute__((visibility("hidden")))
@interface TSCH3DBarResourceCacheItem : NSObject
{
    TSCH3DBarExtrusionGeometry *mBarGeometry;
    TSCH3DBarVertexResource *mVertexResource;
    TSCH3DBarNormalResource *mNormalResource;
    TSCH3DBarTexCoordResource *mTexCoordResource;
}

@property (readonly, nonatomic) TSCH3DBarNormalResource *normalResource; // @synthesize normalResource=mNormalResource;
@property (readonly, nonatomic) TSCH3DBarTexCoordResource *texCoordResource; // @synthesize texCoordResource=mTexCoordResource;
@property (readonly, nonatomic) TSCH3DBarVertexResource *vertexResource; // @synthesize vertexResource=mVertexResource;

+ (id)itemWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;
- (void)dealloc;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

@end

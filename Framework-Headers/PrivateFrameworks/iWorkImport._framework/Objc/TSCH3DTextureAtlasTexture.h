//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

__attribute__((visibility("hidden")))
@interface TSCH3DTextureAtlasTexture : NSObject
{
    tvec2_3b141483 mSize;
    float mSamples;
    NSMutableArray *mLabels;
    vector_522a5b3a mPositions;
    long long mCurrentxpos;
    long long mCurrentypos;
    long long mCurrentheight;
    TSCH3DTextureAtlasTextureResource *mResource;
}

@property (readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (tvec2_3b141483)addLabel:(id)arg1;
- (void)dealloc;
- (id)getTextureDataBuffer;
- (id)initWithSize:(tvec2_3b141483)arg1;
- (void)p_invalidateResource;
- (id)resource;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class TSCH3DResource, TSCH3DTextureResource;

@interface TSCH3DTexture : NSObject <NSCopying>
{
    TSCH3DTextureResource *mTextureResource;
}

@property (readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;

- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (BOOL)hasCompleteData;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (void)resetResource;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTexture.h>

@class TSDFill;

__attribute__((visibility("hidden")))
@interface TSCH3DTSDFillTexture : TSCH3DTexture
{
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)arg1;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (BOOL)hasCompleteData;
- (unsigned long long)hash;
- (id)initWithTSDFill:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSCH3DDataBuffer, TSCH3DDocumentDataCache;

@protocol TSCH3DOptimizedTextureResource
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(TSCH3DDocumentDataCache *)arg1;
- (TSCH3DDataBuffer *)databufferForDataCache:(TSCH3DDocumentDataCache *)arg1;
- (TSCH3DDataBuffer *)optimizedMipmapBuffer;
- (TSCH3DDataBuffer *)representativeColorBuffer;
@end


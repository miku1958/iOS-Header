//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture *mParent;
    TSPData *mData;
}

@property (strong, nonatomic) TSPData *data; // @synthesize data=mData;

+ (id)dataWithTSPImageData:(id)arg1;
- (BOOL)canLoadCachedDataForDataCache:(id)arg1;
- (void)clearParent;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (BOOL)hasCompleteData;
- (id)initWithTSPImageData:(id)arg1;
- (struct CGImage *)newCGImage;
- (id)p_decodeCachedData:(id)arg1 imageSize:(tvec4_f99fd489 *)arg2;
- (id)p_encodeImageSize:(tvec4_f99fd489 *)arg1 andMipmapData:(id)arg2;
- (id)p_generateMipmapsBuffer;
- (void)setParent:(id)arg1;
- (id)uniqueFilename;

@end

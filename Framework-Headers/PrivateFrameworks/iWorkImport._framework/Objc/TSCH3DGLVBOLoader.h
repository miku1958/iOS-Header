//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceLoader.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader
{
    unsigned int mType;
}

+ (id)loaderWithType:(unsigned int)arg1;
- (BOOL)activateResource:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void *)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadSingleValueInBuffer:(id)arg1;
- (void)setClientState:(const struct DataBufferInfo *)arg1;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (unsigned int)usageOfResource:(id)arg1;

@end


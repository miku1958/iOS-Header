//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNBlurSignature : NSObject
{
    void *_signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void)dealloc;
- (void *)getSignatureData;
- (id)initWithSignatureData:(void *)arg1;
- (void)setSignatureData:(void *)arg1;

@end


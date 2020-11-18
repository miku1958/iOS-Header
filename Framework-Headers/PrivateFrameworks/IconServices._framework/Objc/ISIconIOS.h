//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class LSResourceProxy;

__attribute__((visibility("hidden")))
@interface ISIconIOS : ISIcon
{
    LSResourceProxy *_resourceProxy;
}

@property (strong) LSResourceProxy *resourceProxy; // @synthesize resourceProxy=_resourceProxy;

+ (id)backgroundQueue;
- (void).cxx_destruct;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (double)_aspectRatio;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (BOOL)_shouldInvalidate;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithResourceProxy:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIcon:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (int)variantForSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3;

@end


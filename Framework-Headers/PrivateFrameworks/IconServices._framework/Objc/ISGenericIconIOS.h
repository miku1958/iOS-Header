//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class ISImageCache;

__attribute__((visibility("hidden")))
@interface ISGenericIconIOS : ISIcon
{
    ISImageCache *_imageCache;
}

@property (strong) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;

- (void).cxx_destruct;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (id)_init;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForImageDescriptor:(id)arg1;
- (id)prepareImageForDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;

@end


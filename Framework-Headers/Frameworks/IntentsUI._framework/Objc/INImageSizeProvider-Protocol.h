//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INImage;

@protocol INImageSizeProvider <NSObject>
+ (INImage *)downscaledPNGImageForImage:(INImage *)arg1 size:(CDStruct_c3b9c2ee)arg2 error:(id *)arg3;
+ (CDStruct_c3b9c2ee)imageSizeForImage:(INImage *)arg1;
@end


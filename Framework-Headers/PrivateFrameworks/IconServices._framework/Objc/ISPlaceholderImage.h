//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISImage.h>

__attribute__((visibility("hidden")))
@interface ISPlaceholderImage : ISImage
{
    ISImage *_image;
}

@property (readonly) ISImage *image; // @synthesize image=_image;

- (void).cxx_destruct;
- (struct CGImage *)cgImage;
- (id)initWithImage:(id)arg1;
- (struct CGSize)minimumSize;
- (BOOL)placeholder;
- (double)scale;
- (struct CGSize)size;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer
{
}

@property (readonly, nonatomic, getter=isImagePlaceholderAvailable) BOOL imagePlaceholderAvailable;

- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageForImage:(id)arg1;
- (id)imagePlaceholderForColor:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

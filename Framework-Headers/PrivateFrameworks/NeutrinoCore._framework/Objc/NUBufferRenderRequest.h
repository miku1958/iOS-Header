//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageRenderRequest.h>

@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest
{
}

@property id<NUMutableBufferImage> targetBufferImage;

- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;

@end


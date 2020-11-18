//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MTLResource-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>

@property (readonly) unsigned long long length;

- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (void *)contents;
- (void)didModifyRange:(struct _NSRange)arg1;
- (id<MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)removeAllDebugMarkers;
@end

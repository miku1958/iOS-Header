//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributeMediator : NSObject
{
    struct OpaqueVTPixelBufferAttributesMediator *_mediator;
}

- (void)dealloc;
- (id)init;
- (id)mediatedPixelBufferAttributes;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;
- (void)setLayersAreSuppressed:(BOOL)arg1;
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebuffer : NSObject
{
    struct FramebufferAttributes mFramebufferAttributes;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (id).cxx_construct;
- (const struct FramebufferAttributes *)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

@end


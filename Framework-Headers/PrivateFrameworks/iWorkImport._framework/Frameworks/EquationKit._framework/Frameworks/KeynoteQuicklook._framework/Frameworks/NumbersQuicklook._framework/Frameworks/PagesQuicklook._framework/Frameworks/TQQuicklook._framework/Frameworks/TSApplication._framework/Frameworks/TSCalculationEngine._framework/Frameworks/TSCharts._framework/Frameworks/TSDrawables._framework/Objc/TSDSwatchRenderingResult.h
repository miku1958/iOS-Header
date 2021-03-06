//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDSwatchRenderingResult : NSObject
{
    struct CGImage *foreground;
    struct CGImage *background;
}

@property (readonly, nonatomic) struct CGImage *background; // @synthesize background;
@property (readonly, nonatomic) struct CGImage *foreground; // @synthesize foreground;

+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;
- (void)dealloc;

@end


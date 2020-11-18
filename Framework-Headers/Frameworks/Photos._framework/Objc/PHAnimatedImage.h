//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject
{
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    double _duration;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    ISAnimatedImage *_is_animatedImage;
}

@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property (readonly, nonatomic) ISAnimatedImage *is_animatedImage; // @synthesize is_animatedImage=_is_animatedImage;
@property (readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property (readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;

+ (void)cancelAnimatedImageRequest:(long long)arg1;
+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3;

@end

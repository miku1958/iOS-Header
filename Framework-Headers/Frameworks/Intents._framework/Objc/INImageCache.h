//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCache.h>

@interface INImageCache : INCache
{
}

+ (id)sharedCache;
- (void)addImage:(id)arg1;
- (id)consumeImageForIdentifier:(id)arg1;
- (void)flush;
- (id)imageForIdentifier:(id)arg1;
- (void)removeImage:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceStorage : NSObject
{
    NSMutableDictionary *_backgroundImages;
}

+ (long long)typicalBarPosition;
- (void).cxx_destruct;
- (id)allBackgroundImages;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (BOOL)hasAnyCustomBackgroundImage;
- (void)setAllBackgroundImages:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;

@end


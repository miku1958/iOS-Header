//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPencilPreferences : NSObject
{
    long long _cachedPreferredTapAction;
}

+ (long long)preferredTapAction;
+ (id)sharedPreferences;
- (long long)_preferredTapAction;
- (void)_preferredTapActionDidChange;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WK_RTCUIApplicationStatusObserver : NSObject
{
    BOOL _isActive;
}

+ (void)prepareForUse;
+ (id)sharedInstance;
- (id)init;
- (BOOL)isApplicationActive;
- (void)setActive;
- (void)setInactive;

@end


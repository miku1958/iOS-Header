//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BrightnessSystem : NSObject
{
    BOOL _initializationComplete;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isAlsSupported;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSUserDefaults : NSObject
{
    id _kvo_;
    struct __CFString *_identifier_;
    struct __CFString *_container_;
    void *_reserved[2];
}

- (struct __CFString *)_container;
- (struct __CFString *)_identifier;
- (BOOL)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL *)arg1;
- (void)_setIdentifier:(struct __CFString *)arg1;

@end


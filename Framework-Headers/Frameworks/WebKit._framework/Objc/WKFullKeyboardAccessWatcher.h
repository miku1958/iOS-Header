//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKFullKeyboardAccessWatcher : NSObject
{
    BOOL fullKeyboardAccessEnabled;
}

+ (BOOL)fullKeyboardAccessEnabled;
- (id)init;
- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)arg1;

@end

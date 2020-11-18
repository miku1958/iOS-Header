//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SGPreferenceManager : NSObject
{
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)init;
- (void)registerBlock:(CDUnknownBlockType)arg1;

@end


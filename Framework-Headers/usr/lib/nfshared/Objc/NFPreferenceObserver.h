//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFPreferenceObserver : NSObject
{
    CDUnknownBlockType _callback;
}

@property (copy) CDUnknownBlockType callback; // @synthesize callback=_callback;

- (void)dealloc;
- (void)handlePreferencesChanged;
- (void)handleProfilesChanged;
- (void)start;
- (void)stop;
- (void)updateDiagnosticLogging;

@end


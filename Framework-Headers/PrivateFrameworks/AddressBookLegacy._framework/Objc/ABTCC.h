//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABTCC : NSObject
{
    BOOL _calledExternalChangeCallbacks;
    long long _simulateType;
    BOOL _simulateAccessPrompt;
    BOOL _simulateAccessPromptGranted;
    unsigned int _simulateAccessPromptDelay;
}

+ (id)sharedInstance;
- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)callExternalChangeCallbacks:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (unsigned char)isAccessRestricted;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(unsigned int)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface VOSVoiceOverCommandHelp : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_isRTLCheckRequiredForCommand:(id)arg1 helpType:(long long)arg2;
- (id)_locKeyForCommand:(id)arg1 isRTL:(BOOL)arg2;
- (id)_locKeyForGesture:(id)arg1 isRTL:(BOOL)arg2;
- (id)_locKeyForHandwriting:(id)arg1 isRTL:(BOOL)arg2;
- (id)helpSections;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2 rtlCheck:(CDUnknownBlockType)arg3;
- (id)helpTextForLocKey:(id)arg1;
- (id)init;

@end

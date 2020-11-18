//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject
{
    NSUserDefaults *_textInputDefaults;
    BOOL _textInputEnabled;
    BOOL _HTTForTextInputEnabled;
    BOOL _siriMiniIsEnabled;
    BOOL _streamingDictationIsEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updatePreferences;
- (void)dealloc;
- (id)init;
- (BOOL)isHTTForTextInputEnabled;
- (BOOL)isSiriMiniEnabled;
- (BOOL)isStreamingDictationEnabled;
- (BOOL)isTextInputEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end


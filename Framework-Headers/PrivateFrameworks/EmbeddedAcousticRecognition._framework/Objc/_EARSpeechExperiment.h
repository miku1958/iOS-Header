//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer, _EARUserProfile;

@interface _EARSpeechExperiment : NSObject
{
    _EARSpeechRecognizer *_recognizer;
    _EARUserProfile *_userProfile;
}

- (void).cxx_destruct;
- (void)evaluateScript:(id)arg1 archiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)evaluateScript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRecognizer:(id)arg1 userProfile:(id)arg2;

@end


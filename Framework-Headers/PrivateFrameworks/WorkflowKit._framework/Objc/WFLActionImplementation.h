//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INVoiceCommandDeviceInformation, NSArray, NSProgress, WFLAction;
@protocol WFLActionUserInterface;

@interface WFLActionImplementation : NSObject
{
    WFLAction *_action;
    NSArray *_input;
    id<WFLActionUserInterface> _userInterface;
    NSProgress *_progress;
    NSArray *_output;
    long long _executionContext;
    CDUnknownBlockType _completionHandler;
    INVoiceCommandDeviceInformation *_originDeviceInformation;
}

@property (readonly, nonatomic) WFLAction *action; // @synthesize action=_action;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property (readonly, nonatomic) NSArray *input; // @synthesize input=_input;
@property (strong, nonatomic) INVoiceCommandDeviceInformation *originDeviceInformation; // @synthesize originDeviceInformation=_originDeviceInformation;
@property (strong, nonatomic) NSArray *output; // @synthesize output=_output;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, weak, nonatomic) id<WFLActionUserInterface> userInterface; // @synthesize userInterface=_userInterface;

+ (void)initialize;
+ (id)userCancelledError;
- (void).cxx_destruct;
- (void)cancelRunning;
- (void)finishRunningWithError:(id)arg1;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)run;
- (void)runAction:(id)arg1 withInput:(id)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end


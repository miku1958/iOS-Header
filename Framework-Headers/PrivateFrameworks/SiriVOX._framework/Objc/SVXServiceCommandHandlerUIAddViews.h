//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXServiceCommandHandling-Protocol.h>

@class NSString, SVXSpeechSynthesizer;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerUIAddViews : NSObject <SVXServiceCommandHandling>
{
    SVXSpeechSynthesizer *_speechSynthesizer;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;
- (void).cxx_destruct;
- (void)handleAceView:(id)arg1 isExpository:(BOOL)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSpeechSynthesizer:(id)arg1;
- (BOOL)isCommandUUFR:(id)arg1;
- (void)prepareToHandleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldDependOnCommand:(id)arg1;

@end


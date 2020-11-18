//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface EMTTranslator : NSObject
{
    struct shared_ptr<quasar::TranslatorFactory> _translatorFactory;
    struct SystemConfig _config;
    NSObject<OS_dispatch_queue> *_translationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_9492931a)_tokenizeString:(id)arg1;
- (void)_translate:(vector_9492931a)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithModelURL:(id)arg1;
- (id)initWithModelURL:(id)arg1 task:(id)arg2;
- (void)loadTranslatorFrom:(id)arg1 to:(id)arg2;
- (void)translateSpeech:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

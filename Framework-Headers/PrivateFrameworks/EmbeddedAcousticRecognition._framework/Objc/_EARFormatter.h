//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARFormatter : NSObject
{
    struct shared_ptr<SpeechITN> _itn;
}

+ (void)initialize;
+ (BOOL)supportedByQuasarConfig:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_ec3bbdac)formatWords:(vector_ec3bbdac)arg1;
- (basic_string_805fe43b)getOrthography:(const vector_ec3bbdac *)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;

@end

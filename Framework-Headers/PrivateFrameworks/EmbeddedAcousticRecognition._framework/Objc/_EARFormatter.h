//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARFormatter : NSObject
{
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN>> _itn;
}

+ (vector_2f7ba0dc)convertStringsToQuasarTokens:(id)arg1;
+ (void)initialize;
+ (BOOL)supportedByQuasarConfig:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc *)arg1;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc *)arg1 task:(id)arg2;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (basic_string_23d93216)getOrthography:(const vector_2f7ba0dc *)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;

@end


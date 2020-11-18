//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NLLanguageRecognizer, NSArray;

@interface _LTTextLanguageDetector : NSObject
{
    NLLanguageRecognizer *_recognizer;
    NSArray *_availableLocales;
}

@property (copy, nonatomic) NSArray *availableLocales; // @synthesize availableLocales=_availableLocales;

- (void).cxx_destruct;
- (id)detectionForString:(id)arg1;
- (id)detectionForStrings:(id)arg1;
- (id)init;

@end

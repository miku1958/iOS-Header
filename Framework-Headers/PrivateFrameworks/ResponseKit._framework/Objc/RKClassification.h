//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RKClassification : NSObject
{
    int _sensitive;
    NSString *_language;
    unsigned long long _sentenceType;
    unsigned long long _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
}

@property (strong) NSArray *customResponses; // @synthesize customResponses=_customResponses;
@property unsigned long long gender; // @synthesize gender=_gender;
@property (strong) NSString *language; // @synthesize language=_language;
@property (strong) NSArray *matchedRanges; // @synthesize matchedRanges=_matchedRanges;
@property (getter=isSensitive) int sensitive; // @synthesize sensitive=_sensitive;
@property (strong) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property unsigned long long sentenceType; // @synthesize sentenceType=_sentenceType;
@property (strong) NSString *taggedText; // @synthesize taggedText=_taggedText;

- (void).cxx_destruct;
- (id)init;

@end


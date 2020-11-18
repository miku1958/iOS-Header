//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualResults : NSObject
{
    NSArray *_phrases;
    NSString *_dominantLanguage;
}

@property (copy, nonatomic) NSString *dominantLanguage; // @synthesize dominantLanguage=_dominantLanguage;
@property (copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


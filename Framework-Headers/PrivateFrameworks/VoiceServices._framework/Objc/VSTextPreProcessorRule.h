//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;

@end

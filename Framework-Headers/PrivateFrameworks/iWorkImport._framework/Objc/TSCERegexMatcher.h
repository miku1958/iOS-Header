//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression *_regex;
}

+ (id)regexMatcherWithStringMatch:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStringToMatch:(id)arg1;
- (BOOL)matches:(id)arg1;

@end


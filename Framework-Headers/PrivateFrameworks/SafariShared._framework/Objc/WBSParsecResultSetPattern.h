//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject
{
    NSRegularExpression *_regularExpression;
}

+ (id)_nextTokenInResultSetPattern:(id)arg1;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1;
+ (id)_regularExpressionPatternForToken:(id)arg1;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)arg1;
+ (id)patternWithString:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithRegularExpression:(id)arg1;
- (BOOL)isMatchedByString:(id)arg1;

@end


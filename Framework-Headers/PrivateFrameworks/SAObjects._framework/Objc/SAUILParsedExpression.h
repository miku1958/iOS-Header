//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SAUILParseableExpression;

@interface SAUILParsedExpression : SADomainObject
{
}

@property (strong, nonatomic) SAUILParseableExpression *parseableExpression;
@property (copy, nonatomic) NSString *parsedOutput;

+ (id)parsedExpression;
+ (id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

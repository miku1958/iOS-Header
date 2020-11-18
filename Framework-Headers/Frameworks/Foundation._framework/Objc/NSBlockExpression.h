//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSBlockExpression : NSExpression
{
    CDUnknownBlockType _block;
    NSArray *_arguments;
}

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (CDUnknownBlockType)expressionBlock;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)predicateFormat;

@end


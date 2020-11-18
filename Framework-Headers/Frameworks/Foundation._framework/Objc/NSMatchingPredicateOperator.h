//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSStringPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator
{
    int _contextLock;
    CDStruct_c69bce23 *_regexContext;
}

- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;
- (void)dealloc;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end


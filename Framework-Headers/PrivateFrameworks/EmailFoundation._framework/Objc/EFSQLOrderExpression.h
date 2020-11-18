//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLOrderExpression : NSObject <EFSQLValueExpressable>
{
    BOOL _isAscending;
    id<EFSQLExpressable> _expression;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, nonatomic) id<EFSQLExpressable> expression; // @synthesize expression=_expression;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAscending; // @synthesize isAscending=_isAscending;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithExpression:(id)arg1 ascending:(BOOL)arg2;

@end

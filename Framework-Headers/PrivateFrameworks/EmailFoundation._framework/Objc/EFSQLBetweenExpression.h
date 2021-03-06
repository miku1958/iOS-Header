//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFPair.h>

#import <EmailFoundation/EFSQLBitExpressable-Protocol.h>
#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable>
{
    BOOL _between;
    id<EFSQLExpressable> _left;
}

@property (readonly, nonatomic) BOOL between; // @synthesize between=_between;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<EFSQLExpressable> left; // @synthesize left=_left;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(BOOL)arg4;
- (void)setColumnExpression:(id)arg1;

@end


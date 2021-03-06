//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBSQLContext, NSArray;

@interface HMBSQLStatement : HMFObject
{
    HMBSQLContext *_context;
    struct sqlite3_stmt *_statement;
    NSArray *_queryPlans;
}

@property (readonly, weak, nonatomic) HMBSQLContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) NSArray *queryPlans; // @synthesize queryPlans=_queryPlans;
@property (nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;

+ (BOOL)explainStatements;
+ (id)queryPlansForContext:(id)arg1 statement:(id)arg2;
+ (void)setExplainStatements:(BOOL)arg1;
+ (struct sqlite3_stmt *)sqlStatementForContext:(id)arg1 statement:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalize;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3;

@end


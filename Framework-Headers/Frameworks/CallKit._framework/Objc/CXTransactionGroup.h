//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CXTransactionGroup : NSObject
{
    NSMutableDictionary *_callSourceIdentifierToTransaction;
    NSMutableArray *_mutableCallSources;
}

@property (readonly, copy, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) NSMutableDictionary *callSourceIdentifierToTransaction; // @synthesize callSourceIdentifierToTransaction=_callSourceIdentifierToTransaction;
@property (readonly, copy, nonatomic) NSArray *callSources;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSMutableArray *mutableCallSources; // @synthesize mutableCallSources=_mutableCallSources;
@property (readonly, copy, nonatomic) NSArray *transactions;

- (void).cxx_destruct;
- (void)addAction:(id)arg1 forCallSource:(id)arg2;
- (id)description;
- (id)init;
- (id)transactionForCallSource:(id)arg1;

@end


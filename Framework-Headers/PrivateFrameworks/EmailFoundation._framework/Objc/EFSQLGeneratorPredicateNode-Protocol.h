//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/NSObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary;
@protocol EFSQLValueExpressable;

@protocol EFSQLGeneratorPredicateNode <NSObject>
- (id<EFSQLValueExpressable>)sqlExpressableWithTableExpressions:(NSMutableArray *)arg1;
- (void)traverseTreeWithAliasMap:(NSMutableDictionary *)arg1;
@end

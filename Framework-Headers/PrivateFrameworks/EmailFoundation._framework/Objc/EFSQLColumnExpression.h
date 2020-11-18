//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFCacheable-Protocol.h>
#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class EFSQLDisqualifiedColumnExpression, NSString;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLExpressable>
{
    NSString *_name;
    NSString *_tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFSQLDisqualifiedColumnExpression *disqualified;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;

+ (id)allColumns;
+ (id)column:(id)arg1;
+ (id)table:(id)arg1 column:(id)arg2;
- (void).cxx_destruct;
- (id)beginsWith:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)between:(id)arg1;
- (id)cachedSelf;
- (id)concatenate:(id)arg1;
- (id)contains:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)doesNotContain:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)doesNotMatchMask:(id)arg1;
- (id)endsWith:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)equalTo:(id)arg1;
- (id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2;
- (id)glob:(id)arg1;
- (id)greaterThan:(id)arg1;
- (id)greaterThanEqualTo:(id)arg1;
- (id)in:(id)arg1;
- (id)inSelect:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 table:(id)arg2;
- (id)is:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)isNot:(id)arg1;
- (id)isNotNull;
- (id)isNull;
- (id)lessThan:(id)arg1;
- (id)lessThanEqualTo:(id)arg1;
- (id)like:(id)arg1;
- (id)like:(id)arg1 patternType:(unsigned long long)arg2;
- (id)matchesMask:(id)arg1;
- (id)minus:(id)arg1;
- (id)notBetween:(id)arg1;
- (id)notEqualTo:(id)arg1;
- (id)notGlob:(id)arg1;
- (id)notIn:(id)arg1;
- (id)notInSelect:(id)arg1;
- (id)notLike:(id)arg1;
- (id)notLike:(id)arg1 patternType:(unsigned long long)arg2;
- (id)plus:(id)arg1;

@end

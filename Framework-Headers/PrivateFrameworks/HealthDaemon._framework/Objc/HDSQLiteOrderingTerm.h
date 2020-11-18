//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying>
{
    BOOL _ascending;
    NSString *_expression;
}

@property (readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property (readonly, copy, nonatomic) NSString *expression; // @synthesize expression=_expression;

+ (id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(BOOL)arg3;
- (void).cxx_destruct;
- (id)SQL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExpression:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end

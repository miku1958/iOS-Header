//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLDeleteStatement : NSObject
{
    NSString *_table;
    id<EFSQLExpressable> _whereClause;
}

@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly, copy, nonatomic) NSString *table; // @synthesize table=_table;
@property (readonly, nonatomic) id<EFSQLExpressable> whereClause; // @synthesize whereClause=_whereClause;

- (void).cxx_destruct;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 where:(id)arg2;

@end

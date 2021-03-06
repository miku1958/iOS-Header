//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSArray, NSString;

@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable>
{
    NSString *_name;
    NSArray *_arguments;
}

@property (readonly, copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (id)avg:(id)arg1;
+ (id)avgDistinct:(id)arg1;
+ (id)count:(id)arg1;
+ (id)countDistinct:(id)arg1;
+ (id)groupConcat:(id)arg1 separator:(id)arg2;
+ (id)max:(id)arg1;
+ (id)maxDistinct:(id)arg1;
+ (id)min:(id)arg1;
+ (id)minDistinct:(id)arg1;
+ (id)sum:(id)arg1;
+ (id)sumDistinct:(id)arg1;
+ (id)total:(id)arg1;
+ (id)totalDistinct:(id)arg1;
- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithName:(id)arg1 arguments:(id)arg2;

@end


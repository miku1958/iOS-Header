//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ML3DatabaseNaturalStatement : NSObject
{
    NSString *_sql;
    NSMutableArray *_parameters;
}

@property (strong, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property (strong, nonatomic) NSString *sql; // @synthesize sql=_sql;

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;

@end


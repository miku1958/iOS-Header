//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HDSQLiteDatabaseIndexSchema : NSObject
{
    BOOL _isUnique;
    NSString *_name;
    NSArray *_columns;
}

@property (strong, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property (nonatomic) BOOL isUnique; // @synthesize isUnique=_isUnique;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


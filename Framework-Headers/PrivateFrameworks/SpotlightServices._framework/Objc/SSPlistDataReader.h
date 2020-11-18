//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject
{
    struct _MDPlistContainer *_container;
    CDStruct_b7fac349 _obj;
}

@property (readonly, copy, nonatomic) NSMutableArray *allKeys;
@property (readonly, nonatomic) NSArray *blacklist;
@property (readonly, nonatomic) unsigned long long count;

- (struct _MDPlistContainer *)container;
- (void)dealloc;
- (id)description;
- (BOOL)doesBundleExistInAppWhiteList:(id)arg1;
- (double)doubleValueForBundle:(id)arg1;
- (double)doubleValueForKey:(const char *)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer *)arg1 obj:(CDStruct_b7fac349)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPContactDiskCache : NSObject
{
    long long _lastCreatedAt;
}

+ (id)sharedInstance;
- (BOOL)deleteNameRecordCache;
- (id)init;
- (id)loadNameRecordCache;
- (BOOL)writeNameRecordCache:(id)arg1 fullLoadFromSource:(BOOL)arg2;

@end

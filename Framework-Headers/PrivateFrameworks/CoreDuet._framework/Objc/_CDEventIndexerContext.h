//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _CDEventIndexerBookmark;
@protocol OS_os_transaction;

@interface _CDEventIndexerContext : NSObject
{
    _CDEventIndexerBookmark *_bookmark;
    long long _currentVersion;
    unsigned long long _batchSize;
    CDUnknownBlockType _completion;
    NSDate *_indexDate;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

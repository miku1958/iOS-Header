//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDatabaseJournalFile : NSObject
{
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (id)description;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)read;
- (void)unlink;
- (void)write:(id)arg1;

@end


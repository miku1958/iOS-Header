//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCRelativePath;

__attribute__((visibility("hidden")))
@interface BRCDirectoryBreadthEnumerator : NSObject
{
    struct {
        int _field1;
        long long _field2;
        long long _field3;
        char *_field4;
        int _field5;
        long long _field6;
        long long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t _field9;
        struct _telldir *_field10;
    } *_dir;
    BRCRelativePath *_parentPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParentPath:(id)arg1 error:(int *)arg2;
- (id)nextObjectWithIsDir:(BOOL *)arg1 error:(int *)arg2;

@end

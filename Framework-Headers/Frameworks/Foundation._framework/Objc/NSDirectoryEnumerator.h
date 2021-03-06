//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator
{
}

@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly) BOOL isEnumeratingDirectoryPostOrder;
@property (readonly) unsigned long long level;

- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSFilePromiseWriteToken : NSObject
{
    NSURL *promiseURL;
    NSURL *logicalURL;
}

@property (copy) NSURL *logicalURL; // @synthesize logicalURL;
@property (copy) NSURL *promiseURL; // @synthesize promiseURL;

- (void)dealloc;

@end


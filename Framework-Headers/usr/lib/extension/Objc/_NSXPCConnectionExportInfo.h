//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject
{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject
{
    NSObject<OS_dispatch_data> *_remainingData;
    CDUnknownBlockType _completion;
}

- (void)callCompletion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (int)drain:(struct __CFWriteStream *)arg1;
- (id)initWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


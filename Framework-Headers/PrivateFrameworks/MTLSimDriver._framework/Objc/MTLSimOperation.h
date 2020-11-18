//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLSimDriver/MTLSerializerAllocator-Protocol.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLSimOperation : NSObject <MTLSerializerAllocator>
{
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly) NSObject<OS_dispatch_data> *data; // @synthesize data=_data;

- (char *)allocateOperationBytes:(unsigned long long)arg1;
- (void)dealloc;

@end

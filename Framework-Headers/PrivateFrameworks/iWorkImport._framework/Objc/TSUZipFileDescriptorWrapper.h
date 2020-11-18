//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    id<TSUReadChannel> _readChannel;
}

@property (readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel; // @synthesize readChannel=_readChannel;

- (void).cxx_destruct;
- (void)beginAccess;
- (void)dealloc;
- (void)endAccess;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (void)waitForAccessToEnd;

@end


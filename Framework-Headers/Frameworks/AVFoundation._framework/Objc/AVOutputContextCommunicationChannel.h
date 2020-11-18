//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputContextCommunicationChannelInternal;
@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannel : NSObject
{
    AVOutputContextCommunicationChannelInternal *_ivars;
}

@property (readonly, nonatomic) id<AVOutputContextCommunicationChannelImpl> impl;

- (void)dealloc;
- (id)init;
- (id)initWithOutputContextCommunicationChannelImpl:(id)arg1;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


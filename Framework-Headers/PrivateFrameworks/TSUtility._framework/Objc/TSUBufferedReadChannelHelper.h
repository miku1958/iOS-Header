//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/TSUStreamReadChannel-Protocol.h>

@class NSString, TSUBufferedReadChannel;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel *_bufferedReadChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithBufferedReadChannel:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end


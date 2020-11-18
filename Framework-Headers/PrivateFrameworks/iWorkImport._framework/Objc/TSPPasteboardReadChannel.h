//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString, TSPPasteboard;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel>
{
    NSObject<OS_dispatch_queue> *_readQueue;
    TSPPasteboard *_pasteboard;
    NSString *_pasteboardType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)init;
- (id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2;
- (void)readWithHandler:(CDUnknownBlockType)arg1;

@end


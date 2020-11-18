//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

@interface SKUIPersonalizeOfferOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void).cxx_destruct;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (void)main;

@end


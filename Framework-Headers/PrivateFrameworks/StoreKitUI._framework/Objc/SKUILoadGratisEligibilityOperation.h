//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

@interface SKUILoadGratisEligibilityOperation : NSOperation
{
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void).cxx_destruct;
- (id)_bodyData;
- (id)init;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)main;

@end


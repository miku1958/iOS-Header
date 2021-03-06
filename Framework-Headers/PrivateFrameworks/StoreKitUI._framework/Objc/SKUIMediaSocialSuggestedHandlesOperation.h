//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSArray, NSLock, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    NSArray *_words;
}

@property (copy) CDUnknownBlockType outputBlock;
@property (copy) NSArray *words;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)arg1;
- (void)main;

@end


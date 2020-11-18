//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPXObserver.h>

#import <FileProvider/NSFileProviderEnumerationObserver-Protocol.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver>
{
    NSMutableArray *_items;
    CDUnknownBlockType _finishedBlock;
    NSData *_syncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong) NSData *syncAnchor; // @synthesize syncAnchor=_syncAnchor;

- (void).cxx_destruct;
- (void)didEnumerateItems:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)finishEnumeratingWithError:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;

@end


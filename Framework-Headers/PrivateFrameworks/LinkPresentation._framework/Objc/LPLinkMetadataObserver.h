//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject
{
    LPLinkMetadata *_metadata;
    CDUnknownBlockType _callback;
    BOOL _hasScheduledCallback;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;

@end


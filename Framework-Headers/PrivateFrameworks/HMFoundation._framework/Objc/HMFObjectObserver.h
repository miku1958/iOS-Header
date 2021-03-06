//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFObjectObserver : HMFObject
{
    id _observedObject;
    CDUnknownBlockType _deallocationBlock;
    unsigned long long _cachedHash;
}

@property (readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property (copy) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
@property (readonly, weak) id observedObject; // @synthesize observedObject=_observedObject;

- (void).cxx_destruct;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObservedObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


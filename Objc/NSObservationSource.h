//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSObservable-Protocol.h>

@class NSString;

@interface NSObservationSource : NSObject <NSObservable>
{
    id _observers[4];
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (void)dealloc;

@end

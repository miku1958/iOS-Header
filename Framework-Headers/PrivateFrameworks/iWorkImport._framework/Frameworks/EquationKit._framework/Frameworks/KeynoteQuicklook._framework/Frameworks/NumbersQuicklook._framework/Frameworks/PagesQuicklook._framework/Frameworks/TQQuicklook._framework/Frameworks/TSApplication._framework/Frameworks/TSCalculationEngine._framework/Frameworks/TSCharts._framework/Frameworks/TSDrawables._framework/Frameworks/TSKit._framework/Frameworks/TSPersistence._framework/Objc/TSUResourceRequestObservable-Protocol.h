//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@protocol TSUResourceRequestObserver;

@protocol TSUResourceRequestObservable <NSObject>
- (void)addObserver:(id<TSUResourceRequestObserver>)arg1;
- (void)removeObserver:(id<TSUResourceRequestObserver>)arg1;
@end


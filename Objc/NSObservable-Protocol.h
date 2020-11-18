//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSError, NSObservation;
@protocol NSObservable><NSObserver, NSObserver;

@protocol NSObservable <NSObject>

@optional
- (NSObservation<NSObservable><NSObserver> *)addObserver:(id<NSObserver>)arg1;
- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(NSObservation *)arg1;
@end


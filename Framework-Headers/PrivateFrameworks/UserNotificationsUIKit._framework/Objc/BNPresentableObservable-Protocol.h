//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@protocol BNPresentableObserving;

@protocol BNPresentableObservable <NSObject>
- (void)addPresentableObserver:(id<BNPresentableObserving>)arg1;
- (void)removePresentableObserver:(id<BNPresentableObserving>)arg1;
@end

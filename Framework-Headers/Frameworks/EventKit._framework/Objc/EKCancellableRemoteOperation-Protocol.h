//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@protocol EKCancellableRemoteOperation <NSObject>
- (void)cancel;
- (void)disconnect;

@optional
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2;
@end


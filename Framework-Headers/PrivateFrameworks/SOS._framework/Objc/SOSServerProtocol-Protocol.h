//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SOS/NSObject-Protocol.h>

@protocol SOSServerProtocol <NSObject>
- (void)isSendingLocationUpdate:(void (^)(BOOL))arg1;
- (void)mostRecentLocationSentWithCompletion:(void (^)(CLLocation *))arg1;
- (void)startSendingLocationUpdateWithCompletion:(void (^)(BOOL, id *))arg1;
- (void)stopSendingLocationUpdate;
- (void)willStartSendingLocationUpdate;
@end

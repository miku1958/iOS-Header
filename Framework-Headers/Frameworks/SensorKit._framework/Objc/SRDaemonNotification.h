//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SRDaemonNotificationDelegate;

__attribute__((visibility("hidden")))
@interface SRDaemonNotification : NSObject
{
    int _registrationToken;
    int _significantTimeChangeToken;
    int _resetDatastoreToken;
    id<SRDaemonNotificationDelegate> _delegate;
    NSString *_sensorIdentifier;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;

@end

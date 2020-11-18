//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class __TSgPTPPortNotification;
@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject
{
    unsigned int _service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    struct IONotificationPort *_notificationPort;
    unsigned int _interestNotification;
    __TSgPTPPortNotification *_portForNotification;
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
    unsigned short _portNumber;
    long long _portRole;
    NSObject<OS_dispatch_queue> *_propertyUpdateQueue;
}

@property (nonatomic) unsigned short portNumber; // @synthesize portNumber=_portNumber;
@property (nonatomic) long long portRole; // @synthesize portRole=_portRole;
@property (readonly, nonatomic) long long portType; // @dynamic portType;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // @synthesize propertyUpdateQueue=_propertyUpdateQueue;
@property (readonly, nonatomic) unsigned int service;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)gPTPPortWithService:(unsigned int)arg1;
- (BOOL)_commonInitWithService:(unsigned int)arg1;
- (unsigned short)_portNumber;
- (long long)_portRole;
- (void)dealloc;
- (id)init;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (void)serviceTerminated;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end

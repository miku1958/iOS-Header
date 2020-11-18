//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBPeripheral, NSString;

__attribute__((visibility("hidden")))
@interface AMSBTLEPeripheral : NSObject
{
    CBPeripheral *peripheral;
    NSString *uuid;
    NSString *name;
    CBCentralManager *centralManager;
    double lastSeen;
    BOOL inputAvailable;
    BOOL outputAvailable;
    BOOL online;
    BOOL available;
    BOOL changingState;
}

@property (getter=isAvailable) BOOL available;
@property (getter=isChangingState) BOOL changingState; // @synthesize changingState;
@property BOOL inputAvailable;
@property double lastSeen;
@property (strong) NSString *name;
@property (getter=isOnline) BOOL online;
@property BOOL outputAvailable;
@property (readonly) CBPeripheral *peripheral;
@property (readonly, strong) NSString *uuid;

- (BOOL)canConnect;
- (BOOL)connect;
- (void)dealloc;
- (BOOL)disconnect;
- (BOOL)hidden;
- (id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3;
- (BOOL)updateAvailableStateChanged;

@end


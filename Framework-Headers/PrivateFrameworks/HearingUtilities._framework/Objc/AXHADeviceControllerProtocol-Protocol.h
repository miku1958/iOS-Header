//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class NSString;
@protocol AXHADeviceProtocol;

@protocol AXHADeviceControllerProtocol <NSObject>
- (void)device:(id<AXHADeviceProtocol>)arg1 didUpdateProperty:(unsigned long long)arg2;
- (void)registerForPropertyUpdates:(void (^)(NSDictionary *))arg1;
- (void)stopPropertyUpdates;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(NSString *)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(NSString *)arg3;
@end


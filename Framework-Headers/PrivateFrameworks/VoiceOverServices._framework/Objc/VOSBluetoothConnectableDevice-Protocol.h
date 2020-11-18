//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceOverServices/NSObject-Protocol.h>

@class NSString;

@protocol VOSBluetoothConnectableDevice <NSObject>
- (void)connect;
- (BOOL)connected;
- (BOOL)connecting;
- (void)disconnect;
- (NSString *)identifier;
- (NSString *)name;
- (BOOL)paired;
- (void)unpair;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKAccountsSyncServiceServer, NSString;

@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
@end


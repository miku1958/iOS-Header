//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSendQueueSerializerDelegate-Protocol.h>

@class NSNumber, NSObject, NSString, PBCodable;

@protocol BLTSettingsSendSerializerDelegate <BLTSendQueueSerializerDelegate>
- (void)sendRequest:(PBCodable *)arg1 type:(unsigned short)arg2 withTimeout:(NSNumber *)arg3 withDescription:(NSObject *)arg4 onlyOneFor:(NSString *)arg5 didSend:(void (^)(BOOL, NSError *))arg6 andResponse:(void (^)(IDSProtobuf *))arg7;
@end


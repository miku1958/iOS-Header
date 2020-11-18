//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKDLongLivedOperationPersistedCallback, NSString;

@protocol CKDOperationInfoDelegate <NSObject>

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)operationWithID:(NSString *)arg1 receivedCallback:(CKDLongLivedOperationPersistedCallback *)arg2;
- (void)wasUnexpectedlyUnregisteredForOperationID:(NSString *)arg1;
@end

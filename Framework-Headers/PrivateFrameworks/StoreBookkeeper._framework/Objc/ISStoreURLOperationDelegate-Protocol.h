//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/ISURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSNumber, NSString;

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
- (BOOL)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSBaseSocketPairConnection, NSData;

@protocol IDSBaseSocketPairConnectionDelegate <NSObject>

@optional
- (void)connection:(IDSBaseSocketPairConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connectionDidClose:(IDSBaseSocketPairConnection *)arg1;
@end

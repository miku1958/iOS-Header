//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPFragmentationStream, NSData, NSError;

@protocol HAPFragmentationStreamDelegate <NSObject>
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didReceiveData:(NSData *)arg2 transactionIdentifier:(unsigned short)arg3 error:(NSError *)arg4;
@end

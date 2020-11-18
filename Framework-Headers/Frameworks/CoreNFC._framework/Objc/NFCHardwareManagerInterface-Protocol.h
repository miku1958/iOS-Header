//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NFReaderSessionCallbacks;

@protocol NFCHardwareManagerInterface <NSObject>
- (oneway void)areFeaturesSupported:(unsigned long long)arg1 callback:(void (^)(BOOL, NSError *))arg2;
- (oneway void)queueReaderSession:(NSObject<NFReaderSessionCallbacks> *)arg1 showSharingUI:(unsigned long long)arg2 scanText:(NSString *)arg3 callback:(void (^)(NSObject<NFReaderSessionInterface> *, BOOL, NSError *))arg4;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NFCNDEFReaderSession, NSArray, NSError;

@protocol NFCNDEFReaderSessionDelegate <NSObject>
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didDetectNDEFs:(NSArray *)arg2;
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didInvalidateWithError:(NSError *)arg2;

@optional
- (void)readerSession:(NFCNDEFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)readerSessionDidBecomeActive:(NFCNDEFReaderSession *)arg1;
@end


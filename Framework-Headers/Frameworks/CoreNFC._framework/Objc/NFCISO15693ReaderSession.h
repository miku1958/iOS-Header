//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCReaderSession.h>

@interface NFCISO15693ReaderSession : NFCReaderSession
{
}

+ (BOOL)readingAvailable;
- (void)didDetectTags:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)restartPolling;

@end

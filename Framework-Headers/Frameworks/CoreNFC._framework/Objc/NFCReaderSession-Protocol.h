//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NSString;

@protocol NFCReaderSession <NSObject>

@property (copy, nonatomic) NSString *alertMessage;
@property (readonly, nonatomic, getter=isReady) BOOL ready;

- (void)beginSession;
- (void)invalidateSession;
- (void)invalidateSessionWithErrorMessage:(NSString *)arg1;
@end

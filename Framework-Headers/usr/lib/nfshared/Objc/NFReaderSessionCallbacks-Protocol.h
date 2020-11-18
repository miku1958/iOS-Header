//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <nfshared/NFSessionCallbackInterface-Protocol.h>
#import <nfshared/NSObject-Protocol.h>

@class NFFieldNotification, NSArray, NSError;

@protocol NFReaderSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didTerminate:(NSError *)arg1;

@optional
- (void)didDetectExternalReaderWithNotification:(NFFieldNotification *)arg1;
- (void)didDetectNDEFMessages:(NSArray *)arg1 fromTags:(NSArray *)arg2;
- (void)didDetectTags:(NSArray *)arg1;
@end


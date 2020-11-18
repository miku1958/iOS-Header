//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol MFContactsSearchConsumer <NSObject>

@optional
- (void)beganNetworkActivity;
- (void)consumeAutocompleteSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)consumeCorecipientSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)consumeSearchResults:(NSArray *)arg1 type:(unsigned long long)arg2 taskID:(NSNumber *)arg3;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(NSNumber *)arg1;
@end


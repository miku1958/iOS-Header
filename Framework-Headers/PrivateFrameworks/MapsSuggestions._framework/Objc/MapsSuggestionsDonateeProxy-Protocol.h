//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class NSData, NSString;

@protocol MapsSuggestionsDonateeProxy <NSObject>
- (void)donateETAData:(NSData *)arg1 destinationKey:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)donateSignalPackData:(NSData *)arg1 handler:(void (^)(void))arg2;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/DAMailboxStreamingContentConsumer-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class NSData;

@protocol MFDAStreamingContentConsumer <DAMailboxStreamingContentConsumer, NSObject>
- (NSData *)data;
- (BOOL)didBeginStreaming;
- (BOOL)succeeded;
- (double)timeOfLastActivity;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUTSViewingContext.h>

@class NSDate;

@interface SAUTSLiveStreamingViewingContext : SAUTSViewingContext
{
}

@property (copy, nonatomic) NSDate *eventStartTime;
@property (nonatomic) BOOL watchingLive;

+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

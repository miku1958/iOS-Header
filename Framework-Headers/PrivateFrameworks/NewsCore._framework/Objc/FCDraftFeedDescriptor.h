//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

@class NSString;
@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor : FCFeedDescriptor
{
    NSString *_articleListID;
    NSString *_issueListID;
    id<FCChannelProviding> _channel;
}

@property (readonly, nonatomic) NSString *articleListID; // @synthesize articleListID=_articleListID;
@property (readonly, nonatomic) id<FCChannelProviding> channel; // @synthesize channel=_channel;
@property (readonly, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;

- (void).cxx_destruct;
- (id)allEmitterClasses;
- (id)backingChannel;
- (id)backingTag;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (long long)feedType;
- (id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3;
- (id)name;

@end


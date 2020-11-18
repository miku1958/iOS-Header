//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Message/DAMailboxFetchSearchResultConsumer-Protocol.h>
#import <Message/DAMailboxStreamingContentConsumer-Protocol.h>

@class MFConditionLock, MFError;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer>
{
    MFConditionLock *_doneCondition;
    id<MFDAStreamingContentConsumer> _streamConsumer;
    MFError *_error;
}

@property (strong, nonatomic) MFError *error; // @synthesize error=_error;
@property (strong, nonatomic) id<MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)dealloc;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)init;
- (void)searchResultFetchedWithResponses:(id)arg1;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;

@end


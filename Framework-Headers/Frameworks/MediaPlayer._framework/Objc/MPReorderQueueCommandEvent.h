//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent
{
    NSString *_insertAfterContextItemID;
    long long _destinationOffset;
}

@property (readonly, nonatomic) long long destinationOffset; // @synthesize destinationOffset=_destinationOffset;
@property (readonly, nonatomic) NSString *insertAfterContextItemID; // @synthesize insertAfterContextItemID=_insertAfterContextItemID;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

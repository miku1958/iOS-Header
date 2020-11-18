//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLCloudChangeEventsResult-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult>
{
    NSObject<OS_xpc_object> *_events;
    long long _resultType;
    unsigned long long _changeHubEventIndex;
}

@property (readonly) unsigned long long changeHubEventIndex; // @synthesize changeHubEventIndex=_changeHubEventIndex;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long resultType; // @synthesize resultType=_resultType;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)enumerateLocalEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3;
- (id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)localEventFromEvent:(id)arg1;

@end


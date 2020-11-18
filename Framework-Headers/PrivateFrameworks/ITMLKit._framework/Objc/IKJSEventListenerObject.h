//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSEventListenerObject-Protocol.h>

@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject>
{
    NSMutableDictionary *_eventListenersMap;
}

@property (strong, nonatomic) NSMutableDictionary *eventListenersMap; // @synthesize eventListenersMap=_eventListenersMap;

- (void).cxx_destruct;
- (BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
- (BOOL)invokeListeners:(id)arg1 extraInfo:(id)arg2;
- (BOOL)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4;
- (void)removeEventListener:(id)arg1:(id)arg2;

@end


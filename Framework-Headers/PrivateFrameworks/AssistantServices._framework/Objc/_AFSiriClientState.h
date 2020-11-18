//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _AFSiriClientState : NSObject
{
    NSMutableSet *_requestUUIDs;
    BOOL _hasActiveSession;
    BOOL _isListening;
    BOOL _isSpeaking;
}

@property (nonatomic) BOOL hasActiveSession; // @synthesize hasActiveSession=_hasActiveSession;
@property (nonatomic) BOOL isListening; // @synthesize isListening=_isListening;
@property (nonatomic) BOOL isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property (readonly, nonatomic) unsigned long long notifyState;

- (void).cxx_destruct;
- (void)addRequestUUID:(id)arg1;
- (id)init;
- (void)removeRequestUUID:(id)arg1;

@end


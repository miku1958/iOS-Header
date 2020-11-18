//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISPlayer, NSHashTable;
@protocol ISInputObserver, OS_dispatch_queue;

@interface ISInput : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    id<ISInputObserver> _observer;
    BOOL __isPerfomingChanges;
    BOOL __didChange;
    float _value;
    float _secondaryValue;
    float _tertiaryValue;
    long long _inputType;
    long long _signalID;
    ISPlayer *_player;
    NSHashTable *__changeObservers;
}

@property (readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property (nonatomic, setter=_setDidChange:) BOOL _didChange; // @synthesize _didChange=__didChange;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerfomingChanges; // @synthesize _isPerfomingChanges=__isPerfomingChanges;
@property (readonly, nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property (readonly, weak, nonatomic) ISPlayer *player; // @synthesize player=_player;
@property (readonly, nonatomic) float secondaryValue; // @synthesize secondaryValue=_secondaryValue;
@property (readonly, nonatomic) long long signalID; // @synthesize signalID=_signalID;
@property (readonly, nonatomic) float tertiaryValue; // @synthesize tertiaryValue=_tertiaryValue;
@property (readonly, nonatomic) float value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)init;
- (id)observer;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)playerDidChange;
- (void)setObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSecondaryValue:(float)arg1;
- (void)setTertiaryValue:(float)arg1;
- (void)setValue:(float)arg1;
- (void)signal;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UISlidingBarState, UISlidingBarStateRequest;

__attribute__((visibility("hidden")))
@interface _UIPanelInteractionState : NSObject <NSCopying>
{
    long long _affectedSides;
    long long _interactingSide;
    double _minLeading;
    double _maxLeading;
    double _minTrailing;
    double _maxTrailing;
    UISlidingBarState *_originalState;
    UISlidingBarStateRequest *_stateRequest;
}

@property (nonatomic) long long affectedSides; // @synthesize affectedSides=_affectedSides;
@property (nonatomic) long long interactingSide; // @synthesize interactingSide=_interactingSide;
@property (nonatomic) double maxLeading; // @synthesize maxLeading=_maxLeading;
@property (nonatomic) double maxTrailing; // @synthesize maxTrailing=_maxTrailing;
@property (nonatomic) double minLeading; // @synthesize minLeading=_minLeading;
@property (nonatomic) double minTrailing; // @synthesize minTrailing=_minTrailing;
@property (copy, nonatomic) UISlidingBarState *originalState; // @synthesize originalState=_originalState;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest; // @synthesize stateRequest=_stateRequest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sideWasAffected:(long long)arg1;

@end


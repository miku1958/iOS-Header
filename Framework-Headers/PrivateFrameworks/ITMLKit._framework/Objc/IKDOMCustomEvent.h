//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMEvent.h>

#import <ITMLKit/IKJSDOMCustomEvent-Protocol.h>

@class IKDOMNode, IKJSObject, NSDate, NSString;

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent>
{
    IKJSObject *_detail;
}

@property (readonly, nonatomic) BOOL bubbles;
@property (readonly, nonatomic) BOOL cancelable;
@property (readonly, strong, nonatomic) IKDOMNode *currentTarget;
@property (readonly, nonatomic) BOOL defaultPrevented;
@property (strong, nonatomic) IKJSObject *detail; // @synthesize detail=_detail;
@property (readonly, nonatomic) long long eventPhase;
@property (readonly, strong, nonatomic) IKDOMNode *target;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, strong, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(BOOL)arg4 isCancelable:(BOOL)arg5 detail:(id)arg6;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;

@end


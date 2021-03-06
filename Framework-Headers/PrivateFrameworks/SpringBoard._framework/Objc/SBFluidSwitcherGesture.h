//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBAppLayout, UIGestureRecognizer;

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding>
{
    CDUnknownBlockType _eventProvider;
    long long _state;
    SBAppLayout *_selectedAppLayout;
    UIGestureRecognizer *_gestureRecognizerForStudyLog;
    long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, setter=_setGestureRecognizerForStudyLog:) UIGestureRecognizer *gestureRecognizerForStudyLog; // @synthesize gestureRecognizerForStudyLog=_gestureRecognizerForStudyLog;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, setter=_setSelectedAppLayout:) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
@property (nonatomic, setter=_setState:) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)gestureEvent;
- (id)initWithType:(long long)arg1 eventProvider:(CDUnknownBlockType)arg2;
- (id)studyLogData;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end


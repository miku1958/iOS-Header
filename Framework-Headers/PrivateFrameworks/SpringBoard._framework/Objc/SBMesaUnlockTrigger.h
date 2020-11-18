//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject
{
    id<SBMesaUnlockTriggerDelegate> _delegate;
    BOOL _authenticated;
}

@property (nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)bioUnlock;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fingerOff;
- (void)fingerOn;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
- (void)significantUserInteractionOccurred;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

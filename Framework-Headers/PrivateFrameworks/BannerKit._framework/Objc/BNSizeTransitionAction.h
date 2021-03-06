//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSUUID;

@interface BNSizeTransitionAction : BSAction
{
}

@property (readonly, nonatomic) long long sizeTransitionActionState;
@property (readonly, nonatomic) struct CGSize targetSize;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (id)_initWithUniqueIdentifier:(id)arg1 state:(long long)arg2 targetSize:(struct CGSize)arg3;
- (id)initWithTargetSize:(struct CGSize)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)transitionCompleteAction;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTransformItemProvider, HUPresenceActivationOptionItem;

@interface HUPresenceActivationOptionState : NSObject
{
    BOOL _expanded;
    HFTransformItemProvider *_userOptionItemProvider;
    HUPresenceActivationOptionItem *_activationOptionItem;
}

@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) HUPresenceActivationOptionItem *activationOptionItem; // @synthesize activationOptionItem=_activationOptionItem;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) HFTransformItemProvider *userOptionItemProvider; // @synthesize userOptionItemProvider=_userOptionItemProvider;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserOptionItemProvider:(id)arg1 activationOptionItem:(id)arg2;

@end


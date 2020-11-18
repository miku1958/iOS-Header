//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFActionSetBuilderProtocol-Protocol.h>

@class HFMediaPlaybackActionBuilder, HFMutableSetDiff, HMActionSet, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol>
{
    BOOL _isFavorite;
    NSArray *_actions;
    NSString *_name;
    id<HFIconDescriptor> _iconDescriptor;
    HFMutableSetDiff *_actionBuilders;
}

@property (strong, nonatomic) HFMutableSetDiff *actionBuilders; // @synthesize actionBuilders=_actionBuilders;
@property (readonly, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property (nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
- (id)_deleteActionSet:(id)arg1 fromHome:(id)arg2;
- (id)_lazilyUpdateActions;
- (id)_lazilyUpdateFavorite;
- (id)_lazilyUpdateIcon;
- (id)_performValidation;
- (void)addAction:(id)arg1;
- (id)commitItem;
- (id)deleteActionSet;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)removeAllActions;
- (void)setActionSet:(id)arg1;
- (void)updateAction:(id)arg1;

@end

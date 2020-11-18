//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListViewIconLocationTransitioning-Protocol.h>

@class NSString, SBIconListView;

@interface SBIconListViewIconLocationTransitionHandler : NSObject <SBIconListViewIconLocationTransitioning, BSDescriptionProviding>
{
    NSString *_iconLocation;
    NSString *_reason;
    SBIconListView *_iconListView;
    double _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
@property (readonly, copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completeTransition:(BOOL)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIconLocation:(id)arg1 reason:(id)arg2 iconListView:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

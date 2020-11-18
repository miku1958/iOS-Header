//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIUserActionContext-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;
@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

__attribute__((visibility("hidden")))
@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext>
{
    BOOL _actionExecutionWasAttemted;
    NSString *_channelIdentifier;
}

@property (readonly, nonatomic) id<CNUIUserActionCurator> actionCurator;
@property (nonatomic) BOOL actionExecutionWasAttemted; // @synthesize actionExecutionWasAttemted=_actionExecutionWasAttemted;
@property (readonly, nonatomic) id<CNUIUserActionRecorder> actionRecorder;
@property (copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CNUIUserActionURLOpener> urlOpener;
@property (readonly, nonatomic) id<CNUIUserActionUserActivityOpener> userActivityOpener;

- (void).cxx_destruct;
- (id)nilValue;

@end

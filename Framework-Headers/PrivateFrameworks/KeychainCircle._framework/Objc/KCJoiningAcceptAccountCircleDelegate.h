//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeychainCircle/KCJoiningAcceptCircleDelegate-Protocol.h>

@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegate;
- (id)circleGetInitialSyncViews:(unsigned int)arg1 error:(id *)arg2;
- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo *)arg1 error:(id *)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@protocol MSPContainerEdit <NSObject>
- (void)ifAddition:(void (^)(id<MSPContainerEditAddition>))arg1 ifRemoval:(void (^)(id<MSPContainerEditRemoval>))arg2 ifReplacement:(void (^)(id<MSPContainerEditReplacement>))arg3 ifContentUpdate:(void (^)(id<MSPContainerEditContentUpdate>))arg4 ifReplacedEntirely:(void (^)(id<MSPContainerEditReplacedEntirely>))arg5;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIFocusUpdateContext, _UIFocusGuideRegion, _UIFocusMovementRequest;

@protocol _UIFocusGuideRegionDelegate <NSObject>

@optional
- (NSArray *)focusGuideRegion:(_UIFocusGuideRegion *)arg1 preferredFocusEnvironmentsForMovementRequest:(_UIFocusMovementRequest *)arg2;
- (void)focusGuideRegion:(_UIFocusGuideRegion *)arg1 willParticipateAsDestinationRegionInFocusUpdate:(UIFocusUpdateContext *)arg2;
@end


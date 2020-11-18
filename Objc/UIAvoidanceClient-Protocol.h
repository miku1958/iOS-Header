//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAvoidanceObject-Protocol.h>

@class NSSet, NSString, NSValue;
@protocol UIAvoidanceClientApplicator, UIAvoidanceClientDelegate;

@protocol UIAvoidanceClient <UIAvoidanceObject>

@property (strong, nonatomic) id<UIAvoidanceClientApplicator> avoidanceApplicator;
@property (strong, nonatomic) id<UIAvoidanceClientDelegate> avoidanceController;
@property (strong, nonatomic) NSValue *avoidancePosition;
@property (readonly, nonatomic) NSSet *blockades;

- (void)addBlockadeWithIdentifier:(NSString *)arg1;
- (void)removeBlockadeWithIdentifier:(NSString *)arg1;
@end


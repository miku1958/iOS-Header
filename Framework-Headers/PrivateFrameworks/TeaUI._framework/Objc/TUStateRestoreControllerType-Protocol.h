//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TUStateRestoreControllerType

@property (nonatomic, readonly) BOOL hasStateDiscarded;
@property (nonatomic, readonly) BOOL isStateRestorationAllowed;

- (void)markStateDiscarded;
- (void)sceneDidEnterBackground;
@end

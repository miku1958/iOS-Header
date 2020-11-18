//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSArray, NSError, NSNumber, NSSet, NSString, NTKGreenfieldAddWatchFaceManager;

@protocol NTKGreenfieldAddWatchFaceManagerDelegate <NSObject>
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 didFinishAddingFaceWithError:(NSError *)arg2;
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 updateStateToAddComplicationWithItemId:(NSNumber *)arg2 installMode:(long long)arg3 skippedComplicationSlots:(NSArray *)arg4;
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 updateStateToCompletedWithSkippedComplicationSlots:(NSArray *)arg2 canRevisit:(BOOL)arg3;
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 updateStateToComplicationsNotAvailableWithSlots:(NSSet *)arg2 unavailableTitle:(NSString *)arg3 unavailableDescription:(NSString *)arg4;
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 updateStateToRevisitComplicationWithItemId:(NSNumber *)arg2 installMode:(long long)arg3 skippedComplicationSlots:(NSArray *)arg4;
- (void)addWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg2;
- (void)didStartLoadingInAddWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1;
@end

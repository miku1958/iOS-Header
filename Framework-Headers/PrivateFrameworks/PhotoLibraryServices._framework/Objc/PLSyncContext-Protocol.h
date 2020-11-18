//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol NSFastEnumeration, PLSyncableDetectedFace, PLSyncablePerson;

@protocol PLSyncContext <NSObject>

@property (copy, nonatomic) NSArray *personUUIDsToDedupe;
@property (readonly, nonatomic) BOOL serverSupportsGraphHome;
@property (readonly, nonatomic) BOOL serverSupportsSuggestion;
@property (readonly, nonatomic) BOOL serverSupportsVision;

- (NSDictionary *)assetAdjustmentStateForCloudIdentifier:(NSString *)arg1;
- (void)deleteFaces:(id<NSFastEnumeration>)arg1;
- (id<PLSyncableDetectedFace>)makeFace;
- (id<PLSyncablePerson>)personForUUID:(NSString *)arg1;
- (BOOL)personUUIDIsDeleted:(NSString *)arg1;
@end


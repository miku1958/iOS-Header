//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSSet;
@protocol PLSyncablePerson;

@protocol PLSyncableDetectedFace <NSObject>

@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL nameSourceAuto;
@property (strong, nonatomic) id<PLSyncablePerson> person;
@property (strong, nonatomic) id<PLSyncablePerson> personBeingKeyFace;
@property (strong, nonatomic) NSSet *rejectedPeople;
@property (nonatomic) double size;
@property (nonatomic) int sourceHeight;
@property (nonatomic) int sourceWidth;

@end


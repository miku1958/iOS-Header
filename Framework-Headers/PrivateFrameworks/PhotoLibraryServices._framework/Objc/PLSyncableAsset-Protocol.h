//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSSet;

@protocol PLSyncableAsset <NSObject>

@property (readonly, copy, nonatomic) NSDate *dateForComparingAdjustmentVersions;
@property (strong, nonatomic) NSSet *detectedFaces;
@property (readonly, nonatomic) short height;
@property (readonly, nonatomic) short width;

@end


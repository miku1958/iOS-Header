//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CPLRecordChange;

@protocol PLSyncableObject <NSObject>

@property (nonatomic) short cloudLocalState;
@property (readonly, strong, nonatomic) id localID;

- (CPLRecordChange *)cplFullRecord;
@end

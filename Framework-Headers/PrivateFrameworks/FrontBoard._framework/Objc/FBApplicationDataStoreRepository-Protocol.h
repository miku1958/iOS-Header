//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBApplicationDataStoreRepositoryReading-Protocol.h>
#import <FrontBoard/FBApplicationDataStoreRepositoryWriting-Protocol.h>

@protocol FBApplicationDataStoreRepositoryDelegate;

@protocol FBApplicationDataStoreRepository <FBApplicationDataStoreRepositoryReading, FBApplicationDataStoreRepositoryWriting>

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;

@end

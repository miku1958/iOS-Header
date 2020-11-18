//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPCloudContainer, MSPCloudContainerChangeSet;

@protocol MSPCloudContainerObserver <NSObject>
- (void)cloudContainerDidChange:(MSPCloudContainer *)arg1;

@optional
- (void)cloudContainer:(MSPCloudContainer *)arg1 didFetchChanges:(MSPCloudContainerChangeSet *)arg2;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSString, PGManager;
@protocol PGGraphUpdateInventory;

@protocol PGGraphDataModelEnrichmentProcessor <NSObject>
+ (NSString *)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (BOOL)supportsBackgroundJob;
- (void)enrichDataModelWithManager:(PGManager *)arg1 graphUpdateInventory:(id<PGGraphUpdateInventory>)arg2 progressBlock:(void (^)(double, BOOL *))arg3;
@end


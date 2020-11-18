//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLSInvestigation, NSDictionary, NSIndexSet, NSSet;

@protocol CLSInvestigationInterviewDelegate <NSObject>

@optional
- (NSDictionary *)itemMetadataInInvestigation:(CLSInvestigation *)arg1 withKeys:(NSSet *)arg2 atIndex:(unsigned long long)arg3;
- (struct CGImage *)itemThumbnailInInvestigation:(CLSInvestigation *)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (unsigned long long)numberOfItemsInInvestigation:(CLSInvestigation *)arg1;
- (NSIndexSet *)sampleOfItemsInInvestigation:(CLSInvestigation *)arg1;
@end

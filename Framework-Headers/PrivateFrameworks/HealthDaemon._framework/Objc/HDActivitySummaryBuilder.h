//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface HDActivitySummaryBuilder : NSObject
{
    HDProfile *_profile;
    BOOL _shouldIncludePrivateProperties;
}

@property (nonatomic) BOOL shouldIncludePrivateProperties; // @synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties;

- (void).cxx_destruct;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNUIDataCollectorSGLogger : NSObject
{
    CDUnknownBlockType _serviceProvider;
    id<CNScheduler> _workQueue;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property (strong, nonatomic) id<CNScheduler> workQueue; // @synthesize workQueue=_workQueue;

+ (id)loggerWithSGSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
- (void).cxx_destruct;
- (id)initWithSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
- (void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1;
- (void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)performBlockWithService:(CDUnknownBlockType)arg1;

@end


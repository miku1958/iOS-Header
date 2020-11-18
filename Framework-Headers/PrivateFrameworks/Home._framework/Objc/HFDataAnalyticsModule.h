//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFDataAnalyticsLogItemProvider;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsModule : HFItemModule
{
    id<HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsLogItemProvider *_logItemProvider;
}

@property (readonly, nonatomic) HFDataAnalyticsLogItemProvider *logItemProvider; // @synthesize logItemProvider=_logItemProvider;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)itemProviders;

@end


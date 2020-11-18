//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKComplicationClient-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSXPCConnection;
@protocol CLKComplicationDataSource;

@interface CLKComplicationServer : NSObject <CLKComplicationClient>
{
    NSString *_clientIdentifier;
    Class _dataSourceClass;
    NSXPCConnection *_serverConnection;
    id<CLKComplicationDataSource> _dataSource;
    NSSet *_activeComplications;
    struct {
        BOOL supportsGetTimeTravelDirections;
        BOOL supportsGetTimelineStartDate;
        BOOL supportsGetTimelineEndDate;
        BOOL supportsGetPrivacyBehavior;
        BOOL supportsGetTimelineAnimationBehavior;
        BOOL supportsExtendAfter;
        BOOL supportsExtendBefore;
        BOOL supportsGetRequestedUpdate;
        BOOL supportsNotifyRequestedUpdate;
        BOOL supportsNotifyBudgetExhausted;
        BOOL supportsGetPlaceholderTemplate;
        BOOL supportsGetLocalizableDescriptionProvider;
        BOOL supportsGetLocalizableSampleTemplate;
    } _dataSourceFlags;
}

@property (readonly, nonatomic) NSArray *activeComplications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *earliestTimeTravelDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *latestTimeTravelDate;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_checkinWithServer;
- (void)_createConnection;
- (void)_createDataSourceIfNecessary;
- (id)_init;
- (void)extendTimelineForComplication:(id)arg1;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getNextRequestedUpdateDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getTimelineStartDateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (void)reloadTimelineForComplication:(id)arg1;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)setActiveComplications:(id)arg1;

@end

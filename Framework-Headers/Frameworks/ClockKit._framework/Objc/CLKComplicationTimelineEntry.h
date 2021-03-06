//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKTimelineEntry-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry>
{
    BOOL _finalized;
    NSDate *_date;
    CLKComplicationTemplate *_complicationTemplate;
    NSString *_timelineAnimationGroup;
}

@property (copy, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finalized; // @synthesize finalized=_finalized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timelineAnimationGroup; // @synthesize timelineAnimationGroup=_timelineAnimationGroup;
@property (strong, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;

+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (id)initWithCoder:(id)arg1;
- (BOOL)tl_validate:(id *)arg1;
- (BOOL)validateComplicationFamily:(long long)arg1;
- (BOOL)validateWithError:(id *)arg1;

@end


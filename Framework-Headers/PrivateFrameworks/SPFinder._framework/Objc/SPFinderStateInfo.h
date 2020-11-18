//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSSet;

@interface SPFinderStateInfo : NSObject <NSSecureCoding>
{
    BOOL _state;
    BOOL _optInScreenOffScan;
    NSDate *_lastUpdated;
    NSDate *_lastPublishDate;
    NSDate *_lastScheduledPublishActivityDate;
    long long _activeCache;
    NSArray *_disabledReasonsArray;
}

@property (nonatomic) long long activeCache; // @synthesize activeCache=_activeCache;
@property (readonly, copy, nonatomic) NSSet *disabledReasons;
@property (strong, nonatomic) NSArray *disabledReasonsArray; // @synthesize disabledReasonsArray=_disabledReasonsArray;
@property (copy, nonatomic) NSDate *lastPublishDate; // @synthesize lastPublishDate=_lastPublishDate;
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate; // @synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate;
@property (copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property (nonatomic) BOOL optInScreenOffScan; // @synthesize optInScreenOffScan=_optInScreenOffScan;
@property (nonatomic) BOOL state; // @synthesize state=_state;

+ (BOOL)canPublishAnonymously;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(BOOL)arg1 optInScreenOffScan:(BOOL)arg2 lastUpdated:(id)arg3 lastPublishDate:(id)arg4 lastScheduledPublishActivityDate:(id)arg5 activeCache:(long long)arg6 disabledReasons:(id)arg7;

@end

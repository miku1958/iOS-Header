//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSString *_searchString;
    BOOL _allNLEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 allNLEvents:(BOOL)arg2;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;

@end


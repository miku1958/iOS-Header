//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    NSString *_opaqueKey;
    NSString *_extractionGroupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *extractionGroupIdentifier; // @synthesize extractionGroupIdentifier=_extractionGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
@property (readonly) Class superclass;

+ (id)predicateForAllSuggestedEvents;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtractionGroupIdentifier:(id)arg1;
- (id)initWithOpaqueKey:(id)arg1;
- (id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;

@end


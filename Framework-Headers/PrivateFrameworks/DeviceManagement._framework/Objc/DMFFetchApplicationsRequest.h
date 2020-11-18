//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface DMFFetchApplicationsRequest : CATTaskRequest
{
    BOOL _excludeIcon;
    BOOL _excludeUnmanagedApps;
    BOOL _deleteFeedback;
    unsigned long long _typeFilter;
    unsigned long long _stateFilter;
    NSArray *_bundleIdentifiers;
}

@property (copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property (nonatomic) BOOL deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property (nonatomic) BOOL excludeIcon; // @synthesize excludeIcon=_excludeIcon;
@property (nonatomic) BOOL excludeUnmanagedApps; // @synthesize excludeUnmanagedApps=_excludeUnmanagedApps;
@property (nonatomic) unsigned long long stateFilter; // @synthesize stateFilter=_stateFilter;
@property (nonatomic) unsigned long long typeFilter; // @synthesize typeFilter=_typeFilter;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end


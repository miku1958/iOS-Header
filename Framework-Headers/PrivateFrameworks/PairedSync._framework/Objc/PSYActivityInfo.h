//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface PSYActivityInfo : NSObject <NSSecureCoding>
{
    NSString *_label;
    NSString *_machServiceName;
    NSArray *_dependencies;
    NSString *_priority;
    NSNumber *_timeoutSeconds;
    NSArray *_sessionTypes;
    NSString *_backboardPrelaunchBundleIdentifier;
}

@property (copy, nonatomic) NSString *backboardPrelaunchBundleIdentifier; // @synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier;
@property (copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property (copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property (copy, nonatomic) NSArray *sessionTypes; // @synthesize sessionTypes=_sessionTypes;
@property (copy, nonatomic) NSNumber *timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;

+ (id)activityWithPlist:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


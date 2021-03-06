//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXHomeScreenEventMetadata, NSArray, NSDate, NSString;

@interface ATXHomeScreenEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper>
{
    double _absoluteDate;
    NSString *_eventTypeString;
    NSString *_reason;
    NSString *_blendingCacheId;
    NSString *_stackId;
    NSString *_widgetBundleId;
    NSString *_widgetKind;
    NSString *_appBundleId;
    unsigned long long _widgetSize;
    unsigned long long _stackKind;
    unsigned long long _stackLocation;
    NSString *_intentDescription;
    NSString *_widgetUniqueId;
    NSArray *_suggestionIds;
    ATXHomeScreenEventMetadata *_metadata;
}

@property (strong, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (strong, nonatomic) NSString *blendingCacheId; // @synthesize blendingCacheId=_blendingCacheId;
@property (strong, nonatomic) NSDate *date;
@property (strong, nonatomic) NSString *eventTypeString; // @synthesize eventTypeString=_eventTypeString;
@property (strong, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property (strong, nonatomic) ATXHomeScreenEventMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (strong, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
@property (nonatomic) unsigned long long stackKind; // @synthesize stackKind=_stackKind;
@property (nonatomic) unsigned long long stackLocation; // @synthesize stackLocation=_stackLocation;
@property (strong, nonatomic) NSArray *suggestionIds; // @synthesize suggestionIds=_suggestionIds;
@property (strong, nonatomic) NSString *widgetBundleId; // @synthesize widgetBundleId=_widgetBundleId;
@property (strong, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;
@property (nonatomic) unsigned long long widgetSize; // @synthesize widgetSize=_widgetSize;
@property (strong, nonatomic) NSString *widgetUniqueId; // @synthesize widgetUniqueId=_widgetUniqueId;

+ (id)eventForPageShownWithIndex:(unsigned long long)arg1 widgetsByStack:(id)arg2 blendingCacheIdentifier:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToATXHomeScreenEvent:(id)arg1;
- (id)proto;

@end


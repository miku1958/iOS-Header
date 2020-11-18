//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class ATXInfoSuggestion, ATXProactiveSuggestionClientModelSpecification, ATXProactiveSuggestionExecutableSpecification, ATXProactiveSuggestionScoreSpecification, ATXProactiveSuggestionUISpecification, INIntent, NSDate, NSDictionary, NSString, NSUUID;

@interface ATXProactiveSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>
{
    unsigned long long _hash;
    NSUUID *_uuid;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpecification;
    ATXProactiveSuggestionExecutableSpecification *_executableSpecification;
    ATXProactiveSuggestionUISpecification *_uiSpecification;
    ATXProactiveSuggestionScoreSpecification *_scoreSpecification;
    ATXInfoSuggestion *_infoSuggestion;
}

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) unsigned long long applicableLayouts;
@property (readonly, nonatomic) ATXProactiveSuggestionClientModelSpecification *clientModelSpecification; // @synthesize clientModelSpecification=_clientModelSpecification;
@property (readonly, nonatomic) NSString *criterion;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) ATXProactiveSuggestionExecutableSpecification *executableSpecification; // @synthesize executableSpecification=_executableSpecification;
@property (strong, nonatomic) ATXInfoSuggestion *infoSuggestion; // @synthesize infoSuggestion=_infoSuggestion;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) ATXProactiveSuggestionScoreSpecification *scoreSpecification; // @synthesize scoreSpecification=_scoreSpecification;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) ATXProactiveSuggestionUISpecification *uiSpecification; // @synthesize uiSpecification=_uiSpecification;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, nonatomic) NSString *widgetBundleIdentifier;

+ (id)protoSuggestionsFromSuggestions:(id)arg1;
+ (id)suggestionsFromProtoSuggestions:(id)arg1;
+ (BOOL)suggestionsHaveChangedFromPreviousSuggestions:(id)arg1 newSuggestions:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)fuzzyIsEqualToProactiveSuggestion:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4;
- (id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4 uuid:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidForSuggestionsWidget;
- (id)jsonRawData;
- (id)proto;

@end

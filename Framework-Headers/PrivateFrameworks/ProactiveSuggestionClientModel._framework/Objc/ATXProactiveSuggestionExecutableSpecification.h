//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol ATXSuggestionExecutableProtocol;

@interface ATXProactiveSuggestionExecutableSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>
{
    id<ATXSuggestionExecutableProtocol> _executableObject;
    NSData *_executable;
    unsigned long long _executableObjectHash;
    NSString *_executableClassString;
    NSString *_executableDescription;
    NSString *_executableIdentifier;
    long long _executableType;
}

@property (readonly, nonatomic) NSData *executable; // @synthesize executable=_executable;
@property (readonly, nonatomic) NSString *executableClassString; // @synthesize executableClassString=_executableClassString;
@property (readonly, nonatomic) NSString *executableDescription; // @synthesize executableDescription=_executableDescription;
@property (readonly, nonatomic) NSString *executableIdentifier; // @synthesize executableIdentifier=_executableIdentifier;
@property (readonly, nonatomic) id<ATXSuggestionExecutableProtocol> executableObject;
@property (readonly, nonatomic) unsigned long long executableObjectHash; // @synthesize executableObjectHash=_executableObjectHash;
@property (readonly, nonatomic) long long executableType; // @synthesize executableType=_executableType;

+ (id)stringForExecutableType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allowedExecutableClasses;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSUInteger:(unsigned long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)executableDataFromExecutableObject:(id)arg1 executableClassStringFromObject:(id)arg2;
- (id)executableObjectFromData:(id)arg1 executableClassString:(id)arg2;
- (BOOL)fuzzyIsEqualToExecutableSpecification:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutable:(id)arg1 executableObjectHash:(unsigned long long)arg2 expectedExecutableClassString:(id)arg3 executableDescription:(id)arg4 executableIdentifier:(id)arg5 suggestionExecutableType:(long long)arg6;
- (id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4;
- (id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4 suggestionExecutableType:(long long)arg5;
- (id)initWithExecutableObject:(id)arg1 executableDescription:(id)arg2 executableIdentifier:(id)arg3 suggestionExecutableType:(long long)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRawData;
- (id)proto;

@end

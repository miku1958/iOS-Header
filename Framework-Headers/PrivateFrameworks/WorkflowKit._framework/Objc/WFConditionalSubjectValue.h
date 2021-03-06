//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding>
{
    BOOL _caseInsensitive;
    WFContentCollection *_content;
    long long _contentType;
    unsigned long long _comparableTimeUnits;
}

@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits; // @synthesize comparableTimeUnits=_comparableTimeUnits;
@property (readonly, nonatomic) WFContentCollection *content; // @synthesize content=_content;
@property (readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(BOOL)arg3 comparableTimeUnits:(unsigned long long)arg4;

@end


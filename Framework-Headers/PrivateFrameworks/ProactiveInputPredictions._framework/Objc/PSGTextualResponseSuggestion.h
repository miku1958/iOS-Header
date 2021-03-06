//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveInputPredictions/NSCopying-Protocol.h>
#import <ProactiveInputPredictions/NSSecureCoding-Protocol.h>

@class NSString;

@interface PSGTextualResponseSuggestion : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_responseText;
    NSString *_responseCategory;
}

@property (readonly, nonatomic) NSString *responseCategory; // @synthesize responseCategory=_responseCategory;
@property (readonly, nonatomic) NSString *responseText; // @synthesize responseText=_responseText;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 category:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTextualSuggestion:(id)arg1;

@end


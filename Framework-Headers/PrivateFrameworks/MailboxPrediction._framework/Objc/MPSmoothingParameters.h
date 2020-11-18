//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPMessageModeling-Protocol.h>
#import <MailboxPrediction/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface MPSmoothingParameters : NSObject <MPMessageModeling, NSSecureCoding>
{
    NSDictionary *_smoothingParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *smoothingParameters; // @synthesize smoothingParameters=_smoothingParameters;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)addMessage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (unsigned long long)parameterForFeatureKey:(id)arg1;
- (BOOL)removeMessage:(id)arg1;
- (BOOL)updateWithFeature:(id)arg1 key:(id)arg2 adding:(BOOL)arg3;
- (BOOL)updateWithMessage:(id)arg1 byAdding:(BOOL)arg2;

@end


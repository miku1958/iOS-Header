//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse
{
    NSData *_archivedDefaultValue;
}

@property (readonly, nonatomic) NSData *archivedDefaultValue; // @synthesize archivedDefaultValue=_archivedDefaultValue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArchivedDefaultValue:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSArray, NSString;

@interface PRSRenderFeedback : PRSFeedback
{
    long long _trigger_timestamp;
    NSArray *_results;
    NSString *_fbq;
    NSString *_web_fbq;
    NSArray *_hidden;
    NSArray *_hidden_ext;
    NSArray *_sections;
}

@property (strong, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property (strong, nonatomic) NSArray *hidden; // @synthesize hidden=_hidden;
@property (strong, nonatomic) NSArray *hidden_ext; // @synthesize hidden_ext=_hidden_ext;
@property (strong, nonatomic) NSArray *results; // @synthesize results=_results;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (nonatomic) long long trigger_timestamp; // @synthesize trigger_timestamp=_trigger_timestamp;
@property (strong, nonatomic) NSString *web_fbq; // @synthesize web_fbq=_web_fbq;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)plist;
- (id)typeString;
- (void)validate;

@end


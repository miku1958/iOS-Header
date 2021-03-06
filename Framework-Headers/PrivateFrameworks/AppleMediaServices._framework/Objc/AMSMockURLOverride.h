//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class AMSMockURLResponse, AMSObservable, NSMutableArray;

@interface AMSMockURLOverride : NSObject <NSCopying>
{
    AMSObservable *_executedObservable;
    AMSMockURLResponse *_response;
    NSMutableArray *_comparators;
}

@property (strong, nonatomic) NSMutableArray *comparators; // @synthesize comparators=_comparators;
@property (strong, nonatomic) AMSObservable *executedObservable; // @synthesize executedObservable=_executedObservable;
@property (strong, nonatomic) AMSMockURLResponse *response; // @synthesize response=_response;

+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;
- (void).cxx_destruct;
- (void)_withURLMatchingHost:(id)arg1 containingPath:(id)arg2 queryItems:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)shouldOverrideURLRequest:(id)arg1;
- (void)withHTTPBodyValidation:(CDUnknownBlockType)arg1 encoding:(long long)arg2;
- (void)withResponse:(id)arg1;
- (void)withURLContainingPath:(id)arg1;
- (void)withURLMatchingHost:(id)arg1;
- (void)withURLQueryItems:(id)arg1;
- (void)withURLRegexValidation:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class AMSMockURLResponse, AMSObservable;

__attribute__((visibility("hidden")))
@interface AMSMockURLOverride : NSObject <NSCopying>
{
    AMSObservable *_executedObservable;
    AMSMockURLResponse *_response;
    id _comparator;
    long long _comparatorType;
}

@property (strong, nonatomic) id comparator; // @synthesize comparator=_comparator;
@property (nonatomic) long long comparatorType; // @synthesize comparatorType=_comparatorType;
@property (strong, nonatomic) AMSObservable *executedObservable; // @synthesize executedObservable=_executedObservable;
@property (strong, nonatomic) AMSMockURLResponse *response; // @synthesize response=_response;

+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOverride:(id)arg1;
- (BOOL)shouldOverrideURL:(id)arg1;

@end

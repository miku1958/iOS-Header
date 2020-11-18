//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RKResponseCollection;
@protocol OS_dispatch_queue;

@interface RKMessageResponseManager : NSObject
{
    RKResponseCollection *_collection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_preferredLanguages;
}

@property (strong) RKResponseCollection *collection; // @synthesize collection=_collection;
@property (strong) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)categoryForMessage:(id)arg1 langID:(id)arg2;
- (void)flushDynamicData;
- (id)init;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (void)resetRegisteredResponses;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id *)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id *)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id *)arg4 options:(unsigned long long)arg5;

@end


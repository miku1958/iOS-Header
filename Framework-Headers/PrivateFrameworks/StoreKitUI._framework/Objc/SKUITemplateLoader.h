//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRegularExpression;

@interface SKUITemplateLoader : NSObject
{
    SKUITemplateLoader *_retainSelf;
    NSArray *_URLs;
    CDUnknownBlockType _completionBlock;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_templateParsingRegularExpression;
    NSMutableArray *_errors;
    NSMutableDictionary *_templateStrings;
    long long _pendingOperationCount;
}

@property (readonly, copy, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property (readonly, nonatomic) NSRegularExpression *templateParsingRegularExpression; // @synthesize templateParsingRegularExpression=_templateParsingRegularExpression;
@property (readonly, nonatomic) NSMutableDictionary *templateStrings; // @synthesize templateStrings=_templateStrings;

- (void).cxx_destruct;
- (void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2;
- (void)_operation:(id)arg1 didFailWithError:(id)arg2;
- (void)_operationDidFinish:(id)arg1;
- (id)_operationWithURL:(id)arg1;
- (id)initWithURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)load;

@end


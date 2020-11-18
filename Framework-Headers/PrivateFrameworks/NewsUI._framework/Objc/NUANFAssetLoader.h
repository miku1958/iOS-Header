//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, NSArray, NSMutableDictionary, SXContext;

@interface NUANFAssetLoader : NSObject
{
    long long _relativePriority;
    SXContext *_context;
    FCFlintResourceManager *_flintResourceManager;
    NSArray *_resourceIDs;
    NSMutableDictionary *_fetchedResourceIDs;
    FCAsyncOnceOperation *_asyncOnceOperation;
}

@property (strong, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property (strong, nonatomic) SXContext *context; // @synthesize context=_context;
@property (strong, nonatomic) NSMutableDictionary *fetchedResourceIDs; // @synthesize fetchedResourceIDs=_fetchedResourceIDs;
@property (strong, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property (nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property (strong, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;

- (void).cxx_destruct;
- (id)asyncLoadAssertURLsOnceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadAssetURLsWithCompletion:(CDUnknownBlockType)arg1;
- (id)resourceForID:(id)arg1;
- (id)resourceIDForResourceURL:(id)arg1;

@end

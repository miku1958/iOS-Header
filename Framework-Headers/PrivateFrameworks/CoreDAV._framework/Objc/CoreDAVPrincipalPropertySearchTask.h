//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet *_searchItems;
    BOOL _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property (nonatomic) BOOL applyToPrincipalCollectionSet; // @synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet;
@property (strong, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property (strong, nonatomic) NSSet *searchItems; // @synthesize searchItems=_searchItems;

- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5;
- (id)requestBody;

@end


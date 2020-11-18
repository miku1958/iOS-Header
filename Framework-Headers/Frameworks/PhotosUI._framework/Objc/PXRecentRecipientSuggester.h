//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol OS_dispatch_queue;

@interface PXRecentRecipientSuggester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    CNContactStore *_contactStore;
    unsigned long long _maxNumberOfPeopleSuggested;
    long long _modelType;
}

@property (nonatomic) unsigned long long maxNumberOfPeopleSuggested; // @synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested;
@property (nonatomic) long long modelType; // @synthesize modelType=_modelType;

- (void).cxx_destruct;
- (id)init;
- (void)requestRecipientSuggestionsWithResultHandler:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject
{
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;
- (void).cxx_destruct;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1;
- (void)fetchOpenSearchDescriptionWithURL:(id)arg1;

@end


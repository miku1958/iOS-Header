//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCArticleSearchOperationResult, FCTagSearchOperationResult;

@interface FCSearchResult : NSObject
{
    FCTagSearchOperationResult *_tagSearchResult;
    FCArticleSearchOperationResult *_articleSearchResult;
}

@property (strong, nonatomic) FCArticleSearchOperationResult *articleSearchResult; // @synthesize articleSearchResult=_articleSearchResult;
@property (strong, nonatomic) FCTagSearchOperationResult *tagSearchResult; // @synthesize tagSearchResult=_tagSearchResult;

- (void).cxx_destruct;

@end

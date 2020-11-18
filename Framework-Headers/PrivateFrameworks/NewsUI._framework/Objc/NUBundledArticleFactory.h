//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleFactory-Protocol.h>

@class FCArticleController, NSString;

@interface NUBundledArticleFactory : NSObject <NUArticleFactory>
{
    FCArticleController *_articleController;
}

@property (readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

@end


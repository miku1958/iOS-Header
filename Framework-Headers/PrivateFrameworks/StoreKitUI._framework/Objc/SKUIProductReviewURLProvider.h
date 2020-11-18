//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SSURLBag;

@interface SKUIProductReviewURLProvider : NSObject
{
    NSURL *_rateURL;
    NSURL *_writeReviewURL;
    NSString *_itemID;
    SSURLBag *_urlBag;
}

@property (copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property (strong, nonatomic) NSURL *rateURL; // @synthesize rateURL=_rateURL;
@property (strong, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;
@property (strong, nonatomic) NSURL *writeReviewURL; // @synthesize writeReviewURL=_writeReviewURL;

- (void).cxx_destruct;
- (id)_urlByAppendingItemId:(id)arg1;
- (void)fetchURLsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1 itemID:(id)arg2;

@end

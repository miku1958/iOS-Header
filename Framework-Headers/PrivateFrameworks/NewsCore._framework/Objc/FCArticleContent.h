//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCANFContent, FCWebContent, NSString;

@interface FCArticleContent : NSObject
{
    NSString *_articleID;
    unsigned long long _contentType;
    FCWebContent *_webContent;
    FCANFContent *_anfContent;
}

@property (strong, nonatomic) FCANFContent *anfContent; // @synthesize anfContent=_anfContent;
@property (copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property (nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property (strong, nonatomic) FCWebContent *webContent; // @synthesize webContent=_webContent;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1 anfContent:(id)arg2;
- (id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2;
- (id)initWithArticleID:(id)arg1 webContent:(id)arg2;
- (id)initWithContext:(id)arg1 articleRecord:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying>
{
    NSNumber *_searchHintIndex;
    NSString *_searchHintOriginalTerm;
    NSString *_term;
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (copy, nonatomic) NSNumber *searchHintIndex; // @synthesize searchHintIndex=_searchHintIndex;
@property (copy, nonatomic) NSString *searchHintOriginalTerm; // @synthesize searchHintOriginalTerm=_searchHintOriginalTerm;
@property (copy, nonatomic) NSString *term; // @synthesize term=_term;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


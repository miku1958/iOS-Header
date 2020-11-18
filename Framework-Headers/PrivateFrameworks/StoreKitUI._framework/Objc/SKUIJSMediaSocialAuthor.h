//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIJSMediaSocialAuthor-Protocol.h>

@class NSArray, NSDictionary, NSString, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor>
{
    SKUIMediaSocialAuthor *_mediaSocialAuthor;
}

@property (readonly, nonatomic) NSString *dsId;
@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSString *entityType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *permissions;
@property (readonly, nonatomic) NSDictionary *storePlatformData;

- (void).cxx_destruct;
- (id)initWithSKUIMediaSocialAuthor:(id)arg1;

@end


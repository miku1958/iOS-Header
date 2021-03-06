//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying>
{
    NSNumber *_itemIdentifier;
    NSString *_podcastFeedURLIdentifier;
    NSString *_bundleIdentifier;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong, nonatomic) NSString *podcastFeedURLIdentifier; // @synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithPodcastFeedURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)longLongValue;
- (id)numberValue;
- (id)stringValue;

@end


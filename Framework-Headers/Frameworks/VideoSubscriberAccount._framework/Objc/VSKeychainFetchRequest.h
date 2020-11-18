//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSPredicate, VSKeychainItemKind;

@interface VSKeychainFetchRequest : NSObject <NSCopying>
{
    BOOL _includesDataValues;
    VSKeychainItemKind *_itemKind;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchLimit;
}

@property (nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (nonatomic) BOOL includesDataValues; // @synthesize includesDataValues=_includesDataValues;
@property (copy, nonatomic) VSKeychainItemKind *itemKind; // @synthesize itemKind=_itemKind;
@property (copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

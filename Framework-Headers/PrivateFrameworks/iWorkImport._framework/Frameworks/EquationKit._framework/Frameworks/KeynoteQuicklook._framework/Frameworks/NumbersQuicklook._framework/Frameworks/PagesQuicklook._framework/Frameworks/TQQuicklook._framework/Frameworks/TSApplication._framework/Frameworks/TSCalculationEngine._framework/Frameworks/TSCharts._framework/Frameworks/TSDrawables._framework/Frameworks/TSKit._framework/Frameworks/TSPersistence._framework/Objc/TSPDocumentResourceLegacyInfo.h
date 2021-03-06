//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/NSCopying-Protocol.h>

@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying>
{
    NSString *_digestString;
    NSString *_locator;
}

@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg1;

@end


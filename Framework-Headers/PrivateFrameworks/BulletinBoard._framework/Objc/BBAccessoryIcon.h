//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_imagesForContentSize;
}

@property (copy, nonatomic) NSDictionary *imagesForContentSize; // @synthesize imagesForContentSize=_imagesForContentSize;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageForContentSizeCategory:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


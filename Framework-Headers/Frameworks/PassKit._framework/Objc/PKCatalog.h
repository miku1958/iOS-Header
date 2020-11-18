//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableArray;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_groups;
    NSDate *_timestamp;
}

@property (strong, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allGroupIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalentToCatalog:(id)arg1;
- (BOOL)isNewerThanCatalog:(id)arg1;
- (void)shuffle:(int)arg1;
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(BOOL)arg3;

@end


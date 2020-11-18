//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUbiquitous;
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

@property (strong, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property (nonatomic) BOOL isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property (strong, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToGroup:(id)arg1;

@end


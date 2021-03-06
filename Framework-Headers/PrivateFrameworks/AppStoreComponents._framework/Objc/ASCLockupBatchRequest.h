//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_ids;
    NSString *_kind;
    NSString *_context;
}

@property (readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property (readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
@property (readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (readonly, copy, nonatomic) NSArray *requests;

+ (id)lockupBatchRequestsFromRequests:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)lockupBatchRequestWithIDs:(id)arg1;

@end


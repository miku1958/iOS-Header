//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface LKClassGroup : NSObject <NSSecureCoding>
{
    NSString *_classGroupName;
    NSArray *_classes;
}

@property (readonly, copy, nonatomic) NSString *classGroupName; // @synthesize classGroupName=_classGroupName;
@property (readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1 classes:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLKClassGroup:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    SEL _action;
    id _propertyList;
}

@property (readonly, nonatomic) SEL action; // @synthesize action=_action;
@property (readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;

+ (id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(SEL)arg1 propertyList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFCallSiteInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_imagePath;
    NSString *_symbolName;
}

@property (readonly, copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property (readonly, copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImagePath:(id)arg1 symbolName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSURL;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_completeResources;
    NSArray *_incompleteResources;
    NSArray *_unresolvableReferences;
    NSURL *_nextSearchResultURL;
    NSNumber *_rulesVersion;
}

@property (readonly, copy, nonatomic) NSArray *completeResources; // @synthesize completeResources=_completeResources;
@property (readonly, copy, nonatomic) NSArray *incompleteResources; // @synthesize incompleteResources=_incompleteResources;
@property (readonly, copy, nonatomic) NSURL *nextSearchResultURL; // @synthesize nextSearchResultURL=_nextSearchResultURL;
@property (readonly, copy, nonatomic) NSNumber *rulesVersion; // @synthesize rulesVersion=_rulesVersion;
@property (readonly, copy, nonatomic) NSArray *unresolvableReferences; // @synthesize unresolvableReferences=_unresolvableReferences;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4 rulesVersion:(id)arg5;

@end

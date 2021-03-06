//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSCopying-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_handle;
    NSString *_appBundleId;
    NSNumber *_interactionMechanism;
}

@property (copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (copy, nonatomic) NSNumber *interactionMechanism; // @synthesize interactionMechanism=_interactionMechanism;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSSecurityScopedURLWrapper, NSURL;
@protocol NSSecureCoding;

@interface WFFileStorageServiceResult : NSObject <NSSecureCoding>
{
    NSSecurityScopedURLWrapper *_wrappedURL;
    id<NSSecureCoding> _metadataObject;
    NSURL *_lifecycleManagedURL;
}

@property (readonly, nonatomic) NSURL *lifecycleManagedURL; // @synthesize lifecycleManagedURL=_lifecycleManagedURL;
@property (readonly, nonatomic) id<NSSecureCoding> metadataObject; // @synthesize metadataObject=_metadataObject;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *wrappedURL; // @synthesize wrappedURL=_wrappedURL;

+ (void)getResultWithFileURL:(id)arg1 consumingBundleID:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (id)possibleMetadataClasses;
+ (id)resultWithMetadata:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 metadataObject:(id)arg2;
- (id)initWithWrappedURL:(id)arg1 metadataObject:(id)arg2;

@end

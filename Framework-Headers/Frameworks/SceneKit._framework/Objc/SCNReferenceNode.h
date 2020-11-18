//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNNode.h>

@class NSURL;

@interface SCNReferenceNode : SCNNode
{
    NSURL *_referenceURL;
    NSURL *_catalogURL;
    BOOL _loaded;
    long long _loadingPolicy;
}

@property (readonly, getter=isLoaded) BOOL loaded;
@property (nonatomic) long long loadingPolicy; // @synthesize loadingPolicy=_loadingPolicy;
@property (copy, nonatomic) NSURL *referenceURL;

+ (id)referenceNodeWithURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_catalog;
- (BOOL)_isAReference;
- (void)_loadWithCatalog:(id)arg1;
- (id)_resolveURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)load;
- (void)unload;

@end

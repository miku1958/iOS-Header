//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString, XBSnapshotContainerIdentity;

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    NSString *_identifier;
    XBSnapshotContainerIdentity *_containerIdentity;
    NSMutableSet *_snapshots;
}

@property (copy) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property (readonly, copy, nonatomic) NSString *containerPath; // @dynamic containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSSet *snapshots; // @synthesize snapshots=_snapshots;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2;
- (void)_invalidate;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (BOOL)_validateWithContainerIdentity:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)removeSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end


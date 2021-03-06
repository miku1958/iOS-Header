//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPProviderDomain.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSArray, NSFileProviderDomain, NSString, NSURL;

@interface FPProvider : FPProviderDomain <NSSecureCoding>
{
    NSArray *_supportedSortDescriptors;
    long long _type;
}

@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSFileProviderDomain *domain; // @dynamic domain;
@property (readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSURL *storageURL;
@property (readonly, nonatomic) NSArray *supportedSortDescriptors; // @synthesize supportedSortDescriptors=_supportedSortDescriptors;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (void)fetchProviderForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedTitleForSortDescriptor:(id)arg1;

@end


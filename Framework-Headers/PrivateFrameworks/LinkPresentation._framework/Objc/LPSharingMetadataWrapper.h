//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>
{
    BOOL _hasFetchedSubresources;
    BOOL _hasCompletedFetch;
    LPLinkMetadata *_metadata;
}

@property (nonatomic) BOOL hasCompletedFetch; // @synthesize hasCompletedFetch=_hasCompletedFetch;
@property (nonatomic) BOOL hasFetchedSubresources; // @synthesize hasFetchedSubresources=_hasFetchedSubresources;
@property (strong, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


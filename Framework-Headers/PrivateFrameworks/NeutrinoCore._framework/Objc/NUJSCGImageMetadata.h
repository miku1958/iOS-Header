//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSCGImageMetadataExport-Protocol.h>

@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>
{
}

@property (readonly) const struct CGImageMetadata *metadata;

- (id)initWithCGImageMetadata:(struct CGImageMetadata *)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)nu_unwrapJSValue;

@end

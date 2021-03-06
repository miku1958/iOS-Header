//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MFLeaseControlling-Protocol.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;

@interface MPCLeaseController : NSObject <MFLeaseControlling>
{
    MPCMediaFoundationTranslator *_translator;
    _MPCLeaseManager *_leaseManager;
}

@property (readonly, nonatomic) _MPCLeaseManager *leaseManager; // @synthesize leaseManager=_leaseManager;
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;

- (void).cxx_destruct;
- (id)initWithTranslator:(id)arg1 leaseManager:(id)arg2;
- (void)relinquishLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


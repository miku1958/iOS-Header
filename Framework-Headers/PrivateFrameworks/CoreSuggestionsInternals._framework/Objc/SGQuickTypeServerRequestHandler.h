//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PREQuickTypeProtocol-Protocol.h>

@class NSString, SGContactSharingML, _PASBundleIdResolver;
@protocol PREQuickTypeProtocol;

@interface SGQuickTypeServerRequestHandler : NSObject <PREQuickTypeProtocol>
{
    id<PREQuickTypeProtocol> _clientProxy;
    SGContactSharingML *_ml;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (strong, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property (copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;

- (void).cxx_destruct;
- (id)init;
- (void)proactiveTriggersForContext:(id)arg1 maximumTriggers:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setRemoteObjectProxy:(id)arg1;

@end

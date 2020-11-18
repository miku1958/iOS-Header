//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightReceiver/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SpotlightReceiverSetupInfo : NSObject <NSSecureCoding>
{
    BOOL _wantsIndexUpdates;
    BOOL _wantsUAs;
    BOOL _wantsInteractions;
    NSArray *_bundleIDs;
    NSArray *_contentTypes;
    NSArray *_INIntentClassNames;
}

@property (strong, nonatomic) NSArray *INIntentClassNames; // @synthesize INIntentClassNames=_INIntentClassNames;
@property (strong, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property (strong, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property (nonatomic) BOOL wantsIndexUpdates; // @synthesize wantsIndexUpdates=_wantsIndexUpdates;
@property (nonatomic) BOOL wantsInteractions; // @synthesize wantsInteractions=_wantsInteractions;
@property (nonatomic) BOOL wantsUAs; // @synthesize wantsUAs=_wantsUAs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

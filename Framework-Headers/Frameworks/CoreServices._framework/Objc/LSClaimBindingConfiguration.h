//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LSClaimBindingConfiguration : NSObject
{
    BOOL _addClaimRecordIfMissing;
    NSString *_typeIdentifier;
    unsigned long long _bundleClassMask;
}

@property BOOL addClaimRecordIfMissing; // @synthesize addClaimRecordIfMissing=_addClaimRecordIfMissing;
@property unsigned long long bundleClassMask; // @synthesize bundleClassMask=_bundleClassMask;
@property (readonly) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;

- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMAccessoryDiagnosticsMetadata, NSString, NSURL;

@interface HFAccessoryDiagnosticItem : HFItem
{
    HMAccessoryDiagnosticsMetadata *_metadata;
    NSString *_filename;
    NSString *_manufacturer;
}

@property (readonly, nonatomic) long long consentVersion;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, nonatomic) HMAccessoryDiagnosticsMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithLogMetadata:(id)arg1 accessory:(id)arg2;
- (BOOL)isEligibleForUpload;
- (long long)uploadType;

@end


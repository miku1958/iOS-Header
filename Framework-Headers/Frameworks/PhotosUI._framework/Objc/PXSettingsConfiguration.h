//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, PXSettings;

@interface PXSettingsConfiguration : NSObject <NSSecureCoding>
{
    NSString *_name;
    PXSettings *_settings;
    NSDictionary *_archive;
}

@property (readonly, nonatomic) NSDictionary *archive; // @synthesize archive=_archive;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) PXSettings *settings; // @synthesize settings=_settings;

+ (id)configurationsFromSharableString:(id)arg1;
+ (id)sharableStringForConfigurations:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithName:(id)arg1;
- (id)copyWithUpdatedSettingsValues;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 settings:(id)arg2;
- (id)initWithName:(id)arg1 settings:(id)arg2 archive:(id)arg3;

@end

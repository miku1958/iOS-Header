//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption
{
    BOOL _usesDefaultPhoto;
}

@property (nonatomic) BOOL usesDefaultPhoto; // @synthesize usesDefaultPhoto=_usesDefaultPhoto;

+ (id)optionUsingDefaultPhoto:(BOOL)arg1 forDevice:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidOption;

@end


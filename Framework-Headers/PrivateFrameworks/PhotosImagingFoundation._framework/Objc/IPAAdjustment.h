//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject <NSCopying>
{
    NSString *_identifier;
    IPAAdjustmentVersion *_version;
    NSDictionary *_settings;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) IPAAdjustmentVersion *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAdjustment:(id)arg1;

@end

